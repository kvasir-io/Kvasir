#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog Comparator Controller
    namespace AccCr{    ///<Control Register
        using Addr = Register::Address<0x40040000,0xfffffffe,0,unsigned>;
        ///SoftWare ReSeT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace AccMr{    ///<Mode Register
        using Addr = Register::Address<0x40040004,0xffff8888,0,unsigned>;
        ///SELection for MINUS comparator input
        enum class selminusVal {
            ts=0x00000000,     ///<SelectTS
            advref=0x00000001,     ///<Select ADVREF
            dac0=0x00000002,     ///<Select DAC0
            dac1=0x00000003,     ///<Select DAC1
            ad0=0x00000004,     ///<Select AD0
            ad1=0x00000005,     ///<Select AD1
            ad2=0x00000006,     ///<Select AD2
            ad3=0x00000007,     ///<Select AD3
        };
        namespace selminusValC{
            constexpr MPL::Value<selminusVal,selminusVal::ts> ts{};
            constexpr MPL::Value<selminusVal,selminusVal::advref> advref{};
            constexpr MPL::Value<selminusVal,selminusVal::dac0> dac0{};
            constexpr MPL::Value<selminusVal,selminusVal::dac1> dac1{};
            constexpr MPL::Value<selminusVal,selminusVal::ad0> ad0{};
            constexpr MPL::Value<selminusVal,selminusVal::ad1> ad1{};
            constexpr MPL::Value<selminusVal,selminusVal::ad2> ad2{};
            constexpr MPL::Value<selminusVal,selminusVal::ad3> ad3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,selminusVal> selminus{}; 
        ///SELection for PLUS comparator input
        enum class selplusVal {
            ad0=0x00000000,     ///<Select AD0
            ad1=0x00000001,     ///<Select AD1
            ad2=0x00000002,     ///<Select AD2
            ad3=0x00000003,     ///<Select AD3
            ad4=0x00000004,     ///<Select AD4
            ad5=0x00000005,     ///<Select AD5
            ad6=0x00000006,     ///<Select AD6
            ad7=0x00000007,     ///<Select AD7
        };
        namespace selplusValC{
            constexpr MPL::Value<selplusVal,selplusVal::ad0> ad0{};
            constexpr MPL::Value<selplusVal,selplusVal::ad1> ad1{};
            constexpr MPL::Value<selplusVal,selplusVal::ad2> ad2{};
            constexpr MPL::Value<selplusVal,selplusVal::ad3> ad3{};
            constexpr MPL::Value<selplusVal,selplusVal::ad4> ad4{};
            constexpr MPL::Value<selplusVal,selplusVal::ad5> ad5{};
            constexpr MPL::Value<selplusVal,selplusVal::ad6> ad6{};
            constexpr MPL::Value<selplusVal,selplusVal::ad7> ad7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,selplusVal> selplus{}; 
        ///Analog Comparator ENable
        enum class acenVal {
            dis=0x00000000,     ///<Analog Comparator Disabled.
            en=0x00000001,     ///<Analog Comparator Enabled.
        };
        namespace acenValC{
            constexpr MPL::Value<acenVal,acenVal::dis> dis{};
            constexpr MPL::Value<acenVal,acenVal::en> en{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,acenVal> acen{}; 
        ///EDGE TYPe
        enum class edgetypVal {
            rising=0x00000000,     ///<only rising edge of comparator output
            falling=0x00000001,     ///<falling edge of comparator output
            any=0x00000002,     ///<any edge of comparator output
        };
        namespace edgetypValC{
            constexpr MPL::Value<edgetypVal,edgetypVal::rising> rising{};
            constexpr MPL::Value<edgetypVal,edgetypVal::falling> falling{};
            constexpr MPL::Value<edgetypVal,edgetypVal::any> any{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,edgetypVal> edgetyp{}; 
        ///INVert comparator output
        enum class invVal {
            dis=0x00000000,     ///<Analog Comparator output is directly processed.
            en=0x00000001,     ///<Analog Comparator output is inverted prior to being processed.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::dis> dis{};
            constexpr MPL::Value<invVal,invVal::en> en{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,invVal> inv{}; 
        ///SELection of Fault Source
        enum class selfsVal {
            cf=0x00000000,     ///<the CF flag is used to drive the FAULT output.
            output=0x00000001,     ///<the output of the Analog Comparator flag is used to drive the FAULT output.
        };
        namespace selfsValC{
            constexpr MPL::Value<selfsVal,selfsVal::cf> cf{};
            constexpr MPL::Value<selfsVal,selfsVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,selfsVal> selfs{}; 
        ///Fault Enable
        enum class feVal {
            dis=0x00000000,     ///<the FAULT output is tied to 0.
            en=0x00000001,     ///<the FAULT output is driven by the signal defined by SELFS.
        };
        namespace feValC{
            constexpr MPL::Value<feVal,feVal::dis> dis{};
            constexpr MPL::Value<feVal,feVal::en> en{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,feVal> fe{}; 
    }
    namespace AccIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40040024,0xfffffffe,0,unsigned>;
        ///Comparison Edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ce{}; 
    }
    namespace AccIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x40040028,0xfffffffe,0,unsigned>;
        ///Comparison Edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ce{}; 
    }
    namespace AccImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4004002c,0xfffffffe,0,unsigned>;
        ///Comparison Edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ce{}; 
    }
    namespace AccIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40040030,0x7ffffffc,0,unsigned>;
        ///Comparison Edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ce{}; 
        ///Synchronized Comparator Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sco{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace AccAcr{    ///<Analog Control Register
        using Addr = Register::Address<0x40040094,0xfffffff8,0,unsigned>;
        ///Current SELection
        enum class iselVal {
            lopw=0x00000000,     ///<low power option.
            hisp=0x00000001,     ///<high speed option.
        };
        namespace iselValC{
            constexpr MPL::Value<iselVal,iselVal::lopw> lopw{};
            constexpr MPL::Value<iselVal,iselVal::hisp> hisp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,iselVal> isel{}; 
        ///HYSTeresis selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> hyst{}; 
    }
    namespace AccWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x400400e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace AccWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0x400400e8,0xfffffffe,0,unsigned>;
        ///Write PROTection ERRor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wproterr{}; 
    }
}
