#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Control
        using Addr = Register::Address<0x40039000,0x7ffffffd,0,unsigned>;
        ///LDO Bias Current Selection. 
        enum class ldoibiasVal {
            highbias=0x00000000,     ///<Select high bias.
            lowbias=0x00000001,     ///<Select low bias (AHB frequency <= 2.5 MHz).
        };
        namespace ldoibiasValC{
            constexpr MPL::Value<ldoibiasVal,ldoibiasVal::highbias> highbias{};
            constexpr MPL::Value<ldoibiasVal,ldoibiasVal::lowbias> lowbias{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ldoibiasVal> ldoibias{}; 
        ///LDO Analog Enable. 
        enum class ldoaenVal {
            disable=0x00000000,     ///<LDO0 analog output disabled.
            enable=0x00000001,     ///<LDO0 analog output enabled.
        };
        namespace ldoaenValC{
            constexpr MPL::Value<ldoaenVal,ldoaenVal::disable> disable{};
            constexpr MPL::Value<ldoaenVal,ldoaenVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ldoaenVal> ldoaen{}; 
    }
}
