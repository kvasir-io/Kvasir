#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flex Controller Area Network module
    namespace Can0Mcr{    ///<Module Configuration Register
        using Addr = Register::Address<0x40024000,0x0008cc80,0,unsigned>;
        ///Number of the Last Message Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> maxmb{}; 
        namespace MaxmbValC{
        }
        ///ID Acceptance Mode
        enum class IdamVal {
            v00=0x00000000,     ///<Format A: One full ID (standard and extended) per ID Filter Table element.
            v01=0x00000001,     ///<Format B: Two full standard IDs or two partial 14-bit (standard and extended) IDs per ID Filter Table element.
            v10=0x00000002,     ///<Format C: Four partial 8-bit Standard IDs per ID Filter Table element.
            v11=0x00000003,     ///<Format D: All frames rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,IdamVal> idam{}; 
        namespace IdamValC{
            constexpr Register::FieldValue<decltype(idam),IdamVal::v00> v00{};
            constexpr Register::FieldValue<decltype(idam),IdamVal::v01> v01{};
            constexpr Register::FieldValue<decltype(idam),IdamVal::v10> v10{};
            constexpr Register::FieldValue<decltype(idam),IdamVal::v11> v11{};
        }
        ///Abort Enable
        enum class AenVal {
            v0=0x00000000,     ///<Abort disabled
            v1=0x00000001,     ///<Abort enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,AenVal> aen{}; 
        namespace AenValC{
            constexpr Register::FieldValue<decltype(aen),AenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aen),AenVal::v1> v1{};
        }
        ///Local Priority Enable
        enum class LprioenVal {
            v0=0x00000000,     ///<Local Priority disabled
            v1=0x00000001,     ///<Local Priority enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,LprioenVal> lprioen{}; 
        namespace LprioenValC{
            constexpr Register::FieldValue<decltype(lprioen),LprioenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lprioen),LprioenVal::v1> v1{};
        }
        ///Individual Rx Masking and Queue Enable
        enum class IrmqVal {
            v0=0x00000000,     ///<Individual Rx masking and queue feature are disabled. For backward compatibility, the reading of C/S word locks the MB even if it is EMPTY.
            v1=0x00000001,     ///<Individual Rx masking and queue feature are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,IrmqVal> irmq{}; 
        namespace IrmqValC{
            constexpr Register::FieldValue<decltype(irmq),IrmqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irmq),IrmqVal::v1> v1{};
        }
        ///Self Reception Disable
        enum class SrxdisVal {
            v0=0x00000000,     ///<Self reception enabled
            v1=0x00000001,     ///<Self reception disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,SrxdisVal> srxdis{}; 
        namespace SrxdisValC{
            constexpr Register::FieldValue<decltype(srxdis),SrxdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srxdis),SrxdisVal::v1> v1{};
        }
        ///Doze Mode Enable
        enum class DozeVal {
            v0=0x00000000,     ///<FlexCAN is not enabled to enter low power mode when Doze Mode is requested.
            v1=0x00000001,     ///<FlexCAN is enabled to enter low power mode when Doze Mode is requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,DozeVal> doze{}; 
        namespace DozeValC{
            constexpr Register::FieldValue<decltype(doze),DozeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(doze),DozeVal::v1> v1{};
        }
        ///Low Power Mode Acknowledge
        enum class LpmackVal {
            v0=0x00000000,     ///<FlexCAN is not in a low power mode.
            v1=0x00000001,     ///<FlexCAN is in a low power mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LpmackVal> lpmack{}; 
        namespace LpmackValC{
            constexpr Register::FieldValue<decltype(lpmack),LpmackVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpmack),LpmackVal::v1> v1{};
        }
        ///Warning Interrupt Enable
        enum class WrnenVal {
            v0=0x00000000,     ///<TWRNINT and RWRNINT bits are zero, independent of the values in the error counters.
            v1=0x00000001,     ///<TWRNINT and RWRNINT bits are set when the respective error counter transitions from less than 96 to greater than or equal to 96.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,WrnenVal> wrnen{}; 
        namespace WrnenValC{
            constexpr Register::FieldValue<decltype(wrnen),WrnenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wrnen),WrnenVal::v1> v1{};
        }
        ///Self Wake Up
        enum class SlfwakVal {
            v0=0x00000000,     ///<FlexCAN Self Wake Up feature is disabled.
            v1=0x00000001,     ///<FlexCAN Self Wake Up feature is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,SlfwakVal> slfwak{}; 
        namespace SlfwakValC{
            constexpr Register::FieldValue<decltype(slfwak),SlfwakVal::v0> v0{};
            constexpr Register::FieldValue<decltype(slfwak),SlfwakVal::v1> v1{};
        }
        ///Supervisor Mode
        enum class SupvVal {
            v0=0x00000000,     ///<FlexCAN is in User Mode. Affected registers allow both Supervisor and Unrestricted accesses.
            v1=0x00000001,     ///<FlexCAN is in Supervisor Mode. Affected registers allow only Supervisor access. Unrestricted access behaves as though the access was done to an unimplemented register location.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SupvVal> supv{}; 
        namespace SupvValC{
            constexpr Register::FieldValue<decltype(supv),SupvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(supv),SupvVal::v1> v1{};
        }
        ///Freeze Mode Acknowledge
        enum class FrzackVal {
            v0=0x00000000,     ///<FlexCAN not in Freeze Mode, prescaler running
            v1=0x00000001,     ///<FlexCAN in Freeze Mode, prescaler stopped
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,FrzackVal> frzack{}; 
        namespace FrzackValC{
            constexpr Register::FieldValue<decltype(frzack),FrzackVal::v0> v0{};
            constexpr Register::FieldValue<decltype(frzack),FrzackVal::v1> v1{};
        }
        ///Soft Reset
        enum class SoftrstVal {
            v0=0x00000000,     ///<No reset request
            v1=0x00000001,     ///<Resets the registers affected by soft reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,SoftrstVal> softrst{}; 
        namespace SoftrstValC{
            constexpr Register::FieldValue<decltype(softrst),SoftrstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(softrst),SoftrstVal::v1> v1{};
        }
        ///Wake Up Interrupt Mask
        enum class WakmskVal {
            v0=0x00000000,     ///<Wake Up Interrupt is disabled.
            v1=0x00000001,     ///<Wake Up Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,WakmskVal> wakmsk{}; 
        namespace WakmskValC{
            constexpr Register::FieldValue<decltype(wakmsk),WakmskVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wakmsk),WakmskVal::v1> v1{};
        }
        ///FlexCAN Not Ready
        enum class NotrdyVal {
            v0=0x00000000,     ///<FlexCAN module is either in Normal Mode, Listen-Only Mode or Loop-Back Mode.
            v1=0x00000001,     ///<FlexCAN module is either in Disable Mode, Doze Mode , Stop Mode or Freeze Mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,NotrdyVal> notrdy{}; 
        namespace NotrdyValC{
            constexpr Register::FieldValue<decltype(notrdy),NotrdyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(notrdy),NotrdyVal::v1> v1{};
        }
        ///Halt FlexCAN
        enum class HaltVal {
            v0=0x00000000,     ///<No Freeze Mode request.
            v1=0x00000001,     ///<Enters Freeze Mode if the FRZ bit is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,HaltVal> halt{}; 
        namespace HaltValC{
            constexpr Register::FieldValue<decltype(halt),HaltVal::v0> v0{};
            constexpr Register::FieldValue<decltype(halt),HaltVal::v1> v1{};
        }
        ///Rx FIFO Enable
        enum class RfenVal {
            v0=0x00000000,     ///<Rx FIFO not enabled
            v1=0x00000001,     ///<Rx FIFO enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,RfenVal> rfen{}; 
        namespace RfenValC{
            constexpr Register::FieldValue<decltype(rfen),RfenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rfen),RfenVal::v1> v1{};
        }
        ///Freeze Enable
        enum class FrzVal {
            v0=0x00000000,     ///<Not enabled to enter Freeze Mode
            v1=0x00000001,     ///<Enabled to enter Freeze Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,FrzVal> frz{}; 
        namespace FrzValC{
            constexpr Register::FieldValue<decltype(frz),FrzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(frz),FrzVal::v1> v1{};
        }
        ///Module Disable
        enum class MdisVal {
            v0=0x00000000,     ///<Enable the FlexCAN module.
            v1=0x00000001,     ///<Disable the FlexCAN module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,MdisVal> mdis{}; 
        namespace MdisValC{
            constexpr Register::FieldValue<decltype(mdis),MdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mdis),MdisVal::v1> v1{};
        }
    }
    namespace Can0Ctrl1{    ///<Control 1 Register
        using Addr = Register::Address<0x40024004,0x00000300,0,unsigned>;
        ///Propagation Segment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> propseg{}; 
        namespace PropsegValC{
        }
        ///Listen-Only Mode
        enum class LomVal {
            v0=0x00000000,     ///<Listen-Only Mode is deactivated.
            v1=0x00000001,     ///<FlexCAN module operates in Listen-Only Mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,LomVal> lom{}; 
        namespace LomValC{
            constexpr Register::FieldValue<decltype(lom),LomVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lom),LomVal::v1> v1{};
        }
        ///Lowest Buffer Transmitted First
        enum class LbufVal {
            v0=0x00000000,     ///<Buffer with highest priority is transmitted first.
            v1=0x00000001,     ///<Lowest number buffer is transmitted first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LbufVal> lbuf{}; 
        namespace LbufValC{
            constexpr Register::FieldValue<decltype(lbuf),LbufVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lbuf),LbufVal::v1> v1{};
        }
        ///Timer Sync
        enum class TsynVal {
            v0=0x00000000,     ///<Timer Sync feature disabled
            v1=0x00000001,     ///<Timer Sync feature enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TsynVal> tsyn{}; 
        namespace TsynValC{
            constexpr Register::FieldValue<decltype(tsyn),TsynVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsyn),TsynVal::v1> v1{};
        }
        ///Bus Off Recovery
        enum class BoffrecVal {
            v0=0x00000000,     ///<Automatic recovering from Bus Off state enabled, according to CAN Spec 2.0 part B
            v1=0x00000001,     ///<Automatic recovering from Bus Off state disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,BoffrecVal> boffrec{}; 
        namespace BoffrecValC{
            constexpr Register::FieldValue<decltype(boffrec),BoffrecVal::v0> v0{};
            constexpr Register::FieldValue<decltype(boffrec),BoffrecVal::v1> v1{};
        }
        ///CAN Bit Sampling
        enum class SmpVal {
            v0=0x00000000,     ///<Just one sample is used to determine the bit value.
            v1=0x00000001,     ///<Three samples are used to determine the value of the received bit: the regular one (sample point) and 2 preceding samples; a majority rule is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SmpVal> smp{}; 
        namespace SmpValC{
            constexpr Register::FieldValue<decltype(smp),SmpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smp),SmpVal::v1> v1{};
        }
        ///Rx Warning Interrupt Mask
        enum class RwrnmskVal {
            v0=0x00000000,     ///<Rx Warning Interrupt disabled
            v1=0x00000001,     ///<Rx Warning Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RwrnmskVal> rwrnmsk{}; 
        namespace RwrnmskValC{
            constexpr Register::FieldValue<decltype(rwrnmsk),RwrnmskVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwrnmsk),RwrnmskVal::v1> v1{};
        }
        ///Tx Warning Interrupt Mask
        enum class TwrnmskVal {
            v0=0x00000000,     ///<Tx Warning Interrupt disabled
            v1=0x00000001,     ///<Tx Warning Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TwrnmskVal> twrnmsk{}; 
        namespace TwrnmskValC{
            constexpr Register::FieldValue<decltype(twrnmsk),TwrnmskVal::v0> v0{};
            constexpr Register::FieldValue<decltype(twrnmsk),TwrnmskVal::v1> v1{};
        }
        ///Loop Back Mode
        enum class LpbVal {
            v0=0x00000000,     ///<Loop Back disabled
            v1=0x00000001,     ///<Loop Back enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,LpbVal> lpb{}; 
        namespace LpbValC{
            constexpr Register::FieldValue<decltype(lpb),LpbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpb),LpbVal::v1> v1{};
        }
        ///CAN Engine Clock Source
        enum class ClksrcVal {
            v0=0x00000000,     ///<The CAN engine clock source is the oscillator clock. Under this condition, the oscillator clock frequency must be lower than the bus clock.
            v1=0x00000001,     ///<The CAN engine clock source is the peripheral clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ClksrcVal> clksrc{}; 
        namespace ClksrcValC{
            constexpr Register::FieldValue<decltype(clksrc),ClksrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clksrc),ClksrcVal::v1> v1{};
        }
        ///Error Mask
        enum class ErrmskVal {
            v0=0x00000000,     ///<Error interrupt disabled
            v1=0x00000001,     ///<Error interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ErrmskVal> errmsk{}; 
        namespace ErrmskValC{
            constexpr Register::FieldValue<decltype(errmsk),ErrmskVal::v0> v0{};
            constexpr Register::FieldValue<decltype(errmsk),ErrmskVal::v1> v1{};
        }
        ///Bus Off Mask
        enum class BoffmskVal {
            v0=0x00000000,     ///<Bus Off interrupt disabled
            v1=0x00000001,     ///<Bus Off interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,BoffmskVal> boffmsk{}; 
        namespace BoffmskValC{
            constexpr Register::FieldValue<decltype(boffmsk),BoffmskVal::v0> v0{};
            constexpr Register::FieldValue<decltype(boffmsk),BoffmskVal::v1> v1{};
        }
        ///Phase Segment 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> pseg2{}; 
        namespace Pseg2ValC{
        }
        ///Phase Segment 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,unsigned> pseg1{}; 
        namespace Pseg1ValC{
        }
        ///Resync Jump Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> rjw{}; 
        namespace RjwValC{
        }
        ///Prescaler Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> presdiv{}; 
        namespace PresdivValC{
        }
    }
    namespace Can0Timer{    ///<Free Running Timer
        using Addr = Register::Address<0x40024008,0xffff0000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timer{}; 
        namespace TimerValC{
        }
    }
    namespace Can0Rxmgmask{    ///<Rx Mailboxes Global Mask Register
        using Addr = Register::Address<0x40024010,0x00000000,0,unsigned>;
        ///Rx Mailboxes Global Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mg{}; 
        namespace MgValC{
        }
    }
    namespace Can0Rx14mask{    ///<Rx 14 Mask Register
        using Addr = Register::Address<0x40024014,0x00000000,0,unsigned>;
        ///Rx Buffer 14 Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rx14m{}; 
        namespace Rx14mValC{
        }
    }
    namespace Can0Rx15mask{    ///<Rx 15 Mask Register
        using Addr = Register::Address<0x40024018,0x00000000,0,unsigned>;
        ///Rx Buffer 15 Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rx15m{}; 
        namespace Rx15mValC{
        }
    }
    namespace Can0Ecr{    ///<Error Counter
        using Addr = Register::Address<0x4002401c,0xffff0000,0,unsigned>;
        ///Transmit Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txerrcnt{}; 
        namespace TxerrcntValC{
        }
        ///Receive Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rxerrcnt{}; 
        namespace RxerrcntValC{
        }
    }
    namespace Can0Esr1{    ///<Error and Status 1 Register
        using Addr = Register::Address<0x40024020,0xfff80000,0,unsigned>;
        ///Wake-Up Interrupt
        enum class WakintVal {
            v0=0x00000000,     ///<No such occurrence
            v1=0x00000001,     ///<Indicates a recessive to dominant transition was received on the CAN bus
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,WakintVal> wakint{}; 
        namespace WakintValC{
            constexpr Register::FieldValue<decltype(wakint),WakintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wakint),WakintVal::v1> v1{};
        }
        ///Error Interrupt
        enum class ErrintVal {
            v0=0x00000000,     ///<No such occurrence
            v1=0x00000001,     ///<Indicates setting of any Error Bit in the Error and Status Register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ErrintVal> errint{}; 
        namespace ErrintValC{
            constexpr Register::FieldValue<decltype(errint),ErrintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(errint),ErrintVal::v1> v1{};
        }
        ///'Bus Off' Interrupt
        enum class BoffintVal {
            v0=0x00000000,     ///<No such occurrence
            v1=0x00000001,     ///<FlexCAN module entered 'Bus Off' state
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BoffintVal> boffint{}; 
        namespace BoffintValC{
            constexpr Register::FieldValue<decltype(boffint),BoffintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(boffint),BoffintVal::v1> v1{};
        }
        ///FlexCAN in Reception
        enum class RxVal {
            v0=0x00000000,     ///<FlexCAN is not receiving a message.
            v1=0x00000001,     ///<FlexCAN is receiving a message.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RxVal> rx{}; 
        namespace RxValC{
            constexpr Register::FieldValue<decltype(rx),RxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rx),RxVal::v1> v1{};
        }
        ///Fault Confinement State
        enum class FltconfVal {
            v00=0x00000000,     ///<Error Active
            v01=0x00000001,     ///<Error Passive
            v1x=0x00000002,     ///<Bus Off
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,FltconfVal> fltconf{}; 
        namespace FltconfValC{
            constexpr Register::FieldValue<decltype(fltconf),FltconfVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fltconf),FltconfVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fltconf),FltconfVal::v1x> v1x{};
        }
        ///FlexCAN in Transmission
        enum class TxVal {
            v0=0x00000000,     ///<FlexCAN is not transmitting a message.
            v1=0x00000001,     ///<FlexCAN is transmitting a message.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TxVal> tx{}; 
        namespace TxValC{
            constexpr Register::FieldValue<decltype(tx),TxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tx),TxVal::v1> v1{};
        }
        ///no description available
        enum class IdleVal {
            v0=0x00000000,     ///<No such occurrence
            v1=0x00000001,     ///<CAN bus is now IDLE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IdleVal> idle{}; 
        namespace IdleValC{
            constexpr Register::FieldValue<decltype(idle),IdleVal::v0> v0{};
            constexpr Register::FieldValue<decltype(idle),IdleVal::v1> v1{};
        }
        ///Rx Error Warning
        enum class RxwrnVal {
            v0=0x00000000,     ///<No such occurrence
            v1=0x00000001,     ///<RXERRCNT is greater than or equal to 96.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,RxwrnVal> rxwrn{}; 
        namespace RxwrnValC{
            constexpr Register::FieldValue<decltype(rxwrn),RxwrnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxwrn),RxwrnVal::v1> v1{};
        }
        ///TX Error Warning
        enum class TxwrnVal {
            v0=0x00000000,     ///<No such occurrence
            v1=0x00000001,     ///<TXERRCNT is greater than or equal to 96.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,TxwrnVal> txwrn{}; 
        namespace TxwrnValC{
            constexpr Register::FieldValue<decltype(txwrn),TxwrnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txwrn),TxwrnVal::v1> v1{};
        }
        ///Stuffing Error
        enum class StferrVal {
            v0=0x00000000,     ///<No such occurrence
            v1=0x00000001,     ///<A Stuffing Error occurred since last read of this register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,StferrVal> stferr{}; 
        namespace StferrValC{
            constexpr Register::FieldValue<decltype(stferr),StferrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stferr),StferrVal::v1> v1{};
        }
        ///Form Error
        enum class FrmerrVal {
            v0=0x00000000,     ///<No such occurrence
            v1=0x00000001,     ///<A Form Error occurred since last read of this register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,FrmerrVal> frmerr{}; 
        namespace FrmerrValC{
            constexpr Register::FieldValue<decltype(frmerr),FrmerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(frmerr),FrmerrVal::v1> v1{};
        }
        ///Cyclic Redundancy Check Error
        enum class CrcerrVal {
            v0=0x00000000,     ///<No such occurrence
            v1=0x00000001,     ///<A CRC error occurred since last read of this register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CrcerrVal> crcerr{}; 
        namespace CrcerrValC{
            constexpr Register::FieldValue<decltype(crcerr),CrcerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crcerr),CrcerrVal::v1> v1{};
        }
        ///Acknowledge Error
        enum class AckerrVal {
            v0=0x00000000,     ///<No such occurrence
            v1=0x00000001,     ///<An ACK error occurred since last read of this register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,AckerrVal> ackerr{}; 
        namespace AckerrValC{
            constexpr Register::FieldValue<decltype(ackerr),AckerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ackerr),AckerrVal::v1> v1{};
        }
        ///Bit0 Error
        enum class Bit0errVal {
            v0=0x00000000,     ///<No such occurrence
            v1=0x00000001,     ///<At least one bit sent as dominant is received as recessive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Bit0errVal> bit0err{}; 
        namespace Bit0errValC{
            constexpr Register::FieldValue<decltype(bit0err),Bit0errVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bit0err),Bit0errVal::v1> v1{};
        }
        ///Bit1 Error
        enum class Bit1errVal {
            v0=0x00000000,     ///<No such occurrence
            v1=0x00000001,     ///<At least one bit sent as recessive is received as dominant.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Bit1errVal> bit1err{}; 
        namespace Bit1errValC{
            constexpr Register::FieldValue<decltype(bit1err),Bit1errVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bit1err),Bit1errVal::v1> v1{};
        }
        ///Rx Warning Interrupt Flag
        enum class RwrnintVal {
            v0=0x00000000,     ///<No such occurrence
            v1=0x00000001,     ///<The Rx error counter transitioned from less than 96 to greater than or equal to 96.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,RwrnintVal> rwrnint{}; 
        namespace RwrnintValC{
            constexpr Register::FieldValue<decltype(rwrnint),RwrnintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwrnint),RwrnintVal::v1> v1{};
        }
        ///Tx Warning Interrupt Flag
        enum class TwrnintVal {
            v0=0x00000000,     ///<No such occurrence
            v1=0x00000001,     ///<The Tx error counter transitioned from less than 96 to greater than or equal to 96.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,TwrnintVal> twrnint{}; 
        namespace TwrnintValC{
            constexpr Register::FieldValue<decltype(twrnint),TwrnintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(twrnint),TwrnintVal::v1> v1{};
        }
        ///CAN Synchronization Status
        enum class SynchVal {
            v0=0x00000000,     ///<FlexCAN is not synchronized to the CAN bus.
            v1=0x00000001,     ///<FlexCAN is synchronized to the CAN bus.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch),SynchVal::v0> v0{};
            constexpr Register::FieldValue<decltype(synch),SynchVal::v1> v1{};
        }
    }
    namespace Can0Imask2{    ///<Interrupt Masks 2 Register
        using Addr = Register::Address<0x40024024,0x00000000,0,unsigned>;
        ///Buffer MBi Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bufhm{}; 
        namespace BufhmValC{
        }
    }
    namespace Can0Imask1{    ///<Interrupt Masks 1 Register
        using Addr = Register::Address<0x40024028,0x00000000,0,unsigned>;
        ///Buffer MBi Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buflm{}; 
        namespace BuflmValC{
        }
    }
    namespace Can0Iflag2{    ///<Interrupt Flags 2 Register
        using Addr = Register::Address<0x4002402c,0x00000000,0,unsigned>;
        ///Buffer MBi Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bufhi{}; 
        namespace BufhiValC{
        }
    }
    namespace Can0Iflag1{    ///<Interrupt Flags 1 Register
        using Addr = Register::Address<0x40024030,0x00000000,0,unsigned>;
        ///Buffer MBi Interrupt or "reserved"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> buf4to0i{}; 
        namespace Buf4to0iValC{
        }
        ///Buffer MB5 Interrupt or "Frames available in Rx FIFO"
        enum class Buf5iVal {
            v0=0x00000000,     ///<No occurrence of MB5 completing transmission/reception (when MCR[RFEN]=0) or of frame(s) available in the Rx FIFO (when MCR[RFEN]=1)
            v1=0x00000001,     ///<MB5 completed transmission/reception (when MCR[RFEN]=0) or frame(s) available in the Rx FIFO (when MCR[RFEN]=1)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Buf5iVal> buf5i{}; 
        namespace Buf5iValC{
            constexpr Register::FieldValue<decltype(buf5i),Buf5iVal::v0> v0{};
            constexpr Register::FieldValue<decltype(buf5i),Buf5iVal::v1> v1{};
        }
        ///Buffer MB6 Interrupt or "Rx FIFO Warning"
        enum class Buf6iVal {
            v0=0x00000000,     ///<No occurrence of MB6 completing transmission/reception (when MCR[RFEN]=0) or of Rx FIFO almost full (when MCR[RFEN]=1)
            v1=0x00000001,     ///<MB6 completed transmission/reception (when MCR[RFEN]=0) or Rx FIFO almost full (when MCR[RFEN]=1)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Buf6iVal> buf6i{}; 
        namespace Buf6iValC{
            constexpr Register::FieldValue<decltype(buf6i),Buf6iVal::v0> v0{};
            constexpr Register::FieldValue<decltype(buf6i),Buf6iVal::v1> v1{};
        }
        ///Buffer MB7 Interrupt or "Rx FIFO Overflow"
        enum class Buf7iVal {
            v0=0x00000000,     ///<No occurrence of MB7 completing transmission/reception (when MCR[RFEN]=0) or of Rx FIFO overflow (when MCR[RFEN]=1)
            v1=0x00000001,     ///<MB7 completed transmission/reception (when MCR[RFEN]=0) or Rx FIFO overflow (when MCR[RFEN]=1)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Buf7iVal> buf7i{}; 
        namespace Buf7iValC{
            constexpr Register::FieldValue<decltype(buf7i),Buf7iVal::v0> v0{};
            constexpr Register::FieldValue<decltype(buf7i),Buf7iVal::v1> v1{};
        }
        ///Buffer MBi Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> buf31to8i{}; 
        namespace Buf31to8iValC{
        }
    }
    namespace Can0Ctrl2{    ///<Control 2 Register
        using Addr = Register::Address<0x40024034,0xe000ffff,0,unsigned>;
        ///Entire Frame Arbitration Field Comparison Enable for Rx Mailboxes
        enum class EacenVal {
            v0=0x00000000,     ///<Rx Mailbox filter's IDE bit is always compared and RTR is never compared despite mask bits.
            v1=0x00000001,     ///<Enables the comparison of both Rx Mailbox filter's IDE and RTR bit with their corresponding bits within the incoming frame. Mask bits do apply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,EacenVal> eacen{}; 
        namespace EacenValC{
            constexpr Register::FieldValue<decltype(eacen),EacenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eacen),EacenVal::v1> v1{};
        }
        ///Remote Request Storing
        enum class RrsVal {
            v0=0x00000000,     ///<Remote Response Frame is generated.
            v1=0x00000001,     ///<Remote Request Frame is stored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RrsVal> rrs{}; 
        namespace RrsValC{
            constexpr Register::FieldValue<decltype(rrs),RrsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rrs),RrsVal::v1> v1{};
        }
        ///Mailboxes Reception Priority
        enum class MrpVal {
            v0=0x00000000,     ///<Matching starts from Rx FIFO and continues on Mailboxes.
            v1=0x00000001,     ///<Matching starts from Mailboxes and continues on Rx FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,MrpVal> mrp{}; 
        namespace MrpValC{
            constexpr Register::FieldValue<decltype(mrp),MrpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mrp),MrpVal::v1> v1{};
        }
        ///Tx Arbitration Start Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> tasd{}; 
        namespace TasdValC{
        }
        ///Number of Rx FIFO Filters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> rffn{}; 
        namespace RffnValC{
        }
        ///Write-Access to Memory in Freeze mode
        enum class WrmfrzVal {
            v0=0x00000000,     ///<Maintain the write access restrictions.
            v1=0x00000001,     ///<Enable unrestricted write access to FlexCAN memory.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,WrmfrzVal> wrmfrz{}; 
        namespace WrmfrzValC{
            constexpr Register::FieldValue<decltype(wrmfrz),WrmfrzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wrmfrz),WrmfrzVal::v1> v1{};
        }
    }
    namespace Can0Esr2{    ///<Error and Status 2 Register
        using Addr = Register::Address<0x40024038,0xff809fff,0,unsigned>;
        ///Inactive Mailbox
        enum class ImbVal {
            v0=0x00000000,     ///<If ESR2[VPS] is asserted, the ESR2[LPTM] is not an inactive Mailbox.
            v1=0x00000001,     ///<If ESR2[VPS] is asserted, there is at least one inactive Mailbox. LPTM content is the number of the first one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ImbVal> imb{}; 
        namespace ImbValC{
            constexpr Register::FieldValue<decltype(imb),ImbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(imb),ImbVal::v1> v1{};
        }
        ///Valid Priority Status
        enum class VpsVal {
            v0=0x00000000,     ///<Contents of IMB and LPTM are invalid.
            v1=0x00000001,     ///<Contents of IMB and LPTM are valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,VpsVal> vps{}; 
        namespace VpsValC{
            constexpr Register::FieldValue<decltype(vps),VpsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vps),VpsVal::v1> v1{};
        }
        ///Lowest Priority Tx Mailbox
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> lptm{}; 
        namespace LptmValC{
        }
    }
    namespace Can0Crcr{    ///<CRC Register
        using Addr = Register::Address<0x40024044,0xff808000,0,unsigned>;
        ///CRC Transmitted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> txcrc{}; 
        namespace TxcrcValC{
        }
        ///CRC Mailbox
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mbcrc{}; 
        namespace MbcrcValC{
        }
    }
    namespace Can0Rxfgmask{    ///<Rx FIFO Global Mask Register
        using Addr = Register::Address<0x40024048,0x00000000,0,unsigned>;
        ///Rx FIFO Global Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fgm{}; 
        namespace FgmValC{
        }
    }
    namespace Can0Rxfir{    ///<Rx FIFO Information Register
        using Addr = Register::Address<0x4002404c,0xfffffe00,0,unsigned>;
        ///Identifier Acceptance Filter Hit Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> idhit{}; 
        namespace IdhitValC{
        }
    }
    namespace Can0Cs0{    ///<Message Buffer 0 CS Register
        using Addr = Register::Address<0x40024080,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id0{    ///<Message Buffer 0 ID Register
        using Addr = Register::Address<0x40024084,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word00{    ///<Message Buffer 0 WORD0 Register
        using Addr = Register::Address<0x40024088,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word10{    ///<Message Buffer 0 WORD1 Register
        using Addr = Register::Address<0x4002408c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Cs1{    ///<Message Buffer 1 CS Register
        using Addr = Register::Address<0x40024090,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id1{    ///<Message Buffer 1 ID Register
        using Addr = Register::Address<0x40024094,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word01{    ///<Message Buffer 1 WORD0 Register
        using Addr = Register::Address<0x40024098,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word11{    ///<Message Buffer 1 WORD1 Register
        using Addr = Register::Address<0x4002409c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Cs2{    ///<Message Buffer 2 CS Register
        using Addr = Register::Address<0x400240a0,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id2{    ///<Message Buffer 2 ID Register
        using Addr = Register::Address<0x400240a4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word02{    ///<Message Buffer 2 WORD0 Register
        using Addr = Register::Address<0x400240a8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word12{    ///<Message Buffer 2 WORD1 Register
        using Addr = Register::Address<0x400240ac,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Cs3{    ///<Message Buffer 3 CS Register
        using Addr = Register::Address<0x400240b0,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id3{    ///<Message Buffer 3 ID Register
        using Addr = Register::Address<0x400240b4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word03{    ///<Message Buffer 3 WORD0 Register
        using Addr = Register::Address<0x400240b8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word13{    ///<Message Buffer 3 WORD1 Register
        using Addr = Register::Address<0x400240bc,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Cs4{    ///<Message Buffer 4 CS Register
        using Addr = Register::Address<0x400240c0,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id4{    ///<Message Buffer 4 ID Register
        using Addr = Register::Address<0x400240c4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word04{    ///<Message Buffer 4 WORD0 Register
        using Addr = Register::Address<0x400240c8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word14{    ///<Message Buffer 4 WORD1 Register
        using Addr = Register::Address<0x400240cc,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Cs5{    ///<Message Buffer 5 CS Register
        using Addr = Register::Address<0x400240d0,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id5{    ///<Message Buffer 5 ID Register
        using Addr = Register::Address<0x400240d4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word05{    ///<Message Buffer 5 WORD0 Register
        using Addr = Register::Address<0x400240d8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word15{    ///<Message Buffer 5 WORD1 Register
        using Addr = Register::Address<0x400240dc,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Cs6{    ///<Message Buffer 6 CS Register
        using Addr = Register::Address<0x400240e0,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id6{    ///<Message Buffer 6 ID Register
        using Addr = Register::Address<0x400240e4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word06{    ///<Message Buffer 6 WORD0 Register
        using Addr = Register::Address<0x400240e8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word16{    ///<Message Buffer 6 WORD1 Register
        using Addr = Register::Address<0x400240ec,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Cs7{    ///<Message Buffer 7 CS Register
        using Addr = Register::Address<0x400240f0,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id7{    ///<Message Buffer 7 ID Register
        using Addr = Register::Address<0x400240f4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word07{    ///<Message Buffer 7 WORD0 Register
        using Addr = Register::Address<0x400240f8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word17{    ///<Message Buffer 7 WORD1 Register
        using Addr = Register::Address<0x400240fc,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Cs8{    ///<Message Buffer 8 CS Register
        using Addr = Register::Address<0x40024100,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id8{    ///<Message Buffer 8 ID Register
        using Addr = Register::Address<0x40024104,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word08{    ///<Message Buffer 8 WORD0 Register
        using Addr = Register::Address<0x40024108,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word18{    ///<Message Buffer 8 WORD1 Register
        using Addr = Register::Address<0x4002410c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Cs9{    ///<Message Buffer 9 CS Register
        using Addr = Register::Address<0x40024110,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id9{    ///<Message Buffer 9 ID Register
        using Addr = Register::Address<0x40024114,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word09{    ///<Message Buffer 9 WORD0 Register
        using Addr = Register::Address<0x40024118,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word19{    ///<Message Buffer 9 WORD1 Register
        using Addr = Register::Address<0x4002411c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Cs10{    ///<Message Buffer 10 CS Register
        using Addr = Register::Address<0x40024120,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id10{    ///<Message Buffer 10 ID Register
        using Addr = Register::Address<0x40024124,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word010{    ///<Message Buffer 10 WORD0 Register
        using Addr = Register::Address<0x40024128,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word110{    ///<Message Buffer 10 WORD1 Register
        using Addr = Register::Address<0x4002412c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Cs11{    ///<Message Buffer 11 CS Register
        using Addr = Register::Address<0x40024130,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id11{    ///<Message Buffer 11 ID Register
        using Addr = Register::Address<0x40024134,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word011{    ///<Message Buffer 11 WORD0 Register
        using Addr = Register::Address<0x40024138,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word111{    ///<Message Buffer 11 WORD1 Register
        using Addr = Register::Address<0x4002413c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Cs12{    ///<Message Buffer 12 CS Register
        using Addr = Register::Address<0x40024140,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id12{    ///<Message Buffer 12 ID Register
        using Addr = Register::Address<0x40024144,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word012{    ///<Message Buffer 12 WORD0 Register
        using Addr = Register::Address<0x40024148,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word112{    ///<Message Buffer 12 WORD1 Register
        using Addr = Register::Address<0x4002414c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Cs13{    ///<Message Buffer 13 CS Register
        using Addr = Register::Address<0x40024150,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id13{    ///<Message Buffer 13 ID Register
        using Addr = Register::Address<0x40024154,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word013{    ///<Message Buffer 13 WORD0 Register
        using Addr = Register::Address<0x40024158,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word113{    ///<Message Buffer 13 WORD1 Register
        using Addr = Register::Address<0x4002415c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Cs14{    ///<Message Buffer 14 CS Register
        using Addr = Register::Address<0x40024160,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id14{    ///<Message Buffer 14 ID Register
        using Addr = Register::Address<0x40024164,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word014{    ///<Message Buffer 14 WORD0 Register
        using Addr = Register::Address<0x40024168,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word114{    ///<Message Buffer 14 WORD1 Register
        using Addr = Register::Address<0x4002416c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Cs15{    ///<Message Buffer 15 CS Register
        using Addr = Register::Address<0x40024170,0xf0800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        namespace TimestampValC{
        }
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        namespace SrrValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
    }
    namespace Can0Id15{    ///<Message Buffer 15 ID Register
        using Addr = Register::Address<0x40024174,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        namespace StdValC{
        }
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
        namespace PrioValC{
        }
    }
    namespace Can0Word015{    ///<Message Buffer 15 WORD0 Register
        using Addr = Register::Address<0x40024178,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        namespace Databyte3ValC{
        }
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        namespace Databyte2ValC{
        }
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        namespace Databyte1ValC{
        }
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
        namespace Databyte0ValC{
        }
    }
    namespace Can0Word115{    ///<Message Buffer 15 WORD1 Register
        using Addr = Register::Address<0x4002417c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        namespace Databyte7ValC{
        }
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        namespace Databyte6ValC{
        }
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        namespace Databyte5ValC{
        }
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
        namespace Databyte4ValC{
        }
    }
    namespace Can0Rximr0{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x40024880,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Can0Rximr1{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x40024884,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Can0Rximr2{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x40024888,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Can0Rximr3{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x4002488c,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Can0Rximr4{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x40024890,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Can0Rximr5{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x40024894,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Can0Rximr6{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x40024898,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Can0Rximr7{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x4002489c,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Can0Rximr8{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248a0,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Can0Rximr9{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248a4,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Can0Rximr10{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248a8,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Can0Rximr11{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248ac,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Can0Rximr12{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248b0,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Can0Rximr13{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248b4,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Can0Rximr14{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248b8,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Can0Rximr15{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248bc,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
}
