#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Digital-to-Analog Converter Controller
    namespace DaccCr{    ///<Control Register
        using Addr = Register::Address<0x4003c000,0xfffffffe,0,unsigned>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
    }
    namespace DaccMr{    ///<Mode Register
        using Addr = Register::Address<0x4003c004,0xc0cc0080,0,unsigned>;
        ///Trigger Enable
        enum class TrgenVal {
            dis=0x00000000,     ///<External trigger mode disabled. DACC in free running mode.
            en=0x00000001,     ///<External trigger mode enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TrgenVal> trgen{}; 
        namespace TrgenValC{
            constexpr Register::FieldValue<decltype(trgen),TrgenVal::dis> dis{};
            constexpr Register::FieldValue<decltype(trgen),TrgenVal::en> en{};
        }
        ///Trigger Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> trgsel{}; 
        namespace TrgselValC{
        }
        ///Word Transfer
        enum class WordVal {
            half=0x00000000,     ///<Half-Word transfer
            word=0x00000001,     ///<Word Transfer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,WordVal> word{}; 
        namespace WordValC{
            constexpr Register::FieldValue<decltype(word),WordVal::half> half{};
            constexpr Register::FieldValue<decltype(word),WordVal::word> word{};
        }
        ///Sleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sleep{}; 
        namespace SleepValC{
        }
        ///Fast Wake up Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fastwkup{}; 
        namespace FastwkupValC{
        }
        ///Refresh Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> refresh{}; 
        namespace RefreshValC{
        }
        ///User Channel Selection
        enum class UserselVal {
            channel0=0x00000000,     ///<Channel 0
            channel1=0x00000001,     ///<Channel 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,UserselVal> userSel{}; 
        namespace UserselValC{
            constexpr Register::FieldValue<decltype(userSel),UserselVal::channel0> channel0{};
            constexpr Register::FieldValue<decltype(userSel),UserselVal::channel1> channel1{};
        }
        ///Tag Selection Mode
        enum class TagVal {
            dis=0x00000000,     ///<Tag selection mode disabled. Using USER_SEL to select the channel for the conversion.
            en=0x00000001,     ///<Tag selection mode enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,TagVal> tag{}; 
        namespace TagValC{
            constexpr Register::FieldValue<decltype(tag),TagVal::dis> dis{};
            constexpr Register::FieldValue<decltype(tag),TagVal::en> en{};
        }
        ///Max Speed Mode
        enum class MaxsVal {
            normal=0x00000000,     ///<Normal Mode
            maximum=0x00000001,     ///<Max Speed Mode enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,MaxsVal> maxs{}; 
        namespace MaxsValC{
            constexpr Register::FieldValue<decltype(maxs),MaxsVal::normal> normal{};
            constexpr Register::FieldValue<decltype(maxs),MaxsVal::maximum> maximum{};
        }
        ///Startup Time Selection
        enum class StartupVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,StartupVal> startup{}; 
        namespace StartupValC{
            constexpr Register::FieldValue<decltype(startup),StartupVal::v0> v0{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v8> v8{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v16> v16{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v24> v24{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v64> v64{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v80> v80{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v96> v96{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v112> v112{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v512> v512{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v576> v576{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v640> v640{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v704> v704{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v768> v768{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v832> v832{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v896> v896{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v960> v960{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1024> v1024{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1088> v1088{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1152> v1152{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1216> v1216{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1280> v1280{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1344> v1344{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1408> v1408{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1472> v1472{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1536> v1536{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1600> v1600{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1664> v1664{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1728> v1728{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1792> v1792{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1856> v1856{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1920> v1920{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::v1984> v1984{};
        }
    }
    namespace DaccCher{    ///<Channel Enable Register
        using Addr = Register::Address<0x4003c010,0xfffffffc,0,unsigned>;
        ///Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        namespace Ch0ValC{
        }
        ///Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        namespace Ch1ValC{
        }
    }
    namespace DaccChdr{    ///<Channel Disable Register
        using Addr = Register::Address<0x4003c014,0xfffffffc,0,unsigned>;
        ///Channel 0 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        namespace Ch0ValC{
        }
        ///Channel 1 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        namespace Ch1ValC{
        }
    }
    namespace DaccChsr{    ///<Channel Status Register
        using Addr = Register::Address<0x4003c018,0xfffffffc,0,unsigned>;
        ///Channel 0 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        namespace Ch0ValC{
        }
        ///Channel 1 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        namespace Ch1ValC{
        }
    }
    namespace DaccCdr{    ///<Conversion Data Register
        using Addr = Register::Address<0x4003c020,0x00000000,0,unsigned>;
        ///Data to Convert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace DaccIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x4003c024,0xfffffff0,0,unsigned>;
        ///Transmit Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///End of Conversion Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc{}; 
        namespace EocValC{
        }
        ///End of Transmit Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///Transmit Buffer Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
    }
    namespace DaccIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x4003c028,0xfffffff0,0,unsigned>;
        ///Transmit Ready Interrupt Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///End of Conversion Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc{}; 
        namespace EocValC{
        }
        ///End of Transmit Buffer Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///Transmit Buffer Empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
    }
    namespace DaccImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4003c02c,0xfffffff0,0,unsigned>;
        ///Transmit Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///End of Conversion Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc{}; 
        namespace EocValC{
        }
        ///End of Transmit Buffer Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///Transmit Buffer Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
    }
    namespace DaccIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x4003c030,0xfffffff0,0,unsigned>;
        ///Transmit Ready Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///End of Conversion Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc{}; 
        namespace EocValC{
        }
        ///End of DMA Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///Transmit Buffer Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
    }
    namespace DaccAcr{    ///<Analog Current Register
        using Addr = Register::Address<0x4003c094,0xfffffcf0,0,unsigned>;
        ///Analog Output Current Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ibctlch0{}; 
        namespace Ibctlch0ValC{
        }
        ///Analog Output Current Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ibctlch1{}; 
        namespace Ibctlch1ValC{
        }
        ///Bias Current Control for DAC Core
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ibctldaccore{}; 
        namespace IbctldaccoreValC{
        }
    }
    namespace DaccWpmr{    ///<Write Protect Mode register
        using Addr = Register::Address<0x4003c0e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        namespace WpenValC{
        }
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
        namespace WpkeyValC{
        }
    }
    namespace DaccWpsr{    ///<Write Protect Status register
        using Addr = Register::Address<0x4003c0e8,0xffff00fe,0,unsigned>;
        ///Write protection error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wproterr{}; 
        namespace WproterrValC{
        }
        ///Write protection error address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wprotaddr{}; 
        namespace WprotaddrValC{
        }
    }
    namespace DaccTpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0x4003c108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
        namespace TxptrValC{
        }
    }
    namespace DaccTcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0x4003c10c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
        namespace TxctrValC{
        }
    }
    namespace DaccTnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0x4003c118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
        namespace TxnptrValC{
        }
    }
    namespace DaccTncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0x4003c11c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
        namespace TxnctrValC{
        }
    }
    namespace DaccPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0x4003c120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        namespace RxtenValC{
        }
        ///Receiver Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        namespace RxtdisValC{
        }
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        namespace TxtenValC{
        }
        ///Transmitter Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
        namespace TxtdisValC{
        }
    }
    namespace DaccPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0x4003c124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        namespace RxtenValC{
        }
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        namespace TxtenValC{
        }
    }
}
