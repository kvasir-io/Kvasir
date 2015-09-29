#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Freescale's Scalable Controller Area Network
    namespace MscanCanctl0{    ///<MSCAN Control Register 0
        using Addr = Register::Address<0x40024000,0xffffff00,0,unsigned char>;
        ///Initialization Mode Request
        enum class initrqVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<MSCAN in initialization mode.
        };
        namespace initrqValC{
            constexpr MPL::Value<initrqVal,initrqVal::v0> v0{};
            constexpr MPL::Value<initrqVal,initrqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,initrqVal> initrq{}; 
        ///Sleep Mode Request
        enum class slprqVal {
            v0=0x00000000,     ///<Running - The MSCAN functions normally.
            v1=0x00000001,     ///<Sleep mode request - The MSCAN enters sleep mode when CAN bus idle.
        };
        namespace slprqValC{
            constexpr MPL::Value<slprqVal,slprqVal::v0> v0{};
            constexpr MPL::Value<slprqVal,slprqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,slprqVal> slprq{}; 
        ///WakeUp Enable
        enum class wupeVal {
            v0=0x00000000,     ///<Wakeup disabled - The MSCAN ignores traffic on CAN.
            v1=0x00000001,     ///<Wakeup enabled - The MSCAN is able to restart.
        };
        namespace wupeValC{
            constexpr MPL::Value<wupeVal,wupeVal::v0> v0{};
            constexpr MPL::Value<wupeVal,wupeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wupeVal> wupe{}; 
        ///Timer Enable
        enum class timeVal {
            v0=0x00000000,     ///<Disable internal MSCAN timer.
            v1=0x00000001,     ///<Enable internal MSCAN timer.
        };
        namespace timeValC{
            constexpr MPL::Value<timeVal,timeVal::v0> v0{};
            constexpr MPL::Value<timeVal,timeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,timeVal> time{}; 
        ///Synchronized Status
        enum class synchVal {
            v0=0x00000000,     ///<MSCAN is not synchronized to the CAN bus.
            v1=0x00000001,     ///<MSCAN is synchronized to the CAN bus.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::v0> v0{};
            constexpr MPL::Value<synchVal,synchVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,synchVal> synch{}; 
        ///CAN Stops in Wait Mode
        enum class cswaiVal {
            v0=0x00000000,     ///<The module is not affected during wait mode.
            v1=0x00000001,     ///<The module ceases to be clocked during wait mode.
        };
        namespace cswaiValC{
            constexpr MPL::Value<cswaiVal,cswaiVal::v0> v0{};
            constexpr MPL::Value<cswaiVal,cswaiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cswaiVal> cswai{}; 
        ///Receiver Active Status
        enum class rxactVal {
            v0=0x00000000,     ///<MSCAN is transmitting or idle.
            v1=0x00000001,     ///<MSCAN is receiving a message, including when arbitration is lost.
        };
        namespace rxactValC{
            constexpr MPL::Value<rxactVal,rxactVal::v0> v0{};
            constexpr MPL::Value<rxactVal,rxactVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rxactVal> rxact{}; 
        ///Received Frame Flag
        enum class rxfrmVal {
            v0=0x00000000,     ///<No valid message was received since last clearing this flag.
            v1=0x00000001,     ///<A valid message was received since last clearing of this flag.
        };
        namespace rxfrmValC{
            constexpr MPL::Value<rxfrmVal,rxfrmVal::v0> v0{};
            constexpr MPL::Value<rxfrmVal,rxfrmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rxfrmVal> rxfrm{}; 
    }
    namespace MscanCanctl1{    ///<MSCAN Control Register 1
        using Addr = Register::Address<0x40024001,0xffffff00,0,unsigned char>;
        ///Initialization Mode Acknowledge
        enum class initakVal {
            v0=0x00000000,     ///<Running - The MSCAN operates normally.
            v1=0x00000001,     ///<Initialization mode active - The MSCAN has entered initialization mode.
        };
        namespace initakValC{
            constexpr MPL::Value<initakVal,initakVal::v0> v0{};
            constexpr MPL::Value<initakVal,initakVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,initakVal> initak{}; 
        ///Sleep Mode Acknowledge
        enum class slpakVal {
            v0=0x00000000,     ///<Running - The MSCAN operates normally.
            v1=0x00000001,     ///<Sleep mode active - The MSCAN has entered sleep mode.
        };
        namespace slpakValC{
            constexpr MPL::Value<slpakVal,slpakVal::v0> v0{};
            constexpr MPL::Value<slpakVal,slpakVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,slpakVal> slpak{}; 
        ///WakeUp Mode
        enum class wupmVal {
            v0=0x00000000,     ///<MSCAN wakes on any dominant level on the CAN bus.
            v1=0x00000001,     ///<MSCAN wakes only in case of a dominant pulse on the CAN bus that has a length of Twup.
        };
        namespace wupmValC{
            constexpr MPL::Value<wupmVal,wupmVal::v0> v0{};
            constexpr MPL::Value<wupmVal,wupmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wupmVal> wupm{}; 
        ///Bus-Off Recovery Mode
        enum class bormVal {
            v0=0x00000000,     ///<Automatic bus-off recovery (see Bosch CAN 2.0A/B protocol specification).
            v1=0x00000001,     ///<Bus-off recovery upon user request.
        };
        namespace bormValC{
            constexpr MPL::Value<bormVal,bormVal::v0> v0{};
            constexpr MPL::Value<bormVal,bormVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bormVal> borm{}; 
        ///Listen Only Mode
        enum class listenVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Listen only mode activated.
        };
        namespace listenValC{
            constexpr MPL::Value<listenVal,listenVal::v0> v0{};
            constexpr MPL::Value<listenVal,listenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,listenVal> listen{}; 
        ///Loopback Self Test Mode
        enum class loopbVal {
            v0=0x00000000,     ///<Loopback self test disabled.
            v1=0x00000001,     ///<Loopback self test enabled.
        };
        namespace loopbValC{
            constexpr MPL::Value<loopbVal,loopbVal::v0> v0{};
            constexpr MPL::Value<loopbVal,loopbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,loopbVal> loopb{}; 
        ///MSCAN Clock Source
        enum class clksrcVal {
            v0=0x00000000,     ///<MSCAN clock source is the oscillator clock.
            v1=0x00000001,     ///<MSCAN clock source is the bus clock.
        };
        namespace clksrcValC{
            constexpr MPL::Value<clksrcVal,clksrcVal::v0> v0{};
            constexpr MPL::Value<clksrcVal,clksrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,clksrcVal> clksrc{}; 
        ///MSCAN Enable
        enum class caneVal {
            v0=0x00000000,     ///<MSCAN module is disabled.
            v1=0x00000001,     ///<MSCAN module is enabled.
        };
        namespace caneValC{
            constexpr MPL::Value<caneVal,caneVal::v0> v0{};
            constexpr MPL::Value<caneVal,caneVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,caneVal> cane{}; 
    }
    namespace MscanCanbtr0{    ///<MSCAN Bus Timing Register 0
        using Addr = Register::Address<0x40024002,0xffffff00,0,unsigned char>;
        ///Baud Rate Prescaler
        enum class brpVal {
            v000000=0x00000000,     ///<1
            v000001=0x00000001,     ///<2
            v000010=0x00000002,     ///<......
            v000011=0x00000003,     ///<......
            v111110=0x0000003e,     ///<63
            v111111=0x0000003f,     ///<64
        };
        namespace brpValC{
            constexpr MPL::Value<brpVal,brpVal::v000000> v000000{};
            constexpr MPL::Value<brpVal,brpVal::v000001> v000001{};
            constexpr MPL::Value<brpVal,brpVal::v000010> v000010{};
            constexpr MPL::Value<brpVal,brpVal::v000011> v000011{};
            constexpr MPL::Value<brpVal,brpVal::v111110> v111110{};
            constexpr MPL::Value<brpVal,brpVal::v111111> v111111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,brpVal> brp{}; 
        ///Synchronization Jump Width
        enum class sjwVal {
            v00=0x00000000,     ///<1 Tq clock cycle.
            v01=0x00000001,     ///<2 Tq clock cycles.
            v10=0x00000002,     ///<3 Tq clock cycle.
            v11=0x00000003,     ///<4 Tq clock cycles.
        };
        namespace sjwValC{
            constexpr MPL::Value<sjwVal,sjwVal::v00> v00{};
            constexpr MPL::Value<sjwVal,sjwVal::v01> v01{};
            constexpr MPL::Value<sjwVal,sjwVal::v10> v10{};
            constexpr MPL::Value<sjwVal,sjwVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,sjwVal> sjw{}; 
    }
    namespace MscanCanbtr1{    ///<MSCAN Bus Timing Register 1
        using Addr = Register::Address<0x40024003,0xffffff00,0,unsigned char>;
        ///Time Segment 1
        enum class tseg1Val {
            v0000=0x00000000,     ///<1 Tq clock cycle (not valid)
            v0001=0x00000001,     ///<2 Tq clock cycles (not valid)
            v0010=0x00000002,     ///<3 Tq clock cycles (not valid)
            v0011=0x00000003,     ///<4 Tq clock cycles
            v1110=0x0000000e,     ///<15 Tq clock cycles
            v1111=0x0000000f,     ///<16 Tq clock cycles
        };
        namespace tseg1ValC{
            constexpr MPL::Value<tseg1Val,tseg1Val::v0000> v0000{};
            constexpr MPL::Value<tseg1Val,tseg1Val::v0001> v0001{};
            constexpr MPL::Value<tseg1Val,tseg1Val::v0010> v0010{};
            constexpr MPL::Value<tseg1Val,tseg1Val::v0011> v0011{};
            constexpr MPL::Value<tseg1Val,tseg1Val::v1110> v1110{};
            constexpr MPL::Value<tseg1Val,tseg1Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,tseg1Val> tseg1{}; 
        ///Time Segment 2
        enum class tseg2Val {
            v000=0x00000000,     ///<1 Tq clock cycle (not valid)
            v001=0x00000001,     ///<2 Tq clock cycles
            v010=0x00000002,     ///<3 Tq clock cycles
            v011=0x00000003,     ///<4 Tq clock cycles
            v100=0x00000004,     ///<5 Tq clock cycles
            v101=0x00000005,     ///<6 Tq clock cycles
            v110=0x00000006,     ///<7 Tq clock cycles
            v111=0x00000007,     ///<8 Tq clock cycles
        };
        namespace tseg2ValC{
            constexpr MPL::Value<tseg2Val,tseg2Val::v000> v000{};
            constexpr MPL::Value<tseg2Val,tseg2Val::v001> v001{};
            constexpr MPL::Value<tseg2Val,tseg2Val::v010> v010{};
            constexpr MPL::Value<tseg2Val,tseg2Val::v011> v011{};
            constexpr MPL::Value<tseg2Val,tseg2Val::v100> v100{};
            constexpr MPL::Value<tseg2Val,tseg2Val::v101> v101{};
            constexpr MPL::Value<tseg2Val,tseg2Val::v110> v110{};
            constexpr MPL::Value<tseg2Val,tseg2Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,tseg2Val> tseg2{}; 
        ///Sampling
        enum class sampVal {
            v0=0x00000000,     ///<One sample per bit.
            v1=0x00000001,     ///<Three samples per bit. In this case, PHASE_SEG1 must be at least 2 time quanta (Tq).
        };
        namespace sampValC{
            constexpr MPL::Value<sampVal,sampVal::v0> v0{};
            constexpr MPL::Value<sampVal,sampVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,sampVal> samp{}; 
    }
    namespace MscanCanrflg{    ///<MSCAN Receiver Flag Register
        using Addr = Register::Address<0x40024004,0xffffff00,0,unsigned char>;
        ///Receive Buffer Full Flag
        enum class rxfVal {
            v0=0x00000000,     ///<No new message available within the RxFG.
            v1=0x00000001,     ///<The receiver FIFO is not empty. A new message is available in the RxFG.
        };
        namespace rxfValC{
            constexpr MPL::Value<rxfVal,rxfVal::v0> v0{};
            constexpr MPL::Value<rxfVal,rxfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxfVal> rxf{}; 
        ///Overrun Interrupt Flag
        enum class ovrifVal {
            v0=0x00000000,     ///<No data overrun condition.
            v1=0x00000001,     ///<A data overrun detected.
        };
        namespace ovrifValC{
            constexpr MPL::Value<ovrifVal,ovrifVal::v0> v0{};
            constexpr MPL::Value<ovrifVal,ovrifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ovrifVal> ovrif{}; 
        ///Transmitter Status
        enum class tstatVal {
            v00=0x00000000,     ///<TxOK: 0<=transmit error counter<96
            v01=0x00000001,     ///<TxWRN: 96<=transmit error counter<128
            v10=0x00000002,     ///<TxERR: 128<=transmit error counter<256
            v11=0x00000003,     ///<Bus-off: 256<=transmit error counter
        };
        namespace tstatValC{
            constexpr MPL::Value<tstatVal,tstatVal::v00> v00{};
            constexpr MPL::Value<tstatVal,tstatVal::v01> v01{};
            constexpr MPL::Value<tstatVal,tstatVal::v10> v10{};
            constexpr MPL::Value<tstatVal,tstatVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,tstatVal> tstat{}; 
        ///Receiver Status
        enum class rstatVal {
            v00=0x00000000,     ///<RxOK: 0<=receive error counter<96
            v01=0x00000001,     ///<RxWRN: 96<=receive error counter<128
            v10=0x00000002,     ///<RxERR: 128<=receive error counter
            v11=0x00000003,     ///<Bus-off: 256<=transmit error counter (Redundant Information for the most critical CAN bus status which is "bus-off". This only occurs if the Tx error counter exceeds a number of 255 errors. Bus-off affects the receiver state. As soon as the transmitter leaves its bus-off state the receiver state skips to RxOK too. Refer also to TSTAT[1:0] coding in this register. )
        };
        namespace rstatValC{
            constexpr MPL::Value<rstatVal,rstatVal::v00> v00{};
            constexpr MPL::Value<rstatVal,rstatVal::v01> v01{};
            constexpr MPL::Value<rstatVal,rstatVal::v10> v10{};
            constexpr MPL::Value<rstatVal,rstatVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,rstatVal> rstat{}; 
        ///CAN Status Change Interrupt Flag
        enum class cscifVal {
            v0=0x00000000,     ///<No change in CAN bus status occurred since last interrupt.
            v1=0x00000001,     ///<MSCAN changed current CAN bus status.
        };
        namespace cscifValC{
            constexpr MPL::Value<cscifVal,cscifVal::v0> v0{};
            constexpr MPL::Value<cscifVal,cscifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cscifVal> cscif{}; 
        ///Wake-Up Interrupt Flag
        enum class wupifVal {
            v0=0x00000000,     ///<No wakeup activity observed while in sleep mode.
            v1=0x00000001,     ///<MSCAN detected activity on the CAN bus and requested wakeup.
        };
        namespace wupifValC{
            constexpr MPL::Value<wupifVal,wupifVal::v0> v0{};
            constexpr MPL::Value<wupifVal,wupifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,wupifVal> wupif{}; 
    }
    namespace MscanCanrier{    ///<MSCAN Receiver Interrupt Enable Register
        using Addr = Register::Address<0x40024005,0xffffff00,0,unsigned char>;
        ///Receiver Full Interrupt Enable
        enum class rxfieVal {
            v0=0x00000000,     ///<No interrupt request is generated from this event.
            v1=0x00000001,     ///<A receive buffer full (successful message reception) event causes a receiver interrupt request.
        };
        namespace rxfieValC{
            constexpr MPL::Value<rxfieVal,rxfieVal::v0> v0{};
            constexpr MPL::Value<rxfieVal,rxfieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxfieVal> rxfie{}; 
        ///Overrun Interrupt Enable
        enum class ovrieVal {
            v0=0x00000000,     ///<No interrupt request is generated from this event.
            v1=0x00000001,     ///<An overrun event causes an error interrupt request.
        };
        namespace ovrieValC{
            constexpr MPL::Value<ovrieVal,ovrieVal::v0> v0{};
            constexpr MPL::Value<ovrieVal,ovrieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ovrieVal> ovrie{}; 
        ///Transmitter Status Change Enable
        enum class tstateVal {
            v00=0x00000000,     ///<Do not generate any CSCIF interrupt caused by transmitter state changes.
            v01=0x00000001,     ///<Generate CSCIF interrupt only if the transmitter enters or leaves "bus-off" state. Discard other transmitter state changes for generating CSCIF interrupt.
            v10=0x00000002,     ///<Generate CSCIF interrupt only if the transmitter enters or leaves "TxErr" or "bus-off" state. Discard other transmitter state changes for generating CSCIF interrupt.
            v11=0x00000003,     ///<Generate CSCIF interrupt on all state changes.
        };
        namespace tstateValC{
            constexpr MPL::Value<tstateVal,tstateVal::v00> v00{};
            constexpr MPL::Value<tstateVal,tstateVal::v01> v01{};
            constexpr MPL::Value<tstateVal,tstateVal::v10> v10{};
            constexpr MPL::Value<tstateVal,tstateVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,tstateVal> tstate{}; 
        ///Receiver Status Change Enable
        enum class rstateVal {
            v00=0x00000000,     ///<Do not generate any CSCIF interrupt caused by receiver state changes.
            v01=0x00000001,     ///<Generate CSCIF interrupt only if the receiver enters or leaves "bus-off" state. Discard other receiver state changes for generating CSCIF interrupt.
            v10=0x00000002,     ///<Generate CSCIF interrupt only if the receiver enters or leaves "RxErr" or "bus-off"Bus-off state is only defined for transmitters by the CAN standard (see Bosch CAN 2.0A/B protocol specification). Because the only possible state change for the transmitter from bus-off to TxOK also forces the receiver to skip its current state to RxOK, the coding of the RXSTAT[1:0] flags define an additional bus-off state for the receiver state. Discard other receiver state changes for generating CSCIF interrupt.
            v11=0x00000003,     ///<Generate CSCIF interrupt on all state changes.
        };
        namespace rstateValC{
            constexpr MPL::Value<rstateVal,rstateVal::v00> v00{};
            constexpr MPL::Value<rstateVal,rstateVal::v01> v01{};
            constexpr MPL::Value<rstateVal,rstateVal::v10> v10{};
            constexpr MPL::Value<rstateVal,rstateVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,rstateVal> rstate{}; 
        ///CAN Status Change Interrupt Enable
        enum class cscieVal {
            v0=0x00000000,     ///<No interrupt request is generated from this event.
            v1=0x00000001,     ///<A CAN Status Change event causes an error interrupt request.
        };
        namespace cscieValC{
            constexpr MPL::Value<cscieVal,cscieVal::v0> v0{};
            constexpr MPL::Value<cscieVal,cscieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cscieVal> cscie{}; 
        ///WakeUp Interrupt Enable
        enum class wupieVal {
            v0=0x00000000,     ///<No interrupt request is generated from this event.
            v1=0x00000001,     ///<A wake-up event causes a Wake-Up interrupt request.
        };
        namespace wupieValC{
            constexpr MPL::Value<wupieVal,wupieVal::v0> v0{};
            constexpr MPL::Value<wupieVal,wupieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,wupieVal> wupie{}; 
    }
    namespace MscanCantflg{    ///<MSCAN Transmitter Flag Register
        using Addr = Register::Address<0x40024006,0xfffffff8,0,unsigned char>;
        ///Transmitter Buffer Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace MscanCantier{    ///<MSCAN Transmitter Interrupt Enable Register
        using Addr = Register::Address<0x40024007,0xfffffff8,0,unsigned char>;
        ///Transmitter Empty Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> txeie{}; 
    }
    namespace MscanCantarq{    ///<MSCAN Transmitter Message Abort Request Register
        using Addr = Register::Address<0x40024008,0xfffffff8,0,unsigned char>;
        ///Abort Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> abtrq{}; 
    }
    namespace MscanCantaak{    ///<MSCAN Transmitter Message Abort Acknowledge Register
        using Addr = Register::Address<0x40024009,0xfffffff8,0,unsigned char>;
        ///Abort Acknowledge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> abtak{}; 
    }
    namespace MscanCantbsel{    ///<MSCAN Transmit Buffer Selection Register
        using Addr = Register::Address<0x4002400a,0xfffffff8,0,unsigned char>;
        ///Transmit Buffer Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tx{}; 
    }
    namespace MscanCanidac{    ///<MSCAN Identifier Acceptance Control Register
        using Addr = Register::Address<0x4002400b,0xffffffc8,0,unsigned char>;
        ///Identifier Acceptance Hit Indicator
        enum class idhitVal {
            v000=0x00000000,     ///<Filter 0 hit.
            v001=0x00000001,     ///<Filter 1 hit.
            v010=0x00000002,     ///<Filter 2 hit.
            v011=0x00000003,     ///<Filter 3 hit.
            v100=0x00000004,     ///<Filter 4 hit.
            v101=0x00000005,     ///<Filter 5 hit.
            v110=0x00000006,     ///<Filter 6 hit.
            v111=0x00000007,     ///<Filter 7 hit.
        };
        namespace idhitValC{
            constexpr MPL::Value<idhitVal,idhitVal::v000> v000{};
            constexpr MPL::Value<idhitVal,idhitVal::v001> v001{};
            constexpr MPL::Value<idhitVal,idhitVal::v010> v010{};
            constexpr MPL::Value<idhitVal,idhitVal::v011> v011{};
            constexpr MPL::Value<idhitVal,idhitVal::v100> v100{};
            constexpr MPL::Value<idhitVal,idhitVal::v101> v101{};
            constexpr MPL::Value<idhitVal,idhitVal::v110> v110{};
            constexpr MPL::Value<idhitVal,idhitVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,idhitVal> idhit{}; 
        ///Identifier Acceptance Mode
        enum class idamVal {
            v00=0x00000000,     ///<Two 32-bit acceptance filters.
            v01=0x00000001,     ///<Four 16-bit acceptance filters.
            v10=0x00000002,     ///<Eight 8-bit acceptance filters.
            v11=0x00000003,     ///<Filter closed.
        };
        namespace idamValC{
            constexpr MPL::Value<idamVal,idamVal::v00> v00{};
            constexpr MPL::Value<idamVal,idamVal::v01> v01{};
            constexpr MPL::Value<idamVal,idamVal::v10> v10{};
            constexpr MPL::Value<idamVal,idamVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,idamVal> idam{}; 
    }
    namespace MscanCanmisc{    ///<MSCAN Miscellaneous Register
        using Addr = Register::Address<0x4002400d,0xfffffffe,0,unsigned char>;
        ///Bus-off State Hold Until User Request
        enum class boholdVal {
            v0=0x00000000,     ///<Module is not bus-off or recovery has been requested by user in bus-off state.
            v1=0x00000001,     ///<Module is bus-off and holds this state until user request.
        };
        namespace boholdValC{
            constexpr MPL::Value<boholdVal,boholdVal::v0> v0{};
            constexpr MPL::Value<boholdVal,boholdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,boholdVal> bohold{}; 
    }
    namespace MscanCanrxerr{    ///<MSCAN Receive Error Counter
        using Addr = Register::Address<0x4002400e,0xffffff00,0,unsigned char>;
        ///Receive Error Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxerr{}; 
    }
    namespace MscanCantxerr{    ///<MSCAN Transmit Error Counter
        using Addr = Register::Address<0x4002400f,0xffffff00,0,unsigned char>;
        ///Transmit Error Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txerr{}; 
    }
    namespace MscanCanidar0{    ///<MSCAN Identifier Acceptance Register n of First Bank
        using Addr = Register::Address<0x40024010,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidar1{    ///<MSCAN Identifier Acceptance Register n of First Bank
        using Addr = Register::Address<0x40024011,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidar2{    ///<MSCAN Identifier Acceptance Register n of First Bank
        using Addr = Register::Address<0x40024012,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidar3{    ///<MSCAN Identifier Acceptance Register n of First Bank
        using Addr = Register::Address<0x40024013,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidmr0{    ///<MSCAN Identifier Mask Register n of First Bank
        using Addr = Register::Address<0x40024014,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanCanidmr1{    ///<MSCAN Identifier Mask Register n of First Bank
        using Addr = Register::Address<0x40024015,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanCanidmr2{    ///<MSCAN Identifier Mask Register n of First Bank
        using Addr = Register::Address<0x40024016,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanCanidmr3{    ///<MSCAN Identifier Mask Register n of First Bank
        using Addr = Register::Address<0x40024017,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanCanidar4{    ///<MSCAN Identifier Acceptance Register n of Second Bank
        using Addr = Register::Address<0x40024018,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidar5{    ///<MSCAN Identifier Acceptance Register n of Second Bank
        using Addr = Register::Address<0x40024019,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidar6{    ///<MSCAN Identifier Acceptance Register n of Second Bank
        using Addr = Register::Address<0x4002401a,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidar7{    ///<MSCAN Identifier Acceptance Register n of Second Bank
        using Addr = Register::Address<0x4002401b,0xffffff00,0,unsigned char>;
        ///Acceptance Code Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ac{}; 
    }
    namespace MscanCanidmr4{    ///<MSCAN Identifier Mask Register n of Second Bank
        using Addr = Register::Address<0x4002401c,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanCanidmr5{    ///<MSCAN Identifier Mask Register n of Second Bank
        using Addr = Register::Address<0x4002401d,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanCanidmr6{    ///<MSCAN Identifier Mask Register n of Second Bank
        using Addr = Register::Address<0x4002401e,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanCanidmr7{    ///<MSCAN Identifier Mask Register n of Second Bank
        using Addr = Register::Address<0x4002401f,0xffffff00,0,unsigned char>;
        ///Acceptance Mask Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> am{}; 
    }
    namespace MscanReidr0{    ///<Receive Extended Identifier Register 0
        using Addr = Register::Address<0x40024020,0xffffff00,0,unsigned char>;
        ///Extended Format Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> reid28Reid21{}; 
    }
    namespace MscanRsidr0{    ///<Receive Standard Identifier Register 0
        using Addr = Register::Address<0x40024020,0xffffff00,0,unsigned char>;
        ///Standard Format Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rsid10Rsid3{}; 
    }
    namespace MscanReidr1{    ///<Receive Extended Identifier Register 1
        using Addr = Register::Address<0x40024021,0xffffff00,0,unsigned char>;
        ///Extended Format Identifier 17-15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reid17Reid15{}; 
        ///ID Extended
        enum class reideVal {
            v0=0x00000000,     ///<Standard format (11 bit).
            v1=0x00000001,     ///<Extended format (29 bit).
        };
        namespace reideValC{
            constexpr MPL::Value<reideVal,reideVal::v0> v0{};
            constexpr MPL::Value<reideVal,reideVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,reideVal> reide{}; 
        ///Substitute Remote Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rsrr{}; 
        ///Extended Format Identifier 20-18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reid20Reid18{}; 
    }
    namespace MscanRsidr1{    ///<Standard Identifier Register 1
        using Addr = Register::Address<0x40024021,0xffffff07,0,unsigned char>;
        ///ID Extended
        enum class rsideVal {
            v0=0x00000000,     ///<Standard format (11 bit).
            v1=0x00000001,     ///<Extended format (29 bit).
        };
        namespace rsideValC{
            constexpr MPL::Value<rsideVal,rsideVal::v0> v0{};
            constexpr MPL::Value<rsideVal,rsideVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rsideVal> rside{}; 
        ///Remote Transmission Request
        enum class rsrtrVal {
            v0=0x00000000,     ///<Data frame.
            v1=0x00000001,     ///<Remote frame.
        };
        namespace rsrtrValC{
            constexpr MPL::Value<rsrtrVal,rsrtrVal::v0> v0{};
            constexpr MPL::Value<rsrtrVal,rsrtrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rsrtrVal> rsrtr{}; 
        ///Standard Format Identifier 2-0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rsid2Rsid0{}; 
    }
    namespace MscanReidr2{    ///<Receive Extended Identifier Register 2
        using Addr = Register::Address<0x40024022,0xffffff00,0,unsigned char>;
        ///Extended Format Identifier 14-7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> reid14Reid7{}; 
    }
    namespace MscanReidr3{    ///<Receive Extended Identifier Register 3
        using Addr = Register::Address<0x40024023,0xffffff00,0,unsigned char>;
        ///Remote Transmission Request
        enum class rertrVal {
            v0=0x00000000,     ///<Data frame.
            v1=0x00000001,     ///<Remote frame.
        };
        namespace rertrValC{
            constexpr MPL::Value<rertrVal,rertrVal::v0> v0{};
            constexpr MPL::Value<rertrVal,rertrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rertrVal> rertr{}; 
        ///Extended Format Identifier 6-0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> reid6Reid0{}; 
    }
    namespace MscanRedsr0{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x40024024,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRedsr1{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x40024025,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRedsr2{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x40024026,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRedsr3{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x40024027,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRedsr4{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x40024028,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRedsr5{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x40024029,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRedsr6{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x4002402a,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRedsr7{    ///<Receive Extended Data Segment Register N
        using Addr = Register::Address<0x4002402b,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdb{}; 
    }
    namespace MscanRdlr{    ///<Receive Data Length Register
        using Addr = Register::Address<0x4002402c,0xfffffff0,0,unsigned char>;
        ///Data Length Code Bits
        enum class rdlcVal {
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
        namespace rdlcValC{
            constexpr MPL::Value<rdlcVal,rdlcVal::v0000> v0000{};
            constexpr MPL::Value<rdlcVal,rdlcVal::v0001> v0001{};
            constexpr MPL::Value<rdlcVal,rdlcVal::v0010> v0010{};
            constexpr MPL::Value<rdlcVal,rdlcVal::v0011> v0011{};
            constexpr MPL::Value<rdlcVal,rdlcVal::v0100> v0100{};
            constexpr MPL::Value<rdlcVal,rdlcVal::v0101> v0101{};
            constexpr MPL::Value<rdlcVal,rdlcVal::v0110> v0110{};
            constexpr MPL::Value<rdlcVal,rdlcVal::v0111> v0111{};
            constexpr MPL::Value<rdlcVal,rdlcVal::v1000> v1000{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,rdlcVal> rdlc{}; 
    }
    namespace MscanRtsrh{    ///<Receive Time Stamp Register High
        using Addr = Register::Address<0x4002402e,0xffffff00,0,unsigned char>;
        ///Time Stamp
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rts{}; 
    }
    namespace MscanRtsrl{    ///<Receive Time Stamp Register Low
        using Addr = Register::Address<0x4002402f,0xffffff00,0,unsigned char>;
        ///Time Stamp
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rts{}; 
    }
    namespace MscanTeidr0{    ///<Transmit Extended Identifier Register 0
        using Addr = Register::Address<0x40024030,0xffffff00,0,unsigned char>;
        ///Extended Format Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> teid28Teid21{}; 
    }
    namespace MscanTsidr0{    ///<Transmit Standard Identifier Register 0
        using Addr = Register::Address<0x40024030,0xffffff00,0,unsigned char>;
        ///Standard Format Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tsid10Tsid3{}; 
    }
    namespace MscanTeidr1{    ///<Transmit Extended Identifier Register 1
        using Addr = Register::Address<0x40024031,0xffffff00,0,unsigned char>;
        ///Extended Format Identifier 17-15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> teid17Teid15{}; 
        ///ID Extended
        enum class teideVal {
            v0=0x00000000,     ///<Standard format (11 bit).
            v1=0x00000001,     ///<Extended format (29 bit).
        };
        namespace teideValC{
            constexpr MPL::Value<teideVal,teideVal::v0> v0{};
            constexpr MPL::Value<teideVal,teideVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,teideVal> teide{}; 
        ///Substitute Remote Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tsrr{}; 
        ///Extended Format Identifier 20-18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> teid20Teid18{}; 
    }
    namespace MscanTsidr1{    ///<Transmit Standard Identifier Register 1
        using Addr = Register::Address<0x40024031,0xffffff07,0,unsigned char>;
        ///ID Extended
        enum class tsideVal {
            v0=0x00000000,     ///<Standard format (11 bit).
            v1=0x00000001,     ///<Extended format (29 bit).
        };
        namespace tsideValC{
            constexpr MPL::Value<tsideVal,tsideVal::v0> v0{};
            constexpr MPL::Value<tsideVal,tsideVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tsideVal> tside{}; 
        ///Remote Transmission Request
        enum class tsrtrVal {
            v0=0x00000000,     ///<Data frame.
            v1=0x00000001,     ///<Remote frame.
        };
        namespace tsrtrValC{
            constexpr MPL::Value<tsrtrVal,tsrtrVal::v0> v0{};
            constexpr MPL::Value<tsrtrVal,tsrtrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tsrtrVal> tsrtr{}; 
        ///Standard Format Identifier 2-0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> tsid2Tsid0{}; 
    }
    namespace MscanTeidr2{    ///<Transmit Extended Identifier Register 2
        using Addr = Register::Address<0x40024032,0xffffff00,0,unsigned char>;
        ///Extended Format Identifier 14-7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> teid14Teid7{}; 
    }
    namespace MscanTeidr3{    ///<Transmit Extended Identifier Register 3
        using Addr = Register::Address<0x40024033,0xffffff00,0,unsigned char>;
        ///Remote Transmission Request
        enum class tertrVal {
            v0=0x00000000,     ///<Data frame.
            v1=0x00000001,     ///<Remote frame.
        };
        namespace tertrValC{
            constexpr MPL::Value<tertrVal,tertrVal::v0> v0{};
            constexpr MPL::Value<tertrVal,tertrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tertrVal> tertr{}; 
        ///Extended Format Identifier 6-0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> teid6Teid0{}; 
    }
    namespace MscanTedsr0{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x40024034,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTedsr1{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x40024035,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTedsr2{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x40024036,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTedsr3{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x40024037,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTedsr4{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x40024038,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTedsr5{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x40024039,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTedsr6{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x4002403a,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTedsr7{    ///<Transmit Extended Data Segment Register N
        using Addr = Register::Address<0x4002403b,0xffffff00,0,unsigned char>;
        ///Data Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tdb{}; 
    }
    namespace MscanTdlr{    ///<This register keeps the data length field of the CAN frame.
        using Addr = Register::Address<0x4002403c,0xfffffff0,0,unsigned char>;
        ///Data Length Code Bits
        enum class tdlcVal {
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
        namespace tdlcValC{
            constexpr MPL::Value<tdlcVal,tdlcVal::v0000> v0000{};
            constexpr MPL::Value<tdlcVal,tdlcVal::v0001> v0001{};
            constexpr MPL::Value<tdlcVal,tdlcVal::v0010> v0010{};
            constexpr MPL::Value<tdlcVal,tdlcVal::v0011> v0011{};
            constexpr MPL::Value<tdlcVal,tdlcVal::v0100> v0100{};
            constexpr MPL::Value<tdlcVal,tdlcVal::v0101> v0101{};
            constexpr MPL::Value<tdlcVal,tdlcVal::v0110> v0110{};
            constexpr MPL::Value<tdlcVal,tdlcVal::v0111> v0111{};
            constexpr MPL::Value<tdlcVal,tdlcVal::v1000> v1000{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,tdlcVal> tdlc{}; 
    }
    namespace MscanTbpr{    ///<Transmit Buffer Priority Register
        using Addr = Register::Address<0x4002403d,0xffffff00,0,unsigned char>;
        ///Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prio{}; 
    }
    namespace MscanTtsrh{    ///<Transmit Time Stamp Register High
        using Addr = Register::Address<0x4002403e,0xffffff00,0,unsigned char>;
        ///Time Stamp
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tts{}; 
    }
    namespace MscanTtsrl{    ///<Transmit Time Stamp Register Low
        using Addr = Register::Address<0x4002403f,0xffffff00,0,unsigned char>;
        ///Time Stamp
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tts{}; 
    }
}
