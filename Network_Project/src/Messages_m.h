//
// Generated file, do not edit! Created by opp_msgtool 6.0 from Messages.msg.
//

#ifndef __MESSAGES_M_H
#define __MESSAGES_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

class Messages;
// cplusplus {{
#include <bitset>
typedef  std::bitset<8> bits;
// }}

/**
 * Class generated from <tt>Messages.msg:26</tt> by opp_msgtool.
 * <pre>
 * packet Messages
 * {
 *     \@customize(true);  // see the generated C++ header for more info
 *     int Seq_Num;
 *     int M_Type;
 *     int ACK_Num;
 *     int NACK_Num;
 *     string M_Payload;
 *     bits Trailer;
 * }
 * </pre>
 *
 * Messages_Base is only useful if it gets subclassed, and Messages is derived from it.
 * The minimum code to be written for Messages is the following:
 *
 * <pre>
 * class Messages : public Messages_Base
 * {
 *   private:
 *     void copy(const Messages& other) { ... }

 *   public:
 *     Messages(const char *name=nullptr, short kind=0) : Messages_Base(name,kind) {}
 *     Messages(const Messages& other) : Messages_Base(other) {copy(other);}
 *     Messages& operator=(const Messages& other) {if (this==&other) return *this; Messages_Base::operator=(other); copy(other); return *this;}
 *     virtual Messages *dup() const override {return new Messages(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from Messages_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(Messages)
 * </pre>
 */
class Messages_Base : public ::omnetpp::cPacket
{
  protected:
    int Seq_Num = 0;
    int M_Type = 0;
    int ACK_Num = 0;
    int NACK_Num = 0;
    omnetpp::opp_string M_Payload;
    bits Trailer;

  private:
    void copy(const Messages_Base& other);

  protected:
    bool operator==(const Messages_Base&) = delete;
    // make constructors protected to avoid instantiation

    // make assignment operator protected to force the user override it
    Messages_Base& operator=(const Messages_Base& other);

  public:
    Messages_Base(const char *name=nullptr, short kind=0);
      Messages_Base(const Messages_Base& other);
    virtual ~Messages_Base();
    virtual Messages_Base *dup() const override {return new Messages_Base(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getSeq_Num() const;
    virtual void setSeq_Num(int Seq_Num);

    virtual int getM_Type() const;
    virtual void setM_Type(int M_Type);

    virtual int getACK_Num() const;
    virtual void setACK_Num(int ACK_Num);

    virtual int getNACK_Num() const;
    virtual void setNACK_Num(int NACK_Num);

    virtual const char * getM_Payload() const;
    virtual void setM_Payload(const char * M_Payload);

    virtual const bits& getTrailer() const;
    virtual bits& getTrailerForUpdate() { return const_cast<bits&>(const_cast<Messages_Base*>(this)->getTrailer());}
    virtual void setTrailer(const bits& Trailer);
};


namespace omnetpp {

inline any_ptr toAnyPtr(const bits *p) {if (auto obj = as_cObject(p)) return any_ptr(obj); else return any_ptr(p);}
template<> inline bits *fromAnyPtr(any_ptr ptr) { return ptr.get<bits>(); }
template<> inline Messages_Base *fromAnyPtr(any_ptr ptr) { return check_and_cast<Messages_Base*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __MESSAGES_M_H

