#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Freescale's Scalable Controller Area Network
    namespace MscanCanctl0{    ///<MSCAN Control Register 0
        using Addr = Register::Address<0x40024000,0xffffff00,0,unsigned char>;
        ///Initialization Mode Request
        enum class InitrqVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<MSCAN in initialization mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InitrqVal> initrq{}; 
        namespace InitrqValC{
            constexpr Register::FieldValue<decltype(initrq)::Type,InitrqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(initrq)::Type,InitrqVal::v1> v1{};
        }
        ///Sleep Mode Request
        enum class SlprqVal {
            v0=0x00000000,     ///<Running - The MSCAN functions normally.
            v1=0x00000001,     ///<Sleep mode request - The MSCAN enters sleep mode when CAN bus idle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SlprqVal> slprq{}; 
        namespace SlprqValC{
            constexpr Register::FieldValue<decltype(slprq)::Type,SlprqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(slprq)::Type,SlprqVal::v1> v1{};
        }
        ///WakeUp Enable
        enum class WupeVal {
            v0=0x00000000,     ///<Wakeup disabled - The MSCAN ignores traffic on CAN.
            v1=0x00000001,     ///<Wakeup enabled - The MSCAN is able to restart.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WupeVal> wupe{}; 
        namespace WupeValC{
            constexpr Register::FieldValue<decltype(wupe)::Type,WupeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wupe)::Type,WupeVal::v1> v1{};
        }
        ///Timer Enable
        enum class TimeVal {
            v0=0x00000000,     ///<Disable internal MSCAN timer.
            v1=0x00000001,     ///<Enable internal MSCAN timer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TimeVal> time{}; 
        namespace TimeValC{
            constexpr Register::FieldValue<decltype(time)::Type,TimeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(time)::Type,TimeVal::v1> v1{};
        }
        ///Synchronized Status
        enum class SynchVal {
            v0=0x00000000,     ///<MSCAN is not synchronized to the CAN bus.
            v1=0x00000001,     ///<MSCAN is synchronized to the CAN bus.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::v0> v0{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::v1> v1{};
        }
        ///CAN Stops in Wait Mode
        enum class CswaiVal {
            v0=0x00000000,     ///<The module is not affected during wait mode.
            v1=0x00000001,     ///<The module ceases to be clocked during wait mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CswaiVal> cswai{}; 
        namespace CswaiValC{
            constexpr Register::FieldValue<decltype(cswai)::Type,CswaiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cswai)::Type,CswaiVal::v1> v1{};
        }
        ///Receiver Active Status
        enum class RxactVal {
            v0=0x00000000,     ///<MSCAN is transmitting or idle.
            v1=0x00000001,     ///<MSCAN is receiving a message, including when arbitration is lost.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RxactVal> rxact{}; 
        namespace RxactValC{
            constexpr Register::FieldValue<decltype(rxact)::Type,RxactVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxact)::Type,RxactVal::v1> v1{};
        }
        ///Received Frame Flag
        enum class RxfrmVal {
            v0=0x00000000,     ///<No valid message was received since last clearing this flag.
            v1=0x00000001,     ///<A valid message was received since last clearing of this flag.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxfrmVal> rxfrm{}; 
        namespace RxfrmValC{
            constexpr Register::FieldValue<decltype(rxfrm)::Type,RxfrmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxfrm)::Type,RxfrmVal::v1> v1{};
        }
    }
    namespace MscanCanctl1{    ///<MSCAN Control Register 1
        using Addr = Register::Address<0x40024001,0xffffff00,0,unsigned char>;
        ///Initialization Mode Acknowledge
        enum class InitakVal {
            v0=0x00000000,     ///<Running - The MSCAN operates normally.
            v1=0x00000001,     ///<Initialization mode active - The MSCAN has entered initialization mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InitakVal> initak{}; 
        namespace InitakValC{
            constexpr Register::FieldValue<decltype(initak)::Type,InitakVal::v0> v0{};
            constexpr Register::FieldValue<decltype(initak)::Type,InitakVal::v1> v1{};
        }
        ///Sleep Mode Acknowledge
        enum class SlpakVal {
            v0=0x00000000,     ///<Running - The MSCAN operates normally.
            v1=0x00000001,     ///<Sleep mode active - The MSCAN has entered sleep mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SlpakVal> slpak{}; 
        namespace SlpakValC{
            constexpr Register::FieldValue<decltype(slpak)::Type,SlpakVal::v0> v0{};
            constexpr Register::FieldValue<decltype(slpak)::Type,SlpakVal::v1> v1{};
        }
        ///WakeUp Mode
        enum class WupmVal {
            v0=0x00000000,     ///<MSCAN wakes on any dominant level on the CAN bus.
            v1=0x00000001,     ///<MSCAN wakes only in case of a dominant pulse on the CAN bus that has a length of Twup.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WupmVal> wupm{}; 
        namespace WupmValC{
            constexpr Register::FieldValue<decltype(wupm)::Type,WupmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wupm)::Type,WupmVal::v1> v1{};
        }
        ///Bus-Off Recovery Mode
        enum class BormVal {
            v0=0x00000000,     ///<Automatic bus-off recovery (see Bosch CAN 2.0A/B protocol specification).
            v1=0x00000001,     ///<Bus-off recovery upon user request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BormVal> borm{}; 
        namespace BormValC{
            constexpr Register::FieldValue<decltype(borm)::Type,BormVal::v0> v0{};
            constexpr Register::FieldValue<decltype(borm)::Type,BormVal::v1> v1{};
        }
        ///Listen Only Mode
        enum class ListenVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Listen only mode activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ListenVal> listen{}; 
        namespace ListenValC{
            constexpr Register::FieldValue<decltype(listen)::Type,ListenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(listen)::Type,ListenVal::v1> v1{};
        }
        ///Loopback Self Test Mode
        enum class LoopbVal {
            v0=0x00000000,     ///<Loopback self test disabled.
            v1=0x00000001,     ///<Loopback self test enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,LoopbVal> loopb{}; 
        namespace LoopbValC{
            constexpr Register::FieldValue<decltype(loopb)::Type,LoopbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(loopb)::Type,LoopbVal::v1> v1{};
        }
        ///MSCAN Clock Source
        enum class ClksrcVal {
            v0=0x00000000,     ///<MSCAN clock source is the oscillator clock.
            v1=0x00000001,     ///<MSCAN clock source is the bus clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ClksrcVal> clksrc{}; 
        namespace ClksrcValC{
            constexpr Register::FieldValue<decltype(clksrc)::Type,ClksrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clksrc)::Type,ClksrcVal::v1> v1{};
        }
        ///MSCAN Enable
        enum class CaneVal {
            v0=0x00000000,     ///<MSCAN module is disabled.
            v1=0x00000001,     ///<MSCAN module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CaneVal> cane{}; 
        namespace CaneValC{
            constexpr Register::FieldValue<decltype(cane)::Type,CaneVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cane)::Type,CaneVal::v1> v1{};
        }
    }
    namespace MscanCanbtr0{    ///<MSCAN Bus Timing Register 0
        using Addr = Register::Address<0x40024002,0xffffff00,0,unsigned char>;
        ///Baud Rate Prescaler
        enum class BrpVal {
            v000000=0x00000000,     ///<1
            v000001=0x00000001,     ///<2
            v000010=0x00000002,     ///<......
            v000011=0x00000003,     ///<......
            v111110=0x0000003e,     ///<63
            v111111=0x0000003f,     ///<64
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,BrpVal> brp{}; 
        namespace BrpValC{
            constexpr Register::FieldValue<decltype(brp)::Type,BrpVal::v000000> v000000{};
            constexpr Register::FieldValue<decltype(brp)::Type,BrpVal::v000001> v000001{};
            constexpr Register::FieldValue<decltype(brp)::Type,BrpVal::v000010> v000010{};
            constexpr Register::FieldValue<decltype(brp)::Type,BrpVal::v000011> v000011{};
            constexpr Register::FieldValue<decltype(brp)::Type,BrpVal::v111110> v111110{};
            constexpr Register::FieldValue<decltype(brp)::Type,BrpVal::v111111> v111111{};
        }
        ///Synchronization Jump Width
        enum class SjwVal {
            v00=0x00000000,     ///<1 Tq clock cycle.
            v01=0x00000001,     ///<2 Tq clock cycles.
            v10=0x00000002,     ///<3 Tq clock cycle.
            v11=0x00000003,     ///<4 Tq clock cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,SjwVal> sjw{}; 
        namespace SjwValC{
            constexpr Register::FieldValue<decltype(sjw)::Type,SjwVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sjw)::Type,SjwVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sjw)::Type,SjwVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sjw)::Type,SjwVal::v11> v11{};
        }
    }
    namespace MscanCanbtr1{    ///<MSCAN Bus Timing Register 1
        using Addr = Register::Address<0x40024003,0xffffff00,0,unsigned char>;
        ///Time Segment 1
        enum class Tseg1Val {
            v0000=0x00000000,     ///<1 Tq clock cycle (not valid)
            v0001=0x00000001,     ///<2 Tq clock cycles (not valid)
            v0010=0x00000002,     ///<3 Tq clock cycles (not valid)
            v0011=0x00000003,     ///<4 Tq clock cycles
            v1110=0x0000000e,     ///<15 Tq clock cycles
            v1111=0x0000000f,     ///<16 Tq clock cycles
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Tseg1Val> tseg1{}; 
        namespace Tseg1ValC{
            constexpr Register::FieldValue<decltype(tseg1)::Type,Tseg1Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(tseg1)::Type,Tseg1Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(tseg1)::Type,Tseg1Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(tseg1)::Type,Tseg1Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(tseg1)::Type,Tseg1Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(tseg1)::Type,Tseg1Val::v1111> v1111{};
        }
        ///Time Segment 2
        enum class Tseg2Val {
            v000=0x00000000,     ///<1 Tq clock cycle (not valid)
            v001=0x00000001,     ///<2 Tq clock cycles
            v010=0x00000002,     ///<3 Tq clock cycles
            v011=0x00000003,     ///<4 Tq clock cycles
            v100=0x00000004,     ///<5 Tq clock cycles
            v101=0x00000005,     ///<6 Tq clock cycles
            v110=0x00000006,     ///<7 Tq clock cycles
            v111=0x00000007,     ///<8 Tq clock cycles
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,Tseg2Val> tseg2{}; 
        namespace Tseg2ValC{
            constexpr Register::FieldValue<decltype(tseg2)::Type,Tseg2Val::v000> v000{};
            constexpr Register::FieldValue<decltype(tseg2)::Type,Tseg2Val::v001> v001{};
            constexpr Register::FieldValue<decltype(tseg2)::Type,Tseg2Val::v010> v010{};
            constexpr Register::FieldValue<decltype(tseg2)::Type,Tseg2Val::v011> v011{};
            constexpr Register::FieldValue<decltype(tseg2)::Type,Tseg2Val::v100> v100{};
            constexpr Register::FieldValue<decltype(tseg2)::Type,Tseg2Val::v101> v101{};
            constexpr Register::FieldValue<decltype(tseg2)::Type,Tseg2Val::v110> v110{};
            constexpr Register::FieldValue<decltype(tseg2)::Type,Tseg2Val::v111> v111{};
        }
        ///Sampling
        enum class SampVal {
            v0=0x00000000,     ///<One sample per bit.
            v1=0x00000001,     ///<Three samples per bit. In this case, PHASE_SEG1 must be at least 2 time quanta (Tq).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SampVal> samp{}; 
        namespace SampValC{
            constexpr Register::FieldValue<decltype(samp)::Type,SampVal::v0> v0{};
            constexpr Register::FieldValue<decltype(samp)::Type,SampVal::v1> v1{};
        }
    }
    namespace MscanCanrflg{    ///<MSCAN Receiver Flag Register
        using Addr = Register::Address<0x40024004,0xffffff00,0,unsigned char>;
        ///Receive Buffer Full Flag
        enum class RxfVal {
            v0=0x00000000,     ///<No new message available within the RxFG.
            v1=0x00000001,     ///<The receiver FIFO is not empty. A new message is available in the RxFG.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxfVal> rxf{}; 
        namespace RxfValC{
            constexpr Register::FieldValue<decltype(rxf)::Type,RxfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxf)::Type,RxfVal::v1> v1{};
        }
        ///Overrun Interrupt Flag
        enum class OvrifVal {
            v0=0x00000000,     ///<No data overrun condition.
            v1=0x00000001,     ///<A data overrun detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OvrifVal> ovrif{}; 
        namespace OvrifValC{
            constexpr Register::FieldValue<decltype(ovrif)::Type,OvrifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ovrif)::Type,OvrifVal::v1> v1{};
        }
        ///Transmitter Status
        enum class TstatVal {
            v00=0x00000000,     ///<TxOK: 0<=transmit error counter<96
            v01=0x00000001,     ///<TxWRN: 96<=transmit error counter<128
            v10=0x00000002,     ///<TxERR: 128<=transmit error counter<256
            v11=0x00000003,     ///<Bus-off: 256<=transmit error counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,TstatVal> tstat{}; 
        namespace TstatValC{
            constexpr Register::FieldValue<decltype(tstat)::Type,TstatVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tstat)::Type,TstatVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tstat)::Type,TstatVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tstat)::Type,TstatVal::v11> v11{};
        }
        ///Receiver Status
        enum class RstatVal {
            v00=0x00000000,     ///<RxOK: 0<=receive error counter<96
            v01=0x00000001,     ///<RxWRN: 96<=receive error counter<128
            v10=0x00000002,     ///<RxERR: 128<=receive error counter
            v11=0x00000003,     ///<Bus-off: 256<=transmit error counter (Redundant Information for the most critical CAN bus status which is "bus-off". This only occurs if the Tx error counter exceeds a number of 255 errors. Bus-off affects the receiver state. As soon as the transmitter leaves its bus-off state the receiver state skips to RxOK too. Refer also to TSTAT[1:0] coding in this register. )
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,RstatVal> rstat{}; 
        namespace RstatValC{
            constexpr Register::FieldValue<decltype(rstat)::Type,RstatVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rstat)::Type,RstatVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rstat)::Type,RstatVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rstat)::Type,RstatVal::v11> v11{};
        }
        ///CAN Status Change Interrupt Flag
        enum class CscifVal {
            v0=0x00000000,     ///<No change in CAN bus status occurred since last interrupt.
            v1=0x00000001,     ///<MSCAN changed current CAN bus status.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CscifVal> cscif{}; 
        namespace CscifValC{
            constexpr Register::FieldValue<decltype(cscif)::Type,CscifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cscif)::Type,CscifVal::v1> v1{};
        }
        ///Wake-Up Interrupt Flag
        enum class WupifVal {
            v0=0x00000000,     ///<No wakeup activity observed while in sleep mode.
            v1=0x00000001,     ///<MSCAN detected activity on the CAN bus and requested wakeup.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,WupifVal> wupif{}; 
        namespace WupifValC{
            constexpr Register::FieldValue<decltype(wupif)::Type,WupifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wupif)::Type,WupifVal::v1> v1{};
        }
    }
    namespace MscanCanrier{    ///<MSCAN Receiver Interrupt Enable Register
        using Addr = Register::Address<0x40024005,0xffffff00,0,unsigned char>;
        ///Receiver Full Interrupt Enable
        enum class RxfieVal {
            v0=0x00000000,     ///<No interrupt request is generated from this event.
            v1=0x00000001,     ///<A receive buffer full (successful message reception) event causes a receiver interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxfieVal> rxfie{}; 
        namespace RxfieValC{
            constexpr Register::FieldValue<decltype(rxfie)::Type,RxfieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxfie)::Type,RxfieVal::v1> v1{};
        }
        ///Overrun Interrupt Enable
        enum class OvrieVal {
            v0=0x00000000,     ///<No interrupt request is generated from this event.
            v1=0x00000001,     ///<An overrun event causes an error interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OvrieVal> ovrie{}; 
        namespace OvrieValC{
            constexpr Register::FieldValue<decltype(ovrie)::Type,OvrieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ovrie)::Type,OvrieVal::v1> v1{};
        }
        ///Transmitter Status Change Enable
        enum class TstateVal {
            v00=0x00000000,     ///<Do not generate any CSCIF interrupt caused by transmitter state changes.
            v01=0x00000001,     ///<Generate CSCIF interrupt only if the transmitter enters or leaves "bus-off" state. Discard other transmitter state changes for generating CSCIF interrupt.
            v10=0x00000002,     ///<Generate CSCIF interrupt only if the transmitter enters or leaves "TxErr" or "bus-off" state. Discard other transmitter state changes for generating CSCIF interrupt.
            v11=0x00000003,     ///<Generate CSCIF interrupt on all state changes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,TstateVal> tstate{}; 
        namespace TstateValC{
            constexpr Register::FieldValue<decltype(tstate)::Type,TstateVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tstate)::Type,TstateVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tstate)::Type,TstateVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tstate)::Type,TstateVal::v11> v11{};
        }
        ///Receiver Status Change Enable
        enum class RstateVal {
            v00=0x00000000,     ///<Do not generate any CSCIF interrupt caused by receiver state changes.
            v01=0x00000001,     ///<Generate CSCIF interrupt only if the receiver enters or leaves "bus-off" state. Discard other receiver state changes for generating CSCIF interrupt.
            v10=0x00000002,     ///<Generate CSCIF interrupt only if the receiver enters or leaves "RxErr" or "bus-off"Bus-off state is only defined for transmitters by the CAN standard (see Bosch CAN 2.0A/B protocol specification). Because the only possible state change for the transmitter from bus-off to TxOK also forces the receiver to skip its current state to RxOK, the coding of the RXSTAT[1:0] flags define an additional bus-off state for the receiver state. Discard other receiver state changes for generating CSCIF interrupt.
            v11=0x00000003,     ///<Generate CSCIF interrupt on all state changes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,RstateVal> rstate{}; 
        namespace RstateValC{
            constexpr Register::FieldValue<decltype(rstate)::Type,RstateVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rstate)::Type,RstateVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rstate)::Type,RstateVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rstate)::Type,RstateVal::v11> v11{};
        }
        ///CAN Status Change Interrupt Enable
        enum class CscieVal {
            v0=0x00000000,     ///<No interrupt request is generated from this event.
            v1=0x00000001,     ///<A CAN Status Change event causes an error interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CscieVal> cscie{}; 
        namespace CscieValC{
            constexpr Register::FieldValue<decltype(cscie)::Type,CscieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cscie)::Type,CscieVal::v1> v1{};
        }
        ///WakeUp Interrupt Enable
        enum class WupieVal {
            v0=0x00000000,     ///<No interrupt request is generated from this event.
            v1=0x00000001,     ///<A wake-up event causes a Wake-Up interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,WupieVal> wupie{}; 
        namespace WupieValC{
            constexpr Register::FieldValue<decltype(wupie)::Type,WupieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wupie)::Type,WupieVal::v1> v1{};
        }
    }
    namespace MscanCantflg{    ///<MSCAN Transmitter Flag Register
        using Addr = Register::Address<0x40024006,0xfffffff8,0,unsigned char>;
        ///Transmitter Buffer Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace MscanCantier{    ///<MSCAN Transmitter Interrupt Enable Register
        using Addr = Register::Address<0x40024007,0xfffffff8,0,unsigned char>;
        ///Transmitter Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> txeie{}; 
    }
    namespace MscanCantarq{    ///<MSCAN Transmitter Message Abort Request Register
        using Addr = Register::Address<0x40024008,0xfffffff8,0,unsigned char>;
        ///Abort Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> abtrq{}; 
    }
    namespace MscanCantaak{    ///<MSCAN Transmitter Message Abort Acknowledge Register
        using Addr = Register::Address<0x40024009,0xfffffff8,0,unsigned char>;
        ///Abort Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> abtak{}; 
    }
    namespace MscanCantbsel{    ///<MSCAN Transmit Buffer Selection Register
        using Addr = Register::Address<0x4002400a,0xfffffff8,0,unsigned char>;
        ///Transmit Buffer Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tx{}; 
    }
    namespace MscanCanidac{    ///<MSCAN Identifier Acceptance Control Register
        using Addr = Register::Address<0x4002400b,0xffffffc8,0,unsigned char>;
        ///Identifier Acceptance Hit Indicator
        enum class IdhitVal {
            v000=0x00000000,     ///<Filter 0 hit.
            v001=0x00000001,     ///<Filter 1 hit.
            v010=0x00000002,     ///<Filter 2 hit.
            v011=0x00000003,     ///<Filter 3 hit.
            v100=0x00000004,     ///<Filter 4 hit.
            v101=0x00000005,     ///<Filter 5 hit.
            v110=0x00000006,     ///<Filter 6 hit.
            v111=0x00000007,     ///<Filter 7 hit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,IdhitVal> idhit{}; 
        namespace IdhitValC{
            constexpr Register::FieldValue<decltype(idhit)::Type,IdhitVal::v000> v000{};
            constexpr Register::FieldValue<decltype(idhit)::Type,IdhitVal::v001> v001{};
            constexpr Register::FieldValue<decltype(idhit)::Type,IdhitVal::v010> v010{};
            constexpr Register::FieldValue<decltype(idhit)::Type,IdhitVal::v011> v011{};
            constexpr Register::FieldValue<decltype(idhit)::Type,IdhitVal::v100> v100{};
            constexpr Register::FieldValue<decltype(idhit)::Type,IdhitVal::v101> v101{};
            constexpr Register::FieldValue<decltype(idhit)::Type,IdhitVal::v110> v110{};
            constexpr Register::FieldValue<decltype(idhit)::Type,IdhitVal::v111> v111{};
        }
        ///Identifier Acceptance Mode
        enum class IdamVal {
            v00=0x00000000,     ///<Two 32-bit acceptance filters.
            v01=0x00000001,     ///<Four 16-bit acceptance filters.
            v10=0x00000002,     ///<Eight 8-bit acceptance filters.
            v11=0x00000003,     ///<Filter closed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,IdamVal> idam{}; 
        namespace IdamValC{
            constexpr Register::FieldValue<decltype(idam)::Type,IdamVal::v00> v00{};
            constexpr Register::FieldValue<decltype(idam)::Type,IdamVal::v01> v01{};
            constexpr Register::FieldValue<decltype(idam)::Type,IdamVal::v10> v10{};
            constexpr Register::FieldValue<decltype(idam)::Type,IdamVal::v11> v11{};
        }
    }
    namespace MscanCanmisc{    ///<MSCAN Miscellaneous Register
        using Addr = Register::Address<0x4002400d,0xfffffffe,0,unsigned char>;
        ///Bus-off State Hold Until User Request
        enum class BoholdVal {
            v0=0x00000000,     ///<Module is not bus-off or recovery has been requested by user in bus-off state.
            v1=0x00000001,     ///<Module is bus-off and holds this state until user request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BoholdVal> bohold{}; 
        namespace BoholdValC{
            constexpr Register::FieldValue<decltype(bohold)::Type,BoholdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bohold)::Type,BoholdVal::v1> v1{};
        }
    }
    namespace MscanCanrxerr{    ///<MSCAN Receive Error Counter
        using Addr = Register::Address<0x4002400e,0xffffff00,0,unsigned char>;
        ///Receive Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxerr{}; 
    }
    namespace MscanCantxerr{    ///<MSCAN Transmit Error Counter
        using Addr = Register::Address<0x4002400f,0xffffff00,0,unsigned char>;
        ///Transmit Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txerr{}; 
    }
    namespace MscanCanidar0{    ///<MSCAN Identifier Acceptance Register n of First Bank
        using Addr = Register::Address<0x40024010,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidar1{    ///<MSCAN Identifier Acceptance Register n of First Bank
        using Addr = Register::Address<0x40024011,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidar2{    ///<MSCAN Identifier Acceptance Register n of First Bank
        using Addr = Register::Address<0x40024012,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidar3{    ///<MSCAN Identifier Acceptance Register n of First Bank
        using Addr = Register::Address<0x40024013,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidmr0{    ///<MSCAN Identifier Mask Register n of First Bank
        using Addr = Register::Address<0x40024014,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanCanidmr1{    ///<MSCAN Identifier Mask Register n of First Bank
        using Addr = Register::Address<0x40024015,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanCanidmr2{    ///<MSCAN Identifier Mask Register n of First Bank
        using Addr = Register::Address<0x40024016,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanCanidmr3{    ///<MSCAN Identifier Mask Register n of First Bank
        using Addr = Register::Address<0x40024017,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanCanidar4{    ///<MSCAN Identifier Acceptance Register n of Second Bank
        using Addr = Register::Address<0x40024018,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidar5{    ///<MSCAN Identifier Acceptance Register n of Second Bank
        using Addr = Register::Address<0x40024019,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidar6{    ///<MSCAN Identifier Acceptance Register n of Second Bank
        using Addr = Register::Address<0x4002401a,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidar7{    ///<MSCAN Identifier Acceptance Register n of Second Bank
        using Addr = Register::Address<0x4002401b,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidmr4{    ///<MSCAN Identifier Mask Register n of Second Bank
        using Addr = Register::Address<0x4002401c,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanCanidmr5{    ///<MSCAN Identifier Mask Register n of Second Bank
        using Addr = Register::Address<0x4002401d,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanCanidmr6{    ///<MSCAN Identifier Mask Register n of Second Bank
        using Addr = Register::Address<0x4002401e,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanCanidmr7{    ///<MSCAN Identifier Mask Register n of Second Bank
        using Addr = Register::Address<0x4002401f,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanReidr0{    ///<Receive Extended Identifier Register 0
        using Addr = Register::Address<0x40024020,0xffffff00,0,unsigned char>;
        ///Extended Format Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> reid28Reid21{}; 
    }
    namespace MscanRsidr0{    ///<Receive Standard Identifier Register 0
        using Addr = Register::Address<0x40024020,0xffffff00,0,unsigned char>;
        ///Standard Format Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rsid10Rsid3{}; 
    }
    namespace MscanReidr1{    ///<Receive Extended Identifier Register 1
        using Addr = Register::Address<0x40024021,0xffffff00,0,unsigned char>;
        ///Extended Format Identifier 17-15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reid17Reid15{}; 
        ///ID Extended
        enum class ReideVal {
            v0=0x00000000,     ///<Standard format (11 bit).
            v1=0x00000001,     ///<Extended format (29 bit).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ReideVal> reide{}; 
        namespace ReideValC{
            constexpr Register::FieldValue<decltype(reide)::Type,ReideVal::v0> v0{};
            constexpr Register::FieldValue<decltype(reide)::Type,ReideVal::v1> v1{};
        }
        ///Substitute Remote Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rsrr{}; 
        ///Extended Format Identifier 20-18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reid20Reid18{}; 
    }
    namespace MscanRsidr1{    ///<Standard Identifier Register 1
        using Addr = Register::Address<0x40024021,0xffffff07,0,unsigned char>;
        ///ID Extended
        enum class RsideVal {
            v0=0x00000000,     ///<Standard format (11 bit).
            v1=0x00000001,     ///<Extended format (29 bit).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RsideVal> rside{}; 
        namespace RsideValC{
            constexpr Register::FieldValue<decltype(rside)::Type,RsideVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rside)::Type,RsideVal::v1> v1{};
        }
        ///Remote Transmission Request
        enum class RsrtrVal {
            v0=0x00000000,     ///<Data frame.
            v1=0x00000001,     ///<Remote frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RsrtrVal> rsrtr{}; 
        namespace RsrtrValC{
            constexpr Register::FieldValue<decltype(rsrtr)::Type,RsrtrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rsrtr)::Type,RsrtrVal::v1> v1{};
        }
        ///Standard Format Identifier 2-0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rsid2Rsid0{}; 
    }
    namespace MscanReidr2{    ///<Receive Extended Identifier Register 2
        using Addr = Register::Address<0x40024022,0xffffff00,0,unsigned char>;
        ///Extended Format Identifier 14-7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> reid14Reid7{}; 
    }
    namespace MscanReidr3{    ///<Receive Extended Identifier Register 3
        using Addr = Register::Address<0x40024023,0xffffff00,0,unsigned char>;
        ///Remote Transmission Request
        enum class RertrVal {
            v0=0x00000000,     ///<Data frame.
            v1=0x00000001,     ///<Remote frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RertrVal> rertr{}; 
        namespace RertrValC{
            constexpr Register::FieldValue<decltype(rertr)::Type,RertrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rertr)::Type,RertrVal::v1> v1{};
        }
        ///Extended Format Identifier 6-0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> reid6Reid0{}; 
    }
    namespace MscanRedsr0{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x40024024,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRedsr1{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x40024025,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRedsr2{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x40024026,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRedsr3{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x40024027,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRedsr4{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x40024028,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRedsr5{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x40024029,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRedsr6{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x4002402a,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRedsr7{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x4002402b,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRdlr{    ///<Receive Data Length Register
        using Addr = Register::Address<0x4002402c,0xfffffff0,0,unsigned char>;
        ///Data Length Code Bits
        enum class RdlcVal {
            v0000=0x00000000,     ///<0
            v0001=0x00000001,     ///<1
            v0010=0x00000002,     ///<2
            v0011=0x00000003,     ///<3
            v0100=0x00000004,     ///<4
            v0101=0x00000005,     ///<5
            v0110=0x00000006,     ///<6
            v0111=0x00000007,     ///<7
            v1000=0x00000008,     ///<8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,RdlcVal> rdlc{}; 
        namespace RdlcValC{
            constexpr Register::FieldValue<decltype(rdlc)::Type,RdlcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(rdlc)::Type,RdlcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(rdlc)::Type,RdlcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(rdlc)::Type,RdlcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(rdlc)::Type,RdlcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(rdlc)::Type,RdlcVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(rdlc)::Type,RdlcVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(rdlc)::Type,RdlcVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(rdlc)::Type,RdlcVal::v1000> v1000{};
        }
    }
    namespace MscanRtsrh{    ///<Receive Time Stamp Register High
        using Addr = Register::Address<0x4002402e,0xffffff00,0,unsigned char>;
        ///Time Stamp
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rts{}; 
    }
    namespace MscanRtsrl{    ///<Receive Time Stamp Register Low
        using Addr = Register::Address<0x4002402f,0xffffff00,0,unsigned char>;
        ///Time Stamp
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rts{}; 
    }
    namespace MscanTeidr0{    ///<Transmit Extended Identifier Register 0
        using Addr = Register::Address<0x40024030,0xffffff00,0,unsigned char>;
        ///Extended Format Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> teid28Teid21{}; 
    }
    namespace MscanTsidr0{    ///<Transmit Standard Identifier Register 0
        using Addr = Register::Address<0x40024030,0xffffff00,0,unsigned char>;
        ///Standard Format Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tsid10Tsid3{}; 
    }
    namespace MscanTeidr1{    ///<Transmit Extended Identifier Register 1
        using Addr = Register::Address<0x40024031,0xffffff00,0,unsigned char>;
        ///Extended Format Identifier 17-15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> teid17Teid15{}; 
        ///ID Extended
        enum class TeideVal {
            v0=0x00000000,     ///<Standard format (11 bit).
            v1=0x00000001,     ///<Extended format (29 bit).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TeideVal> teide{}; 
        namespace TeideValC{
            constexpr Register::FieldValue<decltype(teide)::Type,TeideVal::v0> v0{};
            constexpr Register::FieldValue<decltype(teide)::Type,TeideVal::v1> v1{};
        }
        ///Substitute Remote Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tsrr{}; 
        ///Extended Format Identifier 20-18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> teid20Teid18{}; 
    }
    namespace MscanTsidr1{    ///<Transmit Standard Identifier Register 1
        using Addr = Register::Address<0x40024031,0xffffff07,0,unsigned char>;
        ///ID Extended
        enum class TsideVal {
            v0=0x00000000,     ///<Standard format (11 bit).
            v1=0x00000001,     ///<Extended format (29 bit).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TsideVal> tside{}; 
        namespace TsideValC{
            constexpr Register::FieldValue<decltype(tside)::Type,TsideVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tside)::Type,TsideVal::v1> v1{};
        }
        ///Remote Transmission Request
        enum class TsrtrVal {
            v0=0x00000000,     ///<Data frame.
            v1=0x00000001,     ///<Remote frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TsrtrVal> tsrtr{}; 
        namespace TsrtrValC{
            constexpr Register::FieldValue<decltype(tsrtr)::Type,TsrtrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsrtr)::Type,TsrtrVal::v1> v1{};
        }
        ///Standard Format Identifier 2-0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> tsid2Tsid0{}; 
    }
    namespace MscanTeidr2{    ///<Transmit Extended Identifier Register 2
        using Addr = Register::Address<0x40024032,0xffffff00,0,unsigned char>;
        ///Extended Format Identifier 14-7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> teid14Teid7{}; 
    }
    namespace MscanTeidr3{    ///<Transmit Extended Identifier Register 3
        using Addr = Register::Address<0x40024033,0xffffff00,0,unsigned char>;
        ///Remote Transmission Request
        enum class TertrVal {
            v0=0x00000000,     ///<Data frame.
            v1=0x00000001,     ///<Remote frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TertrVal> tertr{}; 
        namespace TertrValC{
            constexpr Register::FieldValue<decltype(tertr)::Type,TertrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tertr)::Type,TertrVal::v1> v1{};
        }
        ///Extended Format Identifier 6-0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> teid6Teid0{}; 
    }
    namespace MscanTedsr0{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x40024034,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTedsr1{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x40024035,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTedsr2{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x40024036,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTedsr3{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x40024037,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTedsr4{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x40024038,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTedsr5{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x40024039,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTedsr6{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x4002403a,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTedsr7{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x4002403b,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTdlr{    ///<This register keeps the data length field of the CAN frame.
        using Addr = Register::Address<0x4002403c,0xfffffff0,0,unsigned char>;
        ///Data Length Code Bits
        enum class TdlcVal {
            v0000=0x00000000,     ///<0
            v0001=0x00000001,     ///<1
            v0010=0x00000002,     ///<2
            v0011=0x00000003,     ///<3
            v0100=0x00000004,     ///<4
            v0101=0x00000005,     ///<5
            v0110=0x00000006,     ///<6
            v0111=0x00000007,     ///<7
            v1000=0x00000008,     ///<8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,TdlcVal> tdlc{}; 
        namespace TdlcValC{
            constexpr Register::FieldValue<decltype(tdlc)::Type,TdlcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(tdlc)::Type,TdlcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(tdlc)::Type,TdlcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(tdlc)::Type,TdlcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(tdlc)::Type,TdlcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(tdlc)::Type,TdlcVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(tdlc)::Type,TdlcVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(tdlc)::Type,TdlcVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(tdlc)::Type,TdlcVal::v1000> v1000{};
        }
    }
    namespace MscanTbpr{    ///<Transmit Buffer Priority Register
        using Addr = Register::Address<0x4002403d,0xffffff00,0,unsigned char>;
        ///Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace MscanTtsrh{    ///<Transmit Time Stamp Register High
        using Addr = Register::Address<0x4002403e,0xffffff00,0,unsigned char>;
        ///Time Stamp
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tts{}; 
    }
    namespace MscanTtsrl{    ///<Transmit Time Stamp Register Low
        using Addr = Register::Address<0x4002403f,0xffffff00,0,unsigned char>;
        ///Time Stamp
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tts{}; 
    }
}
