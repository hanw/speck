// Automatically generated by: ::SceMiMsg
// DO NOT EDIT
// C++ Class with SceMi Message passing for Bluespec type:  SceMiScan::PowerAssoc
// Generated on: Sat Apr 09 16:52:24 EDT 2016
// Bluespec version: 2014.07.A 2014-07-30 34078

#pragma once

#include "bsv_scemi.h"

/// C++ class representing the hardware structure SceMiScan::PowerAssoc
/// This class has been automatically generated.
class PowerAssoc : public BSVType {
 public:
  BitT<7> m_block ;
  BitT<5> m_source ;

  /// A default constructor
  PowerAssoc ()
    :  m_block()
    , m_source()
  {}

  /// Constructor for object from a SceMiMessageData object
  /// @param msg -- the scemi message object
  /// @param off -- the starting bit offset, updated to next bit position
  PowerAssoc ( const SceMiMessageDataInterface *msg, unsigned int &off )
    : m_block(msg, off)
    , m_source(msg, off)
  {}

  /// Converts this object into its bit representation for sending as a SceMi message
  /// @param msg -- the message object written into
  /// @param off -- bit position off set in message
  /// @return next free bit position for writing
  unsigned int setMessageData (SceMiMessageDataInterface &msg, const unsigned int off=0) const {
    unsigned int running = off;
    running = m_block.setMessageData( msg, running );
    running = m_source.setMessageData( msg, running );
    if (running != off + 12 ) {
      std::cerr << "Mismatch in sizes: " << std::dec <<  running << " vs " << (off + 12) << std::endl;
    }
    return running;
  }

  /// overload the put-to operator for PowerAssoc
  friend std::ostream & operator<< (std::ostream &os, const PowerAssoc &obj) {
    BSVType::PutTo * override = lookupPutToOverride ( obj.getClassName() );
    if ( override != 0 ) {
       return override(os, obj );
    }
    os << "{" ;
    os << "source " << obj.m_source ;os << " " ;
    os << "block " << obj.m_block ;os << "}" ;
    return os;
  }

  /// Adds to the stream the bit representation of this structure object
  /// @param os -- the ostream object which to append
  /// @return the ostream object
  virtual std::ostream & getBitString (std::ostream & os) const {
    m_source.getBitString (os);
    m_block.getBitString (os);
  return os;
  }
  

  /// Accessor for the BSVType name for this object
  /// @param os -- the ostream object which to append
  /// @return the ostream object
  virtual std::ostream & getBSVType (std::ostream & os) const {
    os << "SceMiScan::PowerAssoc" ;
    return os;
  }

  /// Accessor on the size of the object in bits
  /// @return the bit size
  virtual unsigned int getBitSize () const {
    return 12;
  }

  /// returns the class name for this object
  virtual const char * getClassName() const {
    return "PowerAssoc" ;
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
      case 0: return & m_source;
      case 1: return & m_block;
      default: std::cerr << "Index error in getMember for class PowerAssoc" << std::endl ;
    };
    return 0;
  };
  
  /// Accessor for symbolic member names
  /// @param idx -- member index
  /// @return char* to this name or null
  virtual const char * getMemberName (unsigned int idx) const {
    switch (idx) {
      case 0: return "source";
      case 1: return "block";
      default: std::cerr << "Index error in getMemberName for class PowerAssoc" << std::endl ;
    };
    return 0;
  };
  
  
};

