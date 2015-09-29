#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Inter-IC Sound Interface
    namespace I2sClkctrl0{    ///<Clock Unit n Control
        using Addr = Register::Address<0x42005004,0x0002e600,0,unsigned>;
        ///Slot Size
        enum class slotsizeVal {
            v8=0x00000000,     ///<8-bit Slot for Clock Unit n
            v16=0x00000001,     ///<16-bit Slot for Clock Unit n
            v24=0x00000002,     ///<24-bit Slot for Clock Unit n
            v32=0x00000003,     ///<32-bit Slot for Clock Unit n
        };
        namespace slotsizeValC{
            constexpr MPL::Value<slotsizeVal,slotsizeVal::v8> v8{};
            constexpr MPL::Value<slotsizeVal,slotsizeVal::v16> v16{};
            constexpr MPL::Value<slotsizeVal,slotsizeVal::v24> v24{};
            constexpr MPL::Value<slotsizeVal,slotsizeVal::v32> v32{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,slotsizeVal> slotsize{}; 
        ///Number of Slots in Frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> nbslots{}; 
        ///Frame Sync Width
        enum class fswidthVal {
            slot=0x00000000,     ///<Frame Sync Pulse is 1 Slot wide (default for I2S protocol)
            half=0x00000001,     ///<Frame Sync Pulse is half a Frame wide
            bit=0x00000002,     ///<Frame Sync Pulse is 1 Bit wide
            burst=0x00000003,     ///<Clock Unit n operates in Burst mode, with a 1-bit wide Frame Sync pulse per Data sample, only when Data transfer is requested
        };
        namespace fswidthValC{
            constexpr MPL::Value<fswidthVal,fswidthVal::slot> slot{};
            constexpr MPL::Value<fswidthVal,fswidthVal::half> half{};
            constexpr MPL::Value<fswidthVal,fswidthVal::bit> bit{};
            constexpr MPL::Value<fswidthVal,fswidthVal::burst> burst{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,fswidthVal> fswidth{}; 
        ///Data Delay from Frame Sync
        enum class bitdelayVal {
            lj=0x00000000,     ///<Left Justified (0 Bit Delay)
            i2s=0x00000001,     ///<I2S (1 Bit Delay)
        };
        namespace bitdelayValC{
            constexpr MPL::Value<bitdelayVal,bitdelayVal::lj> lj{};
            constexpr MPL::Value<bitdelayVal,bitdelayVal::i2s> i2s{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bitdelayVal> bitdelay{}; 
        ///Frame Sync Select
        enum class fsselVal {
            sckdiv=0x00000000,     ///<Divided Serial Clock n is used as Frame Sync n source
            fspin=0x00000001,     ///<FSn input pin is used as Frame Sync n source
        };
        namespace fsselValC{
            constexpr MPL::Value<fsselVal,fsselVal::sckdiv> sckdiv{};
            constexpr MPL::Value<fsselVal,fsselVal::fspin> fspin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fsselVal> fssel{}; 
        ///Frame Sync Invert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fsinv{}; 
        ///Serial Clock Select
        enum class sckselVal {
            mckdiv=0x00000000,     ///<Divided Master Clock n is used as Serial Clock n source
            sckpin=0x00000001,     ///<SCKn input pin is used as Serial Clock n source
        };
        namespace sckselValC{
            constexpr MPL::Value<sckselVal,sckselVal::mckdiv> mckdiv{};
            constexpr MPL::Value<sckselVal,sckselVal::sckpin> sckpin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,sckselVal> scksel{}; 
        ///Master Clock Select
        enum class mckselVal {
            gclk=0x00000000,     ///<clk_gen_n is used as Master Clock n source
            mckpin=0x00000001,     ///<MCKn input pin is used as Master Clock n source
        };
        namespace mckselValC{
            constexpr MPL::Value<mckselVal,mckselVal::gclk> gclk{};
            constexpr MPL::Value<mckselVal,mckselVal::mckpin> mckpin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,mckselVal> mcksel{}; 
        ///Master Clock Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mcken{}; 
        ///Master Clock Division Factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> mckdiv{}; 
        ///Master Clock Output Division Factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> mckoutdiv{}; 
        ///Frame Sync Output Invert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fsoutinv{}; 
        ///Serial Clock Output Invert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sckoutinv{}; 
        ///Master Clock Output Invert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mckoutinv{}; 
    }
    namespace I2sClkctrl1{    ///<Clock Unit n Control
        using Addr = Register::Address<0x42005008,0x0002e600,0,unsigned>;
        ///Slot Size
        enum class slotsizeVal {
            v8=0x00000000,     ///<8-bit Slot for Clock Unit n
            v16=0x00000001,     ///<16-bit Slot for Clock Unit n
            v24=0x00000002,     ///<24-bit Slot for Clock Unit n
            v32=0x00000003,     ///<32-bit Slot for Clock Unit n
        };
        namespace slotsizeValC{
            constexpr MPL::Value<slotsizeVal,slotsizeVal::v8> v8{};
            constexpr MPL::Value<slotsizeVal,slotsizeVal::v16> v16{};
            constexpr MPL::Value<slotsizeVal,slotsizeVal::v24> v24{};
            constexpr MPL::Value<slotsizeVal,slotsizeVal::v32> v32{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,slotsizeVal> slotsize{}; 
        ///Number of Slots in Frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> nbslots{}; 
        ///Frame Sync Width
        enum class fswidthVal {
            slot=0x00000000,     ///<Frame Sync Pulse is 1 Slot wide (default for I2S protocol)
            half=0x00000001,     ///<Frame Sync Pulse is half a Frame wide
            bit=0x00000002,     ///<Frame Sync Pulse is 1 Bit wide
            burst=0x00000003,     ///<Clock Unit n operates in Burst mode, with a 1-bit wide Frame Sync pulse per Data sample, only when Data transfer is requested
        };
        namespace fswidthValC{
            constexpr MPL::Value<fswidthVal,fswidthVal::slot> slot{};
            constexpr MPL::Value<fswidthVal,fswidthVal::half> half{};
            constexpr MPL::Value<fswidthVal,fswidthVal::bit> bit{};
            constexpr MPL::Value<fswidthVal,fswidthVal::burst> burst{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,fswidthVal> fswidth{}; 
        ///Data Delay from Frame Sync
        enum class bitdelayVal {
            lj=0x00000000,     ///<Left Justified (0 Bit Delay)
            i2s=0x00000001,     ///<I2S (1 Bit Delay)
        };
        namespace bitdelayValC{
            constexpr MPL::Value<bitdelayVal,bitdelayVal::lj> lj{};
            constexpr MPL::Value<bitdelayVal,bitdelayVal::i2s> i2s{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bitdelayVal> bitdelay{}; 
        ///Frame Sync Select
        enum class fsselVal {
            sckdiv=0x00000000,     ///<Divided Serial Clock n is used as Frame Sync n source
            fspin=0x00000001,     ///<FSn input pin is used as Frame Sync n source
        };
        namespace fsselValC{
            constexpr MPL::Value<fsselVal,fsselVal::sckdiv> sckdiv{};
            constexpr MPL::Value<fsselVal,fsselVal::fspin> fspin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fsselVal> fssel{}; 
        ///Frame Sync Invert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fsinv{}; 
        ///Serial Clock Select
        enum class sckselVal {
            mckdiv=0x00000000,     ///<Divided Master Clock n is used as Serial Clock n source
            sckpin=0x00000001,     ///<SCKn input pin is used as Serial Clock n source
        };
        namespace sckselValC{
            constexpr MPL::Value<sckselVal,sckselVal::mckdiv> mckdiv{};
            constexpr MPL::Value<sckselVal,sckselVal::sckpin> sckpin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,sckselVal> scksel{}; 
        ///Master Clock Select
        enum class mckselVal {
            gclk=0x00000000,     ///<clk_gen_n is used as Master Clock n source
            mckpin=0x00000001,     ///<MCKn input pin is used as Master Clock n source
        };
        namespace mckselValC{
            constexpr MPL::Value<mckselVal,mckselVal::gclk> gclk{};
            constexpr MPL::Value<mckselVal,mckselVal::mckpin> mckpin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,mckselVal> mcksel{}; 
        ///Master Clock Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mcken{}; 
        ///Master Clock Division Factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> mckdiv{}; 
        ///Master Clock Output Division Factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> mckoutdiv{}; 
        ///Frame Sync Output Invert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fsoutinv{}; 
        ///Serial Clock Output Invert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sckoutinv{}; 
        ///Master Clock Output Invert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mckoutinv{}; 
    }
    namespace I2sCtrla{    ///<Control A
        using Addr = Register::Address<0x42005000,0xffffffc0,0,unsigned char>;
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Clock Unit 0 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cken0{}; 
        ///Clock Unit 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cken1{}; 
        ///Serializer 0 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> seren0{}; 
        ///Serializer 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> seren1{}; 
    }
    namespace I2sData0{    ///<Data n
        using Addr = Register::Address<0x42005030,0x00000000,0,unsigned>;
        ///Sample Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace I2sData1{    ///<Data n
        using Addr = Register::Address<0x42005034,0x00000000,0,unsigned>;
        ///Sample Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace I2sIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x4200500c,0xffffcccc,0,unsigned>;
        ///Receive Ready 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy0{}; 
        ///Receive Ready 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy1{}; 
        ///Receive Overrun 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxor0{}; 
        ///Receive Overrun 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxor1{}; 
        ///Transmit Ready 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrdy0{}; 
        ///Transmit Ready 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txrdy1{}; 
        ///Transmit Underrun 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txur0{}; 
        ///Transmit Underrun 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txur1{}; 
    }
    namespace I2sIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42005010,0xffffcccc,0,unsigned>;
        ///Receive Ready 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy0{}; 
        ///Receive Ready 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy1{}; 
        ///Receive Overrun 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxor0{}; 
        ///Receive Overrun 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxor1{}; 
        ///Transmit Ready 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrdy0{}; 
        ///Transmit Ready 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txrdy1{}; 
        ///Transmit Underrun 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txur0{}; 
        ///Transmit Underrun 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txur1{}; 
    }
    namespace I2sIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x42005014,0xffffcccc,0,unsigned>;
        ///Receive Ready 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy0{}; 
        ///Receive Ready 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy1{}; 
        ///Receive Overrun 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxor0{}; 
        ///Receive Overrun 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxor1{}; 
        ///Transmit Ready 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrdy0{}; 
        ///Transmit Ready 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txrdy1{}; 
        ///Transmit Underrun 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txur0{}; 
        ///Transmit Underrun 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txur1{}; 
    }
    namespace I2sSerctrl0{    ///<Serializer n Control
        using Addr = Register::Address<0x42005020,0xf8000840,0,unsigned>;
        ///Serializer Mode
        enum class sermodeVal {
            rx=0x00000000,     ///<Receive
            tx=0x00000001,     ///<Transmit
            pdm2=0x00000002,     ///<Receive 1 PDM data on each clock edge
        };
        namespace sermodeValC{
            constexpr MPL::Value<sermodeVal,sermodeVal::rx> rx{};
            constexpr MPL::Value<sermodeVal,sermodeVal::tx> tx{};
            constexpr MPL::Value<sermodeVal,sermodeVal::pdm2> pdm2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sermodeVal> sermode{}; 
        ///Line Default Line when Slot Disabled
        enum class txdefaultVal {
            zero=0x00000000,     ///<Output Default Value is 0
            one=0x00000001,     ///<Output Default Value is 1
            hiz=0x00000003,     ///<Output Default Value is high impedance
        };
        namespace txdefaultValC{
            constexpr MPL::Value<txdefaultVal,txdefaultVal::zero> zero{};
            constexpr MPL::Value<txdefaultVal,txdefaultVal::one> one{};
            constexpr MPL::Value<txdefaultVal,txdefaultVal::hiz> hiz{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,txdefaultVal> txdefault{}; 
        ///Transmit Data when Underrun
        enum class txsameVal {
            zero=0x00000000,     ///<Zero data transmitted in case of underrun
            same=0x00000001,     ///<Last data transmitted in case of underrun
        };
        namespace txsameValC{
            constexpr MPL::Value<txsameVal,txsameVal::zero> zero{};
            constexpr MPL::Value<txsameVal,txsameVal::same> same{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,txsameVal> txsame{}; 
        ///Clock Unit Selection
        enum class clkselVal {
            clk0=0x00000000,     ///<Use Clock Unit 0
            clk1=0x00000001,     ///<Use Clock Unit 1
        };
        namespace clkselValC{
            constexpr MPL::Value<clkselVal,clkselVal::clk0> clk0{};
            constexpr MPL::Value<clkselVal,clkselVal::clk1> clk1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,clkselVal> clksel{}; 
        ///Data Slot Formatting Adjust
        enum class slotadjVal {
            right=0x00000000,     ///<Data is right adjusted in slot
            left=0x00000001,     ///<Data is left adjusted in slot
        };
        namespace slotadjValC{
            constexpr MPL::Value<slotadjVal,slotadjVal::right> right{};
            constexpr MPL::Value<slotadjVal,slotadjVal::left> left{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,slotadjVal> slotadj{}; 
        ///Data Word Size
        enum class datasizeVal {
            v32=0x00000000,     ///<32 bits
            v24=0x00000001,     ///<24 bits
            v20=0x00000002,     ///<20 bits
            v18=0x00000003,     ///<18 bits
            v16=0x00000004,     ///<16 bits
            v16c=0x00000005,     ///<16 bits compact stereo
            v8=0x00000006,     ///<8 bits
            v8c=0x00000007,     ///<8 bits compact stereo
        };
        namespace datasizeValC{
            constexpr MPL::Value<datasizeVal,datasizeVal::v32> v32{};
            constexpr MPL::Value<datasizeVal,datasizeVal::v24> v24{};
            constexpr MPL::Value<datasizeVal,datasizeVal::v20> v20{};
            constexpr MPL::Value<datasizeVal,datasizeVal::v18> v18{};
            constexpr MPL::Value<datasizeVal,datasizeVal::v16> v16{};
            constexpr MPL::Value<datasizeVal,datasizeVal::v16c> v16c{};
            constexpr MPL::Value<datasizeVal,datasizeVal::v8> v8{};
            constexpr MPL::Value<datasizeVal,datasizeVal::v8c> v8c{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,datasizeVal> datasize{}; 
        ///Data Word Formatting Adjust
        enum class wordadjVal {
            right=0x00000000,     ///<Data is right adjusted in word
            left=0x00000001,     ///<Data is left adjusted in word
        };
        namespace wordadjValC{
            constexpr MPL::Value<wordadjVal,wordadjVal::right> right{};
            constexpr MPL::Value<wordadjVal,wordadjVal::left> left{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,wordadjVal> wordadj{}; 
        ///Data Formatting Bit Extension
        enum class extendVal {
            zero=0x00000000,     ///<Extend with zeroes
            one=0x00000001,     ///<Extend with ones
            msbit=0x00000002,     ///<Extend with Most Significant Bit
            lsbit=0x00000003,     ///<Extend with Least Significant Bit
        };
        namespace extendValC{
            constexpr MPL::Value<extendVal,extendVal::zero> zero{};
            constexpr MPL::Value<extendVal,extendVal::one> one{};
            constexpr MPL::Value<extendVal,extendVal::msbit> msbit{};
            constexpr MPL::Value<extendVal,extendVal::lsbit> lsbit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,extendVal> extend{}; 
        ///Data Formatting Bit Reverse
        enum class bitrevVal {
            msbit=0x00000000,     ///<Transfer Data Most Significant Bit (MSB) first (default for I2S protocol)
            lsbit=0x00000001,     ///<Transfer Data Least Significant Bit (LSB) first
        };
        namespace bitrevValC{
            constexpr MPL::Value<bitrevVal,bitrevVal::msbit> msbit{};
            constexpr MPL::Value<bitrevVal,bitrevVal::lsbit> lsbit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,bitrevVal> bitrev{}; 
        ///Slot 0 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> slotdis0{}; 
        ///Slot 1 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> slotdis1{}; 
        ///Slot 2 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> slotdis2{}; 
        ///Slot 3 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> slotdis3{}; 
        ///Slot 4 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> slotdis4{}; 
        ///Slot 5 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> slotdis5{}; 
        ///Slot 6 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> slotdis6{}; 
        ///Slot 7 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> slotdis7{}; 
        ///Mono Mode
        enum class monoVal {
            stereo=0x00000000,     ///<Normal mode
            mono=0x00000001,     ///<Left channel data is duplicated to right channel
        };
        namespace monoValC{
            constexpr MPL::Value<monoVal,monoVal::stereo> stereo{};
            constexpr MPL::Value<monoVal,monoVal::mono> mono{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,monoVal> mono{}; 
        ///Single or Multiple DMA Channels
        enum class dmaVal {
            single=0x00000000,     ///<Single DMA channel
            multiple=0x00000001,     ///<One DMA channel per data channel
        };
        namespace dmaValC{
            constexpr MPL::Value<dmaVal,dmaVal::single> single{};
            constexpr MPL::Value<dmaVal,dmaVal::multiple> multiple{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,dmaVal> dma{}; 
        ///Loop-back Test Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rxloop{}; 
    }
    namespace I2sSerctrl1{    ///<Serializer n Control
        using Addr = Register::Address<0x42005024,0xf8000840,0,unsigned>;
        ///Serializer Mode
        enum class sermodeVal {
            rx=0x00000000,     ///<Receive
            tx=0x00000001,     ///<Transmit
            pdm2=0x00000002,     ///<Receive 1 PDM data on each clock edge
        };
        namespace sermodeValC{
            constexpr MPL::Value<sermodeVal,sermodeVal::rx> rx{};
            constexpr MPL::Value<sermodeVal,sermodeVal::tx> tx{};
            constexpr MPL::Value<sermodeVal,sermodeVal::pdm2> pdm2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sermodeVal> sermode{}; 
        ///Line Default Line when Slot Disabled
        enum class txdefaultVal {
            zero=0x00000000,     ///<Output Default Value is 0
            one=0x00000001,     ///<Output Default Value is 1
            hiz=0x00000003,     ///<Output Default Value is high impedance
        };
        namespace txdefaultValC{
            constexpr MPL::Value<txdefaultVal,txdefaultVal::zero> zero{};
            constexpr MPL::Value<txdefaultVal,txdefaultVal::one> one{};
            constexpr MPL::Value<txdefaultVal,txdefaultVal::hiz> hiz{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,txdefaultVal> txdefault{}; 
        ///Transmit Data when Underrun
        enum class txsameVal {
            zero=0x00000000,     ///<Zero data transmitted in case of underrun
            same=0x00000001,     ///<Last data transmitted in case of underrun
        };
        namespace txsameValC{
            constexpr MPL::Value<txsameVal,txsameVal::zero> zero{};
            constexpr MPL::Value<txsameVal,txsameVal::same> same{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,txsameVal> txsame{}; 
        ///Clock Unit Selection
        enum class clkselVal {
            clk0=0x00000000,     ///<Use Clock Unit 0
            clk1=0x00000001,     ///<Use Clock Unit 1
        };
        namespace clkselValC{
            constexpr MPL::Value<clkselVal,clkselVal::clk0> clk0{};
            constexpr MPL::Value<clkselVal,clkselVal::clk1> clk1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,clkselVal> clksel{}; 
        ///Data Slot Formatting Adjust
        enum class slotadjVal {
            right=0x00000000,     ///<Data is right adjusted in slot
            left=0x00000001,     ///<Data is left adjusted in slot
        };
        namespace slotadjValC{
            constexpr MPL::Value<slotadjVal,slotadjVal::right> right{};
            constexpr MPL::Value<slotadjVal,slotadjVal::left> left{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,slotadjVal> slotadj{}; 
        ///Data Word Size
        enum class datasizeVal {
            v32=0x00000000,     ///<32 bits
            v24=0x00000001,     ///<24 bits
            v20=0x00000002,     ///<20 bits
            v18=0x00000003,     ///<18 bits
            v16=0x00000004,     ///<16 bits
            v16c=0x00000005,     ///<16 bits compact stereo
            v8=0x00000006,     ///<8 bits
            v8c=0x00000007,     ///<8 bits compact stereo
        };
        namespace datasizeValC{
            constexpr MPL::Value<datasizeVal,datasizeVal::v32> v32{};
            constexpr MPL::Value<datasizeVal,datasizeVal::v24> v24{};
            constexpr MPL::Value<datasizeVal,datasizeVal::v20> v20{};
            constexpr MPL::Value<datasizeVal,datasizeVal::v18> v18{};
            constexpr MPL::Value<datasizeVal,datasizeVal::v16> v16{};
            constexpr MPL::Value<datasizeVal,datasizeVal::v16c> v16c{};
            constexpr MPL::Value<datasizeVal,datasizeVal::v8> v8{};
            constexpr MPL::Value<datasizeVal,datasizeVal::v8c> v8c{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,datasizeVal> datasize{}; 
        ///Data Word Formatting Adjust
        enum class wordadjVal {
            right=0x00000000,     ///<Data is right adjusted in word
            left=0x00000001,     ///<Data is left adjusted in word
        };
        namespace wordadjValC{
            constexpr MPL::Value<wordadjVal,wordadjVal::right> right{};
            constexpr MPL::Value<wordadjVal,wordadjVal::left> left{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,wordadjVal> wordadj{}; 
        ///Data Formatting Bit Extension
        enum class extendVal {
            zero=0x00000000,     ///<Extend with zeroes
            one=0x00000001,     ///<Extend with ones
            msbit=0x00000002,     ///<Extend with Most Significant Bit
            lsbit=0x00000003,     ///<Extend with Least Significant Bit
        };
        namespace extendValC{
            constexpr MPL::Value<extendVal,extendVal::zero> zero{};
            constexpr MPL::Value<extendVal,extendVal::one> one{};
            constexpr MPL::Value<extendVal,extendVal::msbit> msbit{};
            constexpr MPL::Value<extendVal,extendVal::lsbit> lsbit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,extendVal> extend{}; 
        ///Data Formatting Bit Reverse
        enum class bitrevVal {
            msbit=0x00000000,     ///<Transfer Data Most Significant Bit (MSB) first (default for I2S protocol)
            lsbit=0x00000001,     ///<Transfer Data Least Significant Bit (LSB) first
        };
        namespace bitrevValC{
            constexpr MPL::Value<bitrevVal,bitrevVal::msbit> msbit{};
            constexpr MPL::Value<bitrevVal,bitrevVal::lsbit> lsbit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,bitrevVal> bitrev{}; 
        ///Slot 0 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> slotdis0{}; 
        ///Slot 1 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> slotdis1{}; 
        ///Slot 2 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> slotdis2{}; 
        ///Slot 3 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> slotdis3{}; 
        ///Slot 4 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> slotdis4{}; 
        ///Slot 5 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> slotdis5{}; 
        ///Slot 6 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> slotdis6{}; 
        ///Slot 7 Disabled for this Serializer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> slotdis7{}; 
        ///Mono Mode
        enum class monoVal {
            stereo=0x00000000,     ///<Normal mode
            mono=0x00000001,     ///<Left channel data is duplicated to right channel
        };
        namespace monoValC{
            constexpr MPL::Value<monoVal,monoVal::stereo> stereo{};
            constexpr MPL::Value<monoVal,monoVal::mono> mono{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,monoVal> mono{}; 
        ///Single or Multiple DMA Channels
        enum class dmaVal {
            single=0x00000000,     ///<Single DMA channel
            multiple=0x00000001,     ///<One DMA channel per data channel
        };
        namespace dmaValC{
            constexpr MPL::Value<dmaVal,dmaVal::single> single{};
            constexpr MPL::Value<dmaVal,dmaVal::multiple> multiple{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,dmaVal> dma{}; 
        ///Loop-back Test Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rxloop{}; 
    }
    namespace I2sSyncbusy{    ///<Synchronization Status
        using Addr = Register::Address<0x42005018,0xfffffcc0,0,unsigned>;
        ///Software Reset Synchronization Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable Synchronization Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Clock Unit 0 Enable Synchronization Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cken0{}; 
        ///Clock Unit 1 Enable Synchronization Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cken1{}; 
        ///Serializer 0 Enable Synchronization Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> seren0{}; 
        ///Serializer 1 Enable Synchronization Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> seren1{}; 
        ///Data 0 Synchronization Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> data0{}; 
        ///Data 1 Synchronization Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> data1{}; 
    }
}
