
#include <iostream>
#include <unistd.h>
#include <cmath>

#include "bsv_scemi.h"
#include "SceMiHeaders.h"
#include "ResetXactor.h"

typedef BitT<24> word;

FILE* outfile = NULL;
FlagType flag;

bool indone = false;
long int putcount = 0;
long int gotcount = 0;


void out_cb(void* x, const Block_Flag& res)
{
    if (gotcount < putcount) {
        Block_Flag block = res.get();

        fprintf(outfile,"%lx %lx \n",block.m_block.m_tpl_1,block.m_block.m_tpl_2);
        gotcount++;
    } else if (indone && outfile) {
        word end = 0x0;
        fprintf(outfile,"%lx %lx \n",end,end);
        fclose(outfile);
        outfile = NULL;
    }
}

void runtest(InportProxyT<BlockType >& inport, FILE* infile)
{
    word in1, in2;
    while (outfile) {
        if (!indone) {
            fscanf(infile,"%lx %lx",&in1, &in2);

            if (in1 == 0 && in2 == 0) { // we will use 0's to indicate end of plaintexts/ciphertexts
                indone = true;
                fclose(infile);
                infile = NULL;
            } else {
                Block_Flag bf;
                // again, no idea here
                bf.m_block.m_tpl1 = in1;
                bf.m_block.m_tpl2 = in2;
                bc.m_flag = flag;
                putcount++;
                inport.sendMessage(bf);
            }
        }
        sleep(0);
    }
}

int main(int argc, char* argv[])
{
    int sceMiVersion = SceMi::Version( SCEMI_VERSION_STRING );
    SceMiParameters params("scemi.params");
    SceMi *sceMi = SceMi::Init(sceMiVersion, &params);

    // Initialize the SceMi inport
    InportProxyT<Block_Flag > inport ("", "scemi_processor_req_inport", sceMi);
    InportProxyT<Key_Flag> setkey ("", "scemi_setkey_inport", sceMi);

    // Initialize the SceMi outport
    OutportProxyT<Block_Flag > outport ("", "scemi_processor_resp_outport", sceMi);
    outport.setCallBack(out_cb, NULL);

    // Initialize the reset port.
    ResetXactor reset("", "scemi", sceMi);

    ShutdownXactor shutdown("", "scemi_shutdown", sceMi);

    // Service SceMi requests
    SceMiServiceThread *scemi_service_thread = new SceMiServiceThread (sceMi);

    // Reset the dut.
    reset.reset();

    /********************************* DECRYPT *****************************************/
    flag = FlagType(e_Encrypt);
    word[4] key = {0x020100, 0x0a0908, 0x121110, 0x1a1918};
    for (int i=0; i<4; i++){
        kf.m_key[i]=key[i];
    }
    kf.m_flag = flag;
    setkey.sendMessage(0); //TODO set key 0x020100, 0x0a0908, 0x121110, 0x1a1918
    FILE* infile = fopen("pt_in.txt", "rb");
    if (infile == NULL) {
        std::cerr << "couldn't open pt_in.txt" << std::endl;
        return;
    }
    outfile = fopen("ct_out.txt", "wb");
    if (outfile == NULL) {
        std::cerr << "couldn't open ct_out.txt" << std::endl;
        return;
    }
    // Send in all the data.
    runtest(inport,infile);

    /********************************* DECRYPT *****************************************/
    // reset
    indone = false;
    putcount = 0;
    gotcount = 0;
    flag = FlagType(e_Decrypt);
    Key_Flag kf;
    key = {0xcb6915, 0xc6cbb1, 0x4a5369, 0x7f5a9d};
    for (int i=0; i<4; i++){
        kf.m_key[i]=key[i];
    }
    kf.m_flag = flag;
    setkey.sendMessage(0); //TODO set decryption key 0xcb6915, 0xc6cbb1, 0x4a5369, 0x7f5a9d
    infile = fopen("ct_out.txt", "rb");
    if (infile == NULL) {
        std::cerr << "couldn't open ct_out.txt" << std::endl;
        return;
    }
    outfile = fopen("pt_out.txt", "wb");
    if (outfile == NULL) {
        std::cerr << "couldn't open pt_out.txt" << std::endl;
        return;
    }
    runtest(inport,infile);

    /********************************* FINISH *****************************************/
    std::cout << "shutting down..." << std::endl;
    shutdown.blocking_send_finish();
    scemi_service_thread->stop();
    scemi_service_thread->join();
    SceMi::Shutdown(sceMi);
    std::cout << "finished" << std::endl;

    return 0;
}
