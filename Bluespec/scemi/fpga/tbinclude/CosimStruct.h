// Automatically generated by: ::SceMiMsg
// DO NOT EDIT
// C++ Class with SceMi Message passing for Bluespec type:  SceMiScan::CosimStruct
// Generated on: Tue Mar 01 04:01:32 EST 2016
// Bluespec version: 2014.07.A 2014-07-30 34078

#pragma once

#include "bsv_scemi.h"

/// C++ class representing the hardware structure SceMiScan::CosimStruct
/// This class has been automatically generated.
class CosimStruct : public BSVType {
 public:
  BitT<7> m_num ;
  BitT<4> m_scan_num ;
  BitT<2> m_delay ;

  /// A default constructor
  CosimStruct ()
    :  m_num()
    , m_scan_num()
    , m_delay()
  {}

  /// Constructor for object from a SceMiMessageData object
  /// @param msg -- the scemi message object
  /// @param off -- the starting bit offset, updated to next bit position
  CosimStruct ( const SceMiMessageDataInterface *msg, unsigned int &off )
    : m_num(msg, off)
    , m_scan_num(msg, off)
    , m_delay(msg, off)
  {}

  /// Converts this object into its bit representation for sending as a SceMi message
  /// @param msg -- the message object written into
  /// @param off -- bit position off set in message
  /// @return next free bit position for writing
  unsigned int setMessageData (SceMiMessageDataInterface &msg, const unsigned int off=0) const {
    unsigned int running = off;
    running = m_num.setMessageData( msg, running );
    running = m_scan_num.setMessageData( msg, running );
    running = m_delay.setMessageData( msg, running );
    if (running != off + 13 ) {
      std::cerr << "Mismatch in sizes: " << std::dec <<  running << " vs " << (off + 13) << std::endl;
    }
    return running;
  }

  /// overload the put-to operator for CosimStruct
  friend std::ostream & operator<< (std::ostream &os, const CosimStruct &obj) {
    BSVType::PutTo * override = lookupPutToOverride ( obj.getClassName() );
    if ( override != 0 ) {
       return override(os, obj );
    }
    os << "{" ;
    os << "delay " << obj.m_delay ;os << " " ;
    os << "scan_num " << obj.m_scan_num ;os << " " ;
    os << "num " << obj.m_num ;os << "}" ;
    return os;
  }

  /// Adds to the stream the bit representation of this structure object
  /// @param os -- the ostream object which to append
  /// @return the ostream object
  virtual std::ostream & getBitString (std::ostream & os) const {
    m_delay.getBitString (os);
    m_scan_num.getBitString (os);
    m_num.getBitString (os);
  return os;
  }
  

  /// Accessor for the BSVType name for this object
  /// @param os -- the ostream object which to append
  /// @return the ostream object
  virtual std::ostream & getBSVType (std::ostream & os) const {
    os << "SceMiScan::CosimStruct" ;
    return os;
  }

  /// Accessor on the size of the object in bits
  /// @return the bit size
  virtual unsigned int getBitSize () const {
    return 13;
  }

  /// returns the class name for this object
  virtual const char * getClassName() const {
    return "CosimStruct" ;
  }

  /// returns the BSVKind for this object
  virtual BSVKind getKind() const {
    return BSV_Struct ;
  }

  /// Accessor for the count of members in object
  virtual unsigned int getMemberCount() const {
    return 3;
  };
  
  /// Accessor to member objects
  /// @param idx -- member index
  /// @return BSVType * to this object or null
  virtual BSVType * getMember (unsigned int idx) {
    switch (idx) {
      case 0: return & m_delay;
      case 1: return & m_scan_num;
      case 2: return & m_num;
      default: std::cerr << "Index error in getMember for class CosimStruct" << std::endl ;
    };
    return 0;
  };
  
  /// Accessor for symbolic member names
  /// @param idx -- member index
  /// @return char* to this name or null
  virtual const char * getMemberName (unsigned int idx) const {
    switch (idx) {
      case 0: return "delay";
      case 1: return "scan_num";
      case 2: return "num";
      default: std::cerr << "Index error in getMemberName for class CosimStruct" << std::endl ;
    };
    return 0;
  };
  
  
};

