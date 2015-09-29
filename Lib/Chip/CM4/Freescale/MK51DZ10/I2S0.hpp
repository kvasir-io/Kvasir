#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Synchronous Serial Interface
    namespace I2s0Tx0{    ///<I2S Transmit Data Registers 0
        using Addr = Register::Address<0x4002f000,0x00000000,0,unsigned>;
        ///I2S transmit data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tx0{}; 
    }
    namespace I2s0Tx1{    ///<I2S Transmit Data Registers 1
        using Addr = Register::Address<0x4002f004,0x00000000,0,unsigned>;
        ///I2S transmit data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tx1{}; 
    }
    namespace I2s0Rx0{    ///<I2S Receive Data Registers 0
        using Addr = Register::Address<0x4002f008,0x00000000,0,unsigned>;
        ///I2S Receive Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rx0{}; 
    }
    namespace I2s0Rx1{    ///<I2S Receive Data Registers 1
        using Addr = Register::Address<0x4002f00c,0x00000000,0,unsigned>;
        ///I2S Receive Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rx1{}; 
    }
    namespace I2s0Cr{    ///<I2S Control Register
        using Addr = Register::Address<0x4002f010,0xffffe000,0,unsigned>;
        ///I2S Enable.
        enum class i2senVal {
            v0=0x00000000,     ///<I2S is disabled.
            v1=0x00000001,     ///<I2S is enabled.
        };
        namespace i2senValC{
            constexpr MPL::Value<i2senVal,i2senVal::v0> v0{};
            constexpr MPL::Value<i2senVal,i2senVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,i2senVal> i2sen{}; 
        ///Transmit Enable.
        enum class teVal {
            v0=0x00000000,     ///<Transmit section disabled.
            v1=0x00000001,     ///<Transmit section enabled.
        };
        namespace teValC{
            constexpr MPL::Value<teVal,teVal::v0> v0{};
            constexpr MPL::Value<teVal,teVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,teVal> te{}; 
        ///Receive Enable.
        enum class reVal {
            v0=0x00000000,     ///<Receive section disabled.
            v1=0x00000001,     ///<Receive section enabled.
        };
        namespace reValC{
            constexpr MPL::Value<reVal,reVal::v0> v0{};
            constexpr MPL::Value<reVal,reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,reVal> re{}; 
        ///Network Mode.
        enum class netVal {
            v0=0x00000000,     ///<Network mode not selected.
            v1=0x00000001,     ///<Network mode selected.
        };
        namespace netValC{
            constexpr MPL::Value<netVal,netVal::v0> v0{};
            constexpr MPL::Value<netVal,netVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,netVal> net{}; 
        ///Synchronous Mode.
        enum class synVal {
            v0=0x00000000,     ///<Asynchronous mode selected.
            v1=0x00000001,     ///<Synchronous mode selected.
        };
        namespace synValC{
            constexpr MPL::Value<synVal,synVal::v0> v0{};
            constexpr MPL::Value<synVal,synVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,synVal> syn{}; 
        ///I2S Mode Select
        enum class i2smodeVal {
            v00=0x00000000,     ///<Normal mode
            v01=0x00000001,     ///<I2S master mode
            v10=0x00000002,     ///<I2S slave mode
            v11=0x00000003,     ///<Normal mode
        };
        namespace i2smodeValC{
            constexpr MPL::Value<i2smodeVal,i2smodeVal::v00> v00{};
            constexpr MPL::Value<i2smodeVal,i2smodeVal::v01> v01{};
            constexpr MPL::Value<i2smodeVal,i2smodeVal::v10> v10{};
            constexpr MPL::Value<i2smodeVal,i2smodeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,i2smodeVal> i2smode{}; 
        ///System Clock (Oversampling Clock) Enable.
        enum class sysclkenVal {
            v0=0x00000000,     ///<Network clock not output on SRCK port.
            v1=0x00000001,     ///<Network clock output on SRCK port.
        };
        namespace sysclkenValC{
            constexpr MPL::Value<sysclkenVal,sysclkenVal::v0> v0{};
            constexpr MPL::Value<sysclkenVal,sysclkenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,sysclkenVal> sysclken{}; 
        ///Two-Channel Operation Enable.
        enum class tchenVal {
            v0=0x00000000,     ///<Two-channel mode disabled.
            v1=0x00000001,     ///<Two-channel mode enabled.
        };
        namespace tchenValC{
            constexpr MPL::Value<tchenVal,tchenVal::v0> v0{};
            constexpr MPL::Value<tchenVal,tchenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tchenVal> tchen{}; 
        ///Clock Idle State.
        enum class clkistVal {
            v0=0x00000000,     ///<Clock idle state is `0'.
            v1=0x00000001,     ///<Clock idle state is `1'.
        };
        namespace clkistValC{
            constexpr MPL::Value<clkistVal,clkistVal::v0> v0{};
            constexpr MPL::Value<clkistVal,clkistVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,clkistVal> clkist{}; 
        ///Transmit Frame Clock Disable.
        enum class tfrclkdisVal {
            v0=0x00000000,     ///<Continue frame-sync/clock generation after current frame during which CR[TE] is cleared. This may be required when frame-sync and clocks are required from I2S, even when no data is to be received.
            v1=0x00000001,     ///<Stop frame-sync/clock generation at next frame boundary. This will be effective also in case where transmitter is already disabled in current or previous frames.
        };
        namespace tfrclkdisValC{
            constexpr MPL::Value<tfrclkdisVal,tfrclkdisVal::v0> v0{};
            constexpr MPL::Value<tfrclkdisVal,tfrclkdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,tfrclkdisVal> tfrclkdis{}; 
        ///Receive Frame Clock Disable.
        enum class rfrclkdisVal {
            v0=0x00000000,     ///<Continue frame-sync/clock generation after current frame during which CR[RE] is cleared. This may be required when Frame-sync and Clocks are required from I2S, even when no data is to be received.
            v1=0x00000001,     ///<Stop frame-sync/clock generation at next frame boundary. This will be effective also in case where receiver is already disabled in current or previous frames.
        };
        namespace rfrclkdisValC{
            constexpr MPL::Value<rfrclkdisVal,rfrclkdisVal::v0> v0{};
            constexpr MPL::Value<rfrclkdisVal,rfrclkdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,rfrclkdisVal> rfrclkdis{}; 
        ///no description available
        enum class synctxfsVal {
            v0=0x00000000,     ///<CR[TE] not latched with FS occurrence and used directly for transmitter enable/disable.
            v1=0x00000001,     ///<CR[TE] latched with FS occurrence and latched-TE used for transmitter enable/disable.
        };
        namespace synctxfsValC{
            constexpr MPL::Value<synctxfsVal,synctxfsVal::v0> v0{};
            constexpr MPL::Value<synctxfsVal,synctxfsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,synctxfsVal> synctxfs{}; 
    }
    namespace I2s0Isr{    ///<I2S Interrupt Status Register
        using Addr = Register::Address<0x4002f014,0xfe780000,0,unsigned>;
        ///Transmit FIFO Empty 0.
        enum class tfe0Val {
            v0=0x00000000,     ///<Transmit FIFO0 has data for transmission.
            v1=0x00000001,     ///<Transmit FIFO0 is empty.
        };
        namespace tfe0ValC{
            constexpr MPL::Value<tfe0Val,tfe0Val::v0> v0{};
            constexpr MPL::Value<tfe0Val,tfe0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tfe0Val> tfe0{}; 
        ///Transmit FIFO Empty 1.
        enum class tfe1Val {
            v0=0x00000000,     ///<Transmit FIFO1 has data for transmission.
            v1=0x00000001,     ///<Transmit FIFO1 is empty.
        };
        namespace tfe1ValC{
            constexpr MPL::Value<tfe1Val,tfe1Val::v0> v0{};
            constexpr MPL::Value<tfe1Val,tfe1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tfe1Val> tfe1{}; 
        ///Receive FIFO Full 0.
        enum class rff0Val {
            v0=0x00000000,     ///<Space available in receive FIFO0.
            v1=0x00000001,     ///<Receive FIFO0 is full.
        };
        namespace rff0ValC{
            constexpr MPL::Value<rff0Val,rff0Val::v0> v0{};
            constexpr MPL::Value<rff0Val,rff0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rff0Val> rff0{}; 
        ///Receive FIFO Full 1.
        enum class rff1Val {
            v0=0x00000000,     ///<Space available in receive FIFO1.
            v1=0x00000001,     ///<Receive FIFO1 is full.
        };
        namespace rff1ValC{
            constexpr MPL::Value<rff1Val,rff1Val::v0> v0{};
            constexpr MPL::Value<rff1Val,rff1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rff1Val> rff1{}; 
        ///Receive Last Time Slot.
        enum class rlsVal {
            v0=0x00000000,     ///<Current time slot is not last time slot of frame.
            v1=0x00000001,     ///<Current time slot is the last receive time slot of frame.
        };
        namespace rlsValC{
            constexpr MPL::Value<rlsVal,rlsVal::v0> v0{};
            constexpr MPL::Value<rlsVal,rlsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rlsVal> rls{}; 
        ///Transmit Last Time Slot.
        enum class tlsVal {
            v0=0x00000000,     ///<Current time slot is not last time slot of frame.
            v1=0x00000001,     ///<Current time slot is the last transmit time slot of frame.
        };
        namespace tlsValC{
            constexpr MPL::Value<tlsVal,tlsVal::v0> v0{};
            constexpr MPL::Value<tlsVal,tlsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,tlsVal> tls{}; 
        ///Receive Frame Sync.
        enum class rfsVal {
            v0=0x00000000,     ///<No occurrence of receive frame sync.
            v1=0x00000001,     ///<Receive frame sync occurred during reception of next word in RX registers.
        };
        namespace rfsValC{
            constexpr MPL::Value<rfsVal,rfsVal::v0> v0{};
            constexpr MPL::Value<rfsVal,rfsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rfsVal> rfs{}; 
        ///Transmit Frame Sync.
        enum class tfsVal {
            v0=0x00000000,     ///<No occurrence of transmit frame sync.
            v1=0x00000001,     ///<Transmit frame sync occurred during transmission of last word written to TX registers.
        };
        namespace tfsValC{
            constexpr MPL::Value<tfsVal,tfsVal::v0> v0{};
            constexpr MPL::Value<tfsVal,tfsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tfsVal> tfs{}; 
        ///Transmitter Underrun Error 1.
        enum class tue0Val {
            v0=0x00000000,     ///<No underrun detected
            v1=0x00000001,     ///<Transmitter underrun error occurred
        };
        namespace tue0ValC{
            constexpr MPL::Value<tue0Val,tue0Val::v0> v0{};
            constexpr MPL::Value<tue0Val,tue0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tue0Val> tue0{}; 
        ///Transmitter Underrun Error 1.
        enum class tue1Val {
            v0=0x00000000,     ///<No underrun detected
            v1=0x00000001,     ///<Transmitter underrun error occurred
        };
        namespace tue1ValC{
            constexpr MPL::Value<tue1Val,tue1Val::v0> v0{};
            constexpr MPL::Value<tue1Val,tue1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,tue1Val> tue1{}; 
        ///Receiver Overrun Error 0.
        enum class roe0Val {
            v0=0x00000000,     ///<No overrun detected
            v1=0x00000001,     ///<Receiver overrun error occurred
        };
        namespace roe0ValC{
            constexpr MPL::Value<roe0Val,roe0Val::v0> v0{};
            constexpr MPL::Value<roe0Val,roe0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,roe0Val> roe0{}; 
        ///Receiver Overrun Error 1.
        enum class roe1Val {
            v0=0x00000000,     ///<No overrun detected
            v1=0x00000001,     ///<Receiver overrun error occurred
        };
        namespace roe1ValC{
            constexpr MPL::Value<roe1Val,roe1Val::v0> v0{};
            constexpr MPL::Value<roe1Val,roe1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,roe1Val> roe1{}; 
        ///Transmit Data Register Empty 0.
        enum class tde0Val {
            v0=0x00000000,     ///<Data available for transmission.
            v1=0x00000001,     ///<Data needs to be written by the core for transmission.
        };
        namespace tde0ValC{
            constexpr MPL::Value<tde0Val,tde0Val::v0> v0{};
            constexpr MPL::Value<tde0Val,tde0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tde0Val> tde0{}; 
        ///Transmit Data Register Empty 1.
        enum class tde1Val {
            v0=0x00000000,     ///<Data available for transmission.
            v1=0x00000001,     ///<Data needs to be written by the core for transmission.
        };
        namespace tde1ValC{
            constexpr MPL::Value<tde1Val,tde1Val::v0> v0{};
            constexpr MPL::Value<tde1Val,tde1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,tde1Val> tde1{}; 
        ///Receive Data Ready 0.
        enum class rdr0Val {
            v0=0x00000000,     ///<No new data for core to read.
            v1=0x00000001,     ///<New data for core to read.
        };
        namespace rdr0ValC{
            constexpr MPL::Value<rdr0Val,rdr0Val::v0> v0{};
            constexpr MPL::Value<rdr0Val,rdr0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,rdr0Val> rdr0{}; 
        ///Receive Data Ready 1.
        enum class rdr1Val {
            v0=0x00000000,     ///<No new data for core to read.
            v1=0x00000001,     ///<New data for core to read.
        };
        namespace rdr1ValC{
            constexpr MPL::Value<rdr1Val,rdr1Val::v0> v0{};
            constexpr MPL::Value<rdr1Val,rdr1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,rdr1Val> rdr1{}; 
        ///Receive Tag Updated.
        enum class rxtVal {
            v0=0x00000000,     ///<No change in ATAG register.
            v1=0x00000001,     ///<ATAG register updated with different value.
        };
        namespace rxtValC{
            constexpr MPL::Value<rxtVal,rxtVal::v0> v0{};
            constexpr MPL::Value<rxtVal,rxtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,rxtVal> rxt{}; 
        ///Command Data Register Updated.
        enum class cmdduVal {
            v0=0x00000000,     ///<No change in ACDAT register.
            v1=0x00000001,     ///<ACDAT register updated with different value.
        };
        namespace cmdduValC{
            constexpr MPL::Value<cmdduVal,cmdduVal::v0> v0{};
            constexpr MPL::Value<cmdduVal,cmdduVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,cmdduVal> cmddu{}; 
        ///Command Address Register Updated.
        enum class cmdauVal {
            v0=0x00000000,     ///<No change in ACADD register.
            v1=0x00000001,     ///<ACADD register updated with different value.
        };
        namespace cmdauValC{
            constexpr MPL::Value<cmdauVal,cmdauVal::v0> v0{};
            constexpr MPL::Value<cmdauVal,cmdauVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,cmdauVal> cmdau{}; 
        ///Transmit Frame Complete.
        enum class trfcVal {
            v0=0x00000000,     ///<End of frame not reached.
            v1=0x00000001,     ///<End of frame reached after disabling CR[TE] or disabling CR[TFRCLKDIS], when transmitter is already disabled.
        };
        namespace trfcValC{
            constexpr MPL::Value<trfcVal,trfcVal::v0> v0{};
            constexpr MPL::Value<trfcVal,trfcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,trfcVal> trfc{}; 
        ///Receive Frame Complete.
        enum class rfrcVal {
            v0=0x00000000,     ///<End of frame not reached.
            v1=0x00000001,     ///<End of frame reached after disabling CR[RE] or disabling CR[RFRCLKDIS], when receiver is already disabled.
        };
        namespace rfrcValC{
            constexpr MPL::Value<rfrcVal,rfrcVal::v0> v0{};
            constexpr MPL::Value<rfrcVal,rfrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,rfrcVal> rfrc{}; 
    }
    namespace I2s0Ier{    ///<I2S Interrupt Enable Register
        using Addr = Register::Address<0x4002f018,0xfe000000,0,unsigned>;
        ///Enable Bit.
        enum class tfe0enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace tfe0enValC{
            constexpr MPL::Value<tfe0enVal,tfe0enVal::v0> v0{};
            constexpr MPL::Value<tfe0enVal,tfe0enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tfe0enVal> tfe0en{}; 
        ///Enable Bit.
        enum class tfe1enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace tfe1enValC{
            constexpr MPL::Value<tfe1enVal,tfe1enVal::v0> v0{};
            constexpr MPL::Value<tfe1enVal,tfe1enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tfe1enVal> tfe1en{}; 
        ///Enable Bit.
        enum class rff0enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace rff0enValC{
            constexpr MPL::Value<rff0enVal,rff0enVal::v0> v0{};
            constexpr MPL::Value<rff0enVal,rff0enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rff0enVal> rff0en{}; 
        ///Enable Bit.
        enum class rff1enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace rff1enValC{
            constexpr MPL::Value<rff1enVal,rff1enVal::v0> v0{};
            constexpr MPL::Value<rff1enVal,rff1enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rff1enVal> rff1en{}; 
        ///Enable Bit.
        enum class rlsenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace rlsenValC{
            constexpr MPL::Value<rlsenVal,rlsenVal::v0> v0{};
            constexpr MPL::Value<rlsenVal,rlsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rlsenVal> rlsen{}; 
        ///Enable Bit.
        enum class tlsenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace tlsenValC{
            constexpr MPL::Value<tlsenVal,tlsenVal::v0> v0{};
            constexpr MPL::Value<tlsenVal,tlsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,tlsenVal> tlsen{}; 
        ///Enable Bit.
        enum class rfsenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace rfsenValC{
            constexpr MPL::Value<rfsenVal,rfsenVal::v0> v0{};
            constexpr MPL::Value<rfsenVal,rfsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rfsenVal> rfsen{}; 
        ///Enable Bit.
        enum class tfsenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace tfsenValC{
            constexpr MPL::Value<tfsenVal,tfsenVal::v0> v0{};
            constexpr MPL::Value<tfsenVal,tfsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tfsenVal> tfsen{}; 
        ///Enable Bit.
        enum class tue0enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace tue0enValC{
            constexpr MPL::Value<tue0enVal,tue0enVal::v0> v0{};
            constexpr MPL::Value<tue0enVal,tue0enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tue0enVal> tue0en{}; 
        ///Enable Bit.
        enum class tue1enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace tue1enValC{
            constexpr MPL::Value<tue1enVal,tue1enVal::v0> v0{};
            constexpr MPL::Value<tue1enVal,tue1enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,tue1enVal> tue1en{}; 
        ///Enable Bit.
        enum class roe0enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace roe0enValC{
            constexpr MPL::Value<roe0enVal,roe0enVal::v0> v0{};
            constexpr MPL::Value<roe0enVal,roe0enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,roe0enVal> roe0en{}; 
        ///Enable Bit.
        enum class roe1enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace roe1enValC{
            constexpr MPL::Value<roe1enVal,roe1enVal::v0> v0{};
            constexpr MPL::Value<roe1enVal,roe1enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,roe1enVal> roe1en{}; 
        ///Enable Bit.
        enum class tde0enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace tde0enValC{
            constexpr MPL::Value<tde0enVal,tde0enVal::v0> v0{};
            constexpr MPL::Value<tde0enVal,tde0enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tde0enVal> tde0en{}; 
        ///Enable Bit.
        enum class tde1enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace tde1enValC{
            constexpr MPL::Value<tde1enVal,tde1enVal::v0> v0{};
            constexpr MPL::Value<tde1enVal,tde1enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,tde1enVal> tde1en{}; 
        ///Enable Bit.
        enum class rdr0enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace rdr0enValC{
            constexpr MPL::Value<rdr0enVal,rdr0enVal::v0> v0{};
            constexpr MPL::Value<rdr0enVal,rdr0enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,rdr0enVal> rdr0en{}; 
        ///Enable Bit.
        enum class rdr1enVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace rdr1enValC{
            constexpr MPL::Value<rdr1enVal,rdr1enVal::v0> v0{};
            constexpr MPL::Value<rdr1enVal,rdr1enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,rdr1enVal> rdr1en{}; 
        ///Enable Bit.
        enum class rxtenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace rxtenValC{
            constexpr MPL::Value<rxtenVal,rxtenVal::v0> v0{};
            constexpr MPL::Value<rxtenVal,rxtenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,rxtenVal> rxten{}; 
        ///Enable Bit.
        enum class cmdduenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace cmdduenValC{
            constexpr MPL::Value<cmdduenVal,cmdduenVal::v0> v0{};
            constexpr MPL::Value<cmdduenVal,cmdduenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,cmdduenVal> cmdduen{}; 
        ///Enable Bit.
        enum class cmdauenVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace cmdauenValC{
            constexpr MPL::Value<cmdauenVal,cmdauenVal::v0> v0{};
            constexpr MPL::Value<cmdauenVal,cmdauenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,cmdauenVal> cmdauen{}; 
        ///Transmit Interrupt Enable.
        enum class tieVal {
            v0=0x00000000,     ///<I2S transmitter interrupt requests disabled.
            v1=0x00000001,     ///<I2S transmitter interrupt requests enabled.
        };
        namespace tieValC{
            constexpr MPL::Value<tieVal,tieVal::v0> v0{};
            constexpr MPL::Value<tieVal,tieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,tieVal> tie{}; 
        ///Transmit DMA Enable.
        enum class tdmaeVal {
            v0=0x00000000,     ///<I2S transmitter DMA requests disabled.
            v1=0x00000001,     ///<I2S transmitter DMA requests enabled.
        };
        namespace tdmaeValC{
            constexpr MPL::Value<tdmaeVal,tdmaeVal::v0> v0{};
            constexpr MPL::Value<tdmaeVal,tdmaeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tdmaeVal> tdmae{}; 
        ///Receive Interrupt Enable.
        enum class rieVal {
            v0=0x00000000,     ///<I2S receiver interrupt requests disabled.
            v1=0x00000001,     ///<I2S receiver interrupt requests enabled.
        };
        namespace rieValC{
            constexpr MPL::Value<rieVal,rieVal::v0> v0{};
            constexpr MPL::Value<rieVal,rieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,rieVal> rie{}; 
        ///Receive DMA Enable.
        enum class rdmaeVal {
            v0=0x00000000,     ///<I2S receiver DMA requests disabled.
            v1=0x00000001,     ///<I2S receiver DMA requests enabled.
        };
        namespace rdmaeValC{
            constexpr MPL::Value<rdmaeVal,rdmaeVal::v0> v0{};
            constexpr MPL::Value<rdmaeVal,rdmaeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,rdmaeVal> rdmae{}; 
        ///Enable Bit.
        enum class tfrcEnVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace tfrcEnValC{
            constexpr MPL::Value<tfrcEnVal,tfrcEnVal::v0> v0{};
            constexpr MPL::Value<tfrcEnVal,tfrcEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,tfrcEnVal> tfrcEn{}; 
        ///Enable Bit.
        enum class rfrcEnVal {
            v0=0x00000000,     ///<Corresponding status bit cannot issue interrupt.
            v1=0x00000001,     ///<Corresponding status bit can issue interrupt.
        };
        namespace rfrcEnValC{
            constexpr MPL::Value<rfrcEnVal,rfrcEnVal::v0> v0{};
            constexpr MPL::Value<rfrcEnVal,rfrcEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,rfrcEnVal> rfrcEn{}; 
    }
    namespace I2s0Tcr{    ///<I2S Transmit Configuration Register
        using Addr = Register::Address<0x4002f01c,0xfffffc00,0,unsigned>;
        ///Transmit Early Frame Sync.
        enum class tefsVal {
            v0=0x00000000,     ///<Transmit frame sync initiated as the first bit of data is transmitted.
            v1=0x00000001,     ///<Transmit frame sync is initiated one bit before the data is transmitted.
        };
        namespace tefsValC{
            constexpr MPL::Value<tefsVal,tefsVal::v0> v0{};
            constexpr MPL::Value<tefsVal,tefsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tefsVal> tefs{}; 
        ///Transmit Frame Sync Length.
        enum class tfslVal {
            v0=0x00000000,     ///<Transmit frame sync is one-word long.
            v1=0x00000001,     ///<Transmit frame sync is one-clock-bit long.
        };
        namespace tfslValC{
            constexpr MPL::Value<tfslVal,tfslVal::v0> v0{};
            constexpr MPL::Value<tfslVal,tfslVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tfslVal> tfsl{}; 
        ///Transmit Frame Sync Invert.
        enum class tfsiVal {
            v0=0x00000000,     ///<Transmit frame sync is active high.
            v1=0x00000001,     ///<Transmit frame sync is active low.
        };
        namespace tfsiValC{
            constexpr MPL::Value<tfsiVal,tfsiVal::v0> v0{};
            constexpr MPL::Value<tfsiVal,tfsiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tfsiVal> tfsi{}; 
        ///Transmit Clock Polarity.
        enum class tsckpVal {
            v0=0x00000000,     ///<Data clocked out on rising edge of bit clock.
            v1=0x00000001,     ///<Data clocked out on falling edge of bit clock.
        };
        namespace tsckpValC{
            constexpr MPL::Value<tsckpVal,tsckpVal::v0> v0{};
            constexpr MPL::Value<tsckpVal,tsckpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tsckpVal> tsckp{}; 
        ///Transmit Shift Direction.
        enum class tshfdVal {
            v0=0x00000000,     ///<Data transmitted MSB first.
            v1=0x00000001,     ///<Data transmitted LSB first.
        };
        namespace tshfdValC{
            constexpr MPL::Value<tshfdVal,tshfdVal::v0> v0{};
            constexpr MPL::Value<tshfdVal,tshfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tshfdVal> tshfd{}; 
        ///Transmit clock direction
        enum class txdirVal {
            v0=0x00000000,     ///<Transmit clock is external.
            v1=0x00000001,     ///<Transmit clock generated internally
        };
        namespace txdirValC{
            constexpr MPL::Value<txdirVal,txdirVal::v0> v0{};
            constexpr MPL::Value<txdirVal,txdirVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,txdirVal> txdir{}; 
        ///Transmit Frame Direction.
        enum class tfdirVal {
            v0=0x00000000,     ///<Frame sync is external.
            v1=0x00000001,     ///<Frame sync generated internally.
        };
        namespace tfdirValC{
            constexpr MPL::Value<tfdirVal,tfdirVal::v0> v0{};
            constexpr MPL::Value<tfdirVal,tfdirVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tfdirVal> tfdir{}; 
        ///Transmit FIFO Enable 0.
        enum class tfen0Val {
            v0=0x00000000,     ///<Transmit FIFO 0 disabled.
            v1=0x00000001,     ///<Transmit FIFO 0 enabled.
        };
        namespace tfen0ValC{
            constexpr MPL::Value<tfen0Val,tfen0Val::v0> v0{};
            constexpr MPL::Value<tfen0Val,tfen0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tfen0Val> tfen0{}; 
        ///Transmit FIFO Enable 1.
        enum class tfen1Val {
            v0=0x00000000,     ///<Transmit FIFO 1 disabled.
            v1=0x00000001,     ///<Transmit FIFO 1 enabled.
        };
        namespace tfen1ValC{
            constexpr MPL::Value<tfen1Val,tfen1Val::v0> v0{};
            constexpr MPL::Value<tfen1Val,tfen1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tfen1Val> tfen1{}; 
        ///Transmit Bit 0.
        enum class txbit0Val {
            v0=0x00000000,     ///<Shifting with respect to bit 31 (if word length = 16, 18, 20, 22 or 24) or bit 15 (if word length = 8, 10 or 12) of transmit shift register (MSB aligned).
            v1=0x00000001,     ///<Shifting with respect to bit 0 of transmit shift register (LSB aligned).
        };
        namespace txbit0ValC{
            constexpr MPL::Value<txbit0Val,txbit0Val::v0> v0{};
            constexpr MPL::Value<txbit0Val,txbit0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,txbit0Val> txbit0{}; 
    }
    namespace I2s0Rcr{    ///<I2S Receive Configuration Register
        using Addr = Register::Address<0x4002f020,0xfffff800,0,unsigned>;
        ///Receive Early Frame Sync.
        enum class refsVal {
            v0=0x00000000,     ///<Receive frame sync initiated as the first bit of data is received.
            v1=0x00000001,     ///<Receive frame sync is initiated one bit before the data is received.
        };
        namespace refsValC{
            constexpr MPL::Value<refsVal,refsVal::v0> v0{};
            constexpr MPL::Value<refsVal,refsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,refsVal> refs{}; 
        ///Receive Frame Sync Length.
        enum class rfslVal {
            v0=0x00000000,     ///<Receive frame sync is one-word long.
            v1=0x00000001,     ///<Receive frame sync is one-clock-bit long.
        };
        namespace rfslValC{
            constexpr MPL::Value<rfslVal,rfslVal::v0> v0{};
            constexpr MPL::Value<rfslVal,rfslVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rfslVal> rfsl{}; 
        ///Receive Frame Sync Invert.
        enum class rfsiVal {
            v0=0x00000000,     ///<Receive frame sync is active high.
            v1=0x00000001,     ///<Receive frame sync is active low.
        };
        namespace rfsiValC{
            constexpr MPL::Value<rfsiVal,rfsiVal::v0> v0{};
            constexpr MPL::Value<rfsiVal,rfsiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rfsiVal> rfsi{}; 
        ///Receive Clock Polarity.
        enum class rsckpVal {
            v0=0x00000000,     ///<Data latched on falling edge of bit clock.
            v1=0x00000001,     ///<Data latched on rising edge of bit clock.
        };
        namespace rsckpValC{
            constexpr MPL::Value<rsckpVal,rsckpVal::v0> v0{};
            constexpr MPL::Value<rsckpVal,rsckpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rsckpVal> rsckp{}; 
        ///Receive Shift Direction.
        enum class rshfdVal {
            v0=0x00000000,     ///<Data received MSB first.
            v1=0x00000001,     ///<Data received LSB first.
        };
        namespace rshfdValC{
            constexpr MPL::Value<rshfdVal,rshfdVal::v0> v0{};
            constexpr MPL::Value<rshfdVal,rshfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rshfdVal> rshfd{}; 
        ///Receive Clock Direction.
        enum class rxdirVal {
            v0=0x00000000,     ///<Receive Clock is external.
            v1=0x00000001,     ///<Receive Clock generated internally.
        };
        namespace rxdirValC{
            constexpr MPL::Value<rxdirVal,rxdirVal::v0> v0{};
            constexpr MPL::Value<rxdirVal,rxdirVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rxdirVal> rxdir{}; 
        ///Receive Frame Direction.
        enum class rfdirVal {
            v0=0x00000000,     ///<Frame Sync is external.
            v1=0x00000001,     ///<Frame Sync generated internally.
        };
        namespace rfdirValC{
            constexpr MPL::Value<rfdirVal,rfdirVal::v0> v0{};
            constexpr MPL::Value<rfdirVal,rfdirVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rfdirVal> rfdir{}; 
        ///Receive FIFO Enable 0.
        enum class rfen0Val {
            v0=0x00000000,     ///<Receive FIFO 0 disabled.
            v1=0x00000001,     ///<Receive FIFO 0 enabled.
        };
        namespace rfen0ValC{
            constexpr MPL::Value<rfen0Val,rfen0Val::v0> v0{};
            constexpr MPL::Value<rfen0Val,rfen0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rfen0Val> rfen0{}; 
        ///Receive FIFO Enable 1.
        enum class rfen1Val {
            v0=0x00000000,     ///<Receive FIFO 1 disabled.
            v1=0x00000001,     ///<Receive FIFO 1 enabled.
        };
        namespace rfen1ValC{
            constexpr MPL::Value<rfen1Val,rfen1Val::v0> v0{};
            constexpr MPL::Value<rfen1Val,rfen1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,rfen1Val> rfen1{}; 
        ///Receive Bit 0.
        enum class rxbit0Val {
            v0=0x00000000,     ///<Shifting with respect to bit 31 (if word length = 16, 18, 20, 22 or 24) or bit 15 (if word length = 8, 10 or 12) of receive shift register (MSB aligned).
            v1=0x00000001,     ///<Shifting with respect to bit 0 of receive shift register (LSB aligned).
        };
        namespace rxbit0ValC{
            constexpr MPL::Value<rxbit0Val,rxbit0Val::v0> v0{};
            constexpr MPL::Value<rxbit0Val,rxbit0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,rxbit0Val> rxbit0{}; 
        ///Receive Data Extension.
        enum class rxextVal {
            v0=0x00000000,     ///<Sign extension turned off.
            v1=0x00000001,     ///<Sign extension turned on.
        };
        namespace rxextValC{
            constexpr MPL::Value<rxextVal,rxextVal::v0> v0{};
            constexpr MPL::Value<rxextVal,rxextVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rxextVal> rxext{}; 
    }
    namespace I2s0Tccr{    ///<I2S Transmit Clock Control Registers
        using Addr = Register::Address<0x4002f024,0xfff80000,0,unsigned>;
        ///Prescaler Modulus Select.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Frame Rate Divider Control.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dc{}; 
        ///Word Length Control.
        enum class wlVal {
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
        namespace wlValC{
            constexpr MPL::Value<wlVal,wlVal::v0000> v0000{};
            constexpr MPL::Value<wlVal,wlVal::v0001> v0001{};
            constexpr MPL::Value<wlVal,wlVal::v0010> v0010{};
            constexpr MPL::Value<wlVal,wlVal::v0011> v0011{};
            constexpr MPL::Value<wlVal,wlVal::v0100> v0100{};
            constexpr MPL::Value<wlVal,wlVal::v0101> v0101{};
            constexpr MPL::Value<wlVal,wlVal::v0110> v0110{};
            constexpr MPL::Value<wlVal,wlVal::v0111> v0111{};
            constexpr MPL::Value<wlVal,wlVal::v1000> v1000{};
            constexpr MPL::Value<wlVal,wlVal::v1001> v1001{};
            constexpr MPL::Value<wlVal,wlVal::v1010> v1010{};
            constexpr MPL::Value<wlVal,wlVal::v1011> v1011{};
            constexpr MPL::Value<wlVal,wlVal::v1100> v1100{};
            constexpr MPL::Value<wlVal,wlVal::v1101> v1101{};
            constexpr MPL::Value<wlVal,wlVal::v1110> v1110{};
            constexpr MPL::Value<wlVal,wlVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,wlVal> wl{}; 
        ///Prescaler Range.
        enum class psrVal {
            v0=0x00000000,     ///<Prescaler bypassed.
            v1=0x00000001,     ///<Prescaler used to divide clock by 8.
        };
        namespace psrValC{
            constexpr MPL::Value<psrVal,psrVal::v0> v0{};
            constexpr MPL::Value<psrVal,psrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,psrVal> psr{}; 
        ///Divide By 2.
        enum class div2Val {
            v0=0x00000000,     ///<Divider bypassed.
            v1=0x00000001,     ///<Divider used to divide clock by 2.
        };
        namespace div2ValC{
            constexpr MPL::Value<div2Val,div2Val::v0> v0{};
            constexpr MPL::Value<div2Val,div2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,div2Val> div2{}; 
    }
    namespace I2s0Rccr{    ///<I2S Receive Clock Control Registers
        using Addr = Register::Address<0x4002f028,0xfff80000,0,unsigned>;
        ///Prescaler Modulus Select.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Frame Rate Divider Control.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dc{}; 
        ///Word Length Control.
        enum class wlVal {
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
        namespace wlValC{
            constexpr MPL::Value<wlVal,wlVal::v0000> v0000{};
            constexpr MPL::Value<wlVal,wlVal::v0001> v0001{};
            constexpr MPL::Value<wlVal,wlVal::v0010> v0010{};
            constexpr MPL::Value<wlVal,wlVal::v0011> v0011{};
            constexpr MPL::Value<wlVal,wlVal::v0100> v0100{};
            constexpr MPL::Value<wlVal,wlVal::v0101> v0101{};
            constexpr MPL::Value<wlVal,wlVal::v0110> v0110{};
            constexpr MPL::Value<wlVal,wlVal::v0111> v0111{};
            constexpr MPL::Value<wlVal,wlVal::v1000> v1000{};
            constexpr MPL::Value<wlVal,wlVal::v1001> v1001{};
            constexpr MPL::Value<wlVal,wlVal::v1010> v1010{};
            constexpr MPL::Value<wlVal,wlVal::v1011> v1011{};
            constexpr MPL::Value<wlVal,wlVal::v1100> v1100{};
            constexpr MPL::Value<wlVal,wlVal::v1101> v1101{};
            constexpr MPL::Value<wlVal,wlVal::v1110> v1110{};
            constexpr MPL::Value<wlVal,wlVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,wlVal> wl{}; 
        ///Prescaler Range.
        enum class psrVal {
            v0=0x00000000,     ///<Prescaler bypassed.
            v1=0x00000001,     ///<Prescaler used to divide clock by 8.
        };
        namespace psrValC{
            constexpr MPL::Value<psrVal,psrVal::v0> v0{};
            constexpr MPL::Value<psrVal,psrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,psrVal> psr{}; 
        ///Divide By 2.
        enum class div2Val {
            v0=0x00000000,     ///<Divider bypassed.
            v1=0x00000001,     ///<Divider used to divide clock by 2.
        };
        namespace div2ValC{
            constexpr MPL::Value<div2Val,div2Val::v0> v0{};
            constexpr MPL::Value<div2Val,div2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,div2Val> div2{}; 
    }
    namespace I2s0Fcsr{    ///<I2S FIFO Control/Status Register
        using Addr = Register::Address<0x4002f02c,0x00000000,0,unsigned>;
        ///Transmit FIFO Empty WaterMark 0.
        enum class tfwm0Val {
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
        namespace tfwm0ValC{
            constexpr MPL::Value<tfwm0Val,tfwm0Val::v0001> v0001{};
            constexpr MPL::Value<tfwm0Val,tfwm0Val::v0010> v0010{};
            constexpr MPL::Value<tfwm0Val,tfwm0Val::v0011> v0011{};
            constexpr MPL::Value<tfwm0Val,tfwm0Val::v0100> v0100{};
            constexpr MPL::Value<tfwm0Val,tfwm0Val::v0101> v0101{};
            constexpr MPL::Value<tfwm0Val,tfwm0Val::v0110> v0110{};
            constexpr MPL::Value<tfwm0Val,tfwm0Val::v0111> v0111{};
            constexpr MPL::Value<tfwm0Val,tfwm0Val::v1000> v1000{};
            constexpr MPL::Value<tfwm0Val,tfwm0Val::v1001> v1001{};
            constexpr MPL::Value<tfwm0Val,tfwm0Val::v1010> v1010{};
            constexpr MPL::Value<tfwm0Val,tfwm0Val::v1011> v1011{};
            constexpr MPL::Value<tfwm0Val,tfwm0Val::v1100> v1100{};
            constexpr MPL::Value<tfwm0Val,tfwm0Val::v1101> v1101{};
            constexpr MPL::Value<tfwm0Val,tfwm0Val::v1110> v1110{};
            constexpr MPL::Value<tfwm0Val,tfwm0Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,tfwm0Val> tfwm0{}; 
        ///Receive FIFO Full WaterMark 0.
        enum class rfwm0Val {
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
        namespace rfwm0ValC{
            constexpr MPL::Value<rfwm0Val,rfwm0Val::v0001> v0001{};
            constexpr MPL::Value<rfwm0Val,rfwm0Val::v0010> v0010{};
            constexpr MPL::Value<rfwm0Val,rfwm0Val::v0011> v0011{};
            constexpr MPL::Value<rfwm0Val,rfwm0Val::v0100> v0100{};
            constexpr MPL::Value<rfwm0Val,rfwm0Val::v0101> v0101{};
            constexpr MPL::Value<rfwm0Val,rfwm0Val::v0110> v0110{};
            constexpr MPL::Value<rfwm0Val,rfwm0Val::v0111> v0111{};
            constexpr MPL::Value<rfwm0Val,rfwm0Val::v1000> v1000{};
            constexpr MPL::Value<rfwm0Val,rfwm0Val::v1001> v1001{};
            constexpr MPL::Value<rfwm0Val,rfwm0Val::v1010> v1010{};
            constexpr MPL::Value<rfwm0Val,rfwm0Val::v1011> v1011{};
            constexpr MPL::Value<rfwm0Val,rfwm0Val::v1100> v1100{};
            constexpr MPL::Value<rfwm0Val,rfwm0Val::v1101> v1101{};
            constexpr MPL::Value<rfwm0Val,rfwm0Val::v1110> v1110{};
            constexpr MPL::Value<rfwm0Val,rfwm0Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,rfwm0Val> rfwm0{}; 
        ///Transmit FIFO Counter 0.
        enum class tfcnt0Val {
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
        namespace tfcnt0ValC{
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v0000> v0000{};
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v0001> v0001{};
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v0010> v0010{};
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v0011> v0011{};
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v0100> v0100{};
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v0101> v0101{};
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v0110> v0110{};
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v0111> v0111{};
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v1000> v1000{};
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v1001> v1001{};
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v1010> v1010{};
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v1011> v1011{};
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v1100> v1100{};
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v1101> v1101{};
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v1110> v1110{};
            constexpr MPL::Value<tfcnt0Val,tfcnt0Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,tfcnt0Val> tfcnt0{}; 
        ///Receive FIFO Counter 0.
        enum class rfcnt0Val {
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
        namespace rfcnt0ValC{
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v0000> v0000{};
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v0001> v0001{};
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v0010> v0010{};
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v0011> v0011{};
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v0100> v0100{};
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v0101> v0101{};
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v0110> v0110{};
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v0111> v0111{};
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v1000> v1000{};
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v1001> v1001{};
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v1010> v1010{};
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v1011> v1011{};
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v1100> v1100{};
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v1101> v1101{};
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v1110> v1110{};
            constexpr MPL::Value<rfcnt0Val,rfcnt0Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,rfcnt0Val> rfcnt0{}; 
        ///Transmit FIFO Empty WaterMark 1.
        enum class tfwm1Val {
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
        namespace tfwm1ValC{
            constexpr MPL::Value<tfwm1Val,tfwm1Val::v0001> v0001{};
            constexpr MPL::Value<tfwm1Val,tfwm1Val::v0010> v0010{};
            constexpr MPL::Value<tfwm1Val,tfwm1Val::v0011> v0011{};
            constexpr MPL::Value<tfwm1Val,tfwm1Val::v0100> v0100{};
            constexpr MPL::Value<tfwm1Val,tfwm1Val::v0101> v0101{};
            constexpr MPL::Value<tfwm1Val,tfwm1Val::v0110> v0110{};
            constexpr MPL::Value<tfwm1Val,tfwm1Val::v0111> v0111{};
            constexpr MPL::Value<tfwm1Val,tfwm1Val::v1000> v1000{};
            constexpr MPL::Value<tfwm1Val,tfwm1Val::v1001> v1001{};
            constexpr MPL::Value<tfwm1Val,tfwm1Val::v1010> v1010{};
            constexpr MPL::Value<tfwm1Val,tfwm1Val::v1011> v1011{};
            constexpr MPL::Value<tfwm1Val,tfwm1Val::v1100> v1100{};
            constexpr MPL::Value<tfwm1Val,tfwm1Val::v1101> v1101{};
            constexpr MPL::Value<tfwm1Val,tfwm1Val::v1110> v1110{};
            constexpr MPL::Value<tfwm1Val,tfwm1Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,tfwm1Val> tfwm1{}; 
        ///Receive FIFO Full WaterMark 1.
        enum class rfwm1Val {
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
        namespace rfwm1ValC{
            constexpr MPL::Value<rfwm1Val,rfwm1Val::v0001> v0001{};
            constexpr MPL::Value<rfwm1Val,rfwm1Val::v0010> v0010{};
            constexpr MPL::Value<rfwm1Val,rfwm1Val::v0011> v0011{};
            constexpr MPL::Value<rfwm1Val,rfwm1Val::v0100> v0100{};
            constexpr MPL::Value<rfwm1Val,rfwm1Val::v0101> v0101{};
            constexpr MPL::Value<rfwm1Val,rfwm1Val::v0110> v0110{};
            constexpr MPL::Value<rfwm1Val,rfwm1Val::v0111> v0111{};
            constexpr MPL::Value<rfwm1Val,rfwm1Val::v1000> v1000{};
            constexpr MPL::Value<rfwm1Val,rfwm1Val::v1001> v1001{};
            constexpr MPL::Value<rfwm1Val,rfwm1Val::v1010> v1010{};
            constexpr MPL::Value<rfwm1Val,rfwm1Val::v1011> v1011{};
            constexpr MPL::Value<rfwm1Val,rfwm1Val::v1100> v1100{};
            constexpr MPL::Value<rfwm1Val,rfwm1Val::v1101> v1101{};
            constexpr MPL::Value<rfwm1Val,rfwm1Val::v1110> v1110{};
            constexpr MPL::Value<rfwm1Val,rfwm1Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,rfwm1Val> rfwm1{}; 
        ///Transmit FIFO Counter1.
        enum class tfcnt1Val {
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
        namespace tfcnt1ValC{
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v0000> v0000{};
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v0001> v0001{};
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v0010> v0010{};
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v0011> v0011{};
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v0100> v0100{};
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v0101> v0101{};
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v0110> v0110{};
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v0111> v0111{};
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v1000> v1000{};
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v1001> v1001{};
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v1010> v1010{};
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v1011> v1011{};
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v1100> v1100{};
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v1101> v1101{};
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v1110> v1110{};
            constexpr MPL::Value<tfcnt1Val,tfcnt1Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,tfcnt1Val> tfcnt1{}; 
        ///Receive FIFO Counter1.
        enum class rfcnt1Val {
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
        namespace rfcnt1ValC{
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v0000> v0000{};
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v0001> v0001{};
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v0010> v0010{};
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v0011> v0011{};
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v0100> v0100{};
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v0101> v0101{};
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v0110> v0110{};
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v0111> v0111{};
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v1000> v1000{};
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v1001> v1001{};
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v1010> v1010{};
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v1011> v1011{};
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v1100> v1100{};
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v1101> v1101{};
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v1110> v1110{};
            constexpr MPL::Value<rfcnt1Val,rfcnt1Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,rfcnt1Val> rfcnt1{}; 
    }
    namespace I2s0Acnt{    ///<I2S AC97 Control Register
        using Addr = Register::Address<0x4002f038,0xfffff800,0,unsigned>;
        ///AC97 Mode Enable.
        enum class ac97enVal {
            v0=0x00000000,     ///<AC97 mode disabled.
            v1=0x00000001,     ///<I2S in AC97 mode.
        };
        namespace ac97enValC{
            constexpr MPL::Value<ac97enVal,ac97enVal::v0> v0{};
            constexpr MPL::Value<ac97enVal,ac97enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ac97enVal> ac97en{}; 
        ///Fixed/Variable Operation.
        enum class fvVal {
            v0=0x00000000,     ///<AC97 Fixed Mode
            v1=0x00000001,     ///<AC97 Variable Mode.
        };
        namespace fvValC{
            constexpr MPL::Value<fvVal,fvVal::v0> v0{};
            constexpr MPL::Value<fvVal,fvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,fvVal> fv{}; 
        ///Tag in FIFO.
        enum class tifVal {
            v0=0x00000000,     ///<Tag info stored in ATAG register.
            v1=0x00000001,     ///<Tag info stored in ATAG register and Rx FIFO 0.
        };
        namespace tifValC{
            constexpr MPL::Value<tifVal,tifVal::v0> v0{};
            constexpr MPL::Value<tifVal,tifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tifVal> tif{}; 
        ///Read Command.
        enum class rdVal {
            v0=0x00000000,     ///<Next frame will not have a Read Command.
            v1=0x00000001,     ///<Next frame will have a Read Command.
        };
        namespace rdValC{
            constexpr MPL::Value<rdVal,rdVal::v0> v0{};
            constexpr MPL::Value<rdVal,rdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rdVal> rd{}; 
        ///Write Command.
        enum class wrVal {
            v0=0x00000000,     ///<Next frame will not have a Write Command.
            v1=0x00000001,     ///<Next frame will have a Write Command.
        };
        namespace wrValC{
            constexpr MPL::Value<wrVal,wrVal::v0> v0{};
            constexpr MPL::Value<wrVal,wrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,wrVal> wr{}; 
        ///Frame Rate Divider.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,5),Register::ReadWriteAccess,unsigned> frdiv{}; 
    }
    namespace I2s0Acadd{    ///<I2S AC97 Command Address Register
        using Addr = Register::Address<0x4002f03c,0xfff80000,0,unsigned>;
        ///AC97 Command Address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> acadd{}; 
    }
    namespace I2s0Acdat{    ///<I2S AC97 Command Data Register
        using Addr = Register::Address<0x4002f040,0xfff00000,0,unsigned>;
        ///AC97 Command Data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> acdat{}; 
    }
    namespace I2s0Atag{    ///<I2S AC97 Tag Register
        using Addr = Register::Address<0x4002f044,0xffff0000,0,unsigned>;
        ///AC97 Tag Value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> atag{}; 
    }
    namespace I2s0Tmsk{    ///<I2S Transmit Time Slot Mask Register
        using Addr = Register::Address<0x4002f048,0x00000000,0,unsigned>;
        ///Transmit Mask.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tmsk{}; 
    }
    namespace I2s0Rmsk{    ///<I2S Receive Time Slot Mask Register
        using Addr = Register::Address<0x4002f04c,0x00000000,0,unsigned>;
        ///Receive Mask.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rmsk{}; 
    }
    namespace I2s0Accst{    ///<I2S AC97 Channel Status Register
        using Addr = Register::Address<0x4002f050,0xfffffc00,0,unsigned>;
        ///AC97 Channel Status.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> accst{}; 
    }
    namespace I2s0Accen{    ///<I2S AC97 Channel Enable Register
        using Addr = Register::Address<0x4002f054,0xfffffc00,0,unsigned>;
        ///AC97 Channel Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> accen{}; 
    }
    namespace I2s0Accdis{    ///<I2S AC97 Channel Disable Register
        using Addr = Register::Address<0x4002f058,0xfffffc00,0,unsigned>;
        ///AC97 Channel Disable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> accdis{}; 
    }
}
