#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//WDT
    namespace NonewdtCr{    ///<WDT_CR
        using Addr = Register::Address<0x40068000,0x0000fffe,0,unsigned>;
        ///WDTRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdtrs{}; 
        namespace WdtrsValC{
        }
        ///RSKEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> rskey{}; 
        namespace RskeyValC{
        }
    }
    namespace NonewdtMr0{    ///<WDT_MR0
        using Addr = Register::Address<0x40068004,0xffffc000,0,unsigned>;
        ///WDTV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> wdtv{}; 
        namespace WdtvValC{
        }
        ///WDTFIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wdtfien{}; 
        namespace WdtfienValC{
        }
        ///WDTRSTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wdtrsten{}; 
        namespace WdtrstenValC{
        }
    }
    namespace NonewdtMr1{    ///<WDT_MR1
        using Addr = Register::Address<0x40068008,0xffff8000,0,unsigned>;
        ///WDTD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> wdtd{}; 
        namespace WdtdValC{
        }
        ///WPSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> wpsc{}; 
        namespace WpscValC{
        }
    }
    namespace NonewdtSr{    ///<WDT_SR
        using Addr = Register::Address<0x4006800c,0xfffffffc,0,unsigned>;
        ///WDTUF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdtuf{}; 
        namespace WdtufValC{
        }
        ///WDTERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wdterr{}; 
        namespace WdterrValC{
        }
    }
    namespace NonewdtPr{    ///<WDT_PR
        using Addr = Register::Address<0x40068010,0xffff0000,0,unsigned>;
        ///PROTECT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> protect{}; 
        namespace ProtectValC{
        }
    }
}
