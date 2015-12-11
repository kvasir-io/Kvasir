#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flex Controller Area Network module
    namespace Can0Mcr{    ///<Module Configuration Register
        using Addr = Register::Address<0x40024000,0x00004c80,0,unsigned>;
        ///Number Of The Last Message Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> maxmb{}; 
        ///ID Acceptance Mode
        enum class IdamVal {
            v00=0x00000000,     ///<Format A: One full ID (standard and extended) per ID Filter Table element.
            v01=0x00000001,     ///<Format B: Two full standard IDs or two partial 14-bit (standard and extended) IDs per ID Filter Table element.
            v10=0x00000002,     ///<Format C: Four partial 8-bit Standard IDs per ID Filter Table element.
            v11=0x00000003,     ///<Format D: All frames rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,IdamVal> idam{}; 
        namespace IdamValC{
            constexpr Register::FieldValue<decltype(idam)::Type,IdamVal::v00> v00{};
            constexpr Register::FieldValue<decltype(idam)::Type,IdamVal::v01> v01{};
            constexpr Register::FieldValue<decltype(idam)::Type,IdamVal::v10> v10{};
            constexpr Register::FieldValue<decltype(idam)::Type,IdamVal::v11> v11{};
        }
        ///Abort Enable
        enum class AenVal {
            v0=0x00000000,     ///<Abort disabled.
            v1=0x00000001,     ///<Abort enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,AenVal> aen{}; 
        namespace AenValC{
            constexpr Register::FieldValue<decltype(aen)::Type,AenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aen)::Type,AenVal::v1> v1{};
        }
        ///Local Priority Enable
        enum class LprioenVal {
            v0=0x00000000,     ///<Local Priority disabled.
            v1=0x00000001,     ///<Local Priority enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,LprioenVal> lprioen{}; 
        namespace LprioenValC{
            constexpr Register::FieldValue<decltype(lprioen)::Type,LprioenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lprioen)::Type,LprioenVal::v1> v1{};
        }
        ///DMA Enable
        enum class DmaVal {
            v0=0x00000000,     ///<DMA feature for RX FIFO disabled.
            v1=0x00000001,     ///<DMA feature for RX FIFO enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v1> v1{};
        }
        ///Individual Rx Masking And Queue Enable
        enum class IrmqVal {
            v0=0x00000000,     ///<Individual Rx masking and queue feature are disabled. For backward compatibility with legacy applications, the reading of C/S word locks the MB even if it is EMPTY.
            v1=0x00000001,     ///<Individual Rx masking and queue feature are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,IrmqVal> irmq{}; 
        namespace IrmqValC{
            constexpr Register::FieldValue<decltype(irmq)::Type,IrmqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irmq)::Type,IrmqVal::v1> v1{};
        }
        ///Self Reception Disable
        enum class SrxdisVal {
            v0=0x00000000,     ///<Self reception enabled.
            v1=0x00000001,     ///<Self reception disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,SrxdisVal> srxdis{}; 
        namespace SrxdisValC{
            constexpr Register::FieldValue<decltype(srxdis)::Type,SrxdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srxdis)::Type,SrxdisVal::v1> v1{};
        }
        ///Doze Mode Enable
        enum class DozeVal {
            v0=0x00000000,     ///<FlexCAN is not enabled to enter low-power mode when Doze mode is requested.
            v1=0x00000001,     ///<FlexCAN is enabled to enter low-power mode when Doze mode is requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,DozeVal> doze{}; 
        namespace DozeValC{
            constexpr Register::FieldValue<decltype(doze)::Type,DozeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(doze)::Type,DozeVal::v1> v1{};
        }
        ///Wake Up Source
        enum class WaksrcVal {
            v0=0x00000000,     ///<FlexCAN uses the unfiltered Rx input to detect recessive to dominant edges on the CAN bus.
            v1=0x00000001,     ///<FlexCAN uses the filtered Rx input to detect recessive to dominant edges on the CAN bus.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,WaksrcVal> waksrc{}; 
        namespace WaksrcValC{
            constexpr Register::FieldValue<decltype(waksrc)::Type,WaksrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(waksrc)::Type,WaksrcVal::v1> v1{};
        }
        ///Low-Power Mode Acknowledge
        enum class LpmackVal {
            v0=0x00000000,     ///<FlexCAN is not in a low-power mode.
            v1=0x00000001,     ///<FlexCAN is in a low-power mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LpmackVal> lpmack{}; 
        namespace LpmackValC{
            constexpr Register::FieldValue<decltype(lpmack)::Type,LpmackVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpmack)::Type,LpmackVal::v1> v1{};
        }
        ///Warning Interrupt Enable
        enum class WrnenVal {
            v0=0x00000000,     ///<TWRNINT and RWRNINT bits are zero, independent of the values in the error counters.
            v1=0x00000001,     ///<TWRNINT and RWRNINT bits are set when the respective error counter transitions from less than 96 to greater than or equal to 96.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,WrnenVal> wrnen{}; 
        namespace WrnenValC{
            constexpr Register::FieldValue<decltype(wrnen)::Type,WrnenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wrnen)::Type,WrnenVal::v1> v1{};
        }
        ///Self Wake Up
        enum class SlfwakVal {
            v0=0x00000000,     ///<FlexCAN Self Wake Up feature is disabled.
            v1=0x00000001,     ///<FlexCAN Self Wake Up feature is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,SlfwakVal> slfwak{}; 
        namespace SlfwakValC{
            constexpr Register::FieldValue<decltype(slfwak)::Type,SlfwakVal::v0> v0{};
            constexpr Register::FieldValue<decltype(slfwak)::Type,SlfwakVal::v1> v1{};
        }
        ///Supervisor Mode
        enum class SupvVal {
            v0=0x00000000,     ///<FlexCAN is in User mode. Affected registers allow both Supervisor and Unrestricted accesses .
            v1=0x00000001,     ///<FlexCAN is in Supervisor mode. Affected registers allow only Supervisor access. Unrestricted access behaves as though the access was done to an unimplemented register location .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SupvVal> supv{}; 
        namespace SupvValC{
            constexpr Register::FieldValue<decltype(supv)::Type,SupvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(supv)::Type,SupvVal::v1> v1{};
        }
        ///Freeze Mode Acknowledge
        enum class FrzackVal {
            v0=0x00000000,     ///<FlexCAN not in Freeze mode, prescaler running.
            v1=0x00000001,     ///<FlexCAN in Freeze mode, prescaler stopped.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,FrzackVal> frzack{}; 
        namespace FrzackValC{
            constexpr Register::FieldValue<decltype(frzack)::Type,FrzackVal::v0> v0{};
            constexpr Register::FieldValue<decltype(frzack)::Type,FrzackVal::v1> v1{};
        }
        ///Soft Reset
        enum class SoftrstVal {
            v0=0x00000000,     ///<No reset request.
            v1=0x00000001,     ///<Resets the registers affected by soft reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,SoftrstVal> softrst{}; 
        namespace SoftrstValC{
            constexpr Register::FieldValue<decltype(softrst)::Type,SoftrstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(softrst)::Type,SoftrstVal::v1> v1{};
        }
        ///Wake Up Interrupt Mask
        enum class WakmskVal {
            v0=0x00000000,     ///<Wake Up Interrupt is disabled.
            v1=0x00000001,     ///<Wake Up Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,WakmskVal> wakmsk{}; 
        namespace WakmskValC{
            constexpr Register::FieldValue<decltype(wakmsk)::Type,WakmskVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wakmsk)::Type,WakmskVal::v1> v1{};
        }
        ///FlexCAN Not Ready
        enum class NotrdyVal {
            v0=0x00000000,     ///<FlexCAN module is either in Normal mode, Listen-Only mode or Loop-Back mode.
            v1=0x00000001,     ///<FlexCAN module is either in Disable mode , Doze mode , Stop mode or Freeze mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,NotrdyVal> notrdy{}; 
        namespace NotrdyValC{
            constexpr Register::FieldValue<decltype(notrdy)::Type,NotrdyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(notrdy)::Type,NotrdyVal::v1> v1{};
        }
        ///Halt FlexCAN
        enum class HaltVal {
            v0=0x00000000,     ///<No Freeze mode request.
            v1=0x00000001,     ///<Enters Freeze mode if the FRZ bit is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,HaltVal> halt{}; 
        namespace HaltValC{
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::v0> v0{};
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::v1> v1{};
        }
        ///Rx FIFO Enable
        enum class RfenVal {
            v0=0x00000000,     ///<Rx FIFO not enabled.
            v1=0x00000001,     ///<Rx FIFO enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,RfenVal> rfen{}; 
        namespace RfenValC{
            constexpr Register::FieldValue<decltype(rfen)::Type,RfenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rfen)::Type,RfenVal::v1> v1{};
        }
        ///Freeze Enable
        enum class FrzVal {
            v0=0x00000000,     ///<Not enabled to enter Freeze mode.
            v1=0x00000001,     ///<Enabled to enter Freeze mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,FrzVal> frz{}; 
        namespace FrzValC{
            constexpr Register::FieldValue<decltype(frz)::Type,FrzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(frz)::Type,FrzVal::v1> v1{};
        }
        ///Module Disable
        enum class MdisVal {
            v0=0x00000000,     ///<Enable the FlexCAN module.
            v1=0x00000001,     ///<Disable the FlexCAN module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,MdisVal> mdis{}; 
        namespace MdisValC{
            constexpr Register::FieldValue<decltype(mdis)::Type,MdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mdis)::Type,MdisVal::v1> v1{};
        }
    }
    namespace Can0Ctrl1{    ///<Control 1 register
        using Addr = Register::Address<0x40024004,0x00000300,0,unsigned>;
        ///Propagation Segment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> propseg{}; 
        ///Listen-Only Mode
        enum class LomVal {
            v0=0x00000000,     ///<Listen-Only mode is deactivated.
            v1=0x00000001,     ///<FlexCAN module operates in Listen-Only mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,LomVal> lom{}; 
        namespace LomValC{
            constexpr Register::FieldValue<decltype(lom)::Type,LomVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lom)::Type,LomVal::v1> v1{};
        }
        ///Lowest Buffer Transmitted First
        enum class LbufVal {
            v0=0x00000000,     ///<Buffer with highest priority is transmitted first.
            v1=0x00000001,     ///<Lowest number buffer is transmitted first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LbufVal> lbuf{}; 
        namespace LbufValC{
            constexpr Register::FieldValue<decltype(lbuf)::Type,LbufVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lbuf)::Type,LbufVal::v1> v1{};
        }
        ///Timer Sync
        enum class TsynVal {
            v0=0x00000000,     ///<Timer Sync feature disabled
            v1=0x00000001,     ///<Timer Sync feature enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TsynVal> tsyn{}; 
        namespace TsynValC{
            constexpr Register::FieldValue<decltype(tsyn)::Type,TsynVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsyn)::Type,TsynVal::v1> v1{};
        }
        ///Bus Off Recovery
        enum class BoffrecVal {
            v0=0x00000000,     ///<Automatic recovering from Bus Off state enabled.
            v1=0x00000001,     ///<Automatic recovering from Bus Off state disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,BoffrecVal> boffrec{}; 
        namespace BoffrecValC{
            constexpr Register::FieldValue<decltype(boffrec)::Type,BoffrecVal::v0> v0{};
            constexpr Register::FieldValue<decltype(boffrec)::Type,BoffrecVal::v1> v1{};
        }
        ///CAN Bit Sampling
        enum class SmpVal {
            v0=0x00000000,     ///<Just one sample is used to determine the bit value.
            v1=0x00000001,     ///<Three samples are used to determine the value of the received bit: the regular one (sample point) and 2 preceding samples; a majority rule is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SmpVal> smp{}; 
        namespace SmpValC{
            constexpr Register::FieldValue<decltype(smp)::Type,SmpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smp)::Type,SmpVal::v1> v1{};
        }
        ///Rx Warning Interrupt Mask
        enum class RwrnmskVal {
            v0=0x00000000,     ///<Rx Warning Interrupt disabled.
            v1=0x00000001,     ///<Rx Warning Interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RwrnmskVal> rwrnmsk{}; 
        namespace RwrnmskValC{
            constexpr Register::FieldValue<decltype(rwrnmsk)::Type,RwrnmskVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwrnmsk)::Type,RwrnmskVal::v1> v1{};
        }
        ///Tx Warning Interrupt Mask
        enum class TwrnmskVal {
            v0=0x00000000,     ///<Tx Warning Interrupt disabled.
            v1=0x00000001,     ///<Tx Warning Interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TwrnmskVal> twrnmsk{}; 
        namespace TwrnmskValC{
            constexpr Register::FieldValue<decltype(twrnmsk)::Type,TwrnmskVal::v0> v0{};
            constexpr Register::FieldValue<decltype(twrnmsk)::Type,TwrnmskVal::v1> v1{};
        }
        ///Loop Back Mode
        enum class LpbVal {
            v0=0x00000000,     ///<Loop Back disabled.
            v1=0x00000001,     ///<Loop Back enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,LpbVal> lpb{}; 
        namespace LpbValC{
            constexpr Register::FieldValue<decltype(lpb)::Type,LpbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpb)::Type,LpbVal::v1> v1{};
        }
        ///CAN Engine Clock Source
        enum class ClksrcVal {
            v0=0x00000000,     ///<The CAN engine clock source is the oscillator clock. Under this condition, the oscillator clock frequency must be lower than the bus clock.
            v1=0x00000001,     ///<The CAN engine clock source is the peripheral clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ClksrcVal> clksrc{}; 
        namespace ClksrcValC{
            constexpr Register::FieldValue<decltype(clksrc)::Type,ClksrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clksrc)::Type,ClksrcVal::v1> v1{};
        }
        ///Error Interrupt Mask
        enum class ErrmskVal {
            v0=0x00000000,     ///<Error interrupt disabled.
            v1=0x00000001,     ///<Error interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ErrmskVal> errmsk{}; 
        namespace ErrmskValC{
            constexpr Register::FieldValue<decltype(errmsk)::Type,ErrmskVal::v0> v0{};
            constexpr Register::FieldValue<decltype(errmsk)::Type,ErrmskVal::v1> v1{};
        }
        ///Bus Off Interrupt Mask
        enum class BoffmskVal {
            v0=0x00000000,     ///<Bus Off interrupt disabled.
            v1=0x00000001,     ///<Bus Off interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,BoffmskVal> boffmsk{}; 
        namespace BoffmskValC{
            constexpr Register::FieldValue<decltype(boffmsk)::Type,BoffmskVal::v0> v0{};
            constexpr Register::FieldValue<decltype(boffmsk)::Type,BoffmskVal::v1> v1{};
        }
        ///Phase Segment 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> pseg2{}; 
        ///Phase Segment 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,unsigned> pseg1{}; 
        ///Resync Jump Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> rjw{}; 
        ///Prescaler Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> presdiv{}; 
    }
    namespace Can0Timer{    ///<Free Running Timer
        using Addr = Register::Address<0x40024008,0xffff0000,0,unsigned>;
        ///Timer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timer{}; 
    }
    namespace Can0Rxmgmask{    ///<Rx Mailboxes Global Mask Register
        using Addr = Register::Address<0x40024010,0x00000000,0,unsigned>;
        ///Rx Mailboxes Global Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mg{}; 
    }
    namespace Can0Rx14mask{    ///<Rx 14 Mask register
        using Addr = Register::Address<0x40024014,0x00000000,0,unsigned>;
        ///Rx Buffer 14 Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rx14m{}; 
    }
    namespace Can0Rx15mask{    ///<Rx 15 Mask register
        using Addr = Register::Address<0x40024018,0x00000000,0,unsigned>;
        ///Rx Buffer 15 Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rx15m{}; 
    }
    namespace Can0Ecr{    ///<Error Counter
        using Addr = Register::Address<0x4002401c,0xffff0000,0,unsigned>;
        ///Transmit Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txerrcnt{}; 
        ///Receive Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rxerrcnt{}; 
    }
    namespace Can0Esr1{    ///<Error and Status 1 register
        using Addr = Register::Address<0x40024020,0xffd00000,0,unsigned>;
        ///Wake-Up Interrupt
        enum class WakintVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<Indicates a recessive to dominant transition was received on the CAN bus.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,WakintVal> wakint{}; 
        namespace WakintValC{
            constexpr Register::FieldValue<decltype(wakint)::Type,WakintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wakint)::Type,WakintVal::v1> v1{};
        }
        ///Error Interrupt
        enum class ErrintVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<Indicates setting of any Error Bit in the Error and Status Register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ErrintVal> errint{}; 
        namespace ErrintValC{
            constexpr Register::FieldValue<decltype(errint)::Type,ErrintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(errint)::Type,ErrintVal::v1> v1{};
        }
        ///Bus Off Interrupt
        enum class BoffintVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<FlexCAN module entered Bus Off state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BoffintVal> boffint{}; 
        namespace BoffintValC{
            constexpr Register::FieldValue<decltype(boffint)::Type,BoffintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(boffint)::Type,BoffintVal::v1> v1{};
        }
        ///FlexCAN In Reception
        enum class RxVal {
            v0=0x00000000,     ///<FlexCAN is not receiving a message.
            v1=0x00000001,     ///<FlexCAN is receiving a message.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RxVal> rx{}; 
        namespace RxValC{
            constexpr Register::FieldValue<decltype(rx)::Type,RxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rx)::Type,RxVal::v1> v1{};
        }
        ///Fault Confinement State
        enum class FltconfVal {
            v00=0x00000000,     ///<Error Active
            v01=0x00000001,     ///<Error Passive
            v1x=0x00000002,     ///<Bus Off
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,FltconfVal> fltconf{}; 
        namespace FltconfValC{
            constexpr Register::FieldValue<decltype(fltconf)::Type,FltconfVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fltconf)::Type,FltconfVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fltconf)::Type,FltconfVal::v1x> v1x{};
        }
        ///FlexCAN In Transmission
        enum class TxVal {
            v0=0x00000000,     ///<FlexCAN is not transmitting a message.
            v1=0x00000001,     ///<FlexCAN is transmitting a message.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TxVal> tx{}; 
        namespace TxValC{
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::v1> v1{};
        }
        ///no description available
        enum class IdleVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<CAN bus is now IDLE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IdleVal> idle{}; 
        namespace IdleValC{
            constexpr Register::FieldValue<decltype(idle)::Type,IdleVal::v0> v0{};
            constexpr Register::FieldValue<decltype(idle)::Type,IdleVal::v1> v1{};
        }
        ///Rx Error Warning
        enum class RxwrnVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<RXERRCNT is greater than or equal to 96.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,RxwrnVal> rxwrn{}; 
        namespace RxwrnValC{
            constexpr Register::FieldValue<decltype(rxwrn)::Type,RxwrnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxwrn)::Type,RxwrnVal::v1> v1{};
        }
        ///TX Error Warning
        enum class TxwrnVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<TXERRCNT is greater than or equal to 96.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,TxwrnVal> txwrn{}; 
        namespace TxwrnValC{
            constexpr Register::FieldValue<decltype(txwrn)::Type,TxwrnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txwrn)::Type,TxwrnVal::v1> v1{};
        }
        ///Stuffing Error
        enum class StferrVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<A Stuffing Error occurred since last read of this register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,StferrVal> stferr{}; 
        namespace StferrValC{
            constexpr Register::FieldValue<decltype(stferr)::Type,StferrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stferr)::Type,StferrVal::v1> v1{};
        }
        ///Form Error
        enum class FrmerrVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<A Form Error occurred since last read of this register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,FrmerrVal> frmerr{}; 
        namespace FrmerrValC{
            constexpr Register::FieldValue<decltype(frmerr)::Type,FrmerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(frmerr)::Type,FrmerrVal::v1> v1{};
        }
        ///Cyclic Redundancy Check Error
        enum class CrcerrVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<A CRC error occurred since last read of this register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CrcerrVal> crcerr{}; 
        namespace CrcerrValC{
            constexpr Register::FieldValue<decltype(crcerr)::Type,CrcerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crcerr)::Type,CrcerrVal::v1> v1{};
        }
        ///Acknowledge Error
        enum class AckerrVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<An ACK error occurred since last read of this register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,AckerrVal> ackerr{}; 
        namespace AckerrValC{
            constexpr Register::FieldValue<decltype(ackerr)::Type,AckerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ackerr)::Type,AckerrVal::v1> v1{};
        }
        ///Bit0 Error
        enum class Bit0errVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<At least one bit sent as dominant is received as recessive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Bit0errVal> bit0err{}; 
        namespace Bit0errValC{
            constexpr Register::FieldValue<decltype(bit0err)::Type,Bit0errVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bit0err)::Type,Bit0errVal::v1> v1{};
        }
        ///Bit1 Error
        enum class Bit1errVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<At least one bit sent as recessive is received as dominant.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Bit1errVal> bit1err{}; 
        namespace Bit1errValC{
            constexpr Register::FieldValue<decltype(bit1err)::Type,Bit1errVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bit1err)::Type,Bit1errVal::v1> v1{};
        }
        ///Rx Warning Interrupt Flag
        enum class RwrnintVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<The Rx error counter transitioned from less than 96 to greater than or equal to 96.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,RwrnintVal> rwrnint{}; 
        namespace RwrnintValC{
            constexpr Register::FieldValue<decltype(rwrnint)::Type,RwrnintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwrnint)::Type,RwrnintVal::v1> v1{};
        }
        ///Tx Warning Interrupt Flag
        enum class TwrnintVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<The Tx error counter transitioned from less than 96 to greater than or equal to 96.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,TwrnintVal> twrnint{}; 
        namespace TwrnintValC{
            constexpr Register::FieldValue<decltype(twrnint)::Type,TwrnintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(twrnint)::Type,TwrnintVal::v1> v1{};
        }
        ///CAN Synchronization Status
        enum class SynchVal {
            v0=0x00000000,     ///<FlexCAN is not synchronized to the CAN bus.
            v1=0x00000001,     ///<FlexCAN is synchronized to the CAN bus.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::v0> v0{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::v1> v1{};
        }
        ///Bus Off Done Interrupt
        enum class BoffdoneintVal {
            v0=0x00000000,     ///<No such occurrence.
            v1=0x00000001,     ///<FlexCAN module has completed Bus Off process.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BoffdoneintVal> boffdoneint{}; 
        namespace BoffdoneintValC{
            constexpr Register::FieldValue<decltype(boffdoneint)::Type,BoffdoneintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(boffdoneint)::Type,BoffdoneintVal::v1> v1{};
        }
        ///Error Overrun bit
        enum class ErrovrVal {
            v0=0x00000000,     ///<Overrun has not occurred.
            v1=0x00000001,     ///<Overrun has occured.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ErrovrVal> errovr{}; 
        namespace ErrovrValC{
            constexpr Register::FieldValue<decltype(errovr)::Type,ErrovrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(errovr)::Type,ErrovrVal::v1> v1{};
        }
    }
    namespace Can0Imask1{    ///<Interrupt Masks 1 register
        using Addr = Register::Address<0x40024028,0x00000000,0,unsigned>;
        ///Buffer MB i Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buf31to0m{}; 
    }
    namespace Can0Iflag1{    ///<Interrupt Flags 1 register
        using Addr = Register::Address<0x40024030,0x00000000,0,unsigned>;
        ///Buffer MB0 Interrupt Or Clear FIFO bit
        enum class Buf0iVal {
            v0=0x00000000,     ///<The corresponding buffer has no occurrence of successfully completed transmission or reception when MCR[RFEN]=0.
            v1=0x00000001,     ///<The corresponding buffer has successfully completed transmission or reception when MCR[RFEN]=0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Buf0iVal> buf0i{}; 
        namespace Buf0iValC{
            constexpr Register::FieldValue<decltype(buf0i)::Type,Buf0iVal::v0> v0{};
            constexpr Register::FieldValue<decltype(buf0i)::Type,Buf0iVal::v1> v1{};
        }
        ///Buffer MB i Interrupt Or "reserved"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> buf4to1i{}; 
        ///Buffer MB5 Interrupt Or "Frames available in Rx FIFO"
        enum class Buf5iVal {
            v0=0x00000000,     ///<No occurrence of MB5 completing transmission/reception when MCR[RFEN]=0, or of frame(s) available in the FIFO, when MCR[RFEN]=1
            v1=0x00000001,     ///<MB5 completed transmission/reception when MCR[RFEN]=0, or frame(s) available in the Rx FIFO when MCR[RFEN]=1. It generates a DMA request in case of MCR[RFEN] and MCR[DMA] are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Buf5iVal> buf5i{}; 
        namespace Buf5iValC{
            constexpr Register::FieldValue<decltype(buf5i)::Type,Buf5iVal::v0> v0{};
            constexpr Register::FieldValue<decltype(buf5i)::Type,Buf5iVal::v1> v1{};
        }
        ///Buffer MB6 Interrupt Or "Rx FIFO Warning"
        enum class Buf6iVal {
            v0=0x00000000,     ///<No occurrence of MB6 completing transmission/reception when MCR[RFEN]=0, or of Rx FIFO almost full when MCR[RFEN]=1
            v1=0x00000001,     ///<MB6 completed transmission/reception when MCR[RFEN]=0, or Rx FIFO almost full when MCR[RFEN]=1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Buf6iVal> buf6i{}; 
        namespace Buf6iValC{
            constexpr Register::FieldValue<decltype(buf6i)::Type,Buf6iVal::v0> v0{};
            constexpr Register::FieldValue<decltype(buf6i)::Type,Buf6iVal::v1> v1{};
        }
        ///Buffer MB7 Interrupt Or "Rx FIFO Overflow"
        enum class Buf7iVal {
            v0=0x00000000,     ///<No occurrence of MB7 completing transmission/reception when MCR[RFEN]=0, or of Rx FIFO overflow when MCR[RFEN]=1
            v1=0x00000001,     ///<MB7 completed transmission/reception when MCR[RFEN]=0, or Rx FIFO overflow when MCR[RFEN]=1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Buf7iVal> buf7i{}; 
        namespace Buf7iValC{
            constexpr Register::FieldValue<decltype(buf7i)::Type,Buf7iVal::v0> v0{};
            constexpr Register::FieldValue<decltype(buf7i)::Type,Buf7iVal::v1> v1{};
        }
        ///Buffer MBi Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> buf31to8i{}; 
    }
    namespace Can0Ctrl2{    ///<Control 2 register
        using Addr = Register::Address<0x40024034,0xb000ffff,0,unsigned>;
        ///Entire Frame Arbitration Field Comparison Enable For Rx Mailboxes
        enum class EacenVal {
            v0=0x00000000,     ///<Rx Mailbox filter's IDE bit is always compared and RTR is never compared despite mask bits.
            v1=0x00000001,     ///<Enables the comparison of both Rx Mailbox filter's IDE and RTR bit with their corresponding bits within the incoming frame. Mask bits do apply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,EacenVal> eacen{}; 
        namespace EacenValC{
            constexpr Register::FieldValue<decltype(eacen)::Type,EacenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eacen)::Type,EacenVal::v1> v1{};
        }
        ///Remote Request Storing
        enum class RrsVal {
            v0=0x00000000,     ///<Remote Response Frame is generated.
            v1=0x00000001,     ///<Remote Request Frame is stored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RrsVal> rrs{}; 
        namespace RrsValC{
            constexpr Register::FieldValue<decltype(rrs)::Type,RrsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rrs)::Type,RrsVal::v1> v1{};
        }
        ///Mailboxes Reception Priority
        enum class MrpVal {
            v0=0x00000000,     ///<Matching starts from Rx FIFO and continues on Mailboxes.
            v1=0x00000001,     ///<Matching starts from Mailboxes and continues on Rx FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,MrpVal> mrp{}; 
        namespace MrpValC{
            constexpr Register::FieldValue<decltype(mrp)::Type,MrpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mrp)::Type,MrpVal::v1> v1{};
        }
        ///Tx Arbitration Start Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> tasd{}; 
        ///Number Of Rx FIFO Filters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> rffn{}; 
        ///Bus Off Done Interrupt Mask
        enum class BoffdonemskVal {
            v0=0x00000000,     ///<Bus Off Done interrupt disabled.
            v1=0x00000001,     ///<Bus Off Done interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,BoffdonemskVal> boffdonemsk{}; 
        namespace BoffdonemskValC{
            constexpr Register::FieldValue<decltype(boffdonemsk)::Type,BoffdonemskVal::v0> v0{};
            constexpr Register::FieldValue<decltype(boffdonemsk)::Type,BoffdonemskVal::v1> v1{};
        }
    }
    namespace Can0Esr2{    ///<Error and Status 2 register
        using Addr = Register::Address<0x40024038,0xff809fff,0,unsigned>;
        ///Inactive Mailbox
        enum class ImbVal {
            v0=0x00000000,     ///<If ESR2[VPS] is asserted, the ESR2[LPTM] is not an inactive Mailbox.
            v1=0x00000001,     ///<If ESR2[VPS] is asserted, there is at least one inactive Mailbox. LPTM content is the number of the first one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ImbVal> imb{}; 
        namespace ImbValC{
            constexpr Register::FieldValue<decltype(imb)::Type,ImbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(imb)::Type,ImbVal::v1> v1{};
        }
        ///Valid Priority Status
        enum class VpsVal {
            v0=0x00000000,     ///<Contents of IMB and LPTM are invalid.
            v1=0x00000001,     ///<Contents of IMB and LPTM are valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,VpsVal> vps{}; 
        namespace VpsValC{
            constexpr Register::FieldValue<decltype(vps)::Type,VpsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vps)::Type,VpsVal::v1> v1{};
        }
        ///Lowest Priority Tx Mailbox
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> lptm{}; 
    }
    namespace Can0Crcr{    ///<CRC Register
        using Addr = Register::Address<0x40024044,0xff808000,0,unsigned>;
        ///Transmitted CRC value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> txcrc{}; 
        ///CRC Mailbox
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mbcrc{}; 
    }
    namespace Can0Rxfgmask{    ///<Rx FIFO Global Mask register
        using Addr = Register::Address<0x40024048,0x00000000,0,unsigned>;
        ///Rx FIFO Global Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fgm{}; 
    }
    namespace Can0Rxfir{    ///<Rx FIFO Information Register
        using Addr = Register::Address<0x4002404c,0xfffffe00,0,unsigned>;
        ///Identifier Acceptance Filter Hit Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> idhit{}; 
    }
    namespace Can0Cbt{    ///<CAN Bit Timing Register
        using Addr = Register::Address<0x40024050,0x00100000,0,unsigned>;
        ///Extended Phase Segment 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> epseg2{}; 
        ///Extended Phase Segment 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> epseg1{}; 
        ///Extended Propagation Segment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> epropseg{}; 
        ///Extended Resync Jump Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> erjw{}; 
        ///Extended Prescaler Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,21),Register::ReadWriteAccess,unsigned> epresdiv{}; 
        ///Bit Timing Format Enable
        enum class BtfVal {
            v0=0x00000000,     ///<Extended bit time definitions disabled.
            v1=0x00000001,     ///<Extended bit time definitions enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,BtfVal> btf{}; 
        namespace BtfValC{
            constexpr Register::FieldValue<decltype(btf)::Type,BtfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(btf)::Type,BtfVal::v1> v1{};
        }
    }
    namespace Can0Cs0{    ///<Message Buffer 0 CS Register
        using Addr = Register::Address<0x40024080,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id0{    ///<Message Buffer 0 ID Register
        using Addr = Register::Address<0x40024084,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word00{    ///<Message Buffer 0 WORD0 Register
        using Addr = Register::Address<0x40024088,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word10{    ///<Message Buffer 0 WORD1 Register
        using Addr = Register::Address<0x4002408c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Cs1{    ///<Message Buffer 1 CS Register
        using Addr = Register::Address<0x40024090,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id1{    ///<Message Buffer 1 ID Register
        using Addr = Register::Address<0x40024094,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word01{    ///<Message Buffer 1 WORD0 Register
        using Addr = Register::Address<0x40024098,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word11{    ///<Message Buffer 1 WORD1 Register
        using Addr = Register::Address<0x4002409c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Cs2{    ///<Message Buffer 2 CS Register
        using Addr = Register::Address<0x400240a0,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id2{    ///<Message Buffer 2 ID Register
        using Addr = Register::Address<0x400240a4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word02{    ///<Message Buffer 2 WORD0 Register
        using Addr = Register::Address<0x400240a8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word12{    ///<Message Buffer 2 WORD1 Register
        using Addr = Register::Address<0x400240ac,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Cs3{    ///<Message Buffer 3 CS Register
        using Addr = Register::Address<0x400240b0,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id3{    ///<Message Buffer 3 ID Register
        using Addr = Register::Address<0x400240b4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word03{    ///<Message Buffer 3 WORD0 Register
        using Addr = Register::Address<0x400240b8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word13{    ///<Message Buffer 3 WORD1 Register
        using Addr = Register::Address<0x400240bc,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Cs4{    ///<Message Buffer 4 CS Register
        using Addr = Register::Address<0x400240c0,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id4{    ///<Message Buffer 4 ID Register
        using Addr = Register::Address<0x400240c4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word04{    ///<Message Buffer 4 WORD0 Register
        using Addr = Register::Address<0x400240c8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word14{    ///<Message Buffer 4 WORD1 Register
        using Addr = Register::Address<0x400240cc,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Cs5{    ///<Message Buffer 5 CS Register
        using Addr = Register::Address<0x400240d0,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id5{    ///<Message Buffer 5 ID Register
        using Addr = Register::Address<0x400240d4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word05{    ///<Message Buffer 5 WORD0 Register
        using Addr = Register::Address<0x400240d8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word15{    ///<Message Buffer 5 WORD1 Register
        using Addr = Register::Address<0x400240dc,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Cs6{    ///<Message Buffer 6 CS Register
        using Addr = Register::Address<0x400240e0,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id6{    ///<Message Buffer 6 ID Register
        using Addr = Register::Address<0x400240e4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word06{    ///<Message Buffer 6 WORD0 Register
        using Addr = Register::Address<0x400240e8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word16{    ///<Message Buffer 6 WORD1 Register
        using Addr = Register::Address<0x400240ec,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Cs7{    ///<Message Buffer 7 CS Register
        using Addr = Register::Address<0x400240f0,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id7{    ///<Message Buffer 7 ID Register
        using Addr = Register::Address<0x400240f4,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word07{    ///<Message Buffer 7 WORD0 Register
        using Addr = Register::Address<0x400240f8,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word17{    ///<Message Buffer 7 WORD1 Register
        using Addr = Register::Address<0x400240fc,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Cs8{    ///<Message Buffer 8 CS Register
        using Addr = Register::Address<0x40024100,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id8{    ///<Message Buffer 8 ID Register
        using Addr = Register::Address<0x40024104,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word08{    ///<Message Buffer 8 WORD0 Register
        using Addr = Register::Address<0x40024108,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word18{    ///<Message Buffer 8 WORD1 Register
        using Addr = Register::Address<0x4002410c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Cs9{    ///<Message Buffer 9 CS Register
        using Addr = Register::Address<0x40024110,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id9{    ///<Message Buffer 9 ID Register
        using Addr = Register::Address<0x40024114,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word09{    ///<Message Buffer 9 WORD0 Register
        using Addr = Register::Address<0x40024118,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word19{    ///<Message Buffer 9 WORD1 Register
        using Addr = Register::Address<0x4002411c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Cs10{    ///<Message Buffer 10 CS Register
        using Addr = Register::Address<0x40024120,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id10{    ///<Message Buffer 10 ID Register
        using Addr = Register::Address<0x40024124,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word010{    ///<Message Buffer 10 WORD0 Register
        using Addr = Register::Address<0x40024128,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word110{    ///<Message Buffer 10 WORD1 Register
        using Addr = Register::Address<0x4002412c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Cs11{    ///<Message Buffer 11 CS Register
        using Addr = Register::Address<0x40024130,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id11{    ///<Message Buffer 11 ID Register
        using Addr = Register::Address<0x40024134,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word011{    ///<Message Buffer 11 WORD0 Register
        using Addr = Register::Address<0x40024138,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word111{    ///<Message Buffer 11 WORD1 Register
        using Addr = Register::Address<0x4002413c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Cs12{    ///<Message Buffer 12 CS Register
        using Addr = Register::Address<0x40024140,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id12{    ///<Message Buffer 12 ID Register
        using Addr = Register::Address<0x40024144,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word012{    ///<Message Buffer 12 WORD0 Register
        using Addr = Register::Address<0x40024148,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word112{    ///<Message Buffer 12 WORD1 Register
        using Addr = Register::Address<0x4002414c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Cs13{    ///<Message Buffer 13 CS Register
        using Addr = Register::Address<0x40024150,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id13{    ///<Message Buffer 13 ID Register
        using Addr = Register::Address<0x40024154,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word013{    ///<Message Buffer 13 WORD0 Register
        using Addr = Register::Address<0x40024158,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word113{    ///<Message Buffer 13 WORD1 Register
        using Addr = Register::Address<0x4002415c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Cs14{    ///<Message Buffer 14 CS Register
        using Addr = Register::Address<0x40024160,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id14{    ///<Message Buffer 14 ID Register
        using Addr = Register::Address<0x40024164,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word014{    ///<Message Buffer 14 WORD0 Register
        using Addr = Register::Address<0x40024168,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word114{    ///<Message Buffer 14 WORD1 Register
        using Addr = Register::Address<0x4002416c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Cs15{    ///<Message Buffer 15 CS Register
        using Addr = Register::Address<0x40024170,0x10800000,0,unsigned>;
        ///Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeStamp{}; 
        ///Length of the data to be stored/transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///Remote Transmission Request. One/zero for remote/data frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///ID Extended. One/zero for extended/standard format frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ide{}; 
        ///Substitute Remote Request. Contains a fixed recessive bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> code{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> esi{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> brs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> edl{}; 
    }
    namespace Can0Id15{    ///<Message Buffer 15 ID Register
        using Addr = Register::Address<0x40024174,0x00000000,0,unsigned>;
        ///Contains extended (LOW word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Contains standard/extended (HIGH word) identifier of message buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> std{}; 
        ///Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace Can0Word015{    ///<Message Buffer 15 WORD0 Register
        using Addr = Register::Address<0x40024178,0x00000000,0,unsigned>;
        ///Data byte 3 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte3{}; 
        ///Data byte 2 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte2{}; 
        ///Data byte 1 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte1{}; 
        ///Data byte 0 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte0{}; 
    }
    namespace Can0Word115{    ///<Message Buffer 15 WORD1 Register
        using Addr = Register::Address<0x4002417c,0x00000000,0,unsigned>;
        ///Data byte 7 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dataByte7{}; 
        ///Data byte 6 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dataByte6{}; 
        ///Data byte 5 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dataByte5{}; 
        ///Data byte 4 of Rx/Tx frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dataByte4{}; 
    }
    namespace Can0Rximr0{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x40024880,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can0Rximr1{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x40024884,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can0Rximr2{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x40024888,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can0Rximr3{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x4002488c,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can0Rximr4{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x40024890,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can0Rximr5{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x40024894,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can0Rximr6{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x40024898,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can0Rximr7{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x4002489c,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can0Rximr8{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248a0,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can0Rximr9{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248a4,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can0Rximr10{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248a8,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can0Rximr11{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248ac,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can0Rximr12{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248b0,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can0Rximr13{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248b4,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can0Rximr14{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248b8,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Can0Rximr15{    ///<Rx Individual Mask Registers
        using Addr = Register::Address<0x400248bc,0x00000000,0,unsigned>;
        ///Individual Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
}
