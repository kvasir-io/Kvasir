#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog Comparator Controller
    namespace AccCr{    ///<Control Register
        using Addr = Register::Address<0x40040000,0xfffffffe,0,unsigned>;
        ///SoftWare ReSeT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace AccMr{    ///<Mode Register
        using Addr = Register::Address<0x40040004,0xffff8888,0,unsigned>;
        ///SELection for MINUS comparator input
        enum class SelminusVal {
            ts=0x00000000,     ///<SelectTS
            advref=0x00000001,     ///<Select ADVREF
            dac0=0x00000002,     ///<Select DAC0
            dac1=0x00000003,     ///<Select DAC1
            ad0=0x00000004,     ///<Select AD0
            ad1=0x00000005,     ///<Select AD1
            ad2=0x00000006,     ///<Select AD2
            ad3=0x00000007,     ///<Select AD3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,SelminusVal> selminus{}; 
        namespace SelminusValC{
            constexpr Register::FieldValue<decltype(selminus)::Type,SelminusVal::ts> ts{};
            constexpr Register::FieldValue<decltype(selminus)::Type,SelminusVal::advref> advref{};
            constexpr Register::FieldValue<decltype(selminus)::Type,SelminusVal::dac0> dac0{};
            constexpr Register::FieldValue<decltype(selminus)::Type,SelminusVal::dac1> dac1{};
            constexpr Register::FieldValue<decltype(selminus)::Type,SelminusVal::ad0> ad0{};
            constexpr Register::FieldValue<decltype(selminus)::Type,SelminusVal::ad1> ad1{};
            constexpr Register::FieldValue<decltype(selminus)::Type,SelminusVal::ad2> ad2{};
            constexpr Register::FieldValue<decltype(selminus)::Type,SelminusVal::ad3> ad3{};
        }
        ///SELection for PLUS comparator input
        enum class SelplusVal {
            ad0=0x00000000,     ///<Select AD0
            ad1=0x00000001,     ///<Select AD1
            ad2=0x00000002,     ///<Select AD2
            ad3=0x00000003,     ///<Select AD3
            ad4=0x00000004,     ///<Select AD4
            ad5=0x00000005,     ///<Select AD5
            ad6=0x00000006,     ///<Select AD6
            ad7=0x00000007,     ///<Select AD7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,SelplusVal> selplus{}; 
        namespace SelplusValC{
            constexpr Register::FieldValue<decltype(selplus)::Type,SelplusVal::ad0> ad0{};
            constexpr Register::FieldValue<decltype(selplus)::Type,SelplusVal::ad1> ad1{};
            constexpr Register::FieldValue<decltype(selplus)::Type,SelplusVal::ad2> ad2{};
            constexpr Register::FieldValue<decltype(selplus)::Type,SelplusVal::ad3> ad3{};
            constexpr Register::FieldValue<decltype(selplus)::Type,SelplusVal::ad4> ad4{};
            constexpr Register::FieldValue<decltype(selplus)::Type,SelplusVal::ad5> ad5{};
            constexpr Register::FieldValue<decltype(selplus)::Type,SelplusVal::ad6> ad6{};
            constexpr Register::FieldValue<decltype(selplus)::Type,SelplusVal::ad7> ad7{};
        }
        ///Analog Comparator ENable
        enum class AcenVal {
            dis=0x00000000,     ///<Analog Comparator Disabled.
            en=0x00000001,     ///<Analog Comparator Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AcenVal> acen{}; 
        namespace AcenValC{
            constexpr Register::FieldValue<decltype(acen)::Type,AcenVal::dis> dis{};
            constexpr Register::FieldValue<decltype(acen)::Type,AcenVal::en> en{};
        }
        ///EDGE TYPe
        enum class EdgetypVal {
            rising=0x00000000,     ///<only rising edge of comparator output
            falling=0x00000001,     ///<falling edge of comparator output
            any=0x00000002,     ///<any edge of comparator output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,EdgetypVal> edgetyp{}; 
        namespace EdgetypValC{
            constexpr Register::FieldValue<decltype(edgetyp)::Type,EdgetypVal::rising> rising{};
            constexpr Register::FieldValue<decltype(edgetyp)::Type,EdgetypVal::falling> falling{};
            constexpr Register::FieldValue<decltype(edgetyp)::Type,EdgetypVal::any> any{};
        }
        ///INVert comparator output
        enum class InvVal {
            dis=0x00000000,     ///<Analog Comparator output is directly processed.
            en=0x00000001,     ///<Analog Comparator output is inverted prior to being processed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::dis> dis{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::en> en{};
        }
        ///SELection of Fault Source
        enum class SelfsVal {
            cf=0x00000000,     ///<the CF flag is used to drive the FAULT output.
            output=0x00000001,     ///<the output of the Analog Comparator flag is used to drive the FAULT output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,SelfsVal> selfs{}; 
        namespace SelfsValC{
            constexpr Register::FieldValue<decltype(selfs)::Type,SelfsVal::cf> cf{};
            constexpr Register::FieldValue<decltype(selfs)::Type,SelfsVal::output> output{};
        }
        ///Fault Enable
        enum class FeVal {
            dis=0x00000000,     ///<the FAULT output is tied to 0.
            en=0x00000001,     ///<the FAULT output is driven by the signal defined by SELFS.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,FeVal> fe{}; 
        namespace FeValC{
            constexpr Register::FieldValue<decltype(fe)::Type,FeVal::dis> dis{};
            constexpr Register::FieldValue<decltype(fe)::Type,FeVal::en> en{};
        }
    }
    namespace AccIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40040024,0xfffffffe,0,unsigned>;
        ///Comparison Edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ce{}; 
    }
    namespace AccIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x40040028,0xfffffffe,0,unsigned>;
        ///Comparison Edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ce{}; 
    }
    namespace AccImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4004002c,0xfffffffe,0,unsigned>;
        ///Comparison Edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ce{}; 
    }
    namespace AccIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40040030,0x7ffffffc,0,unsigned>;
        ///Comparison Edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ce{}; 
        ///Synchronized Comparator Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sco{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace AccAcr{    ///<Analog Control Register
        using Addr = Register::Address<0x40040094,0xfffffff8,0,unsigned>;
        ///Current SELection
        enum class IselVal {
            lopw=0x00000000,     ///<low power option.
            hisp=0x00000001,     ///<high speed option.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IselVal> isel{}; 
        namespace IselValC{
            constexpr Register::FieldValue<decltype(isel)::Type,IselVal::lopw> lopw{};
            constexpr Register::FieldValue<decltype(isel)::Type,IselVal::hisp> hisp{};
        }
        ///HYSTeresis selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> hyst{}; 
    }
    namespace AccWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x400400e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace AccWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0x400400e8,0xfffffffe,0,unsigned>;
        ///Write PROTection ERRor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wproterr{}; 
    }
}
