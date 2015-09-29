#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Inter-IC Sound / Synchronous Audio Interface
    namespace I2s0Tcsr{    ///<SAI Transmit Control Register
        using Addr = Register::Address<0x4002f000,0x0ce0e0fc,0,unsigned>;
        ///FIFO Request DMA Enable
        enum class frdeVal {
            v0=0x00000000,     ///<Disables the DMA request.
            v1=0x00000001,     ///<Enables the DMA request.
        };
        namespace frdeValC{
            constexpr MPL::Value<frdeVal,frdeVal::v0> v0{};
            constexpr MPL::Value<frdeVal,frdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,frdeVal> frde{}; 
        ///FIFO Warning DMA Enable
        enum class fwdeVal {
            v0=0x00000000,     ///<Disables the DMA request.
            v1=0x00000001,     ///<Enables the DMA request.
        };
        namespace fwdeValC{
            constexpr MPL::Value<fwdeVal,fwdeVal::v0> v0{};
            constexpr MPL::Value<fwdeVal,fwdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,fwdeVal> fwde{}; 
        ///FIFO Request Interrupt Enable
        enum class frieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        namespace frieValC{
            constexpr MPL::Value<frieVal,frieVal::v0> v0{};
            constexpr MPL::Value<frieVal,frieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,frieVal> frie{}; 
        ///FIFO Warning Interrupt Enable
        enum class fwieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        namespace fwieValC{
            constexpr MPL::Value<fwieVal,fwieVal::v0> v0{};
            constexpr MPL::Value<fwieVal,fwieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,fwieVal> fwie{}; 
        ///FIFO Error Interrupt Enable
        enum class feieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        namespace feieValC{
            constexpr MPL::Value<feieVal,feieVal::v0> v0{};
            constexpr MPL::Value<feieVal,feieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,feieVal> feie{}; 
        ///Sync Error Interrupt Enable
        enum class seieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        namespace seieValC{
            constexpr MPL::Value<seieVal,seieVal::v0> v0{};
            constexpr MPL::Value<seieVal,seieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,seieVal> seie{}; 
        ///Word Start Interrupt Enable
        enum class wsieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        namespace wsieValC{
            constexpr MPL::Value<wsieVal,wsieVal::v0> v0{};
            constexpr MPL::Value<wsieVal,wsieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,wsieVal> wsie{}; 
        ///FIFO Request Flag
        enum class frfVal {
            v0=0x00000000,     ///<Transmit FIFO watermark has not been reached.
            v1=0x00000001,     ///<Transmit FIFO watermark has been reached.
        };
        namespace frfValC{
            constexpr MPL::Value<frfVal,frfVal::v0> v0{};
            constexpr MPL::Value<frfVal,frfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,frfVal> frf{}; 
        ///FIFO Warning Flag
        enum class fwfVal {
            v0=0x00000000,     ///<No enabled transmit FIFO is empty.
            v1=0x00000001,     ///<Enabled transmit FIFO is empty.
        };
        namespace fwfValC{
            constexpr MPL::Value<fwfVal,fwfVal::v0> v0{};
            constexpr MPL::Value<fwfVal,fwfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,fwfVal> fwf{}; 
        ///FIFO Error Flag
        enum class fefVal {
            v0=0x00000000,     ///<Transmit underrun not detected.
            v1=0x00000001,     ///<Transmit underrun detected.
        };
        namespace fefValC{
            constexpr MPL::Value<fefVal,fefVal::v0> v0{};
            constexpr MPL::Value<fefVal,fefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,fefVal> fef{}; 
        ///Sync Error Flag
        enum class sefVal {
            v0=0x00000000,     ///<Sync error not detected.
            v1=0x00000001,     ///<Frame sync error detected.
        };
        namespace sefValC{
            constexpr MPL::Value<sefVal,sefVal::v0> v0{};
            constexpr MPL::Value<sefVal,sefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,sefVal> sef{}; 
        ///Word Start Flag
        enum class wsfVal {
            v0=0x00000000,     ///<Start of word not detected.
            v1=0x00000001,     ///<Start of word detected.
        };
        namespace wsfValC{
            constexpr MPL::Value<wsfVal,wsfVal::v0> v0{};
            constexpr MPL::Value<wsfVal,wsfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,wsfVal> wsf{}; 
        ///Software Reset
        enum class srVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Software reset.
        };
        namespace srValC{
            constexpr MPL::Value<srVal,srVal::v0> v0{};
            constexpr MPL::Value<srVal,srVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,srVal> sr{}; 
        ///FIFO Reset
        enum class frVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<FIFO reset.
        };
        namespace frValC{
            constexpr MPL::Value<frVal,frVal::v0> v0{};
            constexpr MPL::Value<frVal,frVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,frVal> fr{}; 
        ///Bit Clock Enable
        enum class bceVal {
            v0=0x00000000,     ///<Transmit bit clock is disabled.
            v1=0x00000001,     ///<Transmit bit clock is enabled.
        };
        namespace bceValC{
            constexpr MPL::Value<bceVal,bceVal::v0> v0{};
            constexpr MPL::Value<bceVal,bceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,bceVal> bce{}; 
        ///Debug Enable
        enum class dbgeVal {
            v0=0x00000000,     ///<Transmitter is disabled in Debug mode, after completing the current frame.
            v1=0x00000001,     ///<Transmitter is enabled in Debug mode.
        };
        namespace dbgeValC{
            constexpr MPL::Value<dbgeVal,dbgeVal::v0> v0{};
            constexpr MPL::Value<dbgeVal,dbgeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,dbgeVal> dbge{}; 
        ///Stop Enable
        enum class stopeVal {
            v0=0x00000000,     ///<Transmitter disabled in Stop mode.
            v1=0x00000001,     ///<Transmitter enabled in Stop mode.
        };
        namespace stopeValC{
            constexpr MPL::Value<stopeVal,stopeVal::v0> v0{};
            constexpr MPL::Value<stopeVal,stopeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,stopeVal> stope{}; 
        ///Transmitter Enable
        enum class teVal {
            v0=0x00000000,     ///<Transmitter is disabled.
            v1=0x00000001,     ///<Transmitter is enabled, or transmitter has been disabled and has not yet reached end of frame.
        };
        namespace teValC{
            constexpr MPL::Value<teVal,teVal::v0> v0{};
            constexpr MPL::Value<teVal,teVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,teVal> te{}; 
    }
    namespace I2s0Tcr1{    ///<SAI Transmit Configuration 1 Register
        using Addr = Register::Address<0x4002f004,0xfffffff8,0,unsigned>;
        ///Transmit FIFO Watermark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tfw{}; 
    }
    namespace I2s0Tcr2{    ///<SAI Transmit Configuration 2 Register
        using Addr = Register::Address<0x4002f008,0x00ffff00,0,unsigned>;
        ///Bit Clock Divide
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Bit Clock Direction
        enum class bcdVal {
            v0=0x00000000,     ///<Bit clock is generated externally in Slave mode.
            v1=0x00000001,     ///<Bit clock is generated internally in Master mode.
        };
        namespace bcdValC{
            constexpr MPL::Value<bcdVal,bcdVal::v0> v0{};
            constexpr MPL::Value<bcdVal,bcdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,bcdVal> bcd{}; 
        ///Bit Clock Polarity
        enum class bcpVal {
            v0=0x00000000,     ///<Bit clock is active high with drive outputs on rising edge and sample inputs on falling edge.
            v1=0x00000001,     ///<Bit clock is active low with drive outputs on falling edge and sample inputs on rising edge.
        };
        namespace bcpValC{
            constexpr MPL::Value<bcpVal,bcpVal::v0> v0{};
            constexpr MPL::Value<bcpVal,bcpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,bcpVal> bcp{}; 
        ///MCLK Select
        enum class mselVal {
            v00=0x00000000,     ///<Bus Clock selected.
            v01=0x00000001,     ///<Master Clock 1 selected.
            v10=0x00000002,     ///<Master Clock 2 selected.
            v11=0x00000003,     ///<Master Clock 3 selected.
        };
        namespace mselValC{
            constexpr MPL::Value<mselVal,mselVal::v00> v00{};
            constexpr MPL::Value<mselVal,mselVal::v01> v01{};
            constexpr MPL::Value<mselVal,mselVal::v10> v10{};
            constexpr MPL::Value<mselVal,mselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,mselVal> msel{}; 
        ///Bit Clock Input
        enum class bciVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Internal logic is clocked as if bit clock was externally generated.
        };
        namespace bciValC{
            constexpr MPL::Value<bciVal,bciVal::v0> v0{};
            constexpr MPL::Value<bciVal,bciVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,bciVal> bci{}; 
        ///Bit Clock Swap
        enum class bcsVal {
            v0=0x00000000,     ///<Use the normal bit clock source.
            v1=0x00000001,     ///<Swap the bit clock source.
        };
        namespace bcsValC{
            constexpr MPL::Value<bcsVal,bcsVal::v0> v0{};
            constexpr MPL::Value<bcsVal,bcsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,bcsVal> bcs{}; 
        ///Synchronous Mode
        enum class syncVal {
            v00=0x00000000,     ///<Asynchronous mode.
            v01=0x00000001,     ///<Synchronous with receiver.
            v10=0x00000002,     ///<Synchronous with another SAI transmitter.
            v11=0x00000003,     ///<Synchronous with another SAI receiver.
        };
        namespace syncValC{
            constexpr MPL::Value<syncVal,syncVal::v00> v00{};
            constexpr MPL::Value<syncVal,syncVal::v01> v01{};
            constexpr MPL::Value<syncVal,syncVal::v10> v10{};
            constexpr MPL::Value<syncVal,syncVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,syncVal> sync{}; 
    }
    namespace I2s0Tcr3{    ///<SAI Transmit Configuration 3 Register
        using Addr = Register::Address<0x4002f00c,0xfffcffe0,0,unsigned>;
        ///Word Flag Configuration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> wdfl{}; 
        ///Transmit Channel Enable
        enum class tceVal {
            v0=0x00000000,     ///<Transmit data channel N is disabled.
            v1=0x00000001,     ///<Transmit data channel N is enabled.
        };
        namespace tceValC{
            constexpr MPL::Value<tceVal,tceVal::v0> v0{};
            constexpr MPL::Value<tceVal,tceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,tceVal> tce{}; 
    }
    namespace I2s0Tcr4{    ///<SAI Transmit Configuration 4 Register
        using Addr = Register::Address<0x4002f010,0xffe0e0e4,0,unsigned>;
        ///Frame Sync Direction
        enum class fsdVal {
            v0=0x00000000,     ///<Frame sync is generated externally in Slave mode.
            v1=0x00000001,     ///<Frame sync is generated internally in Master mode.
        };
        namespace fsdValC{
            constexpr MPL::Value<fsdVal,fsdVal::v0> v0{};
            constexpr MPL::Value<fsdVal,fsdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fsdVal> fsd{}; 
        ///Frame Sync Polarity
        enum class fspVal {
            v0=0x00000000,     ///<Frame sync is active high.
            v1=0x00000001,     ///<Frame sync is active low.
        };
        namespace fspValC{
            constexpr MPL::Value<fspVal,fspVal::v0> v0{};
            constexpr MPL::Value<fspVal,fspVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,fspVal> fsp{}; 
        ///Frame Sync Early
        enum class fseVal {
            v0=0x00000000,     ///<Frame sync asserts with the first bit of the frame.
            v1=0x00000001,     ///<Frame sync asserts one bit before the first bit of the frame.
        };
        namespace fseValC{
            constexpr MPL::Value<fseVal,fseVal::v0> v0{};
            constexpr MPL::Value<fseVal,fseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,fseVal> fse{}; 
        ///MSB First
        enum class mfVal {
            v0=0x00000000,     ///<LSB is transmitted first.
            v1=0x00000001,     ///<MSB is transmitted first.
        };
        namespace mfValC{
            constexpr MPL::Value<mfVal,mfVal::v0> v0{};
            constexpr MPL::Value<mfVal,mfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mfVal> mf{}; 
        ///Sync Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sywd{}; 
        ///Frame size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> frsz{}; 
    }
    namespace I2s0Tcr5{    ///<SAI Transmit Configuration 5 Register
        using Addr = Register::Address<0x4002f014,0xe0e0e0ff,0,unsigned>;
        ///First Bit Shifted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> fbt{}; 
        ///Word 0 Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> w0w{}; 
        ///Word N Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> wnw{}; 
    }
    namespace I2s0Tdr0{    ///<SAI Transmit Data Register
        using Addr = Register::Address<0x4002f020,0x00000000,0,unsigned>;
        ///Transmit Data Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tdr{}; 
    }
    namespace I2s0Tdr1{    ///<SAI Transmit Data Register
        using Addr = Register::Address<0x4002f024,0x00000000,0,unsigned>;
        ///Transmit Data Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tdr{}; 
    }
    namespace I2s0Tfr0{    ///<SAI Transmit FIFO Register
        using Addr = Register::Address<0x4002f040,0xfff0fff0,0,unsigned>;
        ///Read FIFO Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rfp{}; 
        ///Write FIFO Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> wfp{}; 
    }
    namespace I2s0Tfr1{    ///<SAI Transmit FIFO Register
        using Addr = Register::Address<0x4002f044,0xfff0fff0,0,unsigned>;
        ///Read FIFO Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rfp{}; 
        ///Write FIFO Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> wfp{}; 
    }
    namespace I2s0Tmr{    ///<SAI Transmit Mask Register
        using Addr = Register::Address<0x4002f060,0x00000000,0,unsigned>;
        ///Transmit Word Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> twm{}; 
    }
    namespace I2s0Rcsr{    ///<SAI Receive Control Register
        using Addr = Register::Address<0x4002f080,0x0ce0e0fc,0,unsigned>;
        ///FIFO Request DMA Enable
        enum class frdeVal {
            v0=0x00000000,     ///<Disables the DMA request.
            v1=0x00000001,     ///<Enables the DMA request.
        };
        namespace frdeValC{
            constexpr MPL::Value<frdeVal,frdeVal::v0> v0{};
            constexpr MPL::Value<frdeVal,frdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,frdeVal> frde{}; 
        ///FIFO Warning DMA Enable
        enum class fwdeVal {
            v0=0x00000000,     ///<Disables the DMA request.
            v1=0x00000001,     ///<Enables the DMA request.
        };
        namespace fwdeValC{
            constexpr MPL::Value<fwdeVal,fwdeVal::v0> v0{};
            constexpr MPL::Value<fwdeVal,fwdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,fwdeVal> fwde{}; 
        ///FIFO Request Interrupt Enable
        enum class frieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        namespace frieValC{
            constexpr MPL::Value<frieVal,frieVal::v0> v0{};
            constexpr MPL::Value<frieVal,frieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,frieVal> frie{}; 
        ///FIFO Warning Interrupt Enable
        enum class fwieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        namespace fwieValC{
            constexpr MPL::Value<fwieVal,fwieVal::v0> v0{};
            constexpr MPL::Value<fwieVal,fwieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,fwieVal> fwie{}; 
        ///FIFO Error Interrupt Enable
        enum class feieVal {
            v0=0x00000000,     ///<Disables the interrupt.
            v1=0x00000001,     ///<Enables the interrupt.
        };
        namespace feieValC{
            constexpr MPL::Value<feieVal,feieVal::v0> v0{};
            constexpr MPL::Value<feieVal,feieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,feieVal> feie{}; 
        ///Sync Error Interrupt Enable
        enum class seieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        namespace seieValC{
            constexpr MPL::Value<seieVal,seieVal::v0> v0{};
            constexpr MPL::Value<seieVal,seieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,seieVal> seie{}; 
        ///Word Start Interrupt Enable
        enum class wsieVal {
            v0=0x00000000,     ///<Disables interrupt.
            v1=0x00000001,     ///<Enables interrupt.
        };
        namespace wsieValC{
            constexpr MPL::Value<wsieVal,wsieVal::v0> v0{};
            constexpr MPL::Value<wsieVal,wsieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,wsieVal> wsie{}; 
        ///FIFO Request Flag
        enum class frfVal {
            v0=0x00000000,     ///<Receive FIFO watermark not reached.
            v1=0x00000001,     ///<Receive FIFO watermark has been reached.
        };
        namespace frfValC{
            constexpr MPL::Value<frfVal,frfVal::v0> v0{};
            constexpr MPL::Value<frfVal,frfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,frfVal> frf{}; 
        ///FIFO Warning Flag
        enum class fwfVal {
            v0=0x00000000,     ///<No enabled receive FIFO is full.
            v1=0x00000001,     ///<Enabled receive FIFO is full.
        };
        namespace fwfValC{
            constexpr MPL::Value<fwfVal,fwfVal::v0> v0{};
            constexpr MPL::Value<fwfVal,fwfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,fwfVal> fwf{}; 
        ///FIFO Error Flag
        enum class fefVal {
            v0=0x00000000,     ///<Receive overflow not detected.
            v1=0x00000001,     ///<Receive overflow detected.
        };
        namespace fefValC{
            constexpr MPL::Value<fefVal,fefVal::v0> v0{};
            constexpr MPL::Value<fefVal,fefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,fefVal> fef{}; 
        ///Sync Error Flag
        enum class sefVal {
            v0=0x00000000,     ///<Sync error not detected.
            v1=0x00000001,     ///<Frame sync error detected.
        };
        namespace sefValC{
            constexpr MPL::Value<sefVal,sefVal::v0> v0{};
            constexpr MPL::Value<sefVal,sefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,sefVal> sef{}; 
        ///Word Start Flag
        enum class wsfVal {
            v0=0x00000000,     ///<Start of word not detected.
            v1=0x00000001,     ///<Start of word detected.
        };
        namespace wsfValC{
            constexpr MPL::Value<wsfVal,wsfVal::v0> v0{};
            constexpr MPL::Value<wsfVal,wsfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,wsfVal> wsf{}; 
        ///Software Reset
        enum class srVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Software reset.
        };
        namespace srValC{
            constexpr MPL::Value<srVal,srVal::v0> v0{};
            constexpr MPL::Value<srVal,srVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,srVal> sr{}; 
        ///FIFO Reset
        enum class frVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<FIFO reset.
        };
        namespace frValC{
            constexpr MPL::Value<frVal,frVal::v0> v0{};
            constexpr MPL::Value<frVal,frVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,frVal> fr{}; 
        ///Bit Clock Enable
        enum class bceVal {
            v0=0x00000000,     ///<Receive bit clock is disabled.
            v1=0x00000001,     ///<Receive bit clock is enabled.
        };
        namespace bceValC{
            constexpr MPL::Value<bceVal,bceVal::v0> v0{};
            constexpr MPL::Value<bceVal,bceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,bceVal> bce{}; 
        ///Debug Enable
        enum class dbgeVal {
            v0=0x00000000,     ///<Receiver is disabled in Debug mode, after completing the current frame.
            v1=0x00000001,     ///<Receiver is enabled in Debug mode.
        };
        namespace dbgeValC{
            constexpr MPL::Value<dbgeVal,dbgeVal::v0> v0{};
            constexpr MPL::Value<dbgeVal,dbgeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,dbgeVal> dbge{}; 
        ///Stop Enable
        enum class stopeVal {
            v0=0x00000000,     ///<Receiver disabled in Stop mode.
            v1=0x00000001,     ///<Receiver enabled in Stop mode.
        };
        namespace stopeValC{
            constexpr MPL::Value<stopeVal,stopeVal::v0> v0{};
            constexpr MPL::Value<stopeVal,stopeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,stopeVal> stope{}; 
        ///Receiver Enable
        enum class reVal {
            v0=0x00000000,     ///<Receiver is disabled.
            v1=0x00000001,     ///<Receiver is enabled, or receiver has been disabled and has not yet reached end of frame.
        };
        namespace reValC{
            constexpr MPL::Value<reVal,reVal::v0> v0{};
            constexpr MPL::Value<reVal,reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,reVal> re{}; 
    }
    namespace I2s0Rcr1{    ///<SAI Receive Configuration 1 Register
        using Addr = Register::Address<0x4002f084,0xfffffff8,0,unsigned>;
        ///Receive FIFO Watermark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rfw{}; 
    }
    namespace I2s0Rcr2{    ///<SAI Receive Configuration 2 Register
        using Addr = Register::Address<0x4002f088,0x00ffff00,0,unsigned>;
        ///Bit Clock Divide
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Bit Clock Direction
        enum class bcdVal {
            v0=0x00000000,     ///<Bit clock is generated externally in Slave mode.
            v1=0x00000001,     ///<Bit clock is generated internally in Master mode.
        };
        namespace bcdValC{
            constexpr MPL::Value<bcdVal,bcdVal::v0> v0{};
            constexpr MPL::Value<bcdVal,bcdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,bcdVal> bcd{}; 
        ///Bit Clock Polarity
        enum class bcpVal {
            v0=0x00000000,     ///<Bit Clock is active high with drive outputs on rising edge and sample inputs on falling edge.
            v1=0x00000001,     ///<Bit Clock is active low with drive outputs on falling edge and sample inputs on rising edge.
        };
        namespace bcpValC{
            constexpr MPL::Value<bcpVal,bcpVal::v0> v0{};
            constexpr MPL::Value<bcpVal,bcpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,bcpVal> bcp{}; 
        ///MCLK Select
        enum class mselVal {
            v00=0x00000000,     ///<Bus clock selected.
            v01=0x00000001,     ///<Master clock 1 selected.
            v10=0x00000002,     ///<Master clock 2 selected.
            v11=0x00000003,     ///<Master clock 3 selected.
        };
        namespace mselValC{
            constexpr MPL::Value<mselVal,mselVal::v00> v00{};
            constexpr MPL::Value<mselVal,mselVal::v01> v01{};
            constexpr MPL::Value<mselVal,mselVal::v10> v10{};
            constexpr MPL::Value<mselVal,mselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,mselVal> msel{}; 
        ///Bit Clock Input
        enum class bciVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Internal logic is clocked as if bit clock was externally generated.
        };
        namespace bciValC{
            constexpr MPL::Value<bciVal,bciVal::v0> v0{};
            constexpr MPL::Value<bciVal,bciVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,bciVal> bci{}; 
        ///Bit Clock Swap
        enum class bcsVal {
            v0=0x00000000,     ///<Use the normal bit clock source.
            v1=0x00000001,     ///<Swap the bit clock source.
        };
        namespace bcsValC{
            constexpr MPL::Value<bcsVal,bcsVal::v0> v0{};
            constexpr MPL::Value<bcsVal,bcsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,bcsVal> bcs{}; 
        ///Synchronous Mode
        enum class syncVal {
            v00=0x00000000,     ///<Asynchronous mode.
            v01=0x00000001,     ///<Synchronous with transmitter.
            v10=0x00000002,     ///<Synchronous with another SAI receiver.
            v11=0x00000003,     ///<Synchronous with another SAI transmitter.
        };
        namespace syncValC{
            constexpr MPL::Value<syncVal,syncVal::v00> v00{};
            constexpr MPL::Value<syncVal,syncVal::v01> v01{};
            constexpr MPL::Value<syncVal,syncVal::v10> v10{};
            constexpr MPL::Value<syncVal,syncVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,syncVal> sync{}; 
    }
    namespace I2s0Rcr3{    ///<SAI Receive Configuration 3 Register
        using Addr = Register::Address<0x4002f08c,0xfffcffe0,0,unsigned>;
        ///Word Flag Configuration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> wdfl{}; 
        ///Receive Channel Enable
        enum class rceVal {
            v0=0x00000000,     ///<Receive data channel N is disabled.
            v1=0x00000001,     ///<Receive data channel N is enabled.
        };
        namespace rceValC{
            constexpr MPL::Value<rceVal,rceVal::v0> v0{};
            constexpr MPL::Value<rceVal,rceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,rceVal> rce{}; 
    }
    namespace I2s0Rcr4{    ///<SAI Receive Configuration 4 Register
        using Addr = Register::Address<0x4002f090,0xffe0e0e4,0,unsigned>;
        ///Frame Sync Direction
        enum class fsdVal {
            v0=0x00000000,     ///<Frame Sync is generated externally in Slave mode.
            v1=0x00000001,     ///<Frame Sync is generated internally in Master mode.
        };
        namespace fsdValC{
            constexpr MPL::Value<fsdVal,fsdVal::v0> v0{};
            constexpr MPL::Value<fsdVal,fsdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fsdVal> fsd{}; 
        ///Frame Sync Polarity
        enum class fspVal {
            v0=0x00000000,     ///<Frame sync is active high.
            v1=0x00000001,     ///<Frame sync is active low.
        };
        namespace fspValC{
            constexpr MPL::Value<fspVal,fspVal::v0> v0{};
            constexpr MPL::Value<fspVal,fspVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,fspVal> fsp{}; 
        ///Frame Sync Early
        enum class fseVal {
            v0=0x00000000,     ///<Frame sync asserts with the first bit of the frame.
            v1=0x00000001,     ///<Frame sync asserts one bit before the first bit of the frame.
        };
        namespace fseValC{
            constexpr MPL::Value<fseVal,fseVal::v0> v0{};
            constexpr MPL::Value<fseVal,fseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,fseVal> fse{}; 
        ///MSB First
        enum class mfVal {
            v0=0x00000000,     ///<LSB is received first.
            v1=0x00000001,     ///<MSB is received first.
        };
        namespace mfValC{
            constexpr MPL::Value<mfVal,mfVal::v0> v0{};
            constexpr MPL::Value<mfVal,mfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mfVal> mf{}; 
        ///Sync Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sywd{}; 
        ///Frame Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> frsz{}; 
    }
    namespace I2s0Rcr5{    ///<SAI Receive Configuration 5 Register
        using Addr = Register::Address<0x4002f094,0xe0e0e0ff,0,unsigned>;
        ///First Bit Shifted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> fbt{}; 
        ///Word 0 Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> w0w{}; 
        ///Word N Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> wnw{}; 
    }
    namespace I2s0Rdr0{    ///<SAI Receive Data Register
        using Addr = Register::Address<0x4002f0a0,0x00000000,0,unsigned>;
        ///Receive Data Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdr{}; 
    }
    namespace I2s0Rdr1{    ///<SAI Receive Data Register
        using Addr = Register::Address<0x4002f0a4,0x00000000,0,unsigned>;
        ///Receive Data Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdr{}; 
    }
    namespace I2s0Rfr0{    ///<SAI Receive FIFO Register
        using Addr = Register::Address<0x4002f0c0,0xfff0fff0,0,unsigned>;
        ///Read FIFO Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rfp{}; 
        ///Write FIFO Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> wfp{}; 
    }
    namespace I2s0Rfr1{    ///<SAI Receive FIFO Register
        using Addr = Register::Address<0x4002f0c4,0xfff0fff0,0,unsigned>;
        ///Read FIFO Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rfp{}; 
        ///Write FIFO Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> wfp{}; 
    }
    namespace I2s0Rmr{    ///<SAI Receive Mask Register
        using Addr = Register::Address<0x4002f0e0,0x00000000,0,unsigned>;
        ///Receive Word Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rwm{}; 
    }
    namespace I2s0Mcr{    ///<SAI MCLK Control Register
        using Addr = Register::Address<0x4002f100,0x3cffffff,0,unsigned>;
        ///MCLK Input Clock Select
        enum class micsVal {
            v00=0x00000000,     ///<MCLK divider input clock 0 selected.
            v01=0x00000001,     ///<MCLK divider input clock 1 selected.
            v10=0x00000002,     ///<MCLK divider input clock 2 selected.
            v11=0x00000003,     ///<MCLK divider input clock 3 selected.
        };
        namespace micsValC{
            constexpr MPL::Value<micsVal,micsVal::v00> v00{};
            constexpr MPL::Value<micsVal,micsVal::v01> v01{};
            constexpr MPL::Value<micsVal,micsVal::v10> v10{};
            constexpr MPL::Value<micsVal,micsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,micsVal> mics{}; 
        ///MCLK Output Enable
        enum class moeVal {
            v0=0x00000000,     ///<MCLK signal pin is configured as an input that bypasses the MCLK divider.
            v1=0x00000001,     ///<MCLK signal pin is configured as an output from the MCLK divider and the MCLK divider is enabled.
        };
        namespace moeValC{
            constexpr MPL::Value<moeVal,moeVal::v0> v0{};
            constexpr MPL::Value<moeVal,moeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,moeVal> moe{}; 
        ///Divider Update Flag
        enum class dufVal {
            v0=0x00000000,     ///<MCLK divider ratio is not being updated currently.
            v1=0x00000001,     ///<MCLK divider ratio is updating on-the-fly. Further updates to the MCLK divider ratio are blocked while this flag remains set.
        };
        namespace dufValC{
            constexpr MPL::Value<dufVal,dufVal::v0> v0{};
            constexpr MPL::Value<dufVal,dufVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,dufVal> duf{}; 
    }
    namespace I2s0Mdr{    ///<SAI MCLK Divide Register
        using Addr = Register::Address<0x4002f104,0xfff00000,0,unsigned>;
        ///MCLK Divide
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> divide{}; 
        ///MCLK Fraction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,12),Register::ReadWriteAccess,unsigned> fract{}; 
    }
}
