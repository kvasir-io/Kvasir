#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MTB_position{
        using Addr = Register::Address<0xf0000000,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3)> POINTER; 
    }
    namespace MTB_master{
        using Addr = Register::Address<0xf0000004,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TSTARTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TSTOPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SFRWPRIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RAMPRIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HALTREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EN; 
    }
    namespace MTB_flow{
        using Addr = Register::Address<0xf0000008,0x00000004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AUTOSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTOHALT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3)> WATERMARK; 
    }
    namespace MTB_base{
        using Addr = Register::Address<0xf000000c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BASEADDR; 
    }
    namespace MTB_modectrl{
        using Addr = Register::Address<0xf0000f00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MODECTRL; 
    }
    namespace MTB_tagset{
        using Addr = Register::Address<0xf0000fa0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TAGSET; 
    }
    namespace MTB_tagclear{
        using Addr = Register::Address<0xf0000fa4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TAGCLEAR; 
    }
    namespace MTB_lockaccess{
        using Addr = Register::Address<0xf0000fb0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> LOCKACCESS; 
    }
    namespace MTB_lockstat{
        using Addr = Register::Address<0xf0000fb4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> LOCKSTAT; 
    }
    namespace MTB_authstat{
        using Addr = Register::Address<0xf0000fb8,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BIT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BIT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BIT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BIT3; 
    }
    namespace MTB_devicearch{
        using Addr = Register::Address<0xf0000fbc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DEVICEARCH; 
    }
    namespace MTB_devicecfg{
        using Addr = Register::Address<0xf0000fc8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DEVICECFG; 
    }
    namespace MTB_devicetypid{
        using Addr = Register::Address<0xf0000fcc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DEVICETYPID; 
    }
    namespace MTB_periphid4{
        using Addr = Register::Address<0xf0000fd0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTB_periphid5{
        using Addr = Register::Address<0xf0000fd4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTB_periphid6{
        using Addr = Register::Address<0xf0000fd8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTB_periphid7{
        using Addr = Register::Address<0xf0000fdc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTB_periphid0{
        using Addr = Register::Address<0xf0000fe0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTB_periphid1{
        using Addr = Register::Address<0xf0000fe4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTB_periphid2{
        using Addr = Register::Address<0xf0000fe8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTB_periphid3{
        using Addr = Register::Address<0xf0000fec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTB_compid0{
        using Addr = Register::Address<0xf0000ff0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> COMPID; 
    }
    namespace MTB_compid1{
        using Addr = Register::Address<0xf0000ff4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> COMPID; 
    }
    namespace MTB_compid2{
        using Addr = Register::Address<0xf0000ff8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> COMPID; 
    }
    namespace MTB_compid3{
        using Addr = Register::Address<0xf0000ffc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> COMPID; 
    }
}
