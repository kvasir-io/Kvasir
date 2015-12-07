#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Inter-IC Sound / Synchronous Audio Interface
    namespace I2s0Tcsr{    ///<SAI Transmit Control Register
        using Addr = Register::Address<0x4002f000,0x0ce1e1fd,0,unsigned>;
        ///FIFO Warning DMA Enable
        enum class FwdeVal {
            v0=0x00000000,     ///<Disables the DMA request.
            v1=0x00000001,     ///<Enables the DMA request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FwdeVal> fwde{}; 
        namespace FwdeValC{
            constexpr Register::FieldValue<decltype(fwde),FwdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fwde),FwdeVal::v1> v1{};
        }
        ///FIFO Warning Interrupt Enable
        enum class FwieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,FwieVal> fwie{}; 
        namespace FwieValC{
            constexpr Register::FieldValue<decltype(fwie),FwieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fwie),FwieVal::v1> v1{};
        }
        ///FIFO Error Interrupt Enable
        enum class FeieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,FeieVal> feie{}; 
        namespace FeieValC{
            constexpr Register::FieldValue<decltype(feie),FeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(feie),FeieVal::v1> v1{};
        }
        ///Sync Error Interrupt Enable
        enum class SeieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,SeieVal> seie{}; 
        namespace SeieValC{
            constexpr Register::FieldValue<decltype(seie),SeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(seie),SeieVal::v1> v1{};
        }
        ///Word Start Interrupt Enable
        enum class WsieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,WsieVal> wsie{}; 
        namespace WsieValC{
            constexpr Register::FieldValue<decltype(wsie),WsieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wsie),WsieVal::v1> v1{};
        }
        ///FIFO Warning Flag
        enum class FwfVal {
            v0=0x00000000,     ///<No enabled transmit FIFO is empty.
            v1=0x00000001,     ///<Enabled transmit FIFO is empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,FwfVal> fwf{}; 
        namespace FwfValC{
            constexpr Register::FieldValue<decltype(fwf),FwfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fwf),FwfVal::v1> v1{};
        }
        ///FIFO Error Flag
        enum class FefVal {
            v0=0x00000000,     ///<Transmit underrun not detected.
            v1=0x00000001,     ///<Transmit underrun detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,FefVal> fef{}; 
        namespace FefValC{
            constexpr Register::FieldValue<decltype(fef),FefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fef),FefVal::v1> v1{};
        }
        ///Sync Error Flag
        enum class SefVal {
            v0=0x00000000,     ///<Sync error not detected.
            v1=0x00000001,     ///<Frame sync error detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SefVal> sef{}; 
        namespace SefValC{
            constexpr Register::FieldValue<decltype(sef),SefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sef),SefVal::v1> v1{};
        }
        ///Word Start Flag
        enum class WsfVal {
            v0=0x00000000,     ///<Start of word not detected.
            v1=0x00000001,     ///<Start of word detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,WsfVal> wsf{}; 
        namespace WsfValC{
            constexpr Register::FieldValue<decltype(wsf),WsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wsf),WsfVal::v1> v1{};
        }
        ///Software Reset
        enum class SrVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Software reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,SrVal> sr{}; 
        namespace SrValC{
            constexpr Register::FieldValue<decltype(sr),SrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sr),SrVal::v1> v1{};
        }
        ///FIFO Reset
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
            v0=0x00000000,     ///<Transmit bit clock is disabled.
            v1=0x00000001,     ///<Transmit bit clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,BceVal> bce{}; 
        namespace BceValC{
            constexpr Register::FieldValue<decltype(bce),BceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bce),BceVal::v1> v1{};
        }
        ///Debug Enable
        enum class DbgeVal {
            v0=0x00000000,     ///<Transmitter is disabled in Debug mode, after completing the current frame.
            v1=0x00000001,     ///<Transmitter is enabled in Debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,DbgeVal> dbge{}; 
        namespace DbgeValC{
            constexpr Register::FieldValue<decltype(dbge),DbgeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dbge),DbgeVal::v1> v1{};
        }
        ///Stop Enable
        enum class StopeVal {
            v0=0x00000000,     ///<Transmitter disabled in Stop mode.
            v1=0x00000001,     ///<Transmitter enabled in Stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,StopeVal> stope{}; 
        namespace StopeValC{
            constexpr Register::FieldValue<decltype(stope),StopeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stope),StopeVal::v1> v1{};
        }
        ///Transmitter Enable
        enum class TeVal {
            v0=0x00000000,     ///<Transmitter is disabled.
            v1=0x00000001,     ///<Transmitter is enabled, or transmitter has been disabled and has not yet reached end of frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,TeVal> te{}; 
        namespace TeValC{
            constexpr Register::FieldValue<decltype(te),TeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(te),TeVal::v1> v1{};
        }
    }
    namespace I2s0Tcr2{    ///<SAI Transmit Configuration 2 Register
        using Addr = Register::Address<0x4002f008,0x00ffff00,0,unsigned>;
        ///Bit Clock Divide
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
        ///Bit Clock Direction
        enum class BcdVal {
            v0=0x00000000,     ///<Bit clock is generated externally in Slave mode.
            v1=0x00000001,     ///<Bit clock is generated internally in Master mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,BcdVal> bcd{}; 
        namespace BcdValC{
            constexpr Register::FieldValue<decltype(bcd),BcdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bcd),BcdVal::v1> v1{};
        }
        ///Bit Clock Polarity
        enum class BcpVal {
            v0=0x00000000,     ///<Bit clock is active high with drive outputs on rising edge and sample inputs on falling edge.
            v1=0x00000001,     ///<Bit clock is active low with drive outputs on falling edge and sample inputs on rising edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,BcpVal> bcp{}; 
        namespace BcpValC{
            constexpr Register::FieldValue<decltype(bcp),BcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bcp),BcpVal::v1> v1{};
        }
        ///MCLK Select
        enum class MselVal {
            v00=0x00000000,     ///<Bus Clock selected.
            v01=0x00000001,     ///<Master Clock (MCLK) 1 option selected.
            v10=0x00000002,     ///<Master Clock (MCLK) 2 option selected.
            v11=0x00000003,     ///<Master Clock (MCLK) 3 option selected.
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
        using Addr = Register::Address<0x4002f00c,0xfffefffe,0,unsigned>;
        ///Word Flag Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdfl{}; 
        namespace WdflValC{
        }
        ///Transmit Channel Enable
        enum class TceVal {
            v0=0x00000000,     ///<Transmit data channel N is disabled.
            v1=0x00000001,     ///<Transmit data channel N is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TceVal> tce{}; 
        namespace TceValC{
            constexpr Register::FieldValue<decltype(tce),TceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tce),TceVal::v1> v1{};
        }
    }
    namespace I2s0Tcr4{    ///<SAI Transmit Configuration 4 Register
        using Addr = Register::Address<0x4002f010,0xfffee0e4,0,unsigned>;
        ///Frame Sync Direction
        enum class FsdVal {
            v0=0x00000000,     ///<Frame sync is generated externally in Slave mode.
            v1=0x00000001,     ///<Frame sync is generated internally in Master mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FsdVal> fsd{}; 
        namespace FsdValC{
            constexpr Register::FieldValue<decltype(fsd),FsdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fsd),FsdVal::v1> v1{};
        }
        ///Frame Sync Polarity
        enum class FspVal {
            v0=0x00000000,     ///<Frame sync is active high.
            v1=0x00000001,     ///<Frame sync is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FspVal> fsp{}; 
        namespace FspValC{
            constexpr Register::FieldValue<decltype(fsp),FspVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fsp),FspVal::v1> v1{};
        }
        ///Frame Sync Early
        enum class FseVal {
            v0=0x00000000,     ///<Frame sync asserts with the first bit of the frame.
            v1=0x00000001,     ///<Frame sync asserts one bit before the first bit of the frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FseVal> fse{}; 
        namespace FseValC{
            constexpr Register::FieldValue<decltype(fse),FseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fse),FseVal::v1> v1{};
        }
        ///MSB First
        enum class MfVal {
            v0=0x00000000,     ///<LSB is transmitted first.
            v1=0x00000001,     ///<MSB is transmitted first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MfVal> mf{}; 
        namespace MfValC{
            constexpr Register::FieldValue<decltype(mf),MfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mf),MfVal::v1> v1{};
        }
        ///Sync Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sywd{}; 
        namespace SywdValC{
        }
        ///Frame size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> frsz{}; 
        namespace FrszValC{
        }
    }
    namespace I2s0Tcr5{    ///<SAI Transmit Configuration 5 Register
        using Addr = Register::Address<0x4002f014,0xe0e0e0ff,0,unsigned>;
        ///First Bit Shifted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> fbt{}; 
        namespace FbtValC{
        }
        ///Word 0 Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> w0w{}; 
        namespace W0wValC{
        }
        ///Word N Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> wnw{}; 
        namespace WnwValC{
        }
    }
    namespace I2s0Tdr{    ///<SAI Transmit Data Register
        using Addr = Register::Address<0x4002f020,0x00000000,0,unsigned>;
        ///Transmit Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tdr{}; 
        namespace TdrValC{
        }
    }
    namespace I2s0Tmr{    ///<SAI Transmit Mask Register
        using Addr = Register::Address<0x4002f060,0xfffffffc,0,unsigned>;
        ///Transmit Word Mask
        enum class TwmVal {
            v0=0x00000000,     ///<Word N is enabled.
            v1=0x00000001,     ///<Word N is masked. The transmit data pins are tri-stated when masked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,TwmVal> twm{}; 
        namespace TwmValC{
            constexpr Register::FieldValue<decltype(twm),TwmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(twm),TwmVal::v1> v1{};
        }
    }
    namespace I2s0Rcsr{    ///<SAI Receive Control Register
        using Addr = Register::Address<0x4002f080,0x0ce1e1fd,0,unsigned>;
        ///FIFO Warning DMA Enable
        enum class FwdeVal {
            v0=0x00000000,     ///<Disables the DMA request.
            v1=0x00000001,     ///<Enables the DMA request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FwdeVal> fwde{}; 
        namespace FwdeValC{
            constexpr Register::FieldValue<decltype(fwde),FwdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fwde),FwdeVal::v1> v1{};
        }
        ///FIFO Warning Interrupt Enable
        enum class FwieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,FwieVal> fwie{}; 
        namespace FwieValC{
            constexpr Register::FieldValue<decltype(fwie),FwieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fwie),FwieVal::v1> v1{};
        }
        ///FIFO Error Interrupt Enable
        enum class FeieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,FeieVal> feie{}; 
        namespace FeieValC{
            constexpr Register::FieldValue<decltype(feie),FeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(feie),FeieVal::v1> v1{};
        }
        ///Sync Error Interrupt Enable
        enum class SeieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,SeieVal> seie{}; 
        namespace SeieValC{
            constexpr Register::FieldValue<decltype(seie),SeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(seie),SeieVal::v1> v1{};
        }
        ///Word Start Interrupt Enable
        enum class WsieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,WsieVal> wsie{}; 
        namespace WsieValC{
            constexpr Register::FieldValue<decltype(wsie),WsieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wsie),WsieVal::v1> v1{};
        }
        ///FIFO Warning Flag
        enum class FwfVal {
            v0=0x00000000,     ///<No enabled receive FIFO is full.
            v1=0x00000001,     ///<Enabled receive FIFO is full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,FwfVal> fwf{}; 
        namespace FwfValC{
            constexpr Register::FieldValue<decltype(fwf),FwfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fwf),FwfVal::v1> v1{};
        }
        ///FIFO Error Flag
        enum class FefVal {
            v0=0x00000000,     ///<Receive overflow not detected.
            v1=0x00000001,     ///<Receive overflow detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,FefVal> fef{}; 
        namespace FefValC{
            constexpr Register::FieldValue<decltype(fef),FefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fef),FefVal::v1> v1{};
        }
        ///Sync Error Flag
        enum class SefVal {
            v0=0x00000000,     ///<Sync error not detected.
            v1=0x00000001,     ///<Frame sync error detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SefVal> sef{}; 
        namespace SefValC{
            constexpr Register::FieldValue<decltype(sef),SefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sef),SefVal::v1> v1{};
        }
        ///Word Start Flag
        enum class WsfVal {
            v0=0x00000000,     ///<Start of word not detected.
            v1=0x00000001,     ///<Start of word detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,WsfVal> wsf{}; 
        namespace WsfValC{
            constexpr Register::FieldValue<decltype(wsf),WsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wsf),WsfVal::v1> v1{};
        }
        ///Software Reset
        enum class SrVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Software reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,SrVal> sr{}; 
        namespace SrValC{
            constexpr Register::FieldValue<decltype(sr),SrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sr),SrVal::v1> v1{};
        }
        ///FIFO Reset
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
            v0=0x00000000,     ///<Receive bit clock is disabled.
            v1=0x00000001,     ///<Receive bit clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,BceVal> bce{}; 
        namespace BceValC{
            constexpr Register::FieldValue<decltype(bce),BceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bce),BceVal::v1> v1{};
        }
        ///Debug Enable
        enum class DbgeVal {
            v0=0x00000000,     ///<Receiver is disabled in Debug mode, after completing the current frame.
            v1=0x00000001,     ///<Receiver is enabled in Debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,DbgeVal> dbge{}; 
        namespace DbgeValC{
            constexpr Register::FieldValue<decltype(dbge),DbgeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dbge),DbgeVal::v1> v1{};
        }
        ///Stop Enable
        enum class StopeVal {
            v0=0x00000000,     ///<Receiver disabled in Stop mode.
            v1=0x00000001,     ///<Receiver enabled in Stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,StopeVal> stope{}; 
        namespace StopeValC{
            constexpr Register::FieldValue<decltype(stope),StopeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stope),StopeVal::v1> v1{};
        }
        ///Receiver Enable
        enum class ReVal {
            v0=0x00000000,     ///<Receiver is disabled.
            v1=0x00000001,     ///<Receiver is enabled, or receiver has been disabled and has not yet reached end of frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ReVal> re{}; 
        namespace ReValC{
            constexpr Register::FieldValue<decltype(re),ReVal::v0> v0{};
            constexpr Register::FieldValue<decltype(re),ReVal::v1> v1{};
        }
    }
    namespace I2s0Rcr2{    ///<SAI Receive Configuration 2 Register
        using Addr = Register::Address<0x4002f088,0x00ffff00,0,unsigned>;
        ///Bit Clock Divide
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
        ///Bit Clock Direction
        enum class BcdVal {
            v0=0x00000000,     ///<Bit clock is generated externally in Slave mode.
            v1=0x00000001,     ///<Bit clock is generated internally in Master mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,BcdVal> bcd{}; 
        namespace BcdValC{
            constexpr Register::FieldValue<decltype(bcd),BcdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bcd),BcdVal::v1> v1{};
        }
        ///Bit Clock Polarity
        enum class BcpVal {
            v0=0x00000000,     ///<Bit Clock is active high with drive outputs on rising edge and sample inputs on falling edge.
            v1=0x00000001,     ///<Bit Clock is active low with drive outputs on falling edge and sample inputs on rising edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,BcpVal> bcp{}; 
        namespace BcpValC{
            constexpr Register::FieldValue<decltype(bcp),BcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bcp),BcpVal::v1> v1{};
        }
        ///MCLK Select
        enum class MselVal {
            v00=0x00000000,     ///<Bus Clock selected.
            v01=0x00000001,     ///<Master Clock (MCLK) 1 option selected.
            v10=0x00000002,     ///<Master Clock (MCLK) 2 option selected.
            v11=0x00000003,     ///<Master Clock (MCLK) 3 option selected.
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
        using Addr = Register::Address<0x4002f08c,0xfffefffe,0,unsigned>;
        ///Word Flag Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdfl{}; 
        namespace WdflValC{
        }
        ///Receive Channel Enable
        enum class RceVal {
            v0=0x00000000,     ///<Receive data channel N is disabled.
            v1=0x00000001,     ///<Receive data channel N is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,RceVal> rce{}; 
        namespace RceValC{
            constexpr Register::FieldValue<decltype(rce),RceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rce),RceVal::v1> v1{};
        }
    }
    namespace I2s0Rcr4{    ///<SAI Receive Configuration 4 Register
        using Addr = Register::Address<0x4002f090,0xfffee0e4,0,unsigned>;
        ///Frame Sync Direction
        enum class FsdVal {
            v0=0x00000000,     ///<Frame Sync is generated externally in Slave mode.
            v1=0x00000001,     ///<Frame Sync is generated internally in Master mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FsdVal> fsd{}; 
        namespace FsdValC{
            constexpr Register::FieldValue<decltype(fsd),FsdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fsd),FsdVal::v1> v1{};
        }
        ///Frame Sync Polarity
        enum class FspVal {
            v0=0x00000000,     ///<Frame sync is active high.
            v1=0x00000001,     ///<Frame sync is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FspVal> fsp{}; 
        namespace FspValC{
            constexpr Register::FieldValue<decltype(fsp),FspVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fsp),FspVal::v1> v1{};
        }
        ///Frame Sync Early
        enum class FseVal {
            v0=0x00000000,     ///<Frame sync asserts with the first bit of the frame.
            v1=0x00000001,     ///<Frame sync asserts one bit before the first bit of the frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FseVal> fse{}; 
        namespace FseValC{
            constexpr Register::FieldValue<decltype(fse),FseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fse),FseVal::v1> v1{};
        }
        ///MSB First
        enum class MfVal {
            v0=0x00000000,     ///<LSB is received first.
            v1=0x00000001,     ///<MSB is received first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MfVal> mf{}; 
        namespace MfValC{
            constexpr Register::FieldValue<decltype(mf),MfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mf),MfVal::v1> v1{};
        }
        ///Sync Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sywd{}; 
        namespace SywdValC{
        }
        ///Frame Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> frsz{}; 
        namespace FrszValC{
        }
    }
    namespace I2s0Rcr5{    ///<SAI Receive Configuration 5 Register
        using Addr = Register::Address<0x4002f094,0xe0e0e0ff,0,unsigned>;
        ///First Bit Shifted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> fbt{}; 
        namespace FbtValC{
        }
        ///Word 0 Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> w0w{}; 
        namespace W0wValC{
        }
        ///Word N Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> wnw{}; 
        namespace WnwValC{
        }
    }
    namespace I2s0Rdr{    ///<SAI Receive Data Register
        using Addr = Register::Address<0x4002f0a0,0x00000000,0,unsigned>;
        ///Receive Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdr{}; 
        namespace RdrValC{
        }
    }
    namespace I2s0Rmr{    ///<SAI Receive Mask Register
        using Addr = Register::Address<0x4002f0e0,0xfffffffc,0,unsigned>;
        ///Receive Word Mask
        enum class RwmVal {
            v0=0x00000000,     ///<Word N is enabled.
            v1=0x00000001,     ///<Word N is masked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RwmVal> rwm{}; 
        namespace RwmValC{
            constexpr Register::FieldValue<decltype(rwm),RwmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwm),RwmVal::v1> v1{};
        }
    }
    namespace I2s0Mcr{    ///<SAI MCLK Control Register
        using Addr = Register::Address<0x4002f100,0x3cffffff,0,unsigned>;
        ///MCLK Input Clock Select
        enum class MicsVal {
            v00=0x00000000,     ///<MCLK divider input clock 0 selected.
            v01=0x00000001,     ///<MCLK divider input clock 1 selected.
            v10=0x00000002,     ///<MCLK divider input clock 2 selected.
            v11=0x00000003,     ///<MCLK divider input clock 3 selected.
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
            v0=0x00000000,     ///<MCLK signal pin is configured as an input that bypasses the MCLK divider.
            v1=0x00000001,     ///<MCLK signal pin is configured as an output from the MCLK divider and the MCLK divider is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,MoeVal> moe{}; 
        namespace MoeValC{
            constexpr Register::FieldValue<decltype(moe),MoeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(moe),MoeVal::v1> v1{};
        }
        ///Divider Update Flag
        enum class DufVal {
            v0=0x00000000,     ///<MCLK divider ratio is not being updated currently.
            v1=0x00000001,     ///<MCLK divider ratio is updating on-the-fly. Further updates to the MCLK divider ratio are blocked while this flag remains set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,DufVal> duf{}; 
        namespace DufValC{
            constexpr Register::FieldValue<decltype(duf),DufVal::v0> v0{};
            constexpr Register::FieldValue<decltype(duf),DufVal::v1> v1{};
        }
    }
    namespace I2s0Mdr{    ///<SAI MCLK Divide Register
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
