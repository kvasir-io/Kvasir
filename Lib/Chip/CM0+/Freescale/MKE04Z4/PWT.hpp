#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pulse Width Timer
    namespace PwtR1{    ///<Pulse Width Timer Register 1
        using Addr = Register::Address<0x40033000,0x00000004,0,unsigned>;
        ///PWT counter overflow
        enum class PwtovVal {
            v0=0x00000000,     ///<PWT counter no overflow.
            v1=0x00000001,     ///<PWT counter run from 0xFFFF to 0x0000.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PwtovVal> pwtov{}; 
        namespace PwtovValC{
            constexpr Register::FieldValue<decltype(pwtov)::Type,PwtovVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pwtov)::Type,PwtovVal::v1> v1{};
        }
        ///PWT pulse width valid
        enum class PwtrdyVal {
            v0=0x00000000,     ///<PWT pulse width register(s) is not up-to-date.
            v1=0x00000001,     ///<PWT pulse width register(s) has been updated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PwtrdyVal> pwtrdy{}; 
        namespace PwtrdyValC{
            constexpr Register::FieldValue<decltype(pwtrdy)::Type,PwtrdyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pwtrdy)::Type,PwtrdyVal::v1> v1{};
        }
        ///PWT Soft Reset
        enum class PwtsrVal {
            v0=0x00000000,     ///<No action taken.
            v1=0x00000001,     ///<Writing 1 to this bit will perform soft reset to PWT.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PwtsrVal> pwtsr{}; 
        namespace PwtsrValC{
            constexpr Register::FieldValue<decltype(pwtsr)::Type,PwtsrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pwtsr)::Type,PwtsrVal::v1> v1{};
        }
        ///PWT counter overflow interrupt enable
        enum class PovieVal {
            v0=0x00000000,     ///<Disable PWT to generate interrupt when PWTOV is set.
            v1=0x00000001,     ///<Enable PWT to generate interrupt when PWTOV is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PovieVal> povie{}; 
        namespace PovieValC{
            constexpr Register::FieldValue<decltype(povie)::Type,PovieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(povie)::Type,PovieVal::v1> v1{};
        }
        ///PWT pulse width data ready interrupt enable
        enum class PrdyieVal {
            v0=0x00000000,     ///<Disable PWT to generate interrupt when PWTRDY is set.
            v1=0x00000001,     ///<Enable PWT to generate interrupt when PWTRDY is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,PrdyieVal> prdyie{}; 
        namespace PrdyieValC{
            constexpr Register::FieldValue<decltype(prdyie)::Type,PrdyieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(prdyie)::Type,PrdyieVal::v1> v1{};
        }
        ///PWT module interrupt enable
        enum class PwtieVal {
            v0=0x00000000,     ///<Disables the PWT to generate interrupt.
            v1=0x00000001,     ///<Enables the PWT to generate interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PwtieVal> pwtie{}; 
        namespace PwtieValC{
            constexpr Register::FieldValue<decltype(pwtie)::Type,PwtieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pwtie)::Type,PwtieVal::v1> v1{};
        }
        ///PWT Module Enable
        enum class PwtenVal {
            v0=0x00000000,     ///<The PWT is disabled.
            v1=0x00000001,     ///<The PWT is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PwtenVal> pwten{}; 
        namespace PwtenValC{
            constexpr Register::FieldValue<decltype(pwten)::Type,PwtenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pwten)::Type,PwtenVal::v1> v1{};
        }
        ///PWT Clock Pre-scaler(CLKPRE) Setting
        enum class PreVal {
            v000=0x00000000,     ///<Clock divied by 1.
            v001=0x00000001,     ///<Clock divied by 2.
            v010=0x00000002,     ///<Clock divied by 4.
            v011=0x00000003,     ///<Clock divied by 8.
            v100=0x00000004,     ///<Clock divied by 16.
            v101=0x00000005,     ///<Clock divied by 32.
            v110=0x00000006,     ///<Clock divied by 64.
            v111=0x00000007,     ///<Clock divied by 128.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,PreVal> pre{}; 
        namespace PreValC{
            constexpr Register::FieldValue<decltype(pre)::Type,PreVal::v000> v000{};
            constexpr Register::FieldValue<decltype(pre)::Type,PreVal::v001> v001{};
            constexpr Register::FieldValue<decltype(pre)::Type,PreVal::v010> v010{};
            constexpr Register::FieldValue<decltype(pre)::Type,PreVal::v011> v011{};
            constexpr Register::FieldValue<decltype(pre)::Type,PreVal::v100> v100{};
            constexpr Register::FieldValue<decltype(pre)::Type,PreVal::v101> v101{};
            constexpr Register::FieldValue<decltype(pre)::Type,PreVal::v110> v110{};
            constexpr Register::FieldValue<decltype(pre)::Type,PreVal::v111> v111{};
        }
        ///PWT input edge sensitivity
        enum class EdgeVal {
            v00=0x00000000,     ///<The first falling edge starts the pulse width measurement, upon all the following falling edges, the pulse width is captured.
            v01=0x00000001,     ///<The first rising edge starts the pulse width measurement, upon all the following rising and falling edges, the pulse width is captured.
            v10=0x00000002,     ///<The first falling edge starts the pulse width measurement, upon all the following rising and falling edges, the pulse width is captured.
            v11=0x00000003,     ///<The first rising edge starts the pulse width measurement, upon all the following rising edges, the pulse width is captured.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::v11> v11{};
        }
        ///PWT Pulse Inputs Selection
        enum class PinselVal {
            v00=0x00000000,     ///<PWTIN[0].
            v01=0x00000001,     ///<PWTIN[1].
            v10=0x00000002,     ///<PWTIN[2].
            v11=0x00000003,     ///<PWTIN[3].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,PinselVal> pinsel{}; 
        namespace PinselValC{
            constexpr Register::FieldValue<decltype(pinsel)::Type,PinselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pinsel)::Type,PinselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pinsel)::Type,PinselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pinsel)::Type,PinselVal::v11> v11{};
        }
        ///PWT Clock Source Selection
        enum class PclksVal {
            v0=0x00000000,     ///<Bus clock is selected as the clock source of PWT counter.
            v1=0x00000001,     ///<Alternative clock is selected as the clock source of PWT counter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,PclksVal> pclks{}; 
        namespace PclksValC{
            constexpr Register::FieldValue<decltype(pclks)::Type,PclksVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pclks)::Type,PclksVal::v1> v1{};
        }
        ///Positive Pulse Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ppw{}; 
    }
    namespace PwtR2{    ///<Pulse Width Timer Register 2
        using Addr = Register::Address<0x40033004,0x00000000,0,unsigned>;
        ///Negative Pulse Width. It is suggested to use half-word(16bit) or word(32bit) to read out this value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> npw{}; 
        ///PWT counter.It is suggested to use half-word(16bit) or word(32bit) to read out this value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> pwtc{}; 
    }
}
