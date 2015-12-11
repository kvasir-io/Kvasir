#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Control
        using Addr = Register::Address<0x40039000,0x7ffffffd,0,unsigned>;
        ///LDO Bias Current Selection. 
        enum class LdoibiasVal {
            highbias=0x00000000,     ///<Select high bias.
            lowbias=0x00000001,     ///<Select low bias (AHB frequency <= 2.5 MHz).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LdoibiasVal> ldoibias{}; 
        namespace LdoibiasValC{
            constexpr Register::FieldValue<decltype(ldoibias)::Type,LdoibiasVal::highbias> highbias{};
            constexpr Register::FieldValue<decltype(ldoibias)::Type,LdoibiasVal::lowbias> lowbias{};
        }
        ///LDO Analog Enable. 
        enum class LdoaenVal {
            disable=0x00000000,     ///<LDO0 analog output disabled.
            enable=0x00000001,     ///<LDO0 analog output enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,LdoaenVal> ldoaen{}; 
        namespace LdoaenValC{
            constexpr Register::FieldValue<decltype(ldoaen)::Type,LdoaenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(ldoaen)::Type,LdoaenVal::enable> enable{};
        }
    }
}
