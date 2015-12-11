#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<System Configuration
        using Addr = Register::Address<0x400490b0,0xfffffffc,0,unsigned>;
        ///Faster DMA Mode Enable. 
        enum class FdmaenVal {
            disabled=0x00000000,     ///<Disable the faster DMA mode.  The DMA module and channels will behave like a standard uDMA.
            enabled=0x00000001,     ///<Enable the faster DMA mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FdmaenVal> fdmaen{}; 
        namespace FdmaenValC{
            constexpr Register::FieldValue<decltype(fdmaen)::Type,FdmaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fdmaen)::Type,FdmaenVal::enabled> enabled{};
        }
        ///Power Mode 8 Debug Enable. 
        enum class Pm8dbgenVal {
            disabled=0x00000000,     ///<Disable debugging through Power Mode 8.
            enabled=0x00000001,     ///<Enable debugging through Power Mode 8. Power measurements cannot be made with debugging enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pm8dbgenVal> pm8dbgen{}; 
        namespace Pm8dbgenValC{
            constexpr Register::FieldValue<decltype(pm8dbgen)::Type,Pm8dbgenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pm8dbgen)::Type,Pm8dbgenVal::enabled> enabled{};
        }
    }
}
