#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Group GPIO input interrupt 0
    namespace Nonectrl{    ///<GPIO grouped interrupt control register
        using Addr = Register::Address<0x40010000,0xfffffff8,0,unsigned>;
        ///Group interrupt status. This bit is cleared by writing a
								one to it. Writing zero has no effect.
        enum class int_Val {
            noRequest=0x00000000,     ///<No request. No interrupt request is
										pending.
            requestActive=0x00000001,     ///<Request active. Interrupt request is
										active.
        };
        namespace int_ValC{
            constexpr MPL::Value<int_Val,int_Val::noRequest> noRequest{};
            constexpr MPL::Value<int_Val,int_Val::requestActive> requestActive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,int_Val> int_{}; 
        ///Combine enabled inputs for group interrupt
        enum class combVal {
            or_=0x00000000,     ///<Or. OR functionality: A grouped interrupt is
										generated when any one of the enabled inputs is active
										(based on its programmed polarity).
            and_=0x00000001,     ///<And. AND functionality: An interrupt is generated
										when all enabled bits are active (based on their programmed
										polarity).
        };
        namespace combValC{
            constexpr MPL::Value<combVal,combVal::or_> or_{};
            constexpr MPL::Value<combVal,combVal::and_> and_{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,combVal> comb{}; 
        ///Group interrupt trigger
        enum class trigVal {
            edgeTriggered=0x00000000,     ///<Edge-triggered.
            levelTriggered=0x00000001,     ///<Level-triggered.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::edgeTriggered> edgeTriggered{};
            constexpr MPL::Value<trigVal,trigVal::levelTriggered> levelTriggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace NoneportPol0{    ///<GPIO grouped interrupt port 0 polarity register
        using Addr = Register::Address<0x40010020,0x00000000,0,unsigned>;
        ///Configure pin polarity of port m pins for group interrupt.
								Bit n corresponds to pin PIOm_n of port m. 0 = the pin is active
								LOW. If the level on this pin is LOW, the pin contributes to the
								group interrupt. 1 = the pin is active HIGH. If the level on this
								pin is HIGH, the pin contributes to the group
								interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pol{}; 
    }
    namespace NoneportPol1{    ///<GPIO grouped interrupt port 0 polarity register
        using Addr = Register::Address<0x40010024,0x00000000,0,unsigned>;
        ///Configure pin polarity of port m pins for group interrupt.
								Bit n corresponds to pin PIOm_n of port m. 0 = the pin is active
								LOW. If the level on this pin is LOW, the pin contributes to the
								group interrupt. 1 = the pin is active HIGH. If the level on this
								pin is HIGH, the pin contributes to the group
								interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pol{}; 
    }
    namespace NoneportPol2{    ///<GPIO grouped interrupt port 0 polarity register
        using Addr = Register::Address<0x40010028,0x00000000,0,unsigned>;
        ///Configure pin polarity of port m pins for group interrupt.
								Bit n corresponds to pin PIOm_n of port m. 0 = the pin is active
								LOW. If the level on this pin is LOW, the pin contributes to the
								group interrupt. 1 = the pin is active HIGH. If the level on this
								pin is HIGH, the pin contributes to the group
								interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pol{}; 
    }
    namespace NoneportEna0{    ///<GPIO grouped interrupt port 0 enable register
        using Addr = Register::Address<0x40010040,0x00000000,0,unsigned>;
        ///Enable port 0 pin for group interrupt. Bit n corresponds to
								pin Pm_n of port m. 0 = the port 0 pin is disabled and does not
								contribute to the grouped interrupt. 1 = the port 0 pin is enabled
								and contributes to the grouped interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ena{}; 
    }
    namespace NoneportEna1{    ///<GPIO grouped interrupt port 0 enable register
        using Addr = Register::Address<0x40010044,0x00000000,0,unsigned>;
        ///Enable port 0 pin for group interrupt. Bit n corresponds to
								pin Pm_n of port m. 0 = the port 0 pin is disabled and does not
								contribute to the grouped interrupt. 1 = the port 0 pin is enabled
								and contributes to the grouped interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ena{}; 
    }
    namespace NoneportEna2{    ///<GPIO grouped interrupt port 0 enable register
        using Addr = Register::Address<0x40010048,0x00000000,0,unsigned>;
        ///Enable port 0 pin for group interrupt. Bit n corresponds to
								pin Pm_n of port m. 0 = the port 0 pin is disabled and does not
								contribute to the grouped interrupt. 1 = the port 0 pin is enabled
								and contributes to the grouped interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ena{}; 
    }
}
