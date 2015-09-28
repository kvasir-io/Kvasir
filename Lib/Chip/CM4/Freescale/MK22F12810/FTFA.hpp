#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FTFA_fstat{
        using Addr = Register::Address<0x40020000,0xffffff0e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MGSTAT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FPVIOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACCERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RDCOLERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCIF; 
    }
    namespace FTFA_fcnfg{
        using Addr = Register::Address<0x40020001,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERSSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ERSAREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RDCOLLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCIE; 
    }
    namespace FTFA_fsec{
        using Addr = Register::Address<0x40020002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> FSLACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> KEYEN; 
    }
    namespace FTFA_fopt{
        using Addr = Register::Address<0x40020003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> OPT; 
    }
    namespace FTFA_fccob3{
        using Addr = Register::Address<0x40020004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFA_fccob2{
        using Addr = Register::Address<0x40020005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFA_fccob1{
        using Addr = Register::Address<0x40020006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFA_fccob0{
        using Addr = Register::Address<0x40020007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFA_fccob7{
        using Addr = Register::Address<0x40020008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFA_fccob6{
        using Addr = Register::Address<0x40020009,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFA_fccob5{
        using Addr = Register::Address<0x4002000a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFA_fccob4{
        using Addr = Register::Address<0x4002000b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFA_fccobb{
        using Addr = Register::Address<0x4002000c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFA_fccoba{
        using Addr = Register::Address<0x4002000d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFA_fccob9{
        using Addr = Register::Address<0x4002000e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFA_fccob8{
        using Addr = Register::Address<0x4002000f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFA_fprot3{
        using Addr = Register::Address<0x40020010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
    namespace FTFA_fprot2{
        using Addr = Register::Address<0x40020011,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
    namespace FTFA_fprot1{
        using Addr = Register::Address<0x40020012,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
    namespace FTFA_fprot0{
        using Addr = Register::Address<0x40020013,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
    namespace FTFA_xacch3{
        using Addr = Register::Address<0x40020018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFA_xacch2{
        using Addr = Register::Address<0x40020019,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFA_xacch1{
        using Addr = Register::Address<0x4002001a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFA_xacch0{
        using Addr = Register::Address<0x4002001b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFA_xaccl3{
        using Addr = Register::Address<0x4002001c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFA_xaccl2{
        using Addr = Register::Address<0x4002001d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFA_xaccl1{
        using Addr = Register::Address<0x4002001e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFA_xaccl0{
        using Addr = Register::Address<0x4002001f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFA_sacch3{
        using Addr = Register::Address<0x40020020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFA_sacch2{
        using Addr = Register::Address<0x40020021,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFA_sacch1{
        using Addr = Register::Address<0x40020022,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFA_sacch0{
        using Addr = Register::Address<0x40020023,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFA_saccl3{
        using Addr = Register::Address<0x40020024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFA_saccl2{
        using Addr = Register::Address<0x40020025,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFA_saccl1{
        using Addr = Register::Address<0x40020026,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFA_saccl0{
        using Addr = Register::Address<0x40020027,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFA_facss{
        using Addr = Register::Address<0x40020028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SGSIZE; 
    }
    namespace FTFA_facsn{
        using Addr = Register::Address<0x4002002b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> NUMSG; 
    }
}
