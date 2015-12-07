#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Inter-IC Sound / Synchronous Audio Interface
    namespace I2s0Tcsr{    ///<SAI Transmit Control Register
        using Addr = Register::Address<0x4002f000,0x0ce0e0fc,0,unsigned>;
        ///FIFO request DMA enable
        enum class FrdeVal {
            v0=0x00000000,     ///<Disables the DMA request.
            v1=0x00000001,     ///<Enables the DMA request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FrdeVal> frde{}; 
        namespace FrdeValC{
            constexpr Register::FieldValue<decltype(frde),FrdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(frde),FrdeVal::v1> v1{};
        }
        ///FIFO warning DMA enable
        enum class FwdeVal {
            v0=0x00000000,     ///<Disables the DMA request.
            v1=0x00000001,     ///<Enables the DMA request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FwdeVal> fwde{}; 
        namespace FwdeValC{
            constexpr Register::FieldValue<decltype(fwde),FwdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fwde),FwdeVal::v1> v1{};
        }
        ///FIFO request interrupt enable
        enum class FrieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FrieVal> frie{}; 
        namespace FrieValC{
            constexpr Register::FieldValue<decltype(frie),FrieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(frie),FrieVal::v1> v1{};
        }
        ///FIFO warning interrupt enable
        enum class FwieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,FwieVal> fwie{}; 
        namespace FwieValC{
            constexpr Register::FieldValue<decltype(fwie),FwieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fwie),FwieVal::v1> v1{};
        }
        ///FIFO error interrupt enable
        enum class FeieVal {
            v0=0x00000000,     ///<Disables the interrupt,
            v1=0x00000001,     ///<Enables the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,FeieVal> feie{}; 
        namespace FeieValC{
            constexpr Register::FieldValue<decltype(feie),FeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(feie),FeieVal::v1> v1{};
        }
        ///Sync error interrupt enable
        enum class SeieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,SeieVal> seie{}; 
        namespace SeieValC{
            constexpr Register::FieldValue<decltype(seie),SeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(seie),SeieVal::v1> v1{};
        }
        ///Word start interrupt enable
        enum class WsieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,WsieVal> wsie{}; 
        namespace WsieValC{
            constexpr Register::FieldValue<decltype(wsie),WsieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wsie),WsieVal::v1> v1{};
        }
        ///FIFO request flag
        enum class FrfVal {
            v0=0x00000000,     ///<Transmit FIFO watermark not reached.
            v1=0x00000001,     ///<Transmit FIFO watermark has been reached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,FrfVal> frf{}; 
        namespace FrfValC{
            constexpr Register::FieldValue<decltype(frf),FrfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(frf),FrfVal::v1> v1{};
        }
        ///FIFO warning flag
        enum class FwfVal {
            v0=0x00000000,     ///<No enabled transmit FIFO is empty.
            v1=0x00000001,     ///<Enabled transmit FIFO is empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,FwfVal> fwf{}; 
        namespace FwfValC{
            constexpr Register::FieldValue<decltype(fwf),FwfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fwf),FwfVal::v1> v1{};
        }
        ///FIFO error flag
        enum class FefVal {
            v0=0x00000000,     ///<Transmit underrun not detected.
            v1=0x00000001,     ///<Transmit underrun detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,FefVal> fef{}; 
        namespace FefValC{
            constexpr Register::FieldValue<decltype(fef),FefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fef),FefVal::v1> v1{};
        }
        ///Sync error flag
        enum class SefVal {
            v0=0x00000000,     ///<Sync error not detected.
            v1=0x00000001,     ///<Frame sync error detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SefVal> sef{}; 
        namespace SefValC{
            constexpr Register::FieldValue<decltype(sef),SefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sef),SefVal::v1> v1{};
        }
        ///Word start flag
        enum class WsfVal {
            v0=0x00000000,     ///<Start of word not detected.
            v1=0x00000001,     ///<Start of word detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,WsfVal> wsf{}; 
        namespace WsfValC{
            constexpr Register::FieldValue<decltype(wsf),WsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wsf),WsfVal::v1> v1{};
        }
        ///Software reset
        enum class SrVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Software reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,SrVal> sr{}; 
        namespace SrValC{
            constexpr Register::FieldValue<decltype(sr),SrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sr),SrVal::v1> v1{};
        }
        ///FIFO reset
        enum class FrVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<FIFO reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,FrVal> fr{}; 
        namespace FrValC{
            constexpr Register::FieldValue<decltype(fr),FrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fr),FrVal::v1> v1{};
        }
        ///Bit Clock Enable
        enum class BceVal {
            v0=0x00000000,     ///<Transmit bit clock is disabled
            v1=0x00000001,     ///<Transmit bit clock is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,BceVal> bce{}; 
        namespace BceValC{
            constexpr Register::FieldValue<decltype(bce),BceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bce),BceVal::v1> v1{};
        }
        ///Debug enable
        enum class DbgeVal {
            v0=0x00000000,     ///<Transmitter is disabled in debug mode, after completing the current frame.
            v1=0x00000001,     ///<Transmitter is enabled in debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,DbgeVal> dbge{}; 
        namespace DbgeValC{
            constexpr Register::FieldValue<decltype(dbge),DbgeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dbge),DbgeVal::v1> v1{};
        }
        ///Stop enable
        enum class StopeVal {
            v0=0x00000000,     ///<Transmitter disabled in stop mode.
            v1=0x00000001,     ///<Transmitter enabled in stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,StopeVal> stope{}; 
        namespace StopeValC{
            constexpr Register::FieldValue<decltype(stope),StopeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stope),StopeVal::v1> v1{};
        }
        ///Transmitter enable
        enum class TeVal {
            v0=0x00000000,     ///<Transmitter is disabled.
            v1=0x00000001,     ///<Transmitter is enabled, or transmitter has been disabled and not end of frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,TeVal> te{}; 
        namespace TeValC{
            constexpr Register::FieldValue<decltype(te),TeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(te),TeVal::v1> v1{};
        }
    }
    namespace I2s0Tcr1{    ///<SAI Transmit Configuration 1 Register
        using Addr = Register::Address<0x4002f004,0xfffffff8,0,unsigned>;
        ///Transmit FIFO watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tfw{}; 
        namespace TfwValC{
        }
    }
    namespace I2s0Tcr2{    ///<SAI Transmit Configuration 2 Register
        using Addr = Register::Address<0x4002f008,0x00ffff00,0,unsigned>;
        ///Bit clock divide
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
        ///Bit clock direction
        enum class BcdVal {
            v0=0x00000000,     ///<Bit clock is generated externally (slave mode).
            v1=0x00000001,     ///<Bit clock is generated internally (master mode).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,BcdVal> bcd{}; 
        namespace BcdValC{
            constexpr Register::FieldValue<decltype(bcd),BcdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bcd),BcdVal::v1> v1{};
        }
        ///Bit clock polarity
        enum class BcpVal {
            v0=0x00000000,     ///<Bit Clock is active high (drive outputs on rising edge and sample inputs on falling edge).
            v1=0x00000001,     ///<Bit Clock is active low (drive outputs on falling edge and sample inputs on rising edge).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,BcpVal> bcp{}; 
        namespace BcpValC{
            constexpr Register::FieldValue<decltype(bcp),BcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bcp),BcpVal::v1> v1{};
        }
        ///MCLK Select
        enum class MselVal {
            v00=0x00000000,     ///<Bus Clock selected.
            v01=0x00000001,     ///<Master Clock 1 selected.
            v10=0x00000002,     ///<Master Clock 2 selected.
            v11=0x00000003,     ///<Master Clock 3 selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,MselVal> msel{}; 
        namespace MselValC{
            constexpr Register::FieldValue<decltype(msel),MselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(msel),MselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(msel),MselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(msel),MselVal::v11> v11{};
        }
        ///Bit Clock Input
        enum class BciVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Internal logic is clocked by external bit clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,BciVal> bci{}; 
        namespace BciValC{
            constexpr Register::FieldValue<decltype(bci),BciVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bci),BciVal::v1> v1{};
        }
        ///Bit Clock Swap
        enum class BcsVal {
            v0=0x00000000,     ///<Use the normal bit clock source.
            v1=0x00000001,     ///<Swap the bit clock source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,BcsVal> bcs{}; 
        namespace BcsValC{
            constexpr Register::FieldValue<decltype(bcs),BcsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bcs),BcsVal::v1> v1{};
        }
        ///Synchronous Mode
        enum class SyncVal {
            v00=0x00000000,     ///<Asynchronous mode.
            v01=0x00000001,     ///<Synchronous with receiver.
            v10=0x00000002,     ///<Synchronous with another SAI transmitter.
            v11=0x00000003,     ///<Synchronous with another SAI receiver.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,SyncVal> sync{}; 
        namespace SyncValC{
            constexpr Register::FieldValue<decltype(sync),SyncVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sync),SyncVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sync),SyncVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sync),SyncVal::v11> v11{};
        }
    }
    namespace I2s0Tcr3{    ///<SAI Transmit Configuration 3 Register
        using Addr = Register::Address<0x4002f00c,0xfffcffe0,0,unsigned>;
        ///Word flag configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> wdfl{}; 
        namespace WdflValC{
        }
        ///Transmit channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> tce{}; 
        namespace TceValC{
        }
    }
    namespace I2s0Tcr4{    ///<SAI Transmit Configuration 4 Register
        using Addr = Register::Address<0x4002f010,0xffe0e0e4,0,unsigned>;
        ///Frame sync direction
        enum class FsdVal {
            v0=0x00000000,     ///<Frame Sync is generated externally (slave mode).
            v1=0x00000001,     ///<Frame Sync is generated internally (master mode).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FsdVal> fsd{}; 
        namespace FsdValC{
            constexpr Register::FieldValue<decltype(fsd),FsdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fsd),FsdVal::v1> v1{};
        }
        ///Frame sync polarity
        enum class FspVal {
            v0=0x00000000,     ///<Frame sync is active high.
            v1=0x00000001,     ///<Frame sync is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FspVal> fsp{}; 
        namespace FspValC{
            constexpr Register::FieldValue<decltype(fsp),FspVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fsp),FspVal::v1> v1{};
        }
        ///Frame sync early
        enum class FseVal {
            v0=0x00000000,     ///<Frame sync asserts with the first bit of the frame.
            v1=0x00000001,     ///<Frame sync asserts one bit before the first bit of the frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FseVal> fse{}; 
        namespace FseValC{
            constexpr Register::FieldValue<decltype(fse),FseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fse),FseVal::v1> v1{};
        }
        ///MSB first
        enum class MfVal {
            v0=0x00000000,     ///<LBS is transmitted/received first.
            v1=0x00000001,     ///<MBS is transmitted/received first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MfVal> mf{}; 
        namespace MfValC{
            constexpr Register::FieldValue<decltype(mf),MfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mf),MfVal::v1> v1{};
        }
        ///Sync width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sywd{}; 
        namespace SywdValC{
        }
        ///Frame size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> frsz{}; 
        namespace FrszValC{
        }
    }
    namespace I2s0Tcr5{    ///<SAI Transmit Configuration 5 Register
        using Addr = Register::Address<0x4002f014,0xe0e0e0ff,0,unsigned>;
        ///First bit shifted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> fbt{}; 
        namespace FbtValC{
        }
        ///Word 0 width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> w0w{}; 
        namespace W0wValC{
        }
        ///Word N width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> wnw{}; 
        namespace WnwValC{
        }
    }
    namespace I2s0Tdr0{    ///<SAI Transmit Data Register
        using Addr = Register::Address<0x4002f020,0x00000000,0,unsigned>;
        ///Transmit data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tdr{}; 
        namespace TdrValC{
        }
    }
    namespace I2s0Tdr1{    ///<SAI Transmit Data Register
        using Addr = Register::Address<0x4002f024,0x00000000,0,unsigned>;
        ///Transmit data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tdr{}; 
        namespace TdrValC{
        }
    }
    namespace I2s0Tfr0{    ///<SAI Transmit FIFO Register
        using Addr = Register::Address<0x4002f040,0xfff0fff0,0,unsigned>;
        ///Read FIFO pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rfp{}; 
        namespace RfpValC{
        }
        ///Write FIFO pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> wfp{}; 
        namespace WfpValC{
        }
    }
    namespace I2s0Tfr1{    ///<SAI Transmit FIFO Register
        using Addr = Register::Address<0x4002f044,0xfff0fff0,0,unsigned>;
        ///Read FIFO pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rfp{}; 
        namespace RfpValC{
        }
        ///Write FIFO pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> wfp{}; 
        namespace WfpValC{
        }
    }
    namespace I2s0Tmr{    ///<SAI Transmit Mask Register
        using Addr = Register::Address<0x4002f060,0x00000000,0,unsigned>;
        ///Transmit word mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> twm{}; 
        namespace TwmValC{
        }
    }
    namespace I2s0Rcsr{    ///<SAI Receive Control Register
        using Addr = Register::Address<0x4002f080,0x0ce0e0fc,0,unsigned>;
        ///FIFO request DMA enable
        enum class FrdeVal {
            v0=0x00000000,     ///<Disables the DMA request.
            v1=0x00000001,     ///<Enables the DMA request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FrdeVal> frde{}; 
        namespace FrdeValC{
            constexpr Register::FieldValue<decltype(frde),FrdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(frde),FrdeVal::v1> v1{};
        }
        ///FIFO warning DMA enable
        enum class FwdeVal {
            v0=0x00000000,     ///<Disables the DMA request.
            v1=0x00000001,     ///<Enables the DMA request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FwdeVal> fwde{}; 
        namespace FwdeValC{
            constexpr Register::FieldValue<decltype(fwde),FwdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fwde),FwdeVal::v1> v1{};
        }
        ///FIFO request interrupt enable
        enum class FrieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FrieVal> frie{}; 
        namespace FrieValC{
            constexpr Register::FieldValue<decltype(frie),FrieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(frie),FrieVal::v1> v1{};
        }
        ///FIFO warning interrupt enable
        enum class FwieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,FwieVal> fwie{}; 
        namespace FwieValC{
            constexpr Register::FieldValue<decltype(fwie),FwieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fwie),FwieVal::v1> v1{};
        }
        ///FIFO error interrupt enable
        enum class FeieVal {
            v0=0x00000000,     ///<Disables the interrupt,
            v1=0x00000001,     ///<Enables the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,FeieVal> feie{}; 
        namespace FeieValC{
            constexpr Register::FieldValue<decltype(feie),FeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(feie),FeieVal::v1> v1{};
        }
        ///Sync error interrupt enable
        enum class SeieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,SeieVal> seie{}; 
        namespace SeieValC{
            constexpr Register::FieldValue<decltype(seie),SeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(seie),SeieVal::v1> v1{};
        }
        ///Word start interrupt enable
        enum class WsieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,WsieVal> wsie{}; 
        namespace WsieValC{
            constexpr Register::FieldValue<decltype(wsie),WsieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wsie),WsieVal::v1> v1{};
        }
        ///FIFO request flag
        enum class FrfVal {
            v0=0x00000000,     ///<Receive FIFO watermark not reached.
            v1=0x00000001,     ///<Receive FIFO watermark has been reached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,FrfVal> frf{}; 
        namespace FrfValC{
            constexpr Register::FieldValue<decltype(frf),FrfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(frf),FrfVal::v1> v1{};
        }
        ///FIFO warning flag
        enum class FwfVal {
            v0=0x00000000,     ///<No enabled receive FIFO is full.
            v1=0x00000001,     ///<Enabled receive FIFO is full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,FwfVal> fwf{}; 
        namespace FwfValC{
            constexpr Register::FieldValue<decltype(fwf),FwfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fwf),FwfVal::v1> v1{};
        }
        ///FIFO error flag
        enum class FefVal {
            v0=0x00000000,     ///<Receive overflow not detected.
            v1=0x00000001,     ///<Receive overflow detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,FefVal> fef{}; 
        namespace FefValC{
            constexpr Register::FieldValue<decltype(fef),FefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fef),FefVal::v1> v1{};
        }
        ///Sync error flag
        enum class SefVal {
            v0=0x00000000,     ///<Sync error not detected.
            v1=0x00000001,     ///<Frame sync error detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SefVal> sef{}; 
        namespace SefValC{
            constexpr Register::FieldValue<decltype(sef),SefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sef),SefVal::v1> v1{};
        }
        ///Word start flag
        enum class WsfVal {
            v0=0x00000000,     ///<Start of word not detected.
            v1=0x00000001,     ///<Start of word detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,WsfVal> wsf{}; 
        namespace WsfValC{
            constexpr Register::FieldValue<decltype(wsf),WsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wsf),WsfVal::v1> v1{};
        }
        ///Software reset
        enum class SrVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Software reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,SrVal> sr{}; 
        namespace SrValC{
            constexpr Register::FieldValue<decltype(sr),SrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sr),SrVal::v1> v1{};
        }
        ///FIFO reset
        enum class FrVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<FIFO reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,FrVal> fr{}; 
        namespace FrValC{
            constexpr Register::FieldValue<decltype(fr),FrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fr),FrVal::v1> v1{};
        }
        ///Bit Clock enable
        enum class BceVal {
            v0=0x00000000,     ///<Receive bit clock is disabled
            v1=0x00000001,     ///<Receive bit clock is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,BceVal> bce{}; 
        namespace BceValC{
            constexpr Register::FieldValue<decltype(bce),BceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bce),BceVal::v1> v1{};
        }
        ///Debug enable
        enum class DbgeVal {
            v0=0x00000000,     ///<Receiver is disabled in debug mode, after completing the current frame.
            v1=0x00000001,     ///<Receiver is enabled in debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,DbgeVal> dbge{}; 
        namespace DbgeValC{
            constexpr Register::FieldValue<decltype(dbge),DbgeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dbge),DbgeVal::v1> v1{};
        }
        ///Stop enable
        enum class StopeVal {
            v0=0x00000000,     ///<Receiver disabled in stop mode.
            v1=0x00000001,     ///<Receiver enabled in stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,StopeVal> stope{}; 
        namespace StopeValC{
            constexpr Register::FieldValue<decltype(stope),StopeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stope),StopeVal::v1> v1{};
        }
        ///Receiver enable
        enum class ReVal {
            v0=0x00000000,     ///<Receiver is disabled.
            v1=0x00000001,     ///<Receiver is enabled, or receiver has been disabled and not end of frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ReVal> re{}; 
        namespace ReValC{
            constexpr Register::FieldValue<decltype(re),ReVal::v0> v0{};
            constexpr Register::FieldValue<decltype(re),ReVal::v1> v1{};
        }
    }
    namespace I2s0Rcr1{    ///<SAI Receive Configuration 1 Register
        using Addr = Register::Address<0x4002f084,0xfffffff8,0,unsigned>;
        ///Receive FIFO watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rfw{}; 
        namespace RfwValC{
        }
    }
    namespace I2s0Rcr2{    ///<SAI Receive Configuration 2 Register
        using Addr = Register::Address<0x4002f088,0x00ffff00,0,unsigned>;
        ///Bit clock divide
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
        ///Bit clock direction
        enum class BcdVal {
            v0=0x00000000,     ///<Bit clock is generated externally (slave mode).
            v1=0x00000001,     ///<Bit clock is generated internally (master mode).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,BcdVal> bcd{}; 
        namespace BcdValC{
            constexpr Register::FieldValue<decltype(bcd),BcdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bcd),BcdVal::v1> v1{};
        }
        ///Bit clock polarity
        enum class BcpVal {
            v0=0x00000000,     ///<Bit Clock is active high (drive outputs on rising edge and sample inputs on falling edge).
            v1=0x00000001,     ///<Bit Clock is active low (drive outputs on falling edge and sample inputs on rising edge).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,BcpVal> bcp{}; 
        namespace BcpValC{
            constexpr Register::FieldValue<decltype(bcp),BcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bcp),BcpVal::v1> v1{};
        }
        ///MCLK Select
        enum class MselVal {
            v00=0x00000000,     ///<Bus Clock selected.
            v01=0x00000001,     ///<Master Clock 1 selected.
            v10=0x00000002,     ///<Master Clock 2 selected.
            v11=0x00000003,     ///<Master Clock 3 selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,MselVal> msel{}; 
        namespace MselValC{
            constexpr Register::FieldValue<decltype(msel),MselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(msel),MselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(msel),MselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(msel),MselVal::v11> v11{};
        }
        ///Bit Clock Input
        enum class BciVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Internal logic is clocked as if bit clock was externally generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,BciVal> bci{}; 
        namespace BciValC{
            constexpr Register::FieldValue<decltype(bci),BciVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bci),BciVal::v1> v1{};
        }
        ///Bit Clock Swap
        enum class BcsVal {
            v0=0x00000000,     ///<Use the normal bit clock source.
            v1=0x00000001,     ///<Swap the bit clock source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,BcsVal> bcs{}; 
        namespace BcsValC{
            constexpr Register::FieldValue<decltype(bcs),BcsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bcs),BcsVal::v1> v1{};
        }
        ///Synchronous Mode
        enum class SyncVal {
            v00=0x00000000,     ///<Asynchronous mode.
            v01=0x00000001,     ///<Synchronous with transmitter.
            v10=0x00000002,     ///<Synchronous with another SAI receiver.
            v11=0x00000003,     ///<Synchronous with another SAI transmitter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,SyncVal> sync{}; 
        namespace SyncValC{
            constexpr Register::FieldValue<decltype(sync),SyncVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sync),SyncVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sync),SyncVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sync),SyncVal::v11> v11{};
        }
    }
    namespace I2s0Rcr3{    ///<SAI Receive Configuration 3 Register
        using Addr = Register::Address<0x4002f08c,0xfffcffe0,0,unsigned>;
        ///Word flag configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> wdfl{}; 
        namespace WdflValC{
        }
        ///Receive channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> rce{}; 
        namespace RceValC{
        }
    }
    namespace I2s0Rcr4{    ///<SAI Receive Configuration 4 Register
        using Addr = Register::Address<0x4002f090,0xffe0e0e4,0,unsigned>;
        ///Frame sync direction
        enum class FsdVal {
            v0=0x00000000,     ///<Frame Sync is generated externally (slave mode).
            v1=0x00000001,     ///<Frame Sync is generated internally (master mode).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FsdVal> fsd{}; 
        namespace FsdValC{
            constexpr Register::FieldValue<decltype(fsd),FsdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fsd),FsdVal::v1> v1{};
        }
        ///Frame sync polarity
        enum class FspVal {
            v0=0x00000000,     ///<Frame sync is active high.
            v1=0x00000001,     ///<Frame sync is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FspVal> fsp{}; 
        namespace FspValC{
            constexpr Register::FieldValue<decltype(fsp),FspVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fsp),FspVal::v1> v1{};
        }
        ///Frame sync early
        enum class FseVal {
            v0=0x00000000,     ///<Frame sync asserts with the first bit of the frame.
            v1=0x00000001,     ///<Frame sync asserts one bit before the first bit of the frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FseVal> fse{}; 
        namespace FseValC{
            constexpr Register::FieldValue<decltype(fse),FseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fse),FseVal::v1> v1{};
        }
        ///MSB first
        enum class MfVal {
            v0=0x00000000,     ///<LBS is transmitted/received first.
            v1=0x00000001,     ///<MBS is transmitted/received first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MfVal> mf{}; 
        namespace MfValC{
            constexpr Register::FieldValue<decltype(mf),MfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mf),MfVal::v1> v1{};
        }
        ///Sync width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sywd{}; 
        namespace SywdValC{
        }
        ///Frame size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> frsz{}; 
        namespace FrszValC{
        }
    }
    namespace I2s0Rcr5{    ///<SAI Receive Configuration 5 Register
        using Addr = Register::Address<0x4002f094,0xe0e0e0ff,0,unsigned>;
        ///First bit shifted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> fbt{}; 
        namespace FbtValC{
        }
        ///Word 0 width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> w0w{}; 
        namespace W0wValC{
        }
        ///Word N width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> wnw{}; 
        namespace WnwValC{
        }
    }
    namespace I2s0Rdr0{    ///<SAI Receive Data Register
        using Addr = Register::Address<0x4002f0a0,0x00000000,0,unsigned>;
        ///Receive data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdr{}; 
        namespace RdrValC{
        }
    }
    namespace I2s0Rdr1{    ///<SAI Receive Data Register
        using Addr = Register::Address<0x4002f0a4,0x00000000,0,unsigned>;
        ///Receive data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdr{}; 
        namespace RdrValC{
        }
    }
    namespace I2s0Rfr0{    ///<SAI Receive FIFO Register
        using Addr = Register::Address<0x4002f0c0,0xfff0fff0,0,unsigned>;
        ///Read FIFO pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rfp{}; 
        namespace RfpValC{
        }
        ///Write FIFO pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> wfp{}; 
        namespace WfpValC{
        }
    }
    namespace I2s0Rfr1{    ///<SAI Receive FIFO Register
        using Addr = Register::Address<0x4002f0c4,0xfff0fff0,0,unsigned>;
        ///Read FIFO pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rfp{}; 
        namespace RfpValC{
        }
        ///Write FIFO pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> wfp{}; 
        namespace WfpValC{
        }
    }
    namespace I2s0Rmr{    ///<SAI Receive Mask Register
        using Addr = Register::Address<0x4002f0e0,0x00000000,0,unsigned>;
        ///Receive word mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rwm{}; 
        namespace RwmValC{
        }
    }
    namespace I2s0Mcr{    ///<SAI MCLK Control Register
        using Addr = Register::Address<0x4002f100,0x3cffffff,0,unsigned>;
        ///MCLK Input Clock Select
        enum class MicsVal {
            v00=0x00000000,     ///<MCLK Divider input clock 0 selected.
            v01=0x00000001,     ///<MCLK Divider input clock 1 selected.
            v10=0x00000002,     ///<MCLK Divider input clock 2 selected.
            v11=0x00000003,     ///<MCLK Divider input clock 3 selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,MicsVal> mics{}; 
        namespace MicsValC{
            constexpr Register::FieldValue<decltype(mics),MicsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(mics),MicsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(mics),MicsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(mics),MicsVal::v11> v11{};
        }
        ///MCLK Output Enable
        enum class MoeVal {
            v0=0x00000000,     ///<SAI_MCLK pin is configured as an input that bypasses the MCLK Divider.
            v1=0x00000001,     ///<SAI_MCLK pin is configured as an output from the MCLK Divider and the MCLK Divider is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,MoeVal> moe{}; 
        namespace MoeValC{
            constexpr Register::FieldValue<decltype(moe),MoeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(moe),MoeVal::v1> v1{};
        }
        ///Divider Update Flag
        enum class DufVal {
            v0=0x00000000,     ///<MCLK Divider ratio is not being updated currently.
            v1=0x00000001,     ///<MCLK Divider ratio is updating on-the-fly. Furthur updates to the MCLK Divider ratio are blocked while this flag remains set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,DufVal> duf{}; 
        namespace DufValC{
            constexpr Register::FieldValue<decltype(duf),DufVal::v0> v0{};
            constexpr Register::FieldValue<decltype(duf),DufVal::v1> v1{};
        }
    }
    namespace I2s0Mdr{    ///<MCLK Divide Register
        using Addr = Register::Address<0x4002f104,0xfff00000,0,unsigned>;
        ///MCLK Divide
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> divide{}; 
        namespace DivideValC{
        }
        ///MCLK Fraction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,12),Register::ReadWriteAccess,unsigned> fract{}; 
        namespace FractValC{
        }
    }
}
