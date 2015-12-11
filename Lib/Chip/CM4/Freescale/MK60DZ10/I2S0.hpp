#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Synchronous Serial Interface
    namespace I2s0Tx0{    ///<I2S Transmit Data Registers 0
        using Addr = Register::Address<0x4002f000,0x00000000,0,unsigned>;
        ///I2S transmit data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tx0{}; 
    }
    namespace I2s0Tx1{    ///<I2S Transmit Data Registers 1
        using Addr = Register::Address<0x4002f004,0x00000000,0,unsigned>;
        ///I2S transmit data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tx1{}; 
    }
    namespace I2s0Rx0{    ///<I2S Receive Data Registers 0
        using Addr = Register::Address<0x4002f008,0x00000000,0,unsigned>;
        ///I2S Receive Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rx0{}; 
    }
    namespace I2s0Rx1{    ///<I2S Receive Data Registers 1
        using Addr = Register::Address<0x4002f00c,0x00000000,0,unsigned>;
        ///I2S Receive Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rx1{}; 
    }
    namespace I2s0Cr{    ///<I2S Control Register
        using Addr = Register::Address<0x4002f010,0xffffe000,0,unsigned>;
        ///I2S Enable.
        enum class I2senVal {
            v0=0x00000000,     ///<I2S is disabled.
            v1=0x00000001,     ///<I2S is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,I2senVal> i2sen{}; 
        namespace I2senValC{
            constexpr Register::FieldValue<decltype(i2sen)::Type,I2senVal::v0> v0{};
            constexpr Register::FieldValue<decltype(i2sen)::Type,I2senVal::v1> v1{};
        }
        }
        ///Transmit Enable.
        enum class TeVal {
            v0=0x00000000,     ///<Transmit section disabled.
            v1=0x00000001,     ///<Transmit section enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TeVal> te{}; 
        namespace TeValC{
            constexpr Register::FieldValue<decltype(te)::Type,TeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(te)::Type,TeVal::v1> v1{};
        }
        }
        ///Receive Enable.
        enum class ReVal {
            v0=0x00000000,     ///<Receive section disabled.
            v1=0x00000001,     ///<Receive section enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ReVal> re{}; 
        namespace ReValC{
            constexpr Register::FieldValue<decltype(re)::Type,ReVal::v0> v0{};
            constexpr Register::FieldValue<decltype(re)::Type,ReVal::v1> v1{};
        }
        }
        ///Network Mode.
        enum class NetVal {
            v0=0x00000000,     ///<Network mode not selected.
            v1=0x00000001,     ///<Network mode selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,NetVal> net{}; 
        namespace NetValC{
            constexpr Register::FieldValue<decltype(net)::Type,NetVal::v0> v0{};
            constexpr Register::FieldValue<decltype(net)::Type,NetVal::v1> v1{};
        }
        }
        ///Synchronous Mode.
        enum class SynVal {
            v0=0x00000000,     ///<Asynchronous mode selected.
            v1=0x00000001,     ///<Synchronous mode selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SynVal> syn{}; 
        namespace SynValC{
            constexpr Register::FieldValue<decltype(syn)::Type,SynVal::v0> v0{};
            constexpr Register::FieldValue<decltype(syn)::Type,SynVal::v1> v1{};
        }
        }
        ///I2S Mode Select
        enum class I2smodeVal {
            v00=0x00000000,     ///<Normal mode
            v01=0x00000001,     ///<I2S master mode
            v10=0x00000002,     ///<I2S slave mode
            v11=0x00000003,     ///<Normal mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,I2smodeVal> i2smode{}; 
        namespace I2smodeValC{
            constexpr Register::FieldValue<decltype(i2smode)::Type,I2smodeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(i2smode)::Type,I2smodeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(i2smode)::Type,I2smodeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(i2smode)::Type,I2smodeVal::v11> v11{};
        }
        }
        ///System Clock (Oversampling Clock) Enable.
        enum class SysclkenVal {
            v0=0x00000000,     ///<Network clock not output on SRCK port.
            v1=0x00000001,     ///<Network clock output on SRCK port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SysclkenVal> sysclken{}; 
        namespace SysclkenValC{
            constexpr Register::FieldValue<decltype(sysclken)::Type,SysclkenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sysclken)::Type,SysclkenVal::v1> v1{};
        }
        }
        ///Two-Channel Operation Enable.
        enum class TchenVal {
            v0=0x00000000,     ///<Two-channel mode disabled.
            v1=0x00000001,     ///<Two-channel mode enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TchenVal> tchen{}; 
        namespace TchenValC{
            constexpr Register::FieldValue<decltype(tchen)::Type,TchenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tchen)::Type,TchenVal::v1> v1{};
        }
        }
        ///Clock Idle State.
        enum class ClkistVal {
            v0=0x00000000,     ///<Clock idle state is `0'.
            v1=0x00000001,     ///<Clock idle state is `1'.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ClkistVal> clkist{}; 
        namespace ClkistValC{
            constexpr Register::FieldValue<decltype(clkist)::Type,ClkistVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clkist)::Type,ClkistVal::v1> v1{};
        }
        }
        ///Transmit Frame Clock Disable.
        enum class TfrclkdisVal {
            v0=0x00000000,     ///<Continue frame-sync/clock generation after current frame during which CR[TE] is cleared. This may be required when frame-sync and clocks are required from I2S, even when no data is to be received.
            v1=0x00000001,     ///<Stop frame-sync/clock generation at next frame boundary. This will be effective also in case where transmitter is already disabled in current or previous frames.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,TfrclkdisVal> tfrclkdis{}; 
        namespace TfrclkdisValC{
            constexpr Register::FieldValue<decltype(tfrclkdis)::Type,TfrclkdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfrclkdis)::Type,TfrclkdisVal::v1> v1{};
        }
        }
        ///Receive Frame Clock Disable.
        enum class RfrclkdisVal {
            v0=0x00000000,     ///<Continue frame-sync/clock generation after current frame during which CR[RE] is cleared. This may be required when Frame-sync and Clocks are required from I2S, even when no data is to be received.
            v1=0x00000001,     ///<Stop frame-sync/clock generation at next frame boundary. This will be effective also in case where receiver is already disabled in current or previous frames.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,RfrclkdisVal> rfrclkdis{}; 
        namespace RfrclkdisValC{
            constexpr Register::FieldValue<decltype(rfrclkdis)::Type,RfrclkdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rfrclkdis)::Type,RfrclkdisVal::v1> v1{};
        }
        }
        ///no description available
        enum class SynctxfsVal {
            v0=0x00000000,     ///<CR[TE] not latched with FS occurrence and used directly for transmitter enable/disable.
            v1=0x00000001,     ///<CR[TE] latched with FS occurrence and latched-TE used for transmitter enable/disable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,SynctxfsVal> synctxfs{}; 
        namespace SynctxfsValC{
            constexpr Register::FieldValue<decltype(synctxfs)::Type,SynctxfsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(synctxfs)::Type,SynctxfsVal::v1> v1{};
        }
        }
    }
    namespace I2s0Isr{    ///<I2S Interrupt Status Register
        using Addr = Register::Address<0x4002f014,0xfe780000,0,unsigned>;
        ///Transmit FIFO Empty 0.
        enum class Tfe0Val {
            v0=0x00000000,     ///<Transmit FIFO0 has data for transmission.
            v1=0x00000001,     ///<Transmit FIFO0 is empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tfe0Val> tfe0{}; 
        namespace Tfe0ValC{
            constexpr Register::FieldValue<decltype(tfe0)::Type,Tfe0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tfe0)::Type,Tfe0Val::v1> v1{};
        }
        }
        ///Transmit FIFO Empty 1.
        enum class Tfe1Val {
            v0=0x00000000,     ///<Transmit FIFO1 has data for transmission.
            v1=0x00000001,     ///<Transmit FIFO1 is empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Tfe1Val> tfe1{}; 
        namespace Tfe1ValC{
            constexpr Register::FieldValue<decltype(tfe1)::Type,Tfe1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tfe1)::Type,Tfe1Val::v1> v1{};
        }
        }
        ///Receive FIFO Full 0.
        enum class Rff0Val {
            v0=0x00000000,     ///<Space available in receive FIFO0.
            v1=0x00000001,     ///<Receive FIFO0 is full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Rff0Val> rff0{}; 
        namespace Rff0ValC{
            constexpr Register::FieldValue<decltype(rff0)::Type,Rff0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rff0)::Type,Rff0Val::v1> v1{};
        }
        }
        ///Receive FIFO Full 1.
        enum class Rff1Val {
            v0=0x00000000,     ///<Space available in receive FIFO1.
            v1=0x00000001,     ///<Receive FIFO1 is full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Rff1Val> rff1{}; 
        namespace Rff1ValC{
            constexpr Register::FieldValue<decltype(rff1)::Type,Rff1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rff1)::Type,Rff1Val::v1> v1{};
        }
        }
        ///Receive Last Time Slot.
        enum class RlsVal {
            v0=0x00000000,     ///<Current time slot is not last time slot of frame.
            v1=0x00000001,     ///<Current time slot is the last receive time slot of frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RlsVal> rls{}; 
        namespace RlsValC{
            constexpr Register::FieldValue<decltype(rls)::Type,RlsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rls)::Type,RlsVal::v1> v1{};
        }
        }
        ///Transmit Last Time Slot.
        enum class TlsVal {
            v0=0x00000000,     ///<Current time slot is not last time slot of frame.
            v1=0x00000001,     ///<Current time slot is the last transmit time slot of frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TlsVal> tls{}; 
        namespace TlsValC{
            constexpr Register::FieldValue<decltype(tls)::Type,TlsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tls)::Type,TlsVal::v1> v1{};
        }
        }
        ///Receive Frame Sync.
        enum class RfsVal {
            v0=0x00000000,     ///<No occurrence of receive frame sync.
            v1=0x00000001,     ///<Receive frame sync occurred during reception of next word in RX registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RfsVal> rfs{}; 
        namespace RfsValC{
            constexpr Register::FieldValue<decltype(rfs)::Type,RfsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rfs)::Type,RfsVal::v1> v1{};
        }
        }
        ///Transmit Frame Sync.
        enum class TfsVal {
            v0=0x00000000,     ///<No occurrence of transmit frame sync.
            v1=0x00000001,     ///<Transmit frame sync occurred during transmission of last word written to TX registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TfsVal> tfs{}; 
        namespace TfsValC{
            constexpr Register::FieldValue<decltype(tfs)::Type,TfsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfs)::Type,TfsVal::v1> v1{};
        }
        }
        ///Transmitter Underrun Error 1.
        enum class Tue0Val {
            v0=0x00000000,     ///<No underrun detected
            v1=0x00000001,     ///<Transmitter underrun error occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tue0Val> tue0{}; 
        namespace Tue0ValC{
            constexpr Register::FieldValue<decltype(tue0)::Type,Tue0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tue0)::Type,Tue0Val::v1> v1{};
        }
        }
        ///Transmitter Underrun Error 1.
        enum class Tue1Val {
            v0=0x00000000,     ///<No underrun detected
            v1=0x00000001,     ///<Transmitter underrun error occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Tue1Val> tue1{}; 
        namespace Tue1ValC{
            constexpr Register::FieldValue<decltype(tue1)::Type,Tue1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tue1)::Type,Tue1Val::v1> v1{};
        }
        }
        ///Receiver Overrun Error 0.
        enum class Roe0Val {
            v0=0x00000000,     ///<No overrun detected
            v1=0x00000001,     ///<Receiver overrun error occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Roe0Val> roe0{}; 
        namespace Roe0ValC{
            constexpr Register::FieldValue<decltype(roe0)::Type,Roe0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(roe0)::Type,Roe0Val::v1> v1{};
        }
        }
        ///Receiver Overrun Error 1.
        enum class Roe1Val {
            v0=0x00000000,     ///<No overrun detected
            v1=0x00000001,     ///<Receiver overrun error occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Roe1Val> roe1{}; 
        namespace Roe1ValC{
            constexpr Register::FieldValue<decltype(roe1)::Type,Roe1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(roe1)::Type,Roe1Val::v1> v1{};
        }
        }
        ///Transmit Data Register Empty 0.
        enum class Tde0Val {
            v0=0x00000000,     ///<Data available for transmission.
            v1=0x00000001,     ///<Data needs to be written by the core for transmission.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tde0Val> tde0{}; 
        namespace Tde0ValC{
            constexpr Register::FieldValue<decltype(tde0)::Type,Tde0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tde0)::Type,Tde0Val::v1> v1{};
        }
        }
        ///Transmit Data Register Empty 1.
        enum class Tde1Val {
            v0=0x00000000,     ///<Data available for transmission.
            v1=0x00000001,     ///<Data needs to be written by the core for transmission.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Tde1Val> tde1{}; 
        namespace Tde1ValC{
            constexpr Register::FieldValue<decltype(tde1)::Type,Tde1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tde1)::Type,Tde1Val::v1> v1{};
        }
        }
        ///Receive Data Ready 0.
        enum class Rdr0Val {
            v0=0x00000000,     ///<No new data for core to read.
            v1=0x00000001,     ///<New data for core to read.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Rdr0Val> rdr0{}; 
        namespace Rdr0ValC{
            constexpr Register::FieldValue<decltype(rdr0)::Type,Rdr0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rdr0)::Type,Rdr0Val::v1> v1{};
        }
        }
        ///Receive Data Ready 1.
        enum class Rdr1Val {
            v0=0x00000000,     ///<No new data for core to read.
            v1=0x00000001,     ///<New data for core to read.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Rdr1Val> rdr1{}; 
        namespace Rdr1ValC{
            constexpr Register::FieldValue<decltype(rdr1)::Type,Rdr1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rdr1)::Type,Rdr1Val::v1> v1{};
        }
        }
        ///Receive Tag Updated.
        enum class RxtVal {
            v0=0x00000000,     ///<No change in ATAG register.
            v1=0x00000001,     ///<ATAG register updated with different value.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,RxtVal> rxt{}; 
        namespace RxtValC{
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::v1> v1{};
        }
        }
        ///Command Data Register Updated.
        enum class CmdduVal {
            v0=0x00000000,     ///<No change in ACDAT register.
            v1=0x00000001,     ///<ACDAT register updated with different value.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,CmdduVal> cmddu{}; 
        namespace CmdduValC{
            constexpr Register::FieldValue<decltype(cmddu)::Type,CmdduVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmddu)::Type,CmdduVal::v1> v1{};
        }
        }
        ///Command Address Register Updated.
        enum class CmdauVal {
            v0=0x00000000,     ///<No change in ACADD register.
            v1=0x00000001,     ///<ACADD register updated with different value.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,CmdauVal> cmdau{}; 
        namespace CmdauValC{
            constexpr Register::FieldValue<decltype(cmdau)::Type,CmdauVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmdau)::Type,CmdauVal::v1> v1{};
        }
        }
        ///Transmit Frame Complete.
        enum class TrfcVal {
            v0=0x00000000,     ///<End of frame not reached.
            v1=0x00000001,     ///<End of frame reached after disabling CR[TE] or disabling CR[TFRCLKDIS], when transmitter is already disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TrfcVal> trfc{}; 
        namespace TrfcValC{
            constexpr Register::FieldValue<decltype(trfc)::Type,TrfcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trfc)::Type,TrfcVal::v1> v1{};
        }
        }
        ///Receive Frame Complete.
        enum class RfrcVal {
            v0=0x00000000,     ///<End of frame not reached.
            v1=0x00000001,     ///<End of frame reached after disabling CR[RE] or disabling CR[RFRCLKDIS], when receiver is already disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,RfrcVal> rfrc{}; 
        namespace RfrcValC{
            constexpr Register::FieldValue<decltype(rfrc)::Type,RfrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rfrc)::Type,RfrcVal::v1> v1{};
        }
        }
    }
    namespace I2s0Ier{    ///<I2S Interrupt Enable Register
        using Addr = Register::Address<0x4002f018,0xfe000000,0,unsigned>;
        ///Enable Bit.
        enum class Tfe0enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tfe0enVal> tfe0en{}; 
        namespace Tfe0enValC{
            constexpr Register::FieldValue<decltype(tfe0en)::Type,Tfe0enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfe0en)::Type,Tfe0enVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class Tfe1enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Tfe1enVal> tfe1en{}; 
        namespace Tfe1enValC{
            constexpr Register::FieldValue<decltype(tfe1en)::Type,Tfe1enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfe1en)::Type,Tfe1enVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class Rff0enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Rff0enVal> rff0en{}; 
        namespace Rff0enValC{
            constexpr Register::FieldValue<decltype(rff0en)::Type,Rff0enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rff0en)::Type,Rff0enVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class Rff1enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Rff1enVal> rff1en{}; 
        namespace Rff1enValC{
            constexpr Register::FieldValue<decltype(rff1en)::Type,Rff1enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rff1en)::Type,Rff1enVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class RlsenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RlsenVal> rlsen{}; 
        namespace RlsenValC{
            constexpr Register::FieldValue<decltype(rlsen)::Type,RlsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rlsen)::Type,RlsenVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class TlsenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TlsenVal> tlsen{}; 
        namespace TlsenValC{
            constexpr Register::FieldValue<decltype(tlsen)::Type,TlsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tlsen)::Type,TlsenVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class RfsenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RfsenVal> rfsen{}; 
        namespace RfsenValC{
            constexpr Register::FieldValue<decltype(rfsen)::Type,RfsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rfsen)::Type,RfsenVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class TfsenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TfsenVal> tfsen{}; 
        namespace TfsenValC{
            constexpr Register::FieldValue<decltype(tfsen)::Type,TfsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfsen)::Type,TfsenVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class Tue0enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tue0enVal> tue0en{}; 
        namespace Tue0enValC{
            constexpr Register::FieldValue<decltype(tue0en)::Type,Tue0enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tue0en)::Type,Tue0enVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class Tue1enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Tue1enVal> tue1en{}; 
        namespace Tue1enValC{
            constexpr Register::FieldValue<decltype(tue1en)::Type,Tue1enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tue1en)::Type,Tue1enVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class Roe0enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Roe0enVal> roe0en{}; 
        namespace Roe0enValC{
            constexpr Register::FieldValue<decltype(roe0en)::Type,Roe0enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(roe0en)::Type,Roe0enVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class Roe1enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Roe1enVal> roe1en{}; 
        namespace Roe1enValC{
            constexpr Register::FieldValue<decltype(roe1en)::Type,Roe1enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(roe1en)::Type,Roe1enVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class Tde0enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tde0enVal> tde0en{}; 
        namespace Tde0enValC{
            constexpr Register::FieldValue<decltype(tde0en)::Type,Tde0enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tde0en)::Type,Tde0enVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class Tde1enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Tde1enVal> tde1en{}; 
        namespace Tde1enValC{
            constexpr Register::FieldValue<decltype(tde1en)::Type,Tde1enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tde1en)::Type,Tde1enVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class Rdr0enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Rdr0enVal> rdr0en{}; 
        namespace Rdr0enValC{
            constexpr Register::FieldValue<decltype(rdr0en)::Type,Rdr0enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rdr0en)::Type,Rdr0enVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class Rdr1enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Rdr1enVal> rdr1en{}; 
        namespace Rdr1enValC{
            constexpr Register::FieldValue<decltype(rdr1en)::Type,Rdr1enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rdr1en)::Type,Rdr1enVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class RxtenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,RxtenVal> rxten{}; 
        namespace RxtenValC{
            constexpr Register::FieldValue<decltype(rxten)::Type,RxtenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxten)::Type,RxtenVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class CmdduenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,CmdduenVal> cmdduen{}; 
        namespace CmdduenValC{
            constexpr Register::FieldValue<decltype(cmdduen)::Type,CmdduenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmdduen)::Type,CmdduenVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class CmdauenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,CmdauenVal> cmdauen{}; 
        namespace CmdauenValC{
            constexpr Register::FieldValue<decltype(cmdauen)::Type,CmdauenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmdauen)::Type,CmdauenVal::v1> v1{};
        }
        }
        ///Transmit Interrupt Enable.
        enum class TieVal {
            v0=0x00000000,     ///<I2S transmitter interrupt requests disabled.
            v1=0x00000001,     ///<I2S transmitter interrupt requests enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,TieVal> tie{}; 
        namespace TieValC{
            constexpr Register::FieldValue<decltype(tie)::Type,TieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tie)::Type,TieVal::v1> v1{};
        }
        }
        ///Transmit DMA Enable.
        enum class TdmaeVal {
            v0=0x00000000,     ///<I2S transmitter DMA requests disabled.
            v1=0x00000001,     ///<I2S transmitter DMA requests enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,TdmaeVal> tdmae{}; 
        namespace TdmaeValC{
            constexpr Register::FieldValue<decltype(tdmae)::Type,TdmaeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdmae)::Type,TdmaeVal::v1> v1{};
        }
        }
        ///Receive Interrupt Enable.
        enum class RieVal {
            v0=0x00000000,     ///<I2S receiver interrupt requests disabled.
            v1=0x00000001,     ///<I2S receiver interrupt requests enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,RieVal> rie{}; 
        namespace RieValC{
            constexpr Register::FieldValue<decltype(rie)::Type,RieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rie)::Type,RieVal::v1> v1{};
        }
        }
        ///Receive DMA Enable.
        enum class RdmaeVal {
            v0=0x00000000,     ///<I2S receiver DMA requests disabled.
            v1=0x00000001,     ///<I2S receiver DMA requests enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,RdmaeVal> rdmae{}; 
        namespace RdmaeValC{
            constexpr Register::FieldValue<decltype(rdmae)::Type,RdmaeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rdmae)::Type,RdmaeVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class TfrcenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TfrcenVal> tfrcEn{}; 
        namespace TfrcenValC{
            constexpr Register::FieldValue<decltype(tfrcEn)::Type,TfrcenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfrcEn)::Type,TfrcenVal::v1> v1{};
        }
        }
        ///Enable Bit.
        enum class RfrcenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,RfrcenVal> rfrcEn{}; 
        namespace RfrcenValC{
            constexpr Register::FieldValue<decltype(rfrcEn)::Type,RfrcenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rfrcEn)::Type,RfrcenVal::v1> v1{};
        }
        }
    }
    namespace I2s0Tcr{    ///<I2S Transmit Configuration Register
        using Addr = Register::Address<0x4002f01c,0xfffffc00,0,unsigned>;
        ///Transmit Early Frame Sync.
        enum class TefsVal {
            v0=0x00000000,     ///<Transmit frame sync initiated as the first bit of data is transmitted.
            v1=0x00000001,     ///<Transmit frame sync is initiated one bit before the data is transmitted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TefsVal> tefs{}; 
        namespace TefsValC{
            constexpr Register::FieldValue<decltype(tefs)::Type,TefsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tefs)::Type,TefsVal::v1> v1{};
        }
        }
        ///Transmit Frame Sync Length.
        enum class TfslVal {
            v0=0x00000000,     ///<Transmit frame sync is one-word long.
            v1=0x00000001,     ///<Transmit frame sync is one-clock-bit long.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TfslVal> tfsl{}; 
        namespace TfslValC{
            constexpr Register::FieldValue<decltype(tfsl)::Type,TfslVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfsl)::Type,TfslVal::v1> v1{};
        }
        }
        ///Transmit Frame Sync Invert.
        enum class TfsiVal {
            v0=0x00000000,     ///<Transmit frame sync is active high.
            v1=0x00000001,     ///<Transmit frame sync is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TfsiVal> tfsi{}; 
        namespace TfsiValC{
            constexpr Register::FieldValue<decltype(tfsi)::Type,TfsiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfsi)::Type,TfsiVal::v1> v1{};
        }
        }
        ///Transmit Clock Polarity.
        enum class TsckpVal {
            v0=0x00000000,     ///<Data clocked out on rising edge of bit clock.
            v1=0x00000001,     ///<Data clocked out on falling edge of bit clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TsckpVal> tsckp{}; 
        namespace TsckpValC{
            constexpr Register::FieldValue<decltype(tsckp)::Type,TsckpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsckp)::Type,TsckpVal::v1> v1{};
        }
        }
        ///Transmit Shift Direction.
        enum class TshfdVal {
            v0=0x00000000,     ///<Data transmitted MSB first.
            v1=0x00000001,     ///<Data transmitted LSB first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TshfdVal> tshfd{}; 
        namespace TshfdValC{
            constexpr Register::FieldValue<decltype(tshfd)::Type,TshfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tshfd)::Type,TshfdVal::v1> v1{};
        }
        }
        ///Transmit clock direction
        enum class TxdirVal {
            v0=0x00000000,     ///<Transmit clock is external.
            v1=0x00000001,     ///<Transmit clock generated internally
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TxdirVal> txdir{}; 
        namespace TxdirValC{
            constexpr Register::FieldValue<decltype(txdir)::Type,TxdirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txdir)::Type,TxdirVal::v1> v1{};
        }
        }
        ///Transmit Frame Direction.
        enum class TfdirVal {
            v0=0x00000000,     ///<Frame sync is external.
            v1=0x00000001,     ///<Frame sync generated internally.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TfdirVal> tfdir{}; 
        namespace TfdirValC{
            constexpr Register::FieldValue<decltype(tfdir)::Type,TfdirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfdir)::Type,TfdirVal::v1> v1{};
        }
        }
        ///Transmit FIFO Enable 0.
        enum class Tfen0Val {
            v0=0x00000000,     ///<Transmit FIFO 0 disabled.
            v1=0x00000001,     ///<Transmit FIFO 0 enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Tfen0Val> tfen0{}; 
        namespace Tfen0ValC{
            constexpr Register::FieldValue<decltype(tfen0)::Type,Tfen0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tfen0)::Type,Tfen0Val::v1> v1{};
        }
        }
        ///Transmit FIFO Enable 1.
        enum class Tfen1Val {
            v0=0x00000000,     ///<Transmit FIFO 1 disabled.
            v1=0x00000001,     ///<Transmit FIFO 1 enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tfen1Val> tfen1{}; 
        namespace Tfen1ValC{
            constexpr Register::FieldValue<decltype(tfen1)::Type,Tfen1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tfen1)::Type,Tfen1Val::v1> v1{};
        }
        }
        ///Transmit Bit 0.
        enum class Txbit0Val {
            v0=0x00000000,     ///<Shifting with respect to bit 31 (if word length = 16, 18, 20, 22 or 24) or bit 15 (if word length = 8, 10 or 12) of transmit shift register (MSB aligned).
            v1=0x00000001,     ///<Shifting with respect to bit 0 of transmit shift register (LSB aligned).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Txbit0Val> txbit0{}; 
        namespace Txbit0ValC{
            constexpr Register::FieldValue<decltype(txbit0)::Type,Txbit0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(txbit0)::Type,Txbit0Val::v1> v1{};
        }
        }
    }
    namespace I2s0Rcr{    ///<I2S Receive Configuration Register
        using Addr = Register::Address<0x4002f020,0xfffff800,0,unsigned>;
        ///Receive Early Frame Sync.
        enum class RefsVal {
            v0=0x00000000,     ///<Receive frame sync initiated as the first bit of data is received.
            v1=0x00000001,     ///<Receive frame sync is initiated one bit before the data is received.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RefsVal> refs{}; 
        namespace RefsValC{
            constexpr Register::FieldValue<decltype(refs)::Type,RefsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(refs)::Type,RefsVal::v1> v1{};
        }
        }
        ///Receive Frame Sync Length.
        enum class RfslVal {
            v0=0x00000000,     ///<Receive frame sync is one-word long.
            v1=0x00000001,     ///<Receive frame sync is one-clock-bit long.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RfslVal> rfsl{}; 
        namespace RfslValC{
            constexpr Register::FieldValue<decltype(rfsl)::Type,RfslVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rfsl)::Type,RfslVal::v1> v1{};
        }
        }
        ///Receive Frame Sync Invert.
        enum class RfsiVal {
            v0=0x00000000,     ///<Receive frame sync is active high.
            v1=0x00000001,     ///<Receive frame sync is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RfsiVal> rfsi{}; 
        namespace RfsiValC{
            constexpr Register::FieldValue<decltype(rfsi)::Type,RfsiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rfsi)::Type,RfsiVal::v1> v1{};
        }
        }
        ///Receive Clock Polarity.
        enum class RsckpVal {
            v0=0x00000000,     ///<Data latched on falling edge of bit clock.
            v1=0x00000001,     ///<Data latched on rising edge of bit clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RsckpVal> rsckp{}; 
        namespace RsckpValC{
            constexpr Register::FieldValue<decltype(rsckp)::Type,RsckpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rsckp)::Type,RsckpVal::v1> v1{};
        }
        }
        ///Receive Shift Direction.
        enum class RshfdVal {
            v0=0x00000000,     ///<Data received MSB first.
            v1=0x00000001,     ///<Data received LSB first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RshfdVal> rshfd{}; 
        namespace RshfdValC{
            constexpr Register::FieldValue<decltype(rshfd)::Type,RshfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rshfd)::Type,RshfdVal::v1> v1{};
        }
        }
        ///Receive Clock Direction.
        enum class RxdirVal {
            v0=0x00000000,     ///<Receive Clock is external.
            v1=0x00000001,     ///<Receive Clock generated internally.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RxdirVal> rxdir{}; 
        namespace RxdirValC{
            constexpr Register::FieldValue<decltype(rxdir)::Type,RxdirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxdir)::Type,RxdirVal::v1> v1{};
        }
        }
        ///Receive Frame Direction.
        enum class RfdirVal {
            v0=0x00000000,     ///<Frame Sync is external.
            v1=0x00000001,     ///<Frame Sync generated internally.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RfdirVal> rfdir{}; 
        namespace RfdirValC{
            constexpr Register::FieldValue<decltype(rfdir)::Type,RfdirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rfdir)::Type,RfdirVal::v1> v1{};
        }
        }
        ///Receive FIFO Enable 0.
        enum class Rfen0Val {
            v0=0x00000000,     ///<Receive FIFO 0 disabled.
            v1=0x00000001,     ///<Receive FIFO 0 enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Rfen0Val> rfen0{}; 
        namespace Rfen0ValC{
            constexpr Register::FieldValue<decltype(rfen0)::Type,Rfen0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rfen0)::Type,Rfen0Val::v1> v1{};
        }
        }
        ///Receive FIFO Enable 1.
        enum class Rfen1Val {
            v0=0x00000000,     ///<Receive FIFO 1 disabled.
            v1=0x00000001,     ///<Receive FIFO 1 enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Rfen1Val> rfen1{}; 
        namespace Rfen1ValC{
            constexpr Register::FieldValue<decltype(rfen1)::Type,Rfen1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rfen1)::Type,Rfen1Val::v1> v1{};
        }
        }
        ///Receive Bit 0.
        enum class Rxbit0Val {
            v0=0x00000000,     ///<Shifting with respect to bit 31 (if word length = 16, 18, 20, 22 or 24) or bit 15 (if word length = 8, 10 or 12) of receive shift register (MSB aligned).
            v1=0x00000001,     ///<Shifting with respect to bit 0 of receive shift register (LSB aligned).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Rxbit0Val> rxbit0{}; 
        namespace Rxbit0ValC{
            constexpr Register::FieldValue<decltype(rxbit0)::Type,Rxbit0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rxbit0)::Type,Rxbit0Val::v1> v1{};
        }
        }
        ///Receive Data Extension.
        enum class RxextVal {
            v0=0x00000000,     ///<Sign extension turned off.
            v1=0x00000001,     ///<Sign extension turned on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RxextVal> rxext{}; 
        namespace RxextValC{
            constexpr Register::FieldValue<decltype(rxext)::Type,RxextVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxext)::Type,RxextVal::v1> v1{};
        }
        }
    }
    namespace I2s0Tccr{    ///<I2S Transmit Clock Control Registers
        using Addr = Register::Address<0x4002f024,0xfff80000,0,unsigned>;
        ///Prescaler Modulus Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Frame Rate Divider Control.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dc{}; 
        ///Word Length Control.
        enum class WlVal {
            v0000=0x00000000,     ///<Reserved. Do not program this value.
            v0001=0x00000001,     ///<Reserved. Do not program this value.
            v0010=0x00000002,     ///<Reserved. Do not program this value.
            v0011=0x00000003,     ///<8
            v0100=0x00000004,     ///<10
            v0101=0x00000005,     ///<12
            v0110=0x00000006,     ///<Reserved. Do not program this value.
            v0111=0x00000007,     ///<16
            v1000=0x00000008,     ///<18
            v1001=0x00000009,     ///<20
            v1010=0x0000000a,     ///<22
            v1011=0x0000000b,     ///<24
            v1100=0x0000000c,     ///<Reserved. Do not program this value.
            v1101=0x0000000d,     ///<Reserved. Do not program this value.
            v1110=0x0000000e,     ///<Reserved. Do not program this value.
            v1111=0x0000000f,     ///<Reserved. Do not program this value.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,WlVal> wl{}; 
        namespace WlValC{
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1111> v1111{};
        }
        }
        ///Prescaler Range.
        enum class PsrVal {
            v0=0x00000000,     ///<Prescaler bypassed.
            v1=0x00000001,     ///<Prescaler used to divide clock by 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,PsrVal> psr{}; 
        namespace PsrValC{
            constexpr Register::FieldValue<decltype(psr)::Type,PsrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(psr)::Type,PsrVal::v1> v1{};
        }
        }
        ///Divide By 2.
        enum class Div2Val {
            v0=0x00000000,     ///<Divider bypassed.
            v1=0x00000001,     ///<Divider used to divide clock by 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Div2Val> div2{}; 
        namespace Div2ValC{
            constexpr Register::FieldValue<decltype(div2)::Type,Div2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(div2)::Type,Div2Val::v1> v1{};
        }
        }
    }
    namespace I2s0Rccr{    ///<I2S Receive Clock Control Registers
        using Addr = Register::Address<0x4002f028,0xfff80000,0,unsigned>;
        ///Prescaler Modulus Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Frame Rate Divider Control.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dc{}; 
        ///Word Length Control.
        enum class WlVal {
            v0000=0x00000000,     ///<Number of Bits/Word: 2; Supported in Implementation: No.
            v0001=0x00000001,     ///<Number of Bits/Word: 4; Supported in Implementation: No.
            v0010=0x00000002,     ///<Number of Bits/Word: 6; Supported in Implementation: No.
            v0011=0x00000003,     ///<Number of Bits/Word: 8; Supported in Implementation: Yes.
            v0100=0x00000004,     ///<Number of Bits/Word: 10; Supported in Implementation: Yes.
            v0101=0x00000005,     ///<Number of Bits/Word: 12; Supported in Implementation: Yes.
            v0110=0x00000006,     ///<Number of Bits/Word: 14; Supported in Implementation: No.
            v0111=0x00000007,     ///<Number of Bits/Word: 16; Supported in Implementation: Yes.
            v1000=0x00000008,     ///<Number of Bits/Word: 18; Supported in Implementation: Yes.
            v1001=0x00000009,     ///<Number of Bits/Word: 20; Supported in Implementation: Yes.
            v1010=0x0000000a,     ///<Number of Bits/Word: 22; Supported in Implementation: Yes.
            v1011=0x0000000b,     ///<Number of Bits/Word: 24; Supported in Implementation: Yes.
            v1100=0x0000000c,     ///<Number of Bits/Word: 26; Supported in Implementation: No.
            v1101=0x0000000d,     ///<Number of Bits/Word: 28; Supported in Implementation: No.
            v1110=0x0000000e,     ///<Number of Bits/Word: 30; Supported in Implementation: No.
            v1111=0x0000000f,     ///<Number of Bits/Word: 32; Supported in Implementation: No.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,WlVal> wl{}; 
        namespace WlValC{
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(wl)::Type,WlVal::v1111> v1111{};
        }
        }
        ///Prescaler Range.
        enum class PsrVal {
            v0=0x00000000,     ///<Prescaler bypassed.
            v1=0x00000001,     ///<Prescaler used to divide clock by 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,PsrVal> psr{}; 
        namespace PsrValC{
            constexpr Register::FieldValue<decltype(psr)::Type,PsrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(psr)::Type,PsrVal::v1> v1{};
        }
        }
        ///Divide By 2.
        enum class Div2Val {
            v0=0x00000000,     ///<Divider bypassed.
            v1=0x00000001,     ///<Divider used to divide clock by 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Div2Val> div2{}; 
        namespace Div2ValC{
            constexpr Register::FieldValue<decltype(div2)::Type,Div2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(div2)::Type,Div2Val::v1> v1{};
        }
        }
    }
    namespace I2s0Fcsr{    ///<I2S FIFO Control/Status Register
        using Addr = Register::Address<0x4002f02c,0x00000000,0,unsigned>;
        ///Transmit FIFO Empty WaterMark 0.
        enum class Tfwm0Val {
            v0001=0x00000001,     ///<TFE set when there are more than or equal to 1 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 14 data.
            v0010=0x00000002,     ///<TFE set when there are more than or equal to 2 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 13 data.
            v0011=0x00000003,     ///<TFE set when there are more than or equal to 3 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 12 data.
            v0100=0x00000004,     ///<TFE set when there are more than or equal to 4 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 11 data.
            v0101=0x00000005,     ///<TFE set when there are more than or equal to 5 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 10 data.
            v0110=0x00000006,     ///<TFE set when there are more than or equal to 6 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 9 data.
            v0111=0x00000007,     ///<TFE set when there are more than or equal to 7 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 8 data.
            v1000=0x00000008,     ///<TFE set when there are more than or equal to 8 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 7 data.
            v1001=0x00000009,     ///<TFE set when there are more than or equal to 9 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 6 data.
            v1010=0x0000000a,     ///<TFE set when there are more than or equal to 10 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 5 data.
            v1011=0x0000000b,     ///<TFE set when there are more than or equal to 11 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 4 data.
            v1100=0x0000000c,     ///<TFE set when there are more than or equal to 12 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 3 data.
            v1101=0x0000000d,     ///<TFE set when there are more than or equal to 13 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 2 data.
            v1110=0x0000000e,     ///<TFE set when there are more than or equal to 14 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 1 data.
            v1111=0x0000000f,     ///<TFE set when there are more than or equal to 15 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 0 data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Tfwm0Val> tfwm0{}; 
        namespace Tfwm0ValC{
            constexpr Register::FieldValue<decltype(tfwm0)::Type,Tfwm0Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(tfwm0)::Type,Tfwm0Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(tfwm0)::Type,Tfwm0Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(tfwm0)::Type,Tfwm0Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(tfwm0)::Type,Tfwm0Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(tfwm0)::Type,Tfwm0Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(tfwm0)::Type,Tfwm0Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(tfwm0)::Type,Tfwm0Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(tfwm0)::Type,Tfwm0Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(tfwm0)::Type,Tfwm0Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(tfwm0)::Type,Tfwm0Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(tfwm0)::Type,Tfwm0Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(tfwm0)::Type,Tfwm0Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(tfwm0)::Type,Tfwm0Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(tfwm0)::Type,Tfwm0Val::v1111> v1111{};
        }
        }
        ///Receive FIFO Full WaterMark 0.
        enum class Rfwm0Val {
            v0001=0x00000001,     ///<RFF set when at least one data word have been written to the Receive FIFO Set when RxFIFO = 1,2.....15 data words
            v0010=0x00000002,     ///<RFF set when more than or equal to 2 data word have been written to the Receive FIFO. Set when RxFIFO = 2,3.....15 data words
            v0011=0x00000003,     ///<RFF set when more than or equal to 3 data word have been written to the Receive FIFO. Set when RxFIFO = 3,4.....15 data words
            v0100=0x00000004,     ///<RFF set when more than or equal to 4 data word have been written to the Receive FIFO. Set when RxFIFO = 4,5.....15 data words
            v0101=0x00000005,     ///<RFF set when more than or equal to 5 data word have been written to the Receive FIFO. Set when RxFIFO = 5,6.....15 data words
            v0110=0x00000006,     ///<RFF set when more than or equal to 6 data word have been written to the Receive. Set when RxFIFO = 6,7......15 data words
            v0111=0x00000007,     ///<RFF set when more than or equal to 7 data word have been written to the Receive FIFO. Set when RxFIFO = 7,8......15 data words
            v1000=0x00000008,     ///<RFF set when more than or equal to 8 data word have been written to the Receive FIFO. Set when RxFIFO = 8,9......15 data words
            v1001=0x00000009,     ///<RFF set when more than or equal to 9 data word have been written to the Receive FIFO. Set when RxFIFO = 9,10.....15 data words
            v1010=0x0000000a,     ///<RFF set when more than or equal to 10 data word have been written to the Receive FIFO. Set when RxFIFO = 10,11.....15 data words
            v1011=0x0000000b,     ///<RFF set when more than or equal to 11 data word have been written to the Receive FIFO. Set when RxFIFO = 11,12.....15 data words
            v1100=0x0000000c,     ///<RFF set when more than or equal to 12 data word have been written to the Receive FIFO. Set when RxFIFO = 12,13.....15 data words
            v1101=0x0000000d,     ///<RFF set when more than or equal to 13 data word have been written to the Receive FIFO. Set when RxFIFO = 13,14,15data words
            v1110=0x0000000e,     ///<RFF set when more than or equal to 14 data word have been written to the Receive FIFO. Set when RxFIFO = 14,15 data words
            v1111=0x0000000f,     ///<RFF set when 15 data word have been written to the Receive FIFO (default). Set when RxFIFO = 15 data words
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,Rfwm0Val> rfwm0{}; 
        namespace Rfwm0ValC{
            constexpr Register::FieldValue<decltype(rfwm0)::Type,Rfwm0Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(rfwm0)::Type,Rfwm0Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(rfwm0)::Type,Rfwm0Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(rfwm0)::Type,Rfwm0Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(rfwm0)::Type,Rfwm0Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(rfwm0)::Type,Rfwm0Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(rfwm0)::Type,Rfwm0Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(rfwm0)::Type,Rfwm0Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(rfwm0)::Type,Rfwm0Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(rfwm0)::Type,Rfwm0Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(rfwm0)::Type,Rfwm0Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(rfwm0)::Type,Rfwm0Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(rfwm0)::Type,Rfwm0Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(rfwm0)::Type,Rfwm0Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(rfwm0)::Type,Rfwm0Val::v1111> v1111{};
        }
        }
        ///Transmit FIFO Counter 0.
        enum class Tfcnt0Val {
            v0000=0x00000000,     ///<0 data word in transmit FIFO.
            v0001=0x00000001,     ///<1 data word in transmit FIFO.
            v0010=0x00000002,     ///<2 data word in transmit FIFO.
            v0011=0x00000003,     ///<3 data word in transmit FIFO.
            v0100=0x00000004,     ///<4 data word in transmit FIFO.
            v0101=0x00000005,     ///<5 data word in transmit FIFO.
            v0110=0x00000006,     ///<6 data word in transmit FIFO.
            v0111=0x00000007,     ///<7 data word in transmit FIFO.
            v1000=0x00000008,     ///<8 data word in transmit FIFO.
            v1001=0x00000009,     ///<9 data word in transmit FIFO.
            v1010=0x0000000a,     ///<10 data word in transmit FIFO.
            v1011=0x0000000b,     ///<11 data word in transmit FIFO.
            v1100=0x0000000c,     ///<12 data word in transmit FIFO.
            v1101=0x0000000d,     ///<13 data word in transmit FIFO.
            v1110=0x0000000e,     ///<14 data word in transmit FIFO.
            v1111=0x0000000f,     ///<15 data word in transmit FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Tfcnt0Val> tfcnt0{}; 
        namespace Tfcnt0ValC{
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(tfcnt0)::Type,Tfcnt0Val::v1111> v1111{};
        }
        }
        ///Receive FIFO Counter 0.
        enum class Rfcnt0Val {
            v0000=0x00000000,     ///<0 data word in receive FIFO.
            v0001=0x00000001,     ///<1 data word in receive FIFO.
            v0010=0x00000002,     ///<2 data word in receive FIFO.
            v0011=0x00000003,     ///<3 data word in receive FIFO.
            v0100=0x00000004,     ///<4 data word in receive FIFO.
            v0101=0x00000005,     ///<5 data word in receive FIFO.
            v0110=0x00000006,     ///<6 data word in receive FIFO.
            v0111=0x00000007,     ///<7 data word in receive FIFO.
            v1000=0x00000008,     ///<8 data word in receive FIFO.
            v1001=0x00000009,     ///<9 data word in receive FIFO.
            v1010=0x0000000a,     ///<10 data word in receive FIFO.
            v1011=0x0000000b,     ///<11 data word in receive FIFO.
            v1100=0x0000000c,     ///<12 data word in receive FIFO.
            v1101=0x0000000d,     ///<13 data word in receive FIFO.
            v1110=0x0000000e,     ///<14 data word in receive FIFO.
            v1111=0x0000000f,     ///<15 data word in receive FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,Rfcnt0Val> rfcnt0{}; 
        namespace Rfcnt0ValC{
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(rfcnt0)::Type,Rfcnt0Val::v1111> v1111{};
        }
        }
        ///Transmit FIFO Empty WaterMark 1.
        enum class Tfwm1Val {
            v0001=0x00000001,     ///<TFE set when there are more than or equal to 1 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 14 data.
            v0010=0x00000002,     ///<TFE set when there are more than or equal to 2 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 13 data.
            v0011=0x00000003,     ///<TFE set when there are more than or equal to 3 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 12 data.
            v0100=0x00000004,     ///<TFE set when there are more than or equal to 4 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 11 data.
            v0101=0x00000005,     ///<TFE set when there are more than or equal to 5 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 10 data.
            v0110=0x00000006,     ///<TFE set when there are more than or equal to 6 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 9 data.
            v0111=0x00000007,     ///<TFE set when there are more than or equal to 7 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 8 data.
            v1000=0x00000008,     ///<TFE set when there are more than or equal to 8 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 7 data.
            v1001=0x00000009,     ///<TFE set when there are more than or equal to 9 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 6 data.
            v1010=0x0000000a,     ///<TFE set when there are more than or equal to 10 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 5 data.
            v1011=0x0000000b,     ///<TFE set when there are more than or equal to 11 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 4 data.
            v1100=0x0000000c,     ///<TFE set when there are more than or equal to 12 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 3 data.
            v1101=0x0000000d,     ///<TFE set when there are more than or equal to 13 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 2 data.
            v1110=0x0000000e,     ///<TFE set when there are more than or equal to 14 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 1 data.
            v1111=0x0000000f,     ///<TFE set when there are more than or equal to 15 empty slots in Transmit FIFO. (default) Transmit FIFO empty is set when TxFIFO <= 0 data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,Tfwm1Val> tfwm1{}; 
        namespace Tfwm1ValC{
            constexpr Register::FieldValue<decltype(tfwm1)::Type,Tfwm1Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(tfwm1)::Type,Tfwm1Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(tfwm1)::Type,Tfwm1Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(tfwm1)::Type,Tfwm1Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(tfwm1)::Type,Tfwm1Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(tfwm1)::Type,Tfwm1Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(tfwm1)::Type,Tfwm1Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(tfwm1)::Type,Tfwm1Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(tfwm1)::Type,Tfwm1Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(tfwm1)::Type,Tfwm1Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(tfwm1)::Type,Tfwm1Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(tfwm1)::Type,Tfwm1Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(tfwm1)::Type,Tfwm1Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(tfwm1)::Type,Tfwm1Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(tfwm1)::Type,Tfwm1Val::v1111> v1111{};
        }
        }
        ///Receive FIFO Full WaterMark 1.
        enum class Rfwm1Val {
            v0001=0x00000001,     ///<RFF set when at least one data word have been written to the Receive FIFO Set when RxFIFO = 1,2.....15 data words
            v0010=0x00000002,     ///<RFF set when more than or equal to 2 data word have been written to the Receive FIFO. Set when RxFIFO = 2,3.....15 data words
            v0011=0x00000003,     ///<RFF set when more than or equal to 3 data word have been written to the Receive FIFO. Set when RxFIFO = 3,4.....15 data words
            v0100=0x00000004,     ///<RFF set when more than or equal to 4 data word have been written to the Receive FIFO. Set when RxFIFO = 4,5.....15 data words
            v0101=0x00000005,     ///<RFF set when more than or equal to 5 data word have been written to the Receive FIFO. Set when RxFIFO = 5,6.....15 data words
            v0110=0x00000006,     ///<RFF set when more than or equal to 6 data word have been written to the Receive. Set when RxFIFO = 6,7......15 data words
            v0111=0x00000007,     ///<RFF set when more than or equal to 7 data word have been written to the Receive FIFO. Set when RxFIFO = 7,8......15 data words
            v1000=0x00000008,     ///<RFF set when more than or equal to 8 data word have been written to the Receive FIFO. Set when RxFIFO = 8,9......15 data words
            v1001=0x00000009,     ///<RFF set when more than or equal to 9 data word have been written to the Receive FIFO. Set when RxFIFO = 9,10.....15 data words
            v1010=0x0000000a,     ///<RFF set when more than or equal to 10 data word have been written to the Receive FIFO. Set when RxFIFO = 10,11.....15 data words
            v1011=0x0000000b,     ///<RFF set when more than or equal to 11 data word have been written to the Receive FIFO. Set when RxFIFO = 11,12.....15 data words
            v1100=0x0000000c,     ///<RFF set when more than or equal to 12 data word have been written to the Receive FIFO. Set when RxFIFO = 12,13.....15 data words
            v1101=0x0000000d,     ///<RFF set when more than or equal to 13 data word have been written to the Receive FIFO. Set when RxFIFO = 13,14,15data words
            v1110=0x0000000e,     ///<RFF set when more than or equal to 14 data word have been written to the Receive FIFO. Set when RxFIFO = 14,15 data words
            v1111=0x0000000f,     ///<RFF set when 15 data word have been written to the Receive FIFO (default). Set when RxFIFO = 15 data words
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,Rfwm1Val> rfwm1{}; 
        namespace Rfwm1ValC{
            constexpr Register::FieldValue<decltype(rfwm1)::Type,Rfwm1Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(rfwm1)::Type,Rfwm1Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(rfwm1)::Type,Rfwm1Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(rfwm1)::Type,Rfwm1Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(rfwm1)::Type,Rfwm1Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(rfwm1)::Type,Rfwm1Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(rfwm1)::Type,Rfwm1Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(rfwm1)::Type,Rfwm1Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(rfwm1)::Type,Rfwm1Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(rfwm1)::Type,Rfwm1Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(rfwm1)::Type,Rfwm1Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(rfwm1)::Type,Rfwm1Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(rfwm1)::Type,Rfwm1Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(rfwm1)::Type,Rfwm1Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(rfwm1)::Type,Rfwm1Val::v1111> v1111{};
        }
        }
        ///Transmit FIFO Counter1.
        enum class Tfcnt1Val {
            v0000=0x00000000,     ///<0 data word in transmit FIFO.
            v0001=0x00000001,     ///<1 data word in transmit FIFO.
            v0010=0x00000002,     ///<2 data word in transmit FIFO.
            v0011=0x00000003,     ///<3 data word in transmit FIFO.
            v0100=0x00000004,     ///<4 data word in transmit FIFO.
            v0101=0x00000005,     ///<5 data word in transmit FIFO.
            v0110=0x00000006,     ///<6 data word in transmit FIFO.
            v0111=0x00000007,     ///<7 data word in transmit FIFO.
            v1000=0x00000008,     ///<8 data word in transmit FIFO.
            v1001=0x00000009,     ///<9 data word in transmit FIFO.
            v1010=0x0000000a,     ///<10 data word in transmit FIFO.
            v1011=0x0000000b,     ///<11 data word in transmit FIFO.
            v1100=0x0000000c,     ///<12 data word in transmit FIFO.
            v1101=0x0000000d,     ///<13 data word in transmit FIFO.
            v1110=0x0000000e,     ///<14 data word in transmit FIFO.
            v1111=0x0000000f,     ///<15 data word in transmit FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,Tfcnt1Val> tfcnt1{}; 
        namespace Tfcnt1ValC{
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(tfcnt1)::Type,Tfcnt1Val::v1111> v1111{};
        }
        }
        ///Receive FIFO Counter1.
        enum class Rfcnt1Val {
            v0000=0x00000000,     ///<0 data word in receive FIFO.
            v0001=0x00000001,     ///<1 data word in receive FIFO.
            v0010=0x00000002,     ///<2 data word in receive FIFO.
            v0011=0x00000003,     ///<3 data word in receive FIFO.
            v0100=0x00000004,     ///<4 data word in receive FIFO.
            v0101=0x00000005,     ///<5 data word in receive FIFO.
            v0110=0x00000006,     ///<6 data word in receive FIFO.
            v0111=0x00000007,     ///<7 data word in receive FIFO.
            v1000=0x00000008,     ///<8 data word in receive FIFO.
            v1001=0x00000009,     ///<9 data word in receive FIFO.
            v1010=0x0000000a,     ///<10 data word in receive FIFO.
            v1011=0x0000000b,     ///<11 data word in receive FIFO.
            v1100=0x0000000c,     ///<12 data word in receive FIFO.
            v1101=0x0000000d,     ///<13 data word in receive FIFO.
            v1110=0x0000000e,     ///<14 data word in receive FIFO.
            v1111=0x0000000f,     ///<15 data word in receive FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,Rfcnt1Val> rfcnt1{}; 
        namespace Rfcnt1ValC{
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(rfcnt1)::Type,Rfcnt1Val::v1111> v1111{};
        }
        }
    }
    namespace I2s0Acnt{    ///<I2S AC97 Control Register
        using Addr = Register::Address<0x4002f038,0xfffff800,0,unsigned>;
        ///AC97 Mode Enable.
        enum class Ac97enVal {
            v0=0x00000000,     ///<AC97 mode disabled.
            v1=0x00000001,     ///<I2S in AC97 mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ac97enVal> ac97en{}; 
        namespace Ac97enValC{
            constexpr Register::FieldValue<decltype(ac97en)::Type,Ac97enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ac97en)::Type,Ac97enVal::v1> v1{};
        }
        }
        ///Fixed/Variable Operation.
        enum class FvVal {
            v0=0x00000000,     ///<AC97 Fixed Mode
            v1=0x00000001,     ///<AC97 Variable Mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FvVal> fv{}; 
        namespace FvValC{
            constexpr Register::FieldValue<decltype(fv)::Type,FvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fv)::Type,FvVal::v1> v1{};
        }
        }
        ///Tag in FIFO.
        enum class TifVal {
            v0=0x00000000,     ///<Tag info stored in ATAG register.
            v1=0x00000001,     ///<Tag info stored in ATAG register and Rx FIFO 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TifVal> tif{}; 
        namespace TifValC{
            constexpr Register::FieldValue<decltype(tif)::Type,TifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tif)::Type,TifVal::v1> v1{};
        }
        }
        ///Read Command.
        enum class RdVal {
            v0=0x00000000,     ///<Next frame will not have a Read Command.
            v1=0x00000001,     ///<Next frame will have a Read Command.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RdVal> rd{}; 
        namespace RdValC{
            constexpr Register::FieldValue<decltype(rd)::Type,RdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rd)::Type,RdVal::v1> v1{};
        }
        }
        ///Write Command.
        enum class WrVal {
            v0=0x00000000,     ///<Next frame will not have a Write Command.
            v1=0x00000001,     ///<Next frame will have a Write Command.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,WrVal> wr{}; 
        namespace WrValC{
            constexpr Register::FieldValue<decltype(wr)::Type,WrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wr)::Type,WrVal::v1> v1{};
        }
        }
        ///Frame Rate Divider.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,5),Register::ReadWriteAccess,unsigned> frdiv{}; 
    }
    namespace I2s0Acadd{    ///<I2S AC97 Command Address Register
        using Addr = Register::Address<0x4002f03c,0xfff80000,0,unsigned>;
        ///AC97 Command Address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> acadd{}; 
    }
    namespace I2s0Acdat{    ///<I2S AC97 Command Data Register
        using Addr = Register::Address<0x4002f040,0xfff00000,0,unsigned>;
        ///AC97 Command Data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> acdat{}; 
    }
    namespace I2s0Atag{    ///<I2S AC97 Tag Register
        using Addr = Register::Address<0x4002f044,0xffff0000,0,unsigned>;
        ///AC97 Tag Value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> atag{}; 
    }
    namespace I2s0Tmsk{    ///<I2S Transmit Time Slot Mask Register
        using Addr = Register::Address<0x4002f048,0x00000000,0,unsigned>;
        ///Transmit Mask.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tmsk{}; 
    }
    namespace I2s0Rmsk{    ///<I2S Receive Time Slot Mask Register
        using Addr = Register::Address<0x4002f04c,0x00000000,0,unsigned>;
        ///Receive Mask.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rmsk{}; 
    }
    namespace I2s0Accst{    ///<I2S AC97 Channel Status Register
        using Addr = Register::Address<0x4002f050,0xfffffc00,0,unsigned>;
        ///AC97 Channel Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> accst{}; 
    }
    namespace I2s0Accen{    ///<I2S AC97 Channel Enable Register
        using Addr = Register::Address<0x4002f054,0xfffffc00,0,unsigned>;
        ///AC97 Channel Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> accen{}; 
    }
    namespace I2s0Accdis{    ///<I2S AC97 Channel Disable Register
        using Addr = Register::Address<0x4002f058,0xfffffc00,0,unsigned>;
        ///AC97 Channel Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> accdis{}; 
    }
}
