#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<System Configuration
        using Addr = Register::Address<0x400490b0,0xfffffffc,0,unsigned>;
        ///Faster DMA Mode Enable. 
        enum class fdmaenVal {
            disabled=0x00000000,     ///<Disable the faster DMA mode.  The DMA module and channels will behave like a standard uDMA.
            enabled=0x00000001,     ///<Enable the faster DMA mode.
        };
        namespace fdmaenValC{
            constexpr MPL::Value<fdmaenVal,fdmaenVal::disabled> disabled{};
            constexpr MPL::Value<fdmaenVal,fdmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fdmaenVal> fdmaen{}; 
        ///Power Mode 8 Debug Enable. 
        enum class pm8dbgenVal {
            disabled=0x00000000,     ///<Disable debugging through Power Mode 8.
            enabled=0x00000001,     ///<Enable debugging through Power Mode 8. Power measurements cannot be made with debugging enabled.
        };
        namespace pm8dbgenValC{
            constexpr MPL::Value<pm8dbgenVal,pm8dbgenVal::disabled> disabled{};
            constexpr MPL::Value<pm8dbgenVal,pm8dbgenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pm8dbgenVal> pm8dbgen{}; 
    }
}
