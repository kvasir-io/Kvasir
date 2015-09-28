#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecodepagesize{
        using Addr = Register::Address<0x10000010,0xffffffff>;
    }
    namespace Nonecodesize{
        using Addr = Register::Address<0x10000014,0xffffffff>;
    }
    namespace Noneclenr0{
        using Addr = Register::Address<0x10000028,0xffffffff>;
    }
    namespace Noneppfc{
        using Addr = Register::Address<0x1000002c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PPFC; 
    }
    namespace Nonenumramblock{
        using Addr = Register::Address<0x10000034,0xffffffff>;
    }
    namespace Nonesizeramblocks{
        using Addr = Register::Address<0x10000038,0xffffffff>;
    }
    namespace Nonesizeramblock0{
        using Addr = Register::Address<0x10000038,0xffffffff>;
    }
    namespace Nonesizeramblock1{
        using Addr = Register::Address<0x1000003c,0xffffffff>;
    }
    namespace Nonesizeramblock2{
        using Addr = Register::Address<0x10000040,0xffffffff>;
    }
    namespace Nonesizeramblock3{
        using Addr = Register::Address<0x10000044,0xffffffff>;
    }
    namespace Noneconfigid{
        using Addr = Register::Address<0x1000005c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> FWID; 
    }
    namespace Nonedeviceid0{
        using Addr = Register::Address<0x10000060,0xffffffff>;
    }
    namespace Nonedeviceid1{
        using Addr = Register::Address<0x10000064,0xffffffff>;
    }
    namespace Noneer0{
        using Addr = Register::Address<0x10000080,0xffffffff>;
    }
    namespace Noneer1{
        using Addr = Register::Address<0x10000084,0xffffffff>;
    }
    namespace Noneer2{
        using Addr = Register::Address<0x10000088,0xffffffff>;
    }
    namespace Noneer3{
        using Addr = Register::Address<0x1000008c,0xffffffff>;
    }
    namespace Noneir0{
        using Addr = Register::Address<0x10000090,0xffffffff>;
    }
    namespace Noneir1{
        using Addr = Register::Address<0x10000094,0xffffffff>;
    }
    namespace Noneir2{
        using Addr = Register::Address<0x10000098,0xffffffff>;
    }
    namespace Noneir3{
        using Addr = Register::Address<0x1000009c,0xffffffff>;
    }
    namespace Nonedeviceaddrtype{
        using Addr = Register::Address<0x100000a0,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DEVICEADDRTYPE; 
    }
    namespace Nonedeviceaddr0{
        using Addr = Register::Address<0x100000a4,0xffffffff>;
    }
    namespace Nonedeviceaddr1{
        using Addr = Register::Address<0x100000a8,0xffffffff>;
    }
    namespace Noneoverrideen{
        using Addr = Register::Address<0x100000ac,0xfffffff6>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NRF_1MBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLE_1MBIT; 
    }
    namespace Nonenrf_1mbit0{
        using Addr = Register::Address<0x100000b0,0xffffffff>;
    }
    namespace Nonenrf_1mbit1{
        using Addr = Register::Address<0x100000b4,0xffffffff>;
    }
    namespace Nonenrf_1mbit2{
        using Addr = Register::Address<0x100000b8,0xffffffff>;
    }
    namespace Nonenrf_1mbit3{
        using Addr = Register::Address<0x100000bc,0xffffffff>;
    }
    namespace Nonenrf_1mbit4{
        using Addr = Register::Address<0x100000c0,0xffffffff>;
    }
    namespace Noneble_1mbit0{
        using Addr = Register::Address<0x100000ec,0xffffffff>;
    }
    namespace Noneble_1mbit1{
        using Addr = Register::Address<0x100000f0,0xffffffff>;
    }
    namespace Noneble_1mbit2{
        using Addr = Register::Address<0x100000f4,0xffffffff>;
    }
    namespace Noneble_1mbit3{
        using Addr = Register::Address<0x100000f8,0xffffffff>;
    }
    namespace Noneble_1mbit4{
        using Addr = Register::Address<0x100000fc,0xffffffff>;
    }
}
