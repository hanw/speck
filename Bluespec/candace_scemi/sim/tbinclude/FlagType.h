// Automatically generated by: ::SceMiMsg
// DO NOT EDIT
// C++ Class with SceMi Message passing for Bluespec type:  SpeckTypes::FlagType
// Generated on: Tue Apr 19 10:38:42 EDT 2016
// Bluespec version: 2014.07.A 2014-07-30 34078

#pragma once

#include "bsv_scemi.h"

/// C++ class representing the hardware enum SpeckTypes::FlagType.
/// This class has been automatically generated.
class FlagType : public BSVType {
 public:

  enum E_FlagType {
      e_Encrypt,
      e_Decrypt
    } ;
  
  E_FlagType m_val;

  /// Default constructor for enumeration
  FlagType (E_FlagType v = e_Encrypt)
  : m_val(v)
  {}

  /// Constructor for enumeration from a SceMiMessageData object
  /// @param msg -- the scemi message object
  /// @param off -- the starting bit offset, updated to next bit position
  FlagType (const SceMiMessageDataInterface *msg, unsigned int & off) {
    m_val = (E_FlagType) msg->GetBitRange ( off, 0 );
    off = off + 1;
  }
  

  /// Converts enumeration into its bit representation for sending as a SceMi message
  /// @param msg -- the message object written into
  /// @param off -- bit position offset in message
  /// @return next free bit position in the message for writing
  unsigned int setMessageData( SceMiMessageDataInterface &msg, const unsigned int off) const {
    msg.SetBitRange ( off, 0, (SceMiU32) m_val );
    return off + 1;
  }

  /// overload operator == for enumeration classes with values
  bool operator== (const E_FlagType &x) const { return m_val == x ;}
  /// overload operator != for enumeration classes with values
  bool operator!= (const E_FlagType &x) const { return m_val != x ;}
  /// overload operator == for enumeration classes
  bool operator== (const FlagType &x) const { return m_val == x.m_val ;}
  /// overload operator != for enumeration classes
  bool operator!= (const FlagType &x) const { return m_val != x.m_val ;}
  

  /// overload the put-to operator for FlagType
  friend std::ostream & operator<< (std::ostream &os, const FlagType & e) {
    BSVType::PutTo * override = lookupPutToOverride ( e.getClassName() );
    if ( override != 0 ) {
       return override(os, e );
    }
    switch (e.m_val) {
      case e_Encrypt: os << "Encrypt" ; break ;
      case e_Decrypt: os << "Decrypt" ; break ;
      default: os << "Enum value error for FlagType: " << (int) e.m_val << "." ;
    }
    return os;
  };

  /// Accessor for symbolic name of the class' enumeration value
  /// @return the name as a char *
  const char * getName() const {
    const char *ret = "" ;
    switch (m_val) {
      case e_Encrypt: ret = "Encrypt" ; break ;
      case e_Decrypt: ret = "Decrypt" ; break ;
      default: std::cerr << "Enum value error for FlagType: " << (int) m_val << "." ;
    }
    return ret;
  };

  /// Adds to the stream the bit representation of this object
  /// @param os -- the ostream object which to append
  /// @return the ostream object
  virtual std::ostream & getBitString (std::ostream &os) const {
    unsigned int data = (unsigned int) m_val;
    for ( unsigned int i = 1; i > 0; --i) {
      unsigned int bitidx = i - 1;
      bool v = 0 != (data & (0x1 << bitidx));
      os << (v ? '1' : '0') ;
    }
  return os;
  }

  /// Accessor for the BSVType name for this object
  /// @param os -- the ostream object which to append
  /// @return the ostream object
  virtual std::ostream & getBSVType (std::ostream & os) const {
    os << "SpeckTypes::FlagType" ;
    return os;
  }

  /// Accessor on the size of the object in bits
  /// @return the bit size
  virtual unsigned int getBitSize () const {
    return 1;
  }

  /// returns the class name for this object
  virtual const char * getClassName() const {
    return "FlagType" ;
  }

  /// returns the BSVKind for this object
  virtual BSVKind getKind() const {
    return BSV_Enum ;
  }

  /// Accessor for the count of members in object
  virtual unsigned int getMemberCount() const {return 0;};
  /// Accessor to member objects
  /// @param idx -- member index
  /// @return BSVType * to this object or null
  virtual BSVType * getMember (unsigned int idx) {return 0;};
  
  /// Accessor for symbolic member names
  /// @param idx -- member index
  /// @return char* to this name or null
  virtual const char * getMemberName (unsigned int idx) const {return 0;};
  
};

