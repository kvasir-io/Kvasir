#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FlexTimer Module
    namespace Ftm1Sc{    ///<Status And Control
        using Addr = Register::Address<0x40039000,0xffffff00,0,unsigned>;
        ///Prescale Factor Selection
        enum class PsVal {
            v000=0x00000000,     ///<Divide by 1
            v001=0x00000001,     ///<Divide by 2
            v010=0x00000002,     ///<Divide by 4
            v011=0x00000003,     ///<Divide by 8
            v100=0x00000004,     ///<Divide by 16
            v101=0x00000005,     ///<Divide by 32
            v110=0x00000006,     ///<Divide by 64
            v111=0x00000007,     ///<Divide by 128
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v111> v111{};
        }
        ///Clock Source Selection
        enum class ClksVal {
            v00=0x00000000,     ///<No clock selected. This in effect disables the FTM counter.
            v01=0x00000001,     ///<System clock
            v10=0x00000002,     ///<Fixed frequency clock
            v11=0x00000003,     ///<External clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksVal> clks{}; 
        namespace ClksValC{
            constexpr Register::FieldValue<decltype(clks),ClksVal::v00> v00{};
            constexpr Register::FieldValue<decltype(clks),ClksVal::v01> v01{};
            constexpr Register::FieldValue<decltype(clks),ClksVal::v10> v10{};
            constexpr Register::FieldValue<decltype(clks),ClksVal::v11> v11{};
        }
        ///Center-Aligned PWM Select
        enum class CpwmsVal {
            v0=0x00000000,     ///<FTM counter operates in Up Counting mode.
            v1=0x00000001,     ///<FTM counter operates in Up-Down Counting mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CpwmsVal> cpwms{}; 
        namespace CpwmsValC{
            constexpr Register::FieldValue<decltype(cpwms),CpwmsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpwms),CpwmsVal::v1> v1{};
        }
        ///Timer Overflow Interrupt Enable
        enum class ToieVal {
            v0=0x00000000,     ///<Disable TOF interrupts. Use software polling.
            v1=0x00000001,     ///<Enable TOF interrupts. An interrupt is generated when TOF equals one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ToieVal> toie{}; 
        namespace ToieValC{
            constexpr Register::FieldValue<decltype(toie),ToieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(toie),ToieVal::v1> v1{};
        }
        ///Timer Overflow Flag
        enum class TofVal {
            v0=0x00000000,     ///<FTM counter has not overflowed.
            v1=0x00000001,     ///<FTM counter has overflowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TofVal> tof{}; 
        namespace TofValC{
            constexpr Register::FieldValue<decltype(tof),TofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tof),TofVal::v1> v1{};
        }
    }
    namespace Ftm1Cnt{    ///<Counter
        using Addr = Register::Address<0x40039004,0xffff0000,0,unsigned>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Ftm1Mod{    ///<Modulo
        using Addr = Register::Address<0x40039008,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
        namespace ModValC{
        }
    }
    namespace Ftm1C0sc{    ///<Channel (n) Status And Control
        using Addr = Register::Address<0x4003900c,0xffffff03,0,unsigned>;
        ///Edge or Level Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> elsa{}; 
        namespace ElsaValC{
        }
        ///Edge or Level Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> elsb{}; 
        namespace ElsbValC{
        }
        ///Channel Mode Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msa{}; 
        namespace MsaValC{
        }
        ///Channel Mode Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msb{}; 
        namespace MsbValC{
        }
        ///Channel Interrupt Enable
        enum class ChieVal {
            v0=0x00000000,     ///<Disable channel interrupts. Use software polling.
            v1=0x00000001,     ///<Enable channel interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ChieVal> chie{}; 
        namespace ChieValC{
            constexpr Register::FieldValue<decltype(chie),ChieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chie),ChieVal::v1> v1{};
        }
        ///Channel Flag
        enum class ChfVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ChfVal> chf{}; 
        namespace ChfValC{
            constexpr Register::FieldValue<decltype(chf),ChfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chf),ChfVal::v1> v1{};
        }
    }
    namespace Ftm1C1sc{    ///<Channel (n) Status And Control
        using Addr = Register::Address<0x40039014,0xffffff03,0,unsigned>;
        ///Edge or Level Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> elsa{}; 
        namespace ElsaValC{
        }
        ///Edge or Level Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> elsb{}; 
        namespace ElsbValC{
        }
        ///Channel Mode Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msa{}; 
        namespace MsaValC{
        }
        ///Channel Mode Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msb{}; 
        namespace MsbValC{
        }
        ///Channel Interrupt Enable
        enum class ChieVal {
            v0=0x00000000,     ///<Disable channel interrupts. Use software polling.
            v1=0x00000001,     ///<Enable channel interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ChieVal> chie{}; 
        namespace ChieValC{
            constexpr Register::FieldValue<decltype(chie),ChieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chie),ChieVal::v1> v1{};
        }
        ///Channel Flag
        enum class ChfVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ChfVal> chf{}; 
        namespace ChfValC{
            constexpr Register::FieldValue<decltype(chf),ChfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chf),ChfVal::v1> v1{};
        }
    }
    namespace Ftm1C0v{    ///<Channel (n) Value
        using Addr = Register::Address<0x40039010,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
        namespace ValValC{
        }
    }
    namespace Ftm1C1v{    ///<Channel (n) Value
        using Addr = Register::Address<0x40039018,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
        namespace ValValC{
        }
    }
}
