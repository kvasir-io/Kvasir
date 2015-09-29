#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flex Controller Area Network module
    namespace Can1Mcr{    ///<Module Configuration Register
        using Addr = Register::Address<0x400a4000,0x0004cc80,0,unsigned>;
        ///Number Of The Last Message Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> maxmb{}; 
        ///ID Acceptance Mode
        enum class idamVal {
            v00=0x00000000,     ///<Format A: One full ID (standard and extended) per ID Filter Table element.
            v01=0x00000001,     ///<Format B: Two full standard IDs or two partial 14-bit (standard and extended) IDs per ID Filter Table element.
            v10=0x00000002,     ///<Format C: Four partial 8-bit Standard IDs per ID Filter Table element.
            v11=0x00000003,     ///<Format D: All frames rejected.
        };
        namespace idamValC{
            constexpr MPL::Value<idamVal,idamVal::v00> v00{};
            constexpr MPL::Value<idamVal,idamVal::v01> v01{};
            constexpr MPL::Value<idamVal,idamVal::v10> v10{};
            constexpr MPL::Value<idamVal,idamVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,idamVal> idam{}; 
        ///Abort Enable
        enum class aenVal {
            v0=0x00000000,     ///<Abort disabled.
            v1=0x00000001,     ///<Abort enabled.
        };
        namespace aenValC{
            constexpr MPL::Value<aenVal,aenVal::v0> v0{};
            constexpr MPL::Value<aenVal,aenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,aenVal> aen{}; 
        ///Local Priority Enable
        enum class lprioenVal {
            v0=0x00000000,     ///<Local Priority disabled.
            v1=0x00000001,     ///<Local Priority enabled.
        };
        namespace lprioenValC{
            constexpr MPL::Value<lprioenVal,lprioenVal::v0> v0{};
            constexpr MPL::Value<lprioenVal,lprioenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,lprioenVal> lprioen{}; 
        ///Individual Rx Masking And Queue Enable
        enum class irmqVal {
            v0=0x00000000,     ///<Individual Rx masking and queue feature are disabled. For backward compatibility with legacy applications, the reading of C/S word locks the MB even if it is EMPTY.
            v1=0x00000001,     ///<Individual Rx masking and queue feature are enabled.
        };
        namespace irmqValC{
            constexpr MPL::Value<irmqVal,irmqVal::v0> v0{};
            constexpr MPL::Value<irmqVal,irmqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,irmqVal> irmq{}; 
        ///Self Reception Disable
        enum class srxdisVal {
            v0=0x00000000,     ///<Self reception enabled.
            v1=0x00000001,     ///<Self reception disabled.
        };
        namespace srxdisValC{
            constexpr MPL::Value<srxdisVal,srxdisVal::v0> v0{};
            constexpr MPL::Value<srxdisVal,srxdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,srxdisVal> srxdis{}; 
        ///Wake Up Source
        enum class waksrcVal {
            v0=0x00000000,     ///<FlexCAN uses the unfiltered Rx input to detect recessive to dominant edges on the CAN bus.
            v1=0x00000001,     ///<FlexCAN uses the filtered Rx input to detect recessive to dominant edges on the CAN bus.
        };
        namespace waksrcValC{
            constexpr MPL::Value<waksrcVal,waksrcVal::v0> v0{};
            constexpr MPL::Value<waksrcVal,waksrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,waksrcVal> waksrc{}; 
        ///Low-Power Mode Acknowledge
        enum class lpmackVal {
            v0=0x00000000,     ///<FlexCAN is not in a low-power mode.
            v1=0x00000001,     ///<FlexCAN is in a low-power mode.
        };
        namespace lpmackValC{
            constexpr MPL::Value<lpmackVal,lpmackVal::v0> v0{};
            constexpr MPL::Value<lpmackVal,lpmackVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,lpmackVal> lpmack{}; 
        ///Warning Interrupt Enable
        enum class wrnenVal {
            v0=0x00000000,     ///<TWRNINT and RWRNINT bits are zero, independent of the values in the error counters.
            v1=0x00000001,     ///<TWRNINT and RWRNINT bits are set when the respective error counter transitions from less than 96 to greater than or equal to 96.
        };
        namespace wrnenValC{
            constexpr MPL::Value<wrnenVal,wrnenVal::v0> v0{};
            constexpr MPL::Value<wrnenVal,wrnenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wrnenVal> wrnen{}; 
        ///Self Wake Up
        enum class slfwakVal {
            v0=0x00000000,     ///<FlexCAN Self Wake Up feature is disabled.
            v1=0x00000001,     ///<FlexCAN Self Wake Up feature is enabled.
        };
        namespace slfwakValC{
            constexpr MPL::Value<slfwakVal,slfwakVal::v0> v0{};
            constexpr MPL::Value<slfwakVal,slfwakVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,slfwakVal> slfwak{}; 
        ///Supervisor Mode
        enum class supvVal {
            v0=0x00000000,     ///<FlexCAN is in User mode. Affected registers allow both Supervisor and Unrestricted accesses .
            v1=0x00000001,     ///<FlexCAN is in Supervisor mode. Affected registers allow only Supervisor access. Unrestricted access behaves as though the access was done to an unimplemented register location .
        };
        namespace supvValC{
            constexpr MPL::Value<supvVal,supvVal::v0> v0{};
            constexpr MPL::Value<supvVal,supvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,supvVal> supv{}; 
        ///Freeze Mode Acknowledge
        enum class frzackVal {
            v0=0x00000000,     ///<FlexCAN not in Freeze mode, prescaler running.
            v1=0x00000001,     ///<FlexCAN in Freeze mode, prescaler stopped.
        };
        namespace frzackValC{
            constexpr MPL::Value<frzackVal,frzackVal::v0> v0{};
            constexpr MPL::Value<frzackVal,frzackVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,frzackVal> frzack{}; 
        ///Soft Reset
        enum class softrstVal {
            v0=0x00000000,     ///<No reset request.
            v1=0x00000001,     ///<Resets the registers affected by soft reset.
        };
        namespace softrstValC{
            constexpr MPL::Value<softrstVal,softrstVal::v0> v0{};
            constexpr MPL::Value<softrstVal,softrstVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,softrstVal> softrst{}; 
        ///Wake Up Interrupt Mask
        enum class wakmskVal {
            v0=0x00000000,     ///<Wake Up Interrupt is disabled.
            v1=0x00000001,     ///<Wake Up Interrupt is enabled.
        };
        namespace wakmskValC{
            constexpr MPL::Value<wakmskVal,wakmskVal::v0> v0{};
            constexpr MPL::Value<wakmskVal,wakmskVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,wakmskVal> wakmsk{}; 
        ///FlexCAN Not Ready
        enum class notrdyVal {
            v0=0x00000000,     ///<FlexCAN module is either in Normal mode, Listen-Only mode or Loop-Back mode.
            v1=0x00000001,     ///<FlexCAN module is either in Disable mode , Stop mode or Freeze mode.
        };
        namespace notrdyValC{
            constexpr MPL::Value<notrdyVal,notrdyVal::v0> v0{};
            constexpr MPL::Value<notrdyVal,notrdyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,notrdyVal> notrdy{}; 
        ///Halt FlexCAN
        enum class haltVal {
            v0=0x00000000,     ///<No Freeze mode request.
            v1=0x00000001,     ///<Enters Freeze mode if the FRZ bit is asserted.
        };
        namespace haltValC{
            constexpr MPL::Value<haltVal,haltVal::v0> v0{};
            constexpr MPL::Value<haltVal,haltVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,haltVal> halt{}; 
        ///Rx FIFO Enable
        enum class rfenVal {
            v0=0x00000000,     ///<Rx FIFO not enabled.
            v1=0x00000001,     ///<Rx FIFO enabled.
        };
        namespace rfenValC{
            constexpr MPL::Value<rfenVal,rfenVal::v0> v0{};
            constexpr MPL::Value<rfenVal,rfenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,rfenVal> rfen{}; 
        ///Freeze Enable
        enum class frzVal {
            v0=0x00000000,     ///<Not enabled to enter Freeze mode.
            v1=0x00000001,     ///<Enabled to enter Freeze mode.
        };
        namespace frzValC{
            constexpr MPL::Value<frzVal,frzVal::v0> v0{};
            constexpr MPL::Value<frzVal,frzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,frzVal> frz{}; 
        ///Module Disable
        enum class mdisVal {
            v0=0x00000000,     ///<Enable the FlexCAN module.
            v1=0x00000001,     ///<Disable the FlexCAN module.
        };
        namespace mdisValC{
            constexpr MPL::Value<mdisVal,mdisVal::v0> v0{};
            constexpr MPL::Value<mdisVal,mdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,mdisVal> mdis{}; 
    }
    namespace Can1Ctrl1{    ///<Control 1 register
        using Addr = Register::Address<0x400a4004,0x00000300,0,unsigned>;
        ///Propagation Segment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> propseg{}; 
        ///Listen-Only Mode
        enum class lomVal {
            v0=0x00000000,     ///<Listen-Only mode is deactivated.
            v1=0x00000001,     ///<FlexCAN module operates in Listen-Only mode.
        };
        namespace lomValC{
            constexpr MPL::Value<lomVal,lomVal::v0> v0{};
            constexpr MPL::Value<lomVal,lomVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,lomVal> lom{}; 
        ///Lowest Buffer Transmitted First
        enum class lbufVal {
            v0=0x00000000,     ///<Buffer with highest priority is transmitted first.
            v1=0x00000001,     ///<Lowest number buffer is transmitted first.
        };
        namespace lbufValC{
            constexpr MPL::Value<lbufVal,lbufVal::v0> v0{};
            constexpr MPL::Value<lbufVal,lbufVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,lbufVal> lbuf{}; 
        ///Timer Sync
        enum class tsynVal {
            v0=0x00000000,     ///<Timer Sync feature disabled
            v1=0x00000001,     ///<Timer Sync feature enabled
        };
        namespace tsynValC{
            constexpr MPL::Value<tsynVal,tsynVal::v0> v0{};
            constexpr MPL::Value<tsynVal,tsynVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,tsynVal> tsyn{}; 
        ///Bus Off Recovery
        enum class boffrecVal {
            v0=0x00000000,     ///<Automatic recovering from Bus Off state enabled, according to CAN Spec 2.0 part B.
            v1=0x00000001,     ///<Automatic recovering from Bus Off state disabled.
        };
        namespace boffrecValC{
            constexpr MPL::Value<boffrecVal,boffrecVal::v0> v0{};
            constexpr MPL::Value<boffrecVal,boffrecVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,boffrecVal> boffrec{}; 
        ///CAN Bit Sampling
        enum class smpVal {
            v0=0x00000000,     ///<Just one sample is used to determine the bit value.
            v1=0x00000001,     ///<Three samples are used to determine the value of the received bit: the regular one (sample point) and 2 preceding samples; a majority rule is used.
        };
        namespace smpValC{
            constexpr MPL::Value<smpVal,smpVal::v0> v0{};
            constexpr MPL::Value<smpVal,smpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,smpVal> smp{}; 
        ///Rx Warning Interrupt Mask
        enum class rwrnmskVal {
            v0=0x00000000,     ///<Rx Warning Interrupt disabled.
            v1=0x00000001,     ///<Rx Warning Interrupt enabled.
        };
        namespace rwrnmskValC{
            constexpr MPL::Value<rwrnmskVal,rwrnmskVal::v0> v0{};
            constexpr MPL::Value<rwrnmskVal,rwrnmskVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rwrnmskVal> rwrnmsk{}; 
        ///Tx Warning Interrupt Mask
        enum class twrnmskVal {
            v0=0x00000000,     ///<Tx Warning Interrupt disabled.
            v1=0x00000001,     ///<Tx Warning Interrupt enabled.
        };
        namespace twrnmskValC{
            constexpr MPL::Value<twrnmskVal,twrnmskVal::v0> v0{};
            constexpr MPL::Value<twrnmskVal,twrnmskVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,twrnmskVal> twrnmsk{}; 
        ///Loop Back Mode
        enum class lpbVal {
            v0=0x00000000,     ///<Loop Back disabled.
            v1=0x00000001,     ///<Loop Back enabled.
        };
        namespace lpbValC{
            constexpr MPL::Value<lpbVal,lpbVal::v0> v0{};
            constexpr MPL::Value<lpbVal,lpbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,lpbVal> lpb{}; 
        ///CAN Engine Clock Source
        enum class clksrcVal {
            v0=0x00000000,     ///<The CAN engine clock source is the oscillator clock. Under this condition, the oscillator clock frequency must be lower than the bus clock.
            v1=0x00000001,     ///<The CAN engine clock source is the peripheral clock.
        };
        namespace clksrcValC{
            constexpr MPL::Value<clksrcVal,clksrcVal::v0> v0{};
            constexpr MPL::Value<clksrcVal,clksrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,clksrcVal> clksrc{}; 
        ///Error Mask
        enum class errmskVal {
            v0=0x00000000,     ///<Error interrupt disabled.
            v1=0x00000001,     ///<Error interrupt enabled.
        };
        namespace errmskValC{
            constexpr MPL::Value<errmskVal,errmskVal::v0> v0{};
            constexpr MPL::Value<errmskVal,errmskVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,errmskVal> errmsk{}; 
        ///Bus Off Mask
        enum class boffmskVal {
            v0=0x00000000,     ///<Bus Off interrupt disabled.
            v1=0x00000001,     ///<Bus Off interrupt enabled.
        };
        namespace boffmskValC{
            constexpr MPL::Value<boffmskVal,boffmskVal::v0> v0{};
            constexpr MPL::Value<boffmskVal,boffmskVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,boffmskVal> boffmsk{}; 
        ///Phase Segment 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> pseg2{}; 
        ///Phase Segment 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,unsigned> pseg1{}; 
        ///Resync Jump Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> rjw{}; 
        ///Prescaler Division Factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> presdiv{}; 
    }
    namespace Can1Timer{    ///<Free Running Timer
        using Addr = Register::Address<0x400a4008,0xffff0000,0,unsigned>;
        ///Timer Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timer{}; 
    }
    namespace Can1Rxmgmask{    ///<Rx Mailboxes Global Mask Register
        using Addr = Register::Address<0x400a4010,0x00000000,0,unsigned>;
        ///Rx Mailboxes Global Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mg{}; 
    }
    namespace Can1Rx14mask{    ///<Rx 14 Mask register
        using Addr = Register::Address<0x400a4014,0x00000000,0,unsigned>;
        ///Rx Buffer 14 Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rx14m{}; 
    }
    namespace Can1Rx15mask{    ///<Rx 15 Mask register
        using Addr = Register::Address<0x400a4018,0x00000000,0,unsigned>;
        ///Rx Buffer 15 Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rx15m{}; 
    }
    namespace Can1Ecr{    ///<Error Counter
        using Addr = Register::Address<0x400a401c,0xffff0000,0,unsigned>;
        ///Transmit Error Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txerrcnt{}; 
        ///Receive Error Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rxerrcnt{}; 
    }
    namespace Can1Esr1{    ///<Error and Status 1 register
        using Addr = Register::Address<0x400a4020,0xfff80000,0,unsigned>;
        ///Wake-Up Interrupt
        enum class wakintVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<Indicates a recessive to dominant transition was received on the CAN bus.
        };
        namespace wakintValC{
            constexpr MPL::Value<wakintVal,wakintVal::v0> v0{};
            constexpr MPL::Value<wakintVal,wakintVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wakintVal> wakint{}; 
        ///Error Interrupt
        enum class errintVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<Indicates setting of any Error Bit in the Error and Status Register.
        };
        namespace errintValC{
            constexpr MPL::Value<errintVal,errintVal::v0> v0{};
            constexpr MPL::Value<errintVal,errintVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,errintVal> errint{}; 
        ///Bus Off Interrupt
        enum class boffintVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<FlexCAN module entered Bus Off state.
        };
        namespace boffintValC{
            constexpr MPL::Value<boffintVal,boffintVal::v0> v0{};
            constexpr MPL::Value<boffintVal,boffintVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,boffintVal> boffint{}; 
        ///FlexCAN In Reception
        enum class rxVal {
            v0=0x00000000,     ///<FlexCAN is not receiving a message.
            v1=0x00000001,     ///<FlexCAN is receiving a message.
        };
        namespace rxValC{
            constexpr MPL::Value<rxVal,rxVal::v0> v0{};
            constexpr MPL::Value<rxVal,rxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rxVal> rx{}; 
        ///Fault Confinement State
        enum class fltconfVal {
            v00=0x00000000,     ///<Error Active
            v01=0x00000001,     ///<Error Passive
            v1x=0x00000002,     ///<Bus Off
        };
        namespace fltconfValC{
            constexpr MPL::Value<fltconfVal,fltconfVal::v00> v00{};
            constexpr MPL::Value<fltconfVal,fltconfVal::v01> v01{};
            constexpr MPL::Value<fltconfVal,fltconfVal::v1x> v1x{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,fltconfVal> fltconf{}; 
        ///FlexCAN In Transmission
        enum class txVal {
            v0=0x00000000,     ///<FlexCAN is not transmitting a message.
            v1=0x00000001,     ///<FlexCAN is transmitting a message.
        };
        namespace txValC{
            constexpr MPL::Value<txVal,txVal::v0> v0{};
            constexpr MPL::Value<txVal,txVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,txVal> tx{}; 
        ///no description available
        enum class idleVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<CAN bus is now IDLE.
        };
        namespace idleValC{
            constexpr MPL::Value<idleVal,idleVal::v0> v0{};
            constexpr MPL::Value<idleVal,idleVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,idleVal> idle{}; 
        ///Rx Error Warning
        enum class rxwrnVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<RXERRCNT is greater than or equal to 96.
        };
        namespace rxwrnValC{
            constexpr MPL::Value<rxwrnVal,rxwrnVal::v0> v0{};
            constexpr MPL::Value<rxwrnVal,rxwrnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,rxwrnVal> rxwrn{}; 
        ///TX Error Warning
        enum class txwrnVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<TXERRCNT is greater than or equal to 96.
        };
        namespace txwrnValC{
            constexpr MPL::Value<txwrnVal,txwrnVal::v0> v0{};
            constexpr MPL::Value<txwrnVal,txwrnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,txwrnVal> txwrn{}; 
        ///Stuffing Error
        enum class stferrVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<A Stuffing Error occurred since last read of this register.
        };
        namespace stferrValC{
            constexpr MPL::Value<stferrVal,stferrVal::v0> v0{};
            constexpr MPL::Value<stferrVal,stferrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,stferrVal> stferr{}; 
        ///Form Error
        enum class frmerrVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<A Form Error occurred since last read of this register.
        };
        namespace frmerrValC{
            constexpr MPL::Value<frmerrVal,frmerrVal::v0> v0{};
            constexpr MPL::Value<frmerrVal,frmerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,frmerrVal> frmerr{}; 
        ///Cyclic Redundancy Check Error
        enum class crcerrVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<A CRC error occurred since last read of this register.
        };
        namespace crcerrValC{
            constexpr MPL::Value<crcerrVal,crcerrVal::v0> v0{};
            constexpr MPL::Value<crcerrVal,crcerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,crcerrVal> crcerr{}; 
        ///Acknowledge Error
        enum class ackerrVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<An ACK error occurred since last read of this register.
        };
        namespace ackerrValC{
            constexpr MPL::Value<ackerrVal,ackerrVal::v0> v0{};
            constexpr MPL::Value<ackerrVal,ackerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ackerrVal> ackerr{}; 
        ///Bit0 Error
        enum class bit0errVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<At least one bit sent as dominant is received as recessive.
        };
        namespace bit0errValC{
            constexpr MPL::Value<bit0errVal,bit0errVal::v0> v0{};
            constexpr MPL::Value<bit0errVal,bit0errVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,bit0errVal> bit0err{}; 
        ///Bit1 Error
        enum class bit1errVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<At least one bit sent as recessive is received as dominant.
        };
        namespace bit1errValC{
            constexpr MPL::Value<bit1errVal,bit1errVal::v0> v0{};
            constexpr MPL::Value<bit1errVal,bit1errVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,bit1errVal> bit1err{}; 
        ///Rx Warning Interrupt Flag
        enum class rwrnintVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<The Rx error counter transitioned from less than 96 to greater than or equal to 96.
        };
        namespace rwrnintValC{
            constexpr MPL::Value<rwrnintVal,rwrnintVal::v0> v0{};
            constexpr MPL::Value<rwrnintVal,rwrnintVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,rwrnintVal> rwrnint{}; 
        ///Tx Warning Interrupt Flag
        enum class twrnintVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<The Tx error counter transitioned from less than 96 to greater than or equal to 96.
        };
        namespace twrnintValC{
            constexpr MPL::Value<twrnintVal,twrnintVal::v0> v0{};
            constexpr MPL::Value<twrnintVal,twrnintVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,twrnintVal> twrnint{}; 
        ///CAN Synchronization Status
        enum class synchVal {
            v0=0x00000000,     ///<FlexCAN is not synchronized to the CAN bus.
            v1=0x00000001,     ///<FlexCAN is synchronized to the CAN bus.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::v0> v0{};
            constexpr MPL::Value<synchVal,synchVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,synchVal> synch{}; 
    }
    namespace Can1Imask1{    ///<Interrupt Masks 1 register
        using Addr = Register::Address<0x400a4028,0x00000000,0,unsigned>;
        ///Buffer MB i Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buflm{}; 
    }
    namespace Can1Iflag1{    ///<Interrupt Flags 1 register
        using Addr = Register::Address<0x400a4030,0x00000000,0,unsigned>;
        ///Buffer MB i Interrupt Or "reserved"
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> buf4to0i{}; 
        ///Buffer MB5 Interrupt Or "Frames available in Rx FIFO"
        enum class buf5iVal {
            v0=0x00000000,     ///<No occurrence of MB5 completing transmission/reception when MCR[RFEN]=0, or of frame(s) available in the Rx FIFO, when MCR[RFEN]=1
            v1=0x00000001,     ///<MB5 completed transmission/reception when MCR[RFEN]=0, or frame(s) available in the Rx FIFO when MCR[RFEN]=1
        };
        namespace buf5iValC{
            constexpr MPL::Value<buf5iVal,buf5iVal::v0> v0{};
            constexpr MPL::Value<buf5iVal,buf5iVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,buf5iVal> buf5i{}; 
        ///Buffer MB6 Interrupt Or "Rx FIFO Warning"
        enum class buf6iVal {
            v0=0x00000000,     ///<No occurrence of MB6 completing transmission/reception when MCR[RFEN]=0, or of Rx FIFO almost full when MCR[RFEN]=1
            v1=0x00000001,     ///<MB6 completed transmission/reception when MCR[RFEN]=0, or Rx FIFO almost full when MCR[RFEN]=1
        };
        namespace buf6iValC{
            constexpr MPL::Value<buf6iVal,buf6iVal::v0> v0{};
            constexpr MPL::Value<buf6iVal,buf6iVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,buf6iVal> buf6i{}; 
        ///Buffer MB7 Interrupt Or "Rx FIFO Overflow"
        enum class buf7iVal {
            v0=0x00000000,     ///<No occurrence of MB7 completing transmission/reception when MCR[RFEN]=0, or of Rx FIFO overflow when MCR[RFEN]=1
            v1=0x00000001,     ///<MB7 completed transmission/reception when MCR[RFEN]=0, or Rx FIFO overflow when MCR[RFEN]=1
        };
        namespace buf7iValC{
            constexpr MPL::Value<buf7iVal,buf7iVal::v0> v0{};
            constexpr MPL::Value<buf7iVal,buf7iVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,buf7iVal> buf7i{}; 
        ///Buffer MBi Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> buf31to8i{}; 
    }
    namespace Can1Ctrl2{    ///<Control 2 register
        using Addr = Register::Address<0x400a4034,0xe000ffff,0,unsigned>;
        ///Entire Frame Arbitration Field Comparison Enable For Rx Mailboxes
        enum class eacenVal {
            v0=0x00000000,     ///<Rx Mailbox filter's IDE bit is always compared and RTR is never compared despite mask bits.
            v1=0x00000001,     ///<Enables the comparison of both Rx Mailbox filter's IDE and RTR bit with their corresponding bits within the incoming frame. Mask bits do apply.
        };
        namespace eacenValC{
            constexpr MPL::Value<eacenVal,eacenVal::v0> v0{};
            constexpr MPL::Value<eacenVal,eacenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,eacenVal> eacen{}; 
        ///Remote Request Storing
        enum class rrsVal {
            v0=0x00000000,     ///<Remote Response Frame is generated.
            v1=0x00000001,     ///<Remote Request Frame is stored.
        };
        namespace rrsValC{
            constexpr MPL::Value<rrsVal,rrsVal::v0> v0{};
            constexpr MPL::Value<rrsVal,rrsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,rrsVal> rrs{}; 
        ///Mailboxes Reception Priority
        enum class mrpVal {
            v0=0x00000000,     ///<Matching starts from Rx FIFO and continues on Mailboxes.
            v1=0x00000001,     ///<Matching starts from Mailboxes and continues on Rx FIFO.
        };
        namespace mrpValC{
            constexpr MPL::Value<mrpVal,mrpVal::v0> v0{};
            constexpr MPL::Value<mrpVal,mrpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,mrpVal> mrp{}; 
        ///Tx Arbitration Start Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> tasd{}; 
        ///Number Of Rx FIFO Filters
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> rffn{}; 
        ///Write-Access To Memory In Freeze Mode
        enum class wrmfrzVal {
            v0=0x00000000,     ///<Maintain the write access restrictions.
            v1=0x00000001,     ///<Enable unrestricted write access to FlexCAN memory.
        };
        namespace wrmfrzValC{
            constexpr MPL::Value<wrmfrzVal,wrmfrzVal::v0> v0{};
            constexpr MPL::Value<wrmfrzVal,wrmfrzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,wrmfrzVal> wrmfrz{}; 
    }
    namespace Can1Esr2{    ///<Error and Status 2 register
        using Addr = Register::Address<0x400a4038,0xff809fff,0,unsigned>;
        ///Inactive Mailbox
        enum class imbVal {
            v0=0x00000000,     ///<If ESR2[VPS] is asserted, the ESR2[LPTM] is not an inactive Mailbox.
            v1=0x00000001,     ///<If ESR2[VPS] is asserted, there is at least one inactive Mailbox. LPTM content is the number of the first one.
        };
        namespace imbValC{
            constexpr MPL::Value<imbVal,imbVal::v0> v0{};
            constexpr MPL::Value<imbVal,imbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,imbVal> imb{}; 
        ///Valid Priority Status
        enum class vpsVal {
            v0=0x00000000,     ///<Contents of IMB and LPTM are invalid.
            v1=0x00000001,     ///<Contents of IMB and LPTM are valid.
        };
        namespace vpsValC{
            constexpr MPL::Value<vpsVal,vpsVal::v0> v0{};
            constexpr MPL::Value<vpsVal,vpsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,vpsVal> vps{}; 
        ///Lowest Priority Tx Mailbox
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> lptm{}; 
    }
    namespace Can1Crcr{    ///<CRC Register
        using Addr = Register::Address<0x400a4044,0xff808000,0,unsigned>;
        ///CRC Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> txcrc{}; 
        ///CRC Mailbox
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mbcrc{}; 
    }
    namespace Can1Rxfgmask{    ///<Rx FIFO Global Mask register
        using Addr = Register::Address<0x400a4048,0x00000000,0,unsigned>;
        ///Rx FIFO Global Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fgm{}; 
    }
    namespace Can1Rxfir{    ///<Rx FIFO Information Register
        using Addr = Register::Address<0x400a404c,0xfffffe00,0,unsigned>;
        ///Identifier Acceptance Filter Hit Indicator
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> idhit{}; 
    }
    namespace Can1Cs0{    ///<Message Buffer 0 CS Register
        using Addr = Register::Address<0x400a4080,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id0{    ///<Message Buffer 0 ID Register
        using Addr = Register::Address<0x400a4084,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word00{    ///<Message Buffer 0 WORD0 Register
        using Addr = Register::Address<0x400a4088,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word10{    ///<Message Buffer 0 WORD1 Register
        using Addr = Register::Address<0x400a408c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Cs1{    ///<Message Buffer 1 CS Register
        using Addr = Register::Address<0x400a4090,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id1{    ///<Message Buffer 1 ID Register
        using Addr = Register::Address<0x400a4094,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word01{    ///<Message Buffer 1 WORD0 Register
        using Addr = Register::Address<0x400a4098,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word11{    ///<Message Buffer 1 WORD1 Register
        using Addr = Register::Address<0x400a409c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Cs2{    ///<Message Buffer 2 CS Register
        using Addr = Register::Address<0x400a40a0,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id2{    ///<Message Buffer 2 ID Register
        using Addr = Register::Address<0x400a40a4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word02{    ///<Message Buffer 2 WORD0 Register
        using Addr = Register::Address<0x400a40a8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word12{    ///<Message Buffer 2 WORD1 Register
        using Addr = Register::Address<0x400a40ac,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Cs3{    ///<Message Buffer 3 CS Register
        using Addr = Register::Address<0x400a40b0,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id3{    ///<Message Buffer 3 ID Register
        using Addr = Register::Address<0x400a40b4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word03{    ///<Message Buffer 3 WORD0 Register
        using Addr = Register::Address<0x400a40b8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word13{    ///<Message Buffer 3 WORD1 Register
        using Addr = Register::Address<0x400a40bc,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Cs4{    ///<Message Buffer 4 CS Register
        using Addr = Register::Address<0x400a40c0,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id4{    ///<Message Buffer 4 ID Register
        using Addr = Register::Address<0x400a40c4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word04{    ///<Message Buffer 4 WORD0 Register
        using Addr = Register::Address<0x400a40c8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word14{    ///<Message Buffer 4 WORD1 Register
        using Addr = Register::Address<0x400a40cc,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Cs5{    ///<Message Buffer 5 CS Register
        using Addr = Register::Address<0x400a40d0,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id5{    ///<Message Buffer 5 ID Register
        using Addr = Register::Address<0x400a40d4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word05{    ///<Message Buffer 5 WORD0 Register
        using Addr = Register::Address<0x400a40d8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word15{    ///<Message Buffer 5 WORD1 Register
        using Addr = Register::Address<0x400a40dc,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Cs6{    ///<Message Buffer 6 CS Register
        using Addr = Register::Address<0x400a40e0,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id6{    ///<Message Buffer 6 ID Register
        using Addr = Register::Address<0x400a40e4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word06{    ///<Message Buffer 6 WORD0 Register
        using Addr = Register::Address<0x400a40e8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word16{    ///<Message Buffer 6 WORD1 Register
        using Addr = Register::Address<0x400a40ec,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Cs7{    ///<Message Buffer 7 CS Register
        using Addr = Register::Address<0x400a40f0,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id7{    ///<Message Buffer 7 ID Register
        using Addr = Register::Address<0x400a40f4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word07{    ///<Message Buffer 7 WORD0 Register
        using Addr = Register::Address<0x400a40f8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word17{    ///<Message Buffer 7 WORD1 Register
        using Addr = Register::Address<0x400a40fc,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Cs8{    ///<Message Buffer 8 CS Register
        using Addr = Register::Address<0x400a4100,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id8{    ///<Message Buffer 8 ID Register
        using Addr = Register::Address<0x400a4104,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word08{    ///<Message Buffer 8 WORD0 Register
        using Addr = Register::Address<0x400a4108,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word18{    ///<Message Buffer 8 WORD1 Register
        using Addr = Register::Address<0x400a410c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Cs9{    ///<Message Buffer 9 CS Register
        using Addr = Register::Address<0x400a4110,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id9{    ///<Message Buffer 9 ID Register
        using Addr = Register::Address<0x400a4114,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word09{    ///<Message Buffer 9 WORD0 Register
        using Addr = Register::Address<0x400a4118,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word19{    ///<Message Buffer 9 WORD1 Register
        using Addr = Register::Address<0x400a411c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Cs10{    ///<Message Buffer 10 CS Register
        using Addr = Register::Address<0x400a4120,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id10{    ///<Message Buffer 10 ID Register
        using Addr = Register::Address<0x400a4124,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word010{    ///<Message Buffer 10 WORD0 Register
        using Addr = Register::Address<0x400a4128,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word110{    ///<Message Buffer 10 WORD1 Register
        using Addr = Register::Address<0x400a412c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Cs11{    ///<Message Buffer 11 CS Register
        using Addr = Register::Address<0x400a4130,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id11{    ///<Message Buffer 11 ID Register
        using Addr = Register::Address<0x400a4134,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word011{    ///<Message Buffer 11 WORD0 Register
        using Addr = Register::Address<0x400a4138,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word111{    ///<Message Buffer 11 WORD1 Register
        using Addr = Register::Address<0x400a413c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Cs12{    ///<Message Buffer 12 CS Register
        using Addr = Register::Address<0x400a4140,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id12{    ///<Message Buffer 12 ID Register
        using Addr = Register::Address<0x400a4144,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word012{    ///<Message Buffer 12 WORD0 Register
        using Addr = Register::Address<0x400a4148,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word112{    ///<Message Buffer 12 WORD1 Register
        using Addr = Register::Address<0x400a414c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Cs13{    ///<Message Buffer 13 CS Register
        using Addr = Register::Address<0x400a4150,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id13{    ///<Message Buffer 13 ID Register
        using Addr = Register::Address<0x400a4154,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word013{    ///<Message Buffer 13 WORD0 Register
        using Addr = Register::Address<0x400a4158,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word113{    ///<Message Buffer 13 WORD1 Register
        using Addr = Register::Address<0x400a415c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Cs14{    ///<Message Buffer 14 CS Register
        using Addr = Register::Address<0x400a4160,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id14{    ///<Message Buffer 14 ID Register
        using Addr = Register::Address<0x400a4164,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word014{    ///<Message Buffer 14 WORD0 Register
        using Addr = Register::Address<0x400a4168,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word114{    ///<Message Buffer 14 WORD1 Register
        using Addr = Register::Address<0x400a416c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Cs15{    ///<Message Buffer 15 CS Register
        using Addr = Register::Address<0x400a4170,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
    }
    namespace Can1Id15{    ///<Message Buffer 15 ID Register
        using Addr = Register::Address<0x400a4174,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can1Word015{    ///<Message Buffer 15 WORD0 Register
        using Addr = Register::Address<0x400a4178,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can1Word115{    ///<Message Buffer 15 WORD1 Register
        using Addr = Register::Address<0x400a417c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can1Rximr0{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a4880,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can1Rximr1{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a4884,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can1Rximr2{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a4888,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can1Rximr3{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a488c,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can1Rximr4{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a4890,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can1Rximr5{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a4894,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can1Rximr6{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a4898,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can1Rximr7{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a489c,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can1Rximr8{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a48a0,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can1Rximr9{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a48a4,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can1Rximr10{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a48a8,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can1Rximr11{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a48ac,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can1Rximr12{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a48b0,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can1Rximr13{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a48b4,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can1Rximr14{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a48b8,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can1Rximr15{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400a48bc,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
}
