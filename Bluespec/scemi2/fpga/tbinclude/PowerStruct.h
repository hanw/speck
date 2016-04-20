// Automatically generated by: ::SceMiMsg
// DO NOT EDIT
// C++ Class with SceMi Message passing for Bluespec type:  SceMiScan::PowerStruct
// Generated on: Wed Apr 20 14:26:34 EDT 2016
// Bluespec version: 2014.07.A 2014-07-30 34078

#pragma once

#include "bsv_scemi.h"
#include "PwPrbKind.h"

/// C++ class representing the hardware structure SceMiScan::PowerStruct
/// This class has been automatically generated.
class PowerStruct : public BSVType {
 public:
  BitT<10> m_num ;
  PwPrbKind m_kind ;

  /// A default constructor
  PowerStruct ()
    :  m_num()
    , m_kind()
  {}

  /// Constructor for object from a SceMiMessageData object
  /// @param msg -- the scemi message object
  /// @param off -- the starting bit offset, updated to next bit position
  PowerStruct ( const SceMiMessageDataInterface *msg, unsigned int &off )
    : m_num(msg, off)
    , m_kind(msg, off)
  {}

  /// Converts this object into its bit representation for sending as a SceMi message
  /// @param msg -- the message object written into
  /// @param off -- bit position off set in message
  /// @return next free bit position for writing
  unsigned int setMessageData (SceMiMessageDataInterface &msg, const unsigned int off=0) const {
    unsigned int running = off;
    running = m_num.setMessageData( msg, running );
    running = m_kind.setMessageData( msg, running );
    if (running != off + 12 ) {
      std::cerr << "Mismatch in sizes: " << std::dec <<  running << " vs " << (off + 12) << std::endl;
    }
    return running;
  }

  /// overload the put-to operator for PowerStruct
  friend std::ostream & operator<< (std::ostream &os, const PowerStruct &obj) {
    BSVType::PutTo * override = lookupPutToOverride ( obj.getClassName() );
    if ( override != 0 ) {
       return override(os, obj );
    }
    os << "{" ;
    os << "kind " << obj.m_kind ;os << " " ;
    os << "num " << obj.m_num ;os << "}" ;
    return os;
  }

  /// Adds to the stream the bit representation of this structure object
  /// @param os -- the ostream object which to append
  /// @return the ostream object
  virtual std::ostream & getBitString (std::ostream & os) const {
    m_kind.getBitString (os);
    m_num.getBitString (os);
  return os;
  }
  

  /// Accessor for the BSVType name for this object
  /// @param os -- the ostream object which to append
  /// @return the ostream object
  virtual std::ostream & getBSVType (std::ostream & os) const {
    os << "SceMiScan::PowerStruct" ;
    return os;
  }

  /// Accessor on the size of the object in bits
  /// @return the bit size
  virtual unsigned int getBitSize () const {
    return 12;
  }

  /// returns the class name for this object
  virtual const char * getClassName() const {
    return "PowerStruct" ;
  }

  /// returns the BSVKind for this object
  virtual BSVKind getKind() const {
    return BSV_Struct ;
  }

  /// Accessor for the count of members in object
  virtual unsigned int getMemberCount() const {
    return 2;
  };
  
  /// Accessor to member objects
  /// @param idx -- member index
  /// @return BSVType * to this object or null
  virtual BSVType * getMember (unsigned int idx) {
    switch (idx) {
      case 0: return & m_kind;
      case 1: return & m_num;
      default: std::cerr << "Index error in getMember for class PowerStruct" << std::endl ;
    };
    return 0;
  };
  
  /// Accessor for symbolic member names
  /// @param idx -- member index
  /// @return char* to this name or null
  virtual const char * getMemberName (unsigned int idx) const {
    switch (idx) {
      case 0: return "kind";
      case 1: return "num";
      default: std::cerr << "Index error in getMemberName for class PowerStruct" << std::endl ;
    };
    return 0;
  };
  
  
};

