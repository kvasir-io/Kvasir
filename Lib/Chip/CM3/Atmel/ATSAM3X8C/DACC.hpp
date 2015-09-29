#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Digital-to-Analog Converter Controller
    namespace DaccCr{    ///<Control Register
        using Addr = Register::Address<0x400c8000,0xfffffffe,0,unsigned>;
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace DaccMr{    ///<Mode Register
        using Addr = Register::Address<0x400c8004,0xc0cc0080,0,unsigned>;
        ///Trigger Enable
        enum class trgenVal {
            dis=0x00000000,     ///<External trigger mode disabled. DACC in free running mode.
            en=0x00000001,     ///<External trigger mode enabled.
        };
        namespace trgenValC{
            constexpr MPL::Value<trgenVal,trgenVal::dis> dis{};
            constexpr MPL::Value<trgenVal,trgenVal::en> en{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,trgenVal> trgen{}; 
        ///Trigger Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> trgsel{}; 
        ///Word Transfer
        enum class wordVal {
            half=0x00000000,     ///<Half-Word transfer
            word=0x00000001,     ///<Word Transfer
        };
        namespace wordValC{
            constexpr MPL::Value<wordVal,wordVal::half> half{};
            constexpr MPL::Value<wordVal,wordVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,wordVal> word{}; 
        ///Sleep Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sleep{}; 
        ///Fast Wake up Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fastwkup{}; 
        ///Refresh Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> refresh{}; 
        ///User Channel Selection
        enum class userSelVal {
            channel0=0x00000000,     ///<Channel 0
            channel1=0x00000001,     ///<Channel 1
        };
        namespace userSelValC{
            constexpr MPL::Value<userSelVal,userSelVal::channel0> channel0{};
            constexpr MPL::Value<userSelVal,userSelVal::channel1> channel1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,userSelVal> userSel{}; 
        ///Tag Selection Mode
        enum class tagVal {
            dis=0x00000000,     ///<Tag selection mode disabled. Using USER_SEL to select the channel for the conversion.
            en=0x00000001,     ///<Tag selection mode enabled
        };
        namespace tagValC{
            constexpr MPL::Value<tagVal,tagVal::dis> dis{};
            constexpr MPL::Value<tagVal,tagVal::en> en{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tagVal> tag{}; 
        ///Max Speed Mode
        enum class maxsVal {
            normal=0x00000000,     ///<Normal Mode
            maximum=0x00000001,     ///<Max Speed Mode enabled
        };
        namespace maxsValC{
            constexpr MPL::Value<maxsVal,maxsVal::normal> normal{};
            constexpr MPL::Value<maxsVal,maxsVal::maximum> maximum{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,maxsVal> maxs{}; 
        ///Startup Time Selection
        enum class startupVal {
            v0=0x00000000,     ///<0 periods of DACClock
            v8=0x00000001,     ///<8 periods of DACClock
            v16=0x00000002,     ///<16 periods of DACClock
            v24=0x00000003,     ///<24 periods of DACClock
            v64=0x00000004,     ///<64 periods of DACClock
            v80=0x00000005,     ///<80 periods of DACClock
            v96=0x00000006,     ///<96 periods of DACClock
            v112=0x00000007,     ///<112 periods of DACClock
            v512=0x00000008,     ///<512 periods of DACClock
            v576=0x00000009,     ///<576 periods of DACClock
            v640=0x0000000a,     ///<640 periods of DACClock
            v704=0x0000000b,     ///<704 periods of DACClock
            v768=0x0000000c,     ///<768 periods of DACClock
            v832=0x0000000d,     ///<832 periods of DACClock
            v896=0x0000000e,     ///<896 periods of DACClock
            v960=0x0000000f,     ///<960 periods of DACClock
            v1024=0x00000010,     ///<1024 periods of DACClock
            v1088=0x00000011,     ///<1088 periods of DACClock
            v1152=0x00000012,     ///<1152 periods of DACClock
            v1216=0x00000013,     ///<1216 periods of DACClock
            v1280=0x00000014,     ///<1280 periods of DACClock
            v1344=0x00000015,     ///<1344 periods of DACClock
            v1408=0x00000016,     ///<1408 periods of DACClock
            v1472=0x00000017,     ///<1472 periods of DACClock
            v1536=0x00000018,     ///<1536 periods of DACClock
            v1600=0x00000019,     ///<1600 periods of DACClock
            v1664=0x0000001a,     ///<1664 periods of DACClock
            v1728=0x0000001b,     ///<1728 periods of DACClock
            v1792=0x0000001c,     ///<1792 periods of DACClock
            v1856=0x0000001d,     ///<1856 periods of DACClock
            v1920=0x0000001e,     ///<1920 periods of DACClock
            v1984=0x0000001f,     ///<1984 periods of DACClock
        };
        namespace startupValC{
            constexpr MPL::Value<startupVal,startupVal::v0> v0{};
            constexpr MPL::Value<startupVal,startupVal::v8> v8{};
            constexpr MPL::Value<startupVal,startupVal::v16> v16{};
            constexpr MPL::Value<startupVal,startupVal::v24> v24{};
            constexpr MPL::Value<startupVal,startupVal::v64> v64{};
            constexpr MPL::Value<startupVal,startupVal::v80> v80{};
            constexpr MPL::Value<startupVal,startupVal::v96> v96{};
            constexpr MPL::Value<startupVal,startupVal::v112> v112{};
            constexpr MPL::Value<startupVal,startupVal::v512> v512{};
            constexpr MPL::Value<startupVal,startupVal::v576> v576{};
            constexpr MPL::Value<startupVal,startupVal::v640> v640{};
            constexpr MPL::Value<startupVal,startupVal::v704> v704{};
            constexpr MPL::Value<startupVal,startupVal::v768> v768{};
            constexpr MPL::Value<startupVal,startupVal::v832> v832{};
            constexpr MPL::Value<startupVal,startupVal::v896> v896{};
            constexpr MPL::Value<startupVal,startupVal::v960> v960{};
            constexpr MPL::Value<startupVal,startupVal::v1024> v1024{};
            constexpr MPL::Value<startupVal,startupVal::v1088> v1088{};
            constexpr MPL::Value<startupVal,startupVal::v1152> v1152{};
            constexpr MPL::Value<startupVal,startupVal::v1216> v1216{};
            constexpr MPL::Value<startupVal,startupVal::v1280> v1280{};
            constexpr MPL::Value<startupVal,startupVal::v1344> v1344{};
            constexpr MPL::Value<startupVal,startupVal::v1408> v1408{};
            constexpr MPL::Value<startupVal,startupVal::v1472> v1472{};
            constexpr MPL::Value<startupVal,startupVal::v1536> v1536{};
            constexpr MPL::Value<startupVal,startupVal::v1600> v1600{};
            constexpr MPL::Value<startupVal,startupVal::v1664> v1664{};
            constexpr MPL::Value<startupVal,startupVal::v1728> v1728{};
            constexpr MPL::Value<startupVal,startupVal::v1792> v1792{};
            constexpr MPL::Value<startupVal,startupVal::v1856> v1856{};
            constexpr MPL::Value<startupVal,startupVal::v1920> v1920{};
            constexpr MPL::Value<startupVal,startupVal::v1984> v1984{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,startupVal> startup{}; 
    }
    namespace DaccCher{    ///<Channel Enable Register
        using Addr = Register::Address<0x400c8010,0xfffffffc,0,unsigned>;
        ///Channel 0 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        ///Channel 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
    }
    namespace DaccChdr{    ///<Channel Disable Register
        using Addr = Register::Address<0x400c8014,0xfffffffc,0,unsigned>;
        ///Channel 0 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        ///Channel 1 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
    }
    namespace DaccChsr{    ///<Channel Status Register
        using Addr = Register::Address<0x400c8018,0xfffffffc,0,unsigned>;
        ///Channel 0 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        ///Channel 1 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
    }
    namespace DaccCdr{    ///<Conversion Data Register
        using Addr = Register::Address<0x400c8020,0x00000000,0,unsigned>;
        ///Data to Convert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace DaccIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x400c8024,0xfffffff0,0,unsigned>;
        ///Transmit Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///End of Conversion Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc{}; 
        ///End of Transmit Buffer Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Transmit Buffer Empty Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txbufe{}; 
    }
    namespace DaccIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x400c8028,0xfffffff0,0,unsigned>;
        ///Transmit Ready Interrupt Disable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///End of Conversion Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc{}; 
        ///End of Transmit Buffer Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Transmit Buffer Empty Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txbufe{}; 
    }
    namespace DaccImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x400c802c,0xfffffff0,0,unsigned>;
        ///Transmit Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///End of Conversion Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc{}; 
        ///End of Transmit Buffer Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Transmit Buffer Empty Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txbufe{}; 
    }
    namespace DaccIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x400c8030,0xfffffff0,0,unsigned>;
        ///Transmit Ready Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///End of Conversion Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc{}; 
        ///End of DMA Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Transmit Buffer Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txbufe{}; 
    }
    namespace DaccAcr{    ///<Analog Current Register
        using Addr = Register::Address<0x400c8094,0xfffffcf0,0,unsigned>;
        ///Analog Output Current Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ibctlch0{}; 
        ///Analog Output Current Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ibctlch1{}; 
        ///Bias Current Control for DAC Core
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ibctldaccore{}; 
    }
    namespace DaccWpmr{    ///<Write Protect Mode register
        using Addr = Register::Address<0x400c80e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace DaccWpsr{    ///<Write Protect Status register
        using Addr = Register::Address<0x400c80e8,0xffff00fe,0,unsigned>;
        ///Write protection error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wproterr{}; 
        ///Write protection error address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wprotaddr{}; 
    }
    namespace DaccTpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0x400c8108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
    }
    namespace DaccTcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0x400c810c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
    }
    namespace DaccTnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0x400c8118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
    }
    namespace DaccTncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0x400c811c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
    }
    namespace DaccPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0x400c8120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace DaccPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0x400c8124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}
