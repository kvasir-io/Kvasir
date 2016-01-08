#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Inter-IC Sound / Synchronous Audio Interface
    namespace I2s0Tcsr{    ///<SAI Transmit Control Register
        using Addr = Register::Address<0x4002f000,0x0ce1e1fd,0x00000000,unsigned>;
        ///FIFO Warning DMA Enable
        enum class FwdeVal {
            v0=0x00000000,     ///<Disables the DMA request.
            v1=0x00000001,     ///<Enables the DMA request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FwdeVal> fwde{}; 
        namespace FwdeValC{
            constexpr Register::FieldValue<decltype(I2s0Tcsr::fwde)::Type,FwdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcsr::fwde)::Type,FwdeVal::v1> v1{};
        }
        ///FIFO Warning Interrupt Enable
        enum class FwieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,FwieVal> fwie{}; 
        namespace FwieValC{
            constexpr Register::FieldValue<decltype(I2s0Tcsr::fwie)::Type,FwieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcsr::fwie)::Type,FwieVal::v1> v1{};
        }
        ///FIFO Error Interrupt Enable
        enum class FeieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,FeieVal> feie{}; 
        namespace FeieValC{
            constexpr Register::FieldValue<decltype(I2s0Tcsr::feie)::Type,FeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcsr::feie)::Type,FeieVal::v1> v1{};
        }
        ///Sync Error Interrupt Enable
        enum class SeieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,SeieVal> seie{}; 
        namespace SeieValC{
            constexpr Register::FieldValue<decltype(I2s0Tcsr::seie)::Type,SeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcsr::seie)::Type,SeieVal::v1> v1{};
        }
        ///Word Start Interrupt Enable
        enum class WsieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,WsieVal> wsie{}; 
        namespace WsieValC{
            constexpr Register::FieldValue<decltype(I2s0Tcsr::wsie)::Type,WsieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcsr::wsie)::Type,WsieVal::v1> v1{};
        }
        ///FIFO Warning Flag
        enum class FwfVal {
            v0=0x00000000,     ///<No enabled transmit FIFO is empty.
            v1=0x00000001,     ///<Enabled transmit FIFO is empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FwfVal> fwf{}; 
        namespace FwfValC{
            constexpr Register::FieldValue<decltype(I2s0Tcsr::fwf)::Type,FwfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcsr::fwf)::Type,FwfVal::v1> v1{};
        }
        ///FIFO Error Flag
        enum class FefVal {
            v0=0x00000000,     ///<Transmit underrun not detected.
            v1=0x00000001,     ///<Transmit underrun detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,FefVal> fef{}; 
        namespace FefValC{
            constexpr Register::FieldValue<decltype(I2s0Tcsr::fef)::Type,FefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcsr::fef)::Type,FefVal::v1> v1{};
        }
        ///Sync Error Flag
        enum class SefVal {
            v0=0x00000000,     ///<Sync error not detected.
            v1=0x00000001,     ///<Frame sync error detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SefVal> sef{}; 
        namespace SefValC{
            constexpr Register::FieldValue<decltype(I2s0Tcsr::sef)::Type,SefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcsr::sef)::Type,SefVal::v1> v1{};
        }
        ///Word Start Flag
        enum class WsfVal {
            v0=0x00000000,     ///<Start of word not detected.
            v1=0x00000001,     ///<Start of word detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,WsfVal> wsf{}; 
        namespace WsfValC{
            constexpr Register::FieldValue<decltype(I2s0Tcsr::wsf)::Type,WsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcsr::wsf)::Type,WsfVal::v1> v1{};
        }
        ///Software Reset
        enum class SrVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Software reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,SrVal> sr{}; 
        namespace SrValC{
            constexpr Register::FieldValue<decltype(I2s0Tcsr::sr)::Type,SrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcsr::sr)::Type,SrVal::v1> v1{};
        }
        ///FIFO Reset
        enum class FrVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<FIFO reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FrVal> fr{}; 
        namespace FrValC{
            constexpr Register::FieldValue<decltype(I2s0Tcsr::fr)::Type,FrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcsr::fr)::Type,FrVal::v1> v1{};
        }
        ///Bit Clock Enable
        enum class BceVal {
            v0=0x00000000,     ///<Transmit bit clock is disabled.
            v1=0x00000001,     ///<Transmit bit clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,BceVal> bce{}; 
        namespace BceValC{
            constexpr Register::FieldValue<decltype(I2s0Tcsr::bce)::Type,BceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcsr::bce)::Type,BceVal::v1> v1{};
        }
        ///Debug Enable
        enum class DbgeVal {
            v0=0x00000000,     ///<Transmitter is disabled in Debug mode, after completing the current frame.
            v1=0x00000001,     ///<Transmitter is enabled in Debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,DbgeVal> dbge{}; 
        namespace DbgeValC{
            constexpr Register::FieldValue<decltype(I2s0Tcsr::dbge)::Type,DbgeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcsr::dbge)::Type,DbgeVal::v1> v1{};
        }
        ///Stop Enable
        enum class StopeVal {
            v0=0x00000000,     ///<Transmitter disabled in Stop mode.
            v1=0x00000001,     ///<Transmitter enabled in Stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,StopeVal> stope{}; 
        namespace StopeValC{
            constexpr Register::FieldValue<decltype(I2s0Tcsr::stope)::Type,StopeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcsr::stope)::Type,StopeVal::v1> v1{};
        }
        ///Transmitter Enable
        enum class TeVal {
            v0=0x00000000,     ///<Transmitter is disabled.
            v1=0x00000001,     ///<Transmitter is enabled, or transmitter has been disabled and has not yet reached end of frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,TeVal> te{}; 
        namespace TeValC{
            constexpr Register::FieldValue<decltype(I2s0Tcsr::te)::Type,TeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcsr::te)::Type,TeVal::v1> v1{};
        }
    }
    namespace I2s0Tcr2{    ///<SAI Transmit Configuration 2 Register
        using Addr = Register::Address<0x4002f008,0x00ffff00,0x00000000,unsigned>;
        ///Bit Clock Divide
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Bit Clock Direction
        enum class BcdVal {
            v0=0x00000000,     ///<Bit clock is generated externally in Slave mode.
            v1=0x00000001,     ///<Bit clock is generated internally in Master mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,BcdVal> bcd{}; 
        namespace BcdValC{
            constexpr Register::FieldValue<decltype(I2s0Tcr2::bcd)::Type,BcdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcr2::bcd)::Type,BcdVal::v1> v1{};
        }
        ///Bit Clock Polarity
        enum class BcpVal {
            v0=0x00000000,     ///<Bit clock is active high with drive outputs on rising edge and sample inputs on falling edge.
            v1=0x00000001,     ///<Bit clock is active low with drive outputs on falling edge and sample inputs on rising edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,BcpVal> bcp{}; 
        namespace BcpValC{
            constexpr Register::FieldValue<decltype(I2s0Tcr2::bcp)::Type,BcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcr2::bcp)::Type,BcpVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(I2s0Tcr2::msel)::Type,MselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(I2s0Tcr2::msel)::Type,MselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(I2s0Tcr2::msel)::Type,MselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(I2s0Tcr2::msel)::Type,MselVal::v11> v11{};
        }
        ///Bit Clock Input
        enum class BciVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Internal logic is clocked as if bit clock was externally generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,BciVal> bci{}; 
        namespace BciValC{
            constexpr Register::FieldValue<decltype(I2s0Tcr2::bci)::Type,BciVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcr2::bci)::Type,BciVal::v1> v1{};
        }
        ///Bit Clock Swap
        enum class BcsVal {
            v0=0x00000000,     ///<Use the normal bit clock source.
            v1=0x00000001,     ///<Swap the bit clock source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,BcsVal> bcs{}; 
        namespace BcsValC{
            constexpr Register::FieldValue<decltype(I2s0Tcr2::bcs)::Type,BcsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcr2::bcs)::Type,BcsVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(I2s0Tcr2::sync)::Type,SyncVal::v00> v00{};
            constexpr Register::FieldValue<decltype(I2s0Tcr2::sync)::Type,SyncVal::v01> v01{};
            constexpr Register::FieldValue<decltype(I2s0Tcr2::sync)::Type,SyncVal::v10> v10{};
            constexpr Register::FieldValue<decltype(I2s0Tcr2::sync)::Type,SyncVal::v11> v11{};
        }
    }
    namespace I2s0Tcr3{    ///<SAI Transmit Configuration 3 Register
        using Addr = Register::Address<0x4002f00c,0xfffefffe,0x00000000,unsigned>;
        ///Word Flag Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdfl{}; 
        ///Transmit Channel Enable
        enum class TceVal {
            v0=0x00000000,     ///<Transmit data channel N is disabled.
            v1=0x00000001,     ///<Transmit data channel N is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TceVal> tce{}; 
        namespace TceValC{
            constexpr Register::FieldValue<decltype(I2s0Tcr3::tce)::Type,TceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcr3::tce)::Type,TceVal::v1> v1{};
        }
    }
    namespace I2s0Tcr4{    ///<SAI Transmit Configuration 4 Register
        using Addr = Register::Address<0x4002f010,0xecfee0e0,0x00000000,unsigned>;
        ///Frame Sync Direction
        enum class FsdVal {
            v0=0x00000000,     ///<Frame sync is generated externally in Slave mode.
            v1=0x00000001,     ///<Frame sync is generated internally in Master mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FsdVal> fsd{}; 
        namespace FsdValC{
            constexpr Register::FieldValue<decltype(I2s0Tcr4::fsd)::Type,FsdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcr4::fsd)::Type,FsdVal::v1> v1{};
        }
        ///Frame Sync Polarity
        enum class FspVal {
            v0=0x00000000,     ///<Frame sync is active high.
            v1=0x00000001,     ///<Frame sync is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FspVal> fsp{}; 
        namespace FspValC{
            constexpr Register::FieldValue<decltype(I2s0Tcr4::fsp)::Type,FspVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcr4::fsp)::Type,FspVal::v1> v1{};
        }
        ///On Demand Mode
        enum class OndemVal {
            v0=0x00000000,     ///<Internal frame sync is generated continuously.
            v1=0x00000001,     ///<Internal frame sync is generated when the FIFO warning flag is clear.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,OndemVal> ondem{}; 
        namespace OndemValC{
            constexpr Register::FieldValue<decltype(I2s0Tcr4::ondem)::Type,OndemVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcr4::ondem)::Type,OndemVal::v1> v1{};
        }
        ///Frame Sync Early
        enum class FseVal {
            v0=0x00000000,     ///<Frame sync asserts with the first bit of the frame.
            v1=0x00000001,     ///<Frame sync asserts one bit before the first bit of the frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FseVal> fse{}; 
        namespace FseValC{
            constexpr Register::FieldValue<decltype(I2s0Tcr4::fse)::Type,FseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcr4::fse)::Type,FseVal::v1> v1{};
        }
        ///MSB First
        enum class MfVal {
            v0=0x00000000,     ///<LSB is transmitted first.
            v1=0x00000001,     ///<MSB is transmitted first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MfVal> mf{}; 
        namespace MfValC{
            constexpr Register::FieldValue<decltype(I2s0Tcr4::mf)::Type,MfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcr4::mf)::Type,MfVal::v1> v1{};
        }
        ///Sync Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sywd{}; 
        ///Frame size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> frsz{}; 
        ///FIFO Packing Mode
        enum class FpackVal {
            v00=0x00000000,     ///<FIFO packing is disabled
            v10=0x00000002,     ///<8-bit FIFO packing is enabled
            v11=0x00000003,     ///<16-bit FIFO packing is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,FpackVal> fpack{}; 
        namespace FpackValC{
            constexpr Register::FieldValue<decltype(I2s0Tcr4::fpack)::Type,FpackVal::v00> v00{};
            constexpr Register::FieldValue<decltype(I2s0Tcr4::fpack)::Type,FpackVal::v10> v10{};
            constexpr Register::FieldValue<decltype(I2s0Tcr4::fpack)::Type,FpackVal::v11> v11{};
        }
        ///FIFO Continue on Error
        enum class FcontVal {
            v0=0x00000000,     ///<On FIFO error, the SAI will continue from the start of the next frame after the FIFO error flag has been cleared.
            v1=0x00000001,     ///<On FIFO error, the SAI will continue from the same word that caused the FIFO error to set after the FIFO warning flag has been cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,FcontVal> fcont{}; 
        namespace FcontValC{
            constexpr Register::FieldValue<decltype(I2s0Tcr4::fcont)::Type,FcontVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tcr4::fcont)::Type,FcontVal::v1> v1{};
        }
    }
    namespace I2s0Tcr5{    ///<SAI Transmit Configuration 5 Register
        using Addr = Register::Address<0x4002f014,0xe0e0e0ff,0x00000000,unsigned>;
        ///First Bit Shifted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> fbt{}; 
        ///Word 0 Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> w0w{}; 
        ///Word N Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> wnw{}; 
    }
    namespace I2s0Tdr{    ///<SAI Transmit Data Register
        using Addr = Register::Address<0x4002f020,0x00000000,0x00000000,unsigned>;
        ///Transmit Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdr{}; 
    }
    namespace I2s0Tmr{    ///<SAI Transmit Mask Register
        using Addr = Register::Address<0x4002f060,0xfffffffc,0x00000000,unsigned>;
        ///Transmit Word Mask
        enum class TwmVal {
            v0=0x00000000,     ///<Word N is enabled.
            v1=0x00000001,     ///<Word N is masked. The transmit data pins are tri-stated when masked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,TwmVal> twm{}; 
        namespace TwmValC{
            constexpr Register::FieldValue<decltype(I2s0Tmr::twm)::Type,TwmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Tmr::twm)::Type,TwmVal::v1> v1{};
        }
    }
    namespace I2s0Rcsr{    ///<SAI Receive Control Register
        using Addr = Register::Address<0x4002f080,0x0ce1e1fd,0x00000000,unsigned>;
        ///FIFO Warning DMA Enable
        enum class FwdeVal {
            v0=0x00000000,     ///<Disables the DMA request.
            v1=0x00000001,     ///<Enables the DMA request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FwdeVal> fwde{}; 
        namespace FwdeValC{
            constexpr Register::FieldValue<decltype(I2s0Rcsr::fwde)::Type,FwdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcsr::fwde)::Type,FwdeVal::v1> v1{};
        }
        ///FIFO Warning Interrupt Enable
        enum class FwieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,FwieVal> fwie{}; 
        namespace FwieValC{
            constexpr Register::FieldValue<decltype(I2s0Rcsr::fwie)::Type,FwieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcsr::fwie)::Type,FwieVal::v1> v1{};
        }
        ///FIFO Error Interrupt Enable
        enum class FeieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,FeieVal> feie{}; 
        namespace FeieValC{
            constexpr Register::FieldValue<decltype(I2s0Rcsr::feie)::Type,FeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcsr::feie)::Type,FeieVal::v1> v1{};
        }
        ///Sync Error Interrupt Enable
        enum class SeieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,SeieVal> seie{}; 
        namespace SeieValC{
            constexpr Register::FieldValue<decltype(I2s0Rcsr::seie)::Type,SeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcsr::seie)::Type,SeieVal::v1> v1{};
        }
        ///Word Start Interrupt Enable
        enum class WsieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,WsieVal> wsie{}; 
        namespace WsieValC{
            constexpr Register::FieldValue<decltype(I2s0Rcsr::wsie)::Type,WsieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcsr::wsie)::Type,WsieVal::v1> v1{};
        }
        ///FIFO Warning Flag
        enum class FwfVal {
            v0=0x00000000,     ///<No enabled receive FIFO is full.
            v1=0x00000001,     ///<Enabled receive FIFO is full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FwfVal> fwf{}; 
        namespace FwfValC{
            constexpr Register::FieldValue<decltype(I2s0Rcsr::fwf)::Type,FwfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcsr::fwf)::Type,FwfVal::v1> v1{};
        }
        ///FIFO Error Flag
        enum class FefVal {
            v0=0x00000000,     ///<Receive overflow not detected.
            v1=0x00000001,     ///<Receive overflow detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,FefVal> fef{}; 
        namespace FefValC{
            constexpr Register::FieldValue<decltype(I2s0Rcsr::fef)::Type,FefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcsr::fef)::Type,FefVal::v1> v1{};
        }
        ///Sync Error Flag
        enum class SefVal {
            v0=0x00000000,     ///<Sync error not detected.
            v1=0x00000001,     ///<Frame sync error detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SefVal> sef{}; 
        namespace SefValC{
            constexpr Register::FieldValue<decltype(I2s0Rcsr::sef)::Type,SefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcsr::sef)::Type,SefVal::v1> v1{};
        }
        ///Word Start Flag
        enum class WsfVal {
            v0=0x00000000,     ///<Start of word not detected.
            v1=0x00000001,     ///<Start of word detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,WsfVal> wsf{}; 
        namespace WsfValC{
            constexpr Register::FieldValue<decltype(I2s0Rcsr::wsf)::Type,WsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcsr::wsf)::Type,WsfVal::v1> v1{};
        }
        ///Software Reset
        enum class SrVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Software reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,SrVal> sr{}; 
        namespace SrValC{
            constexpr Register::FieldValue<decltype(I2s0Rcsr::sr)::Type,SrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcsr::sr)::Type,SrVal::v1> v1{};
        }
        ///FIFO Reset
        enum class FrVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<FIFO reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FrVal> fr{}; 
        namespace FrValC{
            constexpr Register::FieldValue<decltype(I2s0Rcsr::fr)::Type,FrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcsr::fr)::Type,FrVal::v1> v1{};
        }
        ///Bit Clock Enable
        enum class BceVal {
            v0=0x00000000,     ///<Receive bit clock is disabled.
            v1=0x00000001,     ///<Receive bit clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,BceVal> bce{}; 
        namespace BceValC{
            constexpr Register::FieldValue<decltype(I2s0Rcsr::bce)::Type,BceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcsr::bce)::Type,BceVal::v1> v1{};
        }
        ///Debug Enable
        enum class DbgeVal {
            v0=0x00000000,     ///<Receiver is disabled in Debug mode, after completing the current frame.
            v1=0x00000001,     ///<Receiver is enabled in Debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,DbgeVal> dbge{}; 
        namespace DbgeValC{
            constexpr Register::FieldValue<decltype(I2s0Rcsr::dbge)::Type,DbgeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcsr::dbge)::Type,DbgeVal::v1> v1{};
        }
        ///Stop Enable
        enum class StopeVal {
            v0=0x00000000,     ///<Receiver disabled in Stop mode.
            v1=0x00000001,     ///<Receiver enabled in Stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,StopeVal> stope{}; 
        namespace StopeValC{
            constexpr Register::FieldValue<decltype(I2s0Rcsr::stope)::Type,StopeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcsr::stope)::Type,StopeVal::v1> v1{};
        }
        ///Receiver Enable
        enum class ReVal {
            v0=0x00000000,     ///<Receiver is disabled.
            v1=0x00000001,     ///<Receiver is enabled, or receiver has been disabled and has not yet reached end of frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ReVal> re{}; 
        namespace ReValC{
            constexpr Register::FieldValue<decltype(I2s0Rcsr::re)::Type,ReVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcsr::re)::Type,ReVal::v1> v1{};
        }
    }
    namespace I2s0Rcr2{    ///<SAI Receive Configuration 2 Register
        using Addr = Register::Address<0x4002f088,0x00ffff00,0x00000000,unsigned>;
        ///Bit Clock Divide
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Bit Clock Direction
        enum class BcdVal {
            v0=0x00000000,     ///<Bit clock is generated externally in Slave mode.
            v1=0x00000001,     ///<Bit clock is generated internally in Master mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,BcdVal> bcd{}; 
        namespace BcdValC{
            constexpr Register::FieldValue<decltype(I2s0Rcr2::bcd)::Type,BcdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcr2::bcd)::Type,BcdVal::v1> v1{};
        }
        ///Bit Clock Polarity
        enum class BcpVal {
            v0=0x00000000,     ///<Bit Clock is active high with drive outputs on rising edge and sample inputs on falling edge.
            v1=0x00000001,     ///<Bit Clock is active low with drive outputs on falling edge and sample inputs on rising edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,BcpVal> bcp{}; 
        namespace BcpValC{
            constexpr Register::FieldValue<decltype(I2s0Rcr2::bcp)::Type,BcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcr2::bcp)::Type,BcpVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(I2s0Rcr2::msel)::Type,MselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(I2s0Rcr2::msel)::Type,MselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(I2s0Rcr2::msel)::Type,MselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(I2s0Rcr2::msel)::Type,MselVal::v11> v11{};
        }
        ///Bit Clock Input
        enum class BciVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Internal logic is clocked as if bit clock was externally generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,BciVal> bci{}; 
        namespace BciValC{
            constexpr Register::FieldValue<decltype(I2s0Rcr2::bci)::Type,BciVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcr2::bci)::Type,BciVal::v1> v1{};
        }
        ///Bit Clock Swap
        enum class BcsVal {
            v0=0x00000000,     ///<Use the normal bit clock source.
            v1=0x00000001,     ///<Swap the bit clock source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,BcsVal> bcs{}; 
        namespace BcsValC{
            constexpr Register::FieldValue<decltype(I2s0Rcr2::bcs)::Type,BcsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcr2::bcs)::Type,BcsVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(I2s0Rcr2::sync)::Type,SyncVal::v00> v00{};
            constexpr Register::FieldValue<decltype(I2s0Rcr2::sync)::Type,SyncVal::v01> v01{};
            constexpr Register::FieldValue<decltype(I2s0Rcr2::sync)::Type,SyncVal::v10> v10{};
            constexpr Register::FieldValue<decltype(I2s0Rcr2::sync)::Type,SyncVal::v11> v11{};
        }
    }
    namespace I2s0Rcr3{    ///<SAI Receive Configuration 3 Register
        using Addr = Register::Address<0x4002f08c,0xfffefffe,0x00000000,unsigned>;
        ///Word Flag Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdfl{}; 
        ///Receive Channel Enable
        enum class RceVal {
            v0=0x00000000,     ///<Receive data channel N is disabled.
            v1=0x00000001,     ///<Receive data channel N is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,RceVal> rce{}; 
        namespace RceValC{
            constexpr Register::FieldValue<decltype(I2s0Rcr3::rce)::Type,RceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcr3::rce)::Type,RceVal::v1> v1{};
        }
    }
    namespace I2s0Rcr4{    ///<SAI Receive Configuration 4 Register
        using Addr = Register::Address<0x4002f090,0xecfee0e0,0x00000000,unsigned>;
        ///Frame Sync Direction
        enum class FsdVal {
            v0=0x00000000,     ///<Frame Sync is generated externally in Slave mode.
            v1=0x00000001,     ///<Frame Sync is generated internally in Master mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FsdVal> fsd{}; 
        namespace FsdValC{
            constexpr Register::FieldValue<decltype(I2s0Rcr4::fsd)::Type,FsdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcr4::fsd)::Type,FsdVal::v1> v1{};
        }
        ///Frame Sync Polarity
        enum class FspVal {
            v0=0x00000000,     ///<Frame sync is active high.
            v1=0x00000001,     ///<Frame sync is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FspVal> fsp{}; 
        namespace FspValC{
            constexpr Register::FieldValue<decltype(I2s0Rcr4::fsp)::Type,FspVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcr4::fsp)::Type,FspVal::v1> v1{};
        }
        ///On Demand Mode
        enum class OndemVal {
            v0=0x00000000,     ///<Internal frame sync is generated continuously.
            v1=0x00000001,     ///<Internal frame sync is generated when the FIFO warning flag is clear.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,OndemVal> ondem{}; 
        namespace OndemValC{
            constexpr Register::FieldValue<decltype(I2s0Rcr4::ondem)::Type,OndemVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcr4::ondem)::Type,OndemVal::v1> v1{};
        }
        ///Frame Sync Early
        enum class FseVal {
            v0=0x00000000,     ///<Frame sync asserts with the first bit of the frame.
            v1=0x00000001,     ///<Frame sync asserts one bit before the first bit of the frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FseVal> fse{}; 
        namespace FseValC{
            constexpr Register::FieldValue<decltype(I2s0Rcr4::fse)::Type,FseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcr4::fse)::Type,FseVal::v1> v1{};
        }
        ///MSB First
        enum class MfVal {
            v0=0x00000000,     ///<LSB is received first.
            v1=0x00000001,     ///<MSB is received first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MfVal> mf{}; 
        namespace MfValC{
            constexpr Register::FieldValue<decltype(I2s0Rcr4::mf)::Type,MfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcr4::mf)::Type,MfVal::v1> v1{};
        }
        ///Sync Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sywd{}; 
        ///Frame Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> frsz{}; 
        ///FIFO Packing Mode
        enum class FpackVal {
            v00=0x00000000,     ///<FIFO packing is disabled
            v10=0x00000002,     ///<8-bit FIFO packing is enabled
            v11=0x00000003,     ///<16-bit FIFO packing is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,FpackVal> fpack{}; 
        namespace FpackValC{
            constexpr Register::FieldValue<decltype(I2s0Rcr4::fpack)::Type,FpackVal::v00> v00{};
            constexpr Register::FieldValue<decltype(I2s0Rcr4::fpack)::Type,FpackVal::v10> v10{};
            constexpr Register::FieldValue<decltype(I2s0Rcr4::fpack)::Type,FpackVal::v11> v11{};
        }
        ///FIFO Continue on Error
        enum class FcontVal {
            v0=0x00000000,     ///<On FIFO error, the SAI will continue from the start of the next frame after the FIFO error flag has been cleared.
            v1=0x00000001,     ///<On FIFO error, the SAI will continue from the same word that caused the FIFO error to set after the FIFO warning flag has been cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,FcontVal> fcont{}; 
        namespace FcontValC{
            constexpr Register::FieldValue<decltype(I2s0Rcr4::fcont)::Type,FcontVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rcr4::fcont)::Type,FcontVal::v1> v1{};
        }
    }
    namespace I2s0Rcr5{    ///<SAI Receive Configuration 5 Register
        using Addr = Register::Address<0x4002f094,0xe0e0e0ff,0x00000000,unsigned>;
        ///First Bit Shifted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> fbt{}; 
        ///Word 0 Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> w0w{}; 
        ///Word N Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> wnw{}; 
    }
    namespace I2s0Rdr{    ///<SAI Receive Data Register
        using Addr = Register::Address<0x4002f0a0,0x00000000,0x00000000,unsigned>;
        ///Receive Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdr{}; 
    }
    namespace I2s0Rmr{    ///<SAI Receive Mask Register
        using Addr = Register::Address<0x4002f0e0,0xfffffffc,0x00000000,unsigned>;
        ///Receive Word Mask
        enum class RwmVal {
            v0=0x00000000,     ///<Word N is enabled.
            v1=0x00000001,     ///<Word N is masked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RwmVal> rwm{}; 
        namespace RwmValC{
            constexpr Register::FieldValue<decltype(I2s0Rmr::rwm)::Type,RwmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Rmr::rwm)::Type,RwmVal::v1> v1{};
        }
    }
    namespace I2s0Mcr{    ///<SAI MCLK Control Register
        using Addr = Register::Address<0x4002f100,0x3cffffff,0x00000000,unsigned>;
        ///MCLK Input Clock Select
        enum class MicsVal {
            v00=0x00000000,     ///<MCLK divider input clock 0 selected.
            v01=0x00000001,     ///<MCLK divider input clock 1 selected.
            v10=0x00000002,     ///<MCLK divider input clock 2 selected.
            v11=0x00000003,     ///<MCLK divider input clock 3 selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,MicsVal> mics{}; 
        namespace MicsValC{
            constexpr Register::FieldValue<decltype(I2s0Mcr::mics)::Type,MicsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(I2s0Mcr::mics)::Type,MicsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(I2s0Mcr::mics)::Type,MicsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(I2s0Mcr::mics)::Type,MicsVal::v11> v11{};
        }
        ///MCLK Output Enable
        enum class MoeVal {
            v0=0x00000000,     ///<MCLK signal pin is configured as an input that bypasses the MCLK divider.
            v1=0x00000001,     ///<MCLK signal pin is configured as an output from the MCLK divider and the MCLK divider is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,MoeVal> moe{}; 
        namespace MoeValC{
            constexpr Register::FieldValue<decltype(I2s0Mcr::moe)::Type,MoeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Mcr::moe)::Type,MoeVal::v1> v1{};
        }
        ///Divider Update Flag
        enum class DufVal {
            v0=0x00000000,     ///<MCLK divider ratio is not being updated currently.
            v1=0x00000001,     ///<MCLK divider ratio is updating on-the-fly. Further updates to the MCLK divider ratio are blocked while this flag remains set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DufVal> duf{}; 
        namespace DufValC{
            constexpr Register::FieldValue<decltype(I2s0Mcr::duf)::Type,DufVal::v0> v0{};
            constexpr Register::FieldValue<decltype(I2s0Mcr::duf)::Type,DufVal::v1> v1{};
        }
    }
}
