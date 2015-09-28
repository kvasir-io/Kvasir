#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DSU_addr{
        using Addr = Register::Address<0x41002004,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> ADDR; 
    }
    namespace DSU_cid0{
        using Addr = Register::Address<0x41003ff0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PREAMBLEB0; 
    }
    namespace DSU_cid1{
        using Addr = Register::Address<0x41003ff4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PREAMBLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CCLASS; 
    }
    namespace DSU_cid2{
        using Addr = Register::Address<0x41003ff8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PREAMBLEB2; 
    }
    namespace DSU_cid3{
        using Addr = Register::Address<0x41003ffc,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PREAMBLEB3; 
    }
    namespace DSU_ctrl{
        using Addr = Register::Address<0x41002000,0xffffffe2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MBIST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CE; 
    }
    namespace DSU_data{
        using Addr = Register::Address<0x4100200c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace DSU_dcc0{
        using Addr = Register::Address<0x41002010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace DSU_dcc1{
        using Addr = Register::Address<0x41002014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace DSU_did{
        using Addr = Register::Address<0x41002018,0x00400000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DEVSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> REVISION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> DIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> SERIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,23)> FAMILY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> PROCESSOR; 
    }
    namespace DSU_end{
        using Addr = Register::Address<0x41003008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> END; 
    }
    namespace DSU_entry0{
        using Addr = Register::Address<0x41003000,0x00000ffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FMT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,12)> ADDOFF; 
    }
    namespace DSU_entry1{
        using Addr = Register::Address<0x41003004,0x00000ffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FMT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,12)> ADDOFF; 
    }
    namespace DSU_length{
        using Addr = Register::Address<0x41002008,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LENGTH; 
    }
    namespace DSU_memtype{
        using Addr = Register::Address<0x41003fcc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SMEMP; 
    }
    namespace DSU_pid0{
        using Addr = Register::Address<0x41003fe0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PARTNBL; 
    }
    namespace DSU_pid1{
        using Addr = Register::Address<0x41003fe4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PARTNBH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> JEPIDCL; 
    }
    namespace DSU_pid2{
        using Addr = Register::Address<0x41003fe8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> JEPIDCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> JEPU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> REVISION; 
    }
    namespace DSU_pid3{
        using Addr = Register::Address<0x41003fec,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CUSMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> REVAND; 
    }
    namespace DSU_pid4{
        using Addr = Register::Address<0x41003fd0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> JEPCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> FKBC; 
    }
    namespace DSU_statusa{
        using Addr = Register::Address<0x41002001,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CRSTEXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FAIL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PERR; 
    }
    namespace DSU_statusb{
        using Addr = Register::Address<0x41002002,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBGPRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DCCD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DCCD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HPE; 
    }
}
