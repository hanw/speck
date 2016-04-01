import Speck::*;
import Vector::*;
import Printf::*;

typedef 24 N;
typedef 4 M;
typedef 23 T;

typedef enum {keyset, encrypt, decrypt, check, finish} Status deriving (Bits);

module mkSpeckTest(Empty);
    EncryptDecrypt#(N,M,T) enc <- mkEncrypt();
    EncryptDecrypt#(N,M,T) dec <- mkDecrypt();

    Block#(N) plaintext = tuple2(0x6d2073, 0x696874);
    Block#(N) ciphertext = tuple2(0x735e10, 0xb6445d);
    Vector#(M, UInt#(N)) key = newVector();
    key[0] = 0x020100;
    key[1] = 0x0a0908;
    key[2] = 0x121110;
    key[3] = 0x1a1918;
    Vector#(M, UInt#(N)) dec_key = newVector();
    dec_key[0] = 0xcb6915;
    dec_key[1] = 0xc6cbb1;
    dec_key[2] = 0x4a5369;
    dec_key[3] = 0x7f5a9d;

    Reg#(Status) status <- mkReg(keyset);
    Reg#(Bool) passed <- mkReg(True);

    rule setEncKey(status==keyset);
        enc.setKey(key);
        status <= encrypt;
    endrule

    rule setDecKey(status==keyset);
        dec.setKey(dec_key);
    endrule

    rule encrypt(status==encrypt);
        enc.inputMessage(plaintext);
        status <= decrypt;
    endrule

    rule decrypt(status==decrypt);
        let ciphertext2 <- enc.getResult();
        if(ciphertext2 != ciphertext) begin
            $display("ct should be: ");
            $display("%h %h", tpl_1(ciphertext), tpl_2(ciphertext));
            #display("ct is: ");
            #display("%h %h", tpl_1(ciphertext2), tpl_2(ciphertext2));
            passed <= False;
        end
        dec.inputMessage(ciphertext2);
        status <= check;
    endrule

    rule check(status==check);
        let plaintext2 <- dec.getResult();
        if(plaintext2 != plaintext) begin
            $display("pt should be: ");
            $display("%h %h", tpl_1(plaintext), tpl_2(plaintext));
            #display("pt is: ");
            #display("%h %h", tpl_1(plaintext2), tpl_2(plaintext2));
            passed <= False;
        end
        status <= finish;
    endrule

    rule finish(status==finish);
        if(passed) begin
            $display("PASSED");
        end else begin
            $display("FAILED");
        end
        $finish();
    endrule

endmodule
