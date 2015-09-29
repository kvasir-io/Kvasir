#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pulse Width Timer
    namespace PwtR1{    ///<Pulse Width Timer Register 1
        using Addr = Register::Address<0x40033000,0x00000004,0,unsigned>;
        ///PWT Counter Overflow
        enum class pwtovVal {
            v0=0x00000000,     ///<PWT counter no overflow.
            v1=0x00000001,     ///<PWT counter runs from 0xFFFF to 0x0000.
        };
        namespace pwtovValC{
            constexpr MPL::Value<pwtovVal,pwtovVal::v0> v0{};
            constexpr MPL::Value<pwtovVal,pwtovVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pwtovVal> pwtov{}; 
        ///PWT Pulse Width Valid
        enum class pwtrdyVal {
            v0=0x00000000,     ///<PWT pulse width register(s) is not up-to-date.
            v1=0x00000001,     ///<PWT pulse width register(s) has been updated.
        };
        namespace pwtrdyValC{
            constexpr MPL::Value<pwtrdyVal,pwtrdyVal::v0> v0{};
            constexpr MPL::Value<pwtrdyVal,pwtrdyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pwtrdyVal> pwtrdy{}; 
        ///PWT Soft Reset
        enum class pwtsrVal {
            v0=0x00000000,     ///<No action taken.
            v1=0x00000001,     ///<Writing 1 to this field will perform soft reset to PWT.
        };
        namespace pwtsrValC{
            constexpr MPL::Value<pwtsrVal,pwtsrVal::v0> v0{};
            constexpr MPL::Value<pwtsrVal,pwtsrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pwtsrVal> pwtsr{}; 
        ///PWT Counter Overflow Interrupt Enable
        enum class povieVal {
            v0=0x00000000,     ///<Disable PWT to generate interrupt when PWTOV is set.
            v1=0x00000001,     ///<Enable PWT to generate interrupt when PWTOV is set.
        };
        namespace povieValC{
            constexpr MPL::Value<povieVal,povieVal::v0> v0{};
            constexpr MPL::Value<povieVal,povieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,povieVal> povie{}; 
        ///PWT Pulse Width Data Ready Interrupt Enable
        enum class prdyieVal {
            v0=0x00000000,     ///<Disable PWT to generate interrupt when PWTRDY is set.
            v1=0x00000001,     ///<Enable PWT to generate interrupt when PWTRDY is set.
        };
        namespace prdyieValC{
            constexpr MPL::Value<prdyieVal,prdyieVal::v0> v0{};
            constexpr MPL::Value<prdyieVal,prdyieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,prdyieVal> prdyie{}; 
        ///PWT Module Interrupt Enable
        enum class pwtieVal {
            v0=0x00000000,     ///<Disables the PWT to generate interrupt.
            v1=0x00000001,     ///<Enables the PWT to generate interrupt.
        };
        namespace pwtieValC{
            constexpr MPL::Value<pwtieVal,pwtieVal::v0> v0{};
            constexpr MPL::Value<pwtieVal,pwtieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pwtieVal> pwtie{}; 
        ///PWT Module Enable
        enum class pwtenVal {
            v0=0x00000000,     ///<The PWT is disabled.
            v1=0x00000001,     ///<The PWT is enabled.
        };
        namespace pwtenValC{
            constexpr MPL::Value<pwtenVal,pwtenVal::v0> v0{};
            constexpr MPL::Value<pwtenVal,pwtenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pwtenVal> pwten{}; 
        ///PWT Clock Prescaler (CLKPRE) Setting
        enum class preVal {
            v000=0x00000000,     ///<Clock divided by 1.
            v001=0x00000001,     ///<Clock divided by 2.
            v010=0x00000002,     ///<Clock divided by 4.
            v011=0x00000003,     ///<Clock divided by 8.
            v100=0x00000004,     ///<Clock divided by 16.
            v101=0x00000005,     ///<Clock divided by 32.
            v110=0x00000006,     ///<Clock divided by 64.
            v111=0x00000007,     ///<Clock divided by 128.
        };
        namespace preValC{
            constexpr MPL::Value<preVal,preVal::v000> v000{};
            constexpr MPL::Value<preVal,preVal::v001> v001{};
            constexpr MPL::Value<preVal,preVal::v010> v010{};
            constexpr MPL::Value<preVal,preVal::v011> v011{};
            constexpr MPL::Value<preVal,preVal::v100> v100{};
            constexpr MPL::Value<preVal,preVal::v101> v101{};
            constexpr MPL::Value<preVal,preVal::v110> v110{};
            constexpr MPL::Value<preVal,preVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,preVal> pre{}; 
        ///PWT Input Edge Sensitivity
        enum class edgeVal {
            v00=0x00000000,     ///<The first falling-edge starts the pulse width measurement, and on all the subsequent falling edges, the pulse width is captured.
            v01=0x00000001,     ///<The first rising edge starts the pulse width measurement, and on all the subsequent rising and falling edges, the pulse width is captured.
            v10=0x00000002,     ///<The first falling edge starts the pulse width measurement, and on all the subsequent rising and falling edges, the pulse width is captured.
            v11=0x00000003,     ///<The first-rising edge starts the pulse width measurement, and on all the subsequent rising edges, the pulse width is captured.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::v00> v00{};
            constexpr MPL::Value<edgeVal,edgeVal::v01> v01{};
            constexpr MPL::Value<edgeVal,edgeVal::v10> v10{};
            constexpr MPL::Value<edgeVal,edgeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///PWT Pulse Inputs Selection
        enum class pinselVal {
            v00=0x00000000,     ///<PWTIN[0] is enabled.
            v01=0x00000001,     ///<PWTIN[1] is enabled.
            v10=0x00000002,     ///<PWTIN[2] enabled.
            v11=0x00000003,     ///<PWTIN[3] enabled.
        };
        namespace pinselValC{
            constexpr MPL::Value<pinselVal,pinselVal::v00> v00{};
            constexpr MPL::Value<pinselVal,pinselVal::v01> v01{};
            constexpr MPL::Value<pinselVal,pinselVal::v10> v10{};
            constexpr MPL::Value<pinselVal,pinselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,pinselVal> pinsel{}; 
        ///PWT Clock Source Selection
        enum class pclksVal {
            v0=0x00000000,     ///<Bus clock is selected as the clock source of PWT counter.
            v1=0x00000001,     ///<Alternative clock is selected as the clock source of PWT counter.
        };
        namespace pclksValC{
            constexpr MPL::Value<pclksVal,pclksVal::v0> v0{};
            constexpr MPL::Value<pclksVal,pclksVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pclksVal> pclks{}; 
        ///Positive Pulse Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ppw{}; 
    }
    namespace PwtR2{    ///<Pulse Width Timer Register 2
        using Addr = Register::Address<0x40033004,0x00000000,0,unsigned>;
        ///Negative Pulse Width. It is suggested to use half-word (16-bit) or word (32-bit) to read out this value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> npw{}; 
        ///PWT Counter. It is suggested to use half-word (16-bit) or word (32-bit) to read out this value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> pwtc{}; 
    }
}
