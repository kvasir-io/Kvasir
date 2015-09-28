#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FTFE_fstat{
        using Addr = Register::Address<0x40020000,0xffffff0e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MGSTAT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FPVIOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACCERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RDCOLERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCIF; 
    }
    namespace FTFE_fcnfg{
        using Addr = Register::Address<0x40020001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EEERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RAMRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PFLSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SWAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERSSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ERSAREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RDCOLLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCIE; 
    }
    namespace FTFE_fsec{
        using Addr = Register::Address<0x40020002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> FSLACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> KEYEN; 
    }
    namespace FTFE_fopt{
        using Addr = Register::Address<0x40020003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> OPT; 
    }
    namespace FTFE_fccob3{
        using Addr = Register::Address<0x40020004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFE_fccob2{
        using Addr = Register::Address<0x40020005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFE_fccob1{
        using Addr = Register::Address<0x40020006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFE_fccob0{
        using Addr = Register::Address<0x40020007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFE_fccob7{
        using Addr = Register::Address<0x40020008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFE_fccob6{
        using Addr = Register::Address<0x40020009,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFE_fccob5{
        using Addr = Register::Address<0x4002000a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFE_fccob4{
        using Addr = Register::Address<0x4002000b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFE_fccobb{
        using Addr = Register::Address<0x4002000c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFE_fccoba{
        using Addr = Register::Address<0x4002000d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFE_fccob9{
        using Addr = Register::Address<0x4002000e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFE_fccob8{
        using Addr = Register::Address<0x4002000f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFE_fprot3{
        using Addr = Register::Address<0x40020010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
    namespace FTFE_fprot2{
        using Addr = Register::Address<0x40020011,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
    namespace FTFE_fprot1{
        using Addr = Register::Address<0x40020012,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
    namespace FTFE_fprot0{
        using Addr = Register::Address<0x40020013,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
    namespace FTFE_feprot{
        using Addr = Register::Address<0x40020016,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EPROT; 
    }
    namespace FTFE_fdprot{
        using Addr = Register::Address<0x40020017,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DPROT; 
    }
    namespace FTFE_xacch3{
        using Addr = Register::Address<0x40020018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFE_xacch2{
        using Addr = Register::Address<0x40020019,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFE_xacch1{
        using Addr = Register::Address<0x4002001a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFE_xacch0{
        using Addr = Register::Address<0x4002001b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFE_xaccl3{
        using Addr = Register::Address<0x4002001c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFE_xaccl2{
        using Addr = Register::Address<0x4002001d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFE_xaccl1{
        using Addr = Register::Address<0x4002001e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFE_xaccl0{
        using Addr = Register::Address<0x4002001f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XA; 
    }
    namespace FTFE_sacch3{
        using Addr = Register::Address<0x40020020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFE_sacch2{
        using Addr = Register::Address<0x40020021,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFE_sacch1{
        using Addr = Register::Address<0x40020022,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFE_sacch0{
        using Addr = Register::Address<0x40020023,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFE_saccl3{
        using Addr = Register::Address<0x40020024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFE_saccl2{
        using Addr = Register::Address<0x40020025,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFE_saccl1{
        using Addr = Register::Address<0x40020026,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFE_saccl0{
        using Addr = Register::Address<0x40020027,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SA; 
    }
    namespace FTFE_facss{
        using Addr = Register::Address<0x40020028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SGSIZE; 
    }
    namespace FTFE_facsn{
        using Addr = Register::Address<0x4002002b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> NUMSG; 
    }
}
