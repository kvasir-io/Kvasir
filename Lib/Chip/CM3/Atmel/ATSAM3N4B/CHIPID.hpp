#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Chip Identifier
    namespace ChipidCidr{    ///<Chip ID Register
        using Addr = Register::Address<0x400e0740,0x00000000,0,unsigned>;
        ///Version of the Device
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> version{}; 
        ///Embedded Processor
        enum class eprocVal {
            arm946es=0x00000001,     ///<ARM946ES
            arm7tdmi=0x00000002,     ///<ARM7TDMI
            cm3=0x00000003,     ///<Cortex-M3
            arm920t=0x00000004,     ///<ARM920T
            arm926ejs=0x00000005,     ///<ARM926EJS
            ca5=0x00000006,     ///<Cortex-A5
            cm4=0x00000007,     ///<Cortex-M4
        };
        namespace eprocValC{
            constexpr MPL::Value<eprocVal,eprocVal::arm946es> arm946es{};
            constexpr MPL::Value<eprocVal,eprocVal::arm7tdmi> arm7tdmi{};
            constexpr MPL::Value<eprocVal,eprocVal::cm3> cm3{};
            constexpr MPL::Value<eprocVal,eprocVal::arm920t> arm920t{};
            constexpr MPL::Value<eprocVal,eprocVal::arm926ejs> arm926ejs{};
            constexpr MPL::Value<eprocVal,eprocVal::ca5> ca5{};
            constexpr MPL::Value<eprocVal,eprocVal::cm4> cm4{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,eprocVal> eproc{}; 
        ///Nonvolatile Program Memory Size
        enum class nvpsizVal {
            none=0x00000000,     ///<None
            v8k=0x00000001,     ///<8K bytes
            v16k=0x00000002,     ///<16K bytes
            v32k=0x00000003,     ///<32K bytes
            v64k=0x00000005,     ///<64K bytes
            v128k=0x00000007,     ///<128K bytes
            v256k=0x00000009,     ///<256K bytes
            v512k=0x0000000a,     ///<512K bytes
            v1024k=0x0000000c,     ///<1024K bytes
            v2048k=0x0000000e,     ///<2048K bytes
        };
        namespace nvpsizValC{
            constexpr MPL::Value<nvpsizVal,nvpsizVal::none> none{};
            constexpr MPL::Value<nvpsizVal,nvpsizVal::v8k> v8k{};
            constexpr MPL::Value<nvpsizVal,nvpsizVal::v16k> v16k{};
            constexpr MPL::Value<nvpsizVal,nvpsizVal::v32k> v32k{};
            constexpr MPL::Value<nvpsizVal,nvpsizVal::v64k> v64k{};
            constexpr MPL::Value<nvpsizVal,nvpsizVal::v128k> v128k{};
            constexpr MPL::Value<nvpsizVal,nvpsizVal::v256k> v256k{};
            constexpr MPL::Value<nvpsizVal,nvpsizVal::v512k> v512k{};
            constexpr MPL::Value<nvpsizVal,nvpsizVal::v1024k> v1024k{};
            constexpr MPL::Value<nvpsizVal,nvpsizVal::v2048k> v2048k{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,nvpsizVal> nvpsiz{}; 
        ///Second Nonvolatile Program Memory Size
        enum class nvpsiz2Val {
            none=0x00000000,     ///<None
            v8k=0x00000001,     ///<8K bytes
            v16k=0x00000002,     ///<16K bytes
            v32k=0x00000003,     ///<32K bytes
            v64k=0x00000005,     ///<64K bytes
            v128k=0x00000007,     ///<128K bytes
            v256k=0x00000009,     ///<256K bytes
            v512k=0x0000000a,     ///<512K bytes
            v1024k=0x0000000c,     ///<1024K bytes
            v2048k=0x0000000e,     ///<2048K bytes
        };
        namespace nvpsiz2ValC{
            constexpr MPL::Value<nvpsiz2Val,nvpsiz2Val::none> none{};
            constexpr MPL::Value<nvpsiz2Val,nvpsiz2Val::v8k> v8k{};
            constexpr MPL::Value<nvpsiz2Val,nvpsiz2Val::v16k> v16k{};
            constexpr MPL::Value<nvpsiz2Val,nvpsiz2Val::v32k> v32k{};
            constexpr MPL::Value<nvpsiz2Val,nvpsiz2Val::v64k> v64k{};
            constexpr MPL::Value<nvpsiz2Val,nvpsiz2Val::v128k> v128k{};
            constexpr MPL::Value<nvpsiz2Val,nvpsiz2Val::v256k> v256k{};
            constexpr MPL::Value<nvpsiz2Val,nvpsiz2Val::v512k> v512k{};
            constexpr MPL::Value<nvpsiz2Val,nvpsiz2Val::v1024k> v1024k{};
            constexpr MPL::Value<nvpsiz2Val,nvpsiz2Val::v2048k> v2048k{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,nvpsiz2Val> nvpsiz2{}; 
        ///Internal SRAM Size
        enum class sramsizVal {
            v48k=0x00000000,     ///<48K bytes
            v1k=0x00000001,     ///<1K bytes
            v2k=0x00000002,     ///<2K bytes
            v6k=0x00000003,     ///<6K bytes
            v24k=0x00000004,     ///<24K bytes
            v4k=0x00000005,     ///<4K bytes
            v80k=0x00000006,     ///<80K bytes
            v160k=0x00000007,     ///<160K bytes
            v8k=0x00000008,     ///<8K bytes
            v16k=0x00000009,     ///<16K bytes
            v32k=0x0000000a,     ///<32K bytes
            v64k=0x0000000b,     ///<64K bytes
            v128k=0x0000000c,     ///<128K bytes
            v256k=0x0000000d,     ///<256K bytes
            v96k=0x0000000e,     ///<96K bytes
            v512k=0x0000000f,     ///<512K bytes
        };
        namespace sramsizValC{
            constexpr MPL::Value<sramsizVal,sramsizVal::v48k> v48k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v1k> v1k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v2k> v2k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v6k> v6k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v24k> v24k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v4k> v4k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v80k> v80k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v160k> v160k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v8k> v8k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v16k> v16k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v32k> v32k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v64k> v64k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v128k> v128k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v256k> v256k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v96k> v96k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v512k> v512k{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,sramsizVal> sramsiz{}; 
        ///Architecture Identifier
        enum class archVal {
            at91sam9xx=0x00000019,     ///<AT91SAM9xx Series
            at91sam9xexx=0x00000029,     ///<AT91SAM9XExx Series
            at91x34=0x00000034,     ///<AT91x34 Series
            cap7=0x00000037,     ///<CAP7 Series
            cap9=0x00000039,     ///<CAP9 Series
            cap11=0x0000003b,     ///<CAP11 Series
            at91x40=0x00000040,     ///<AT91x40 Series
            at91x42=0x00000042,     ///<AT91x42 Series
            at91x55=0x00000055,     ///<AT91x55 Series
            at91sam7axx=0x00000060,     ///<AT91SAM7Axx Series
            at91sam7aqxx=0x00000061,     ///<AT91SAM7AQxx Series
            at91x63=0x00000063,     ///<AT91x63 Series
            at91sam7sxx=0x00000070,     ///<AT91SAM7Sxx Series
            at91sam7xcxx=0x00000071,     ///<AT91SAM7XCxx Series
            at91sam7sexx=0x00000072,     ///<AT91SAM7SExx Series
            at91sam7lxx=0x00000073,     ///<AT91SAM7Lxx Series
            at91sam7xxx=0x00000075,     ///<AT91SAM7Xxx Series
            at91sam7slxx=0x00000076,     ///<AT91SAM7SLxx Series
            sam3uxc=0x00000080,     ///<SAM3UxC Series (100-pin version)
            sam3uxe=0x00000081,     ///<SAM3UxE Series (144-pin version)
            sam3axc=0x00000083,     ///<SAM3AxC Series (100-pin version)
            sam4axc=0x00000083,     ///<SAM4AxC Series (100-pin version)
            sam3xxc=0x00000084,     ///<SAM3XxC Series (100-pin version)
            sam4xxc=0x00000084,     ///<SAM4XxC Series (100-pin version)
            sam3xxe=0x00000085,     ///<SAM3XxE Series (144-pin version)
            sam4xxe=0x00000085,     ///<SAM4XxE Series (144-pin version)
            sam3xxg=0x00000086,     ///<SAM3XxG Series (208/217-pin version)
            sam4xxg=0x00000086,     ///<SAM4XxG Series (208/217-pin version)
            sam3sxa=0x00000088,     ///<SAM3SxASeries (48-pin version)
            sam4sxa=0x00000088,     ///<SAM4SxA Series (48-pin version)
            sam3sxb=0x00000089,     ///<SAM3SxB Series (64-pin version)
            sam4sxb=0x00000089,     ///<SAM4SxB Series (64-pin version)
            sam3sxc=0x0000008a,     ///<SAM3SxC Series (100-pin version)
            sam4sxc=0x0000008a,     ///<SAM4SxC Series (100-pin version)
            at91x92=0x00000092,     ///<AT91x92 Series
            sam3nxa=0x00000093,     ///<SAM3NxA Series (48-pin version)
            sam3nxb=0x00000094,     ///<SAM3NxB Series (64-pin version)
            sam3nxc=0x00000095,     ///<SAM3NxC Series (100-pin version)
            sam3sdxb=0x00000099,     ///<SAM3SDxB Series (64-pin version)
            sam3sdxc=0x0000009a,     ///<SAM3SDxC Series (100-pin version)
            sam5a=0x000000a5,     ///<SAM5A
            at75cxx=0x000000f0,     ///<AT75Cxx Series
        };
        namespace archValC{
            constexpr MPL::Value<archVal,archVal::at91sam9xx> at91sam9xx{};
            constexpr MPL::Value<archVal,archVal::at91sam9xexx> at91sam9xexx{};
            constexpr MPL::Value<archVal,archVal::at91x34> at91x34{};
            constexpr MPL::Value<archVal,archVal::cap7> cap7{};
            constexpr MPL::Value<archVal,archVal::cap9> cap9{};
            constexpr MPL::Value<archVal,archVal::cap11> cap11{};
            constexpr MPL::Value<archVal,archVal::at91x40> at91x40{};
            constexpr MPL::Value<archVal,archVal::at91x42> at91x42{};
            constexpr MPL::Value<archVal,archVal::at91x55> at91x55{};
            constexpr MPL::Value<archVal,archVal::at91sam7axx> at91sam7axx{};
            constexpr MPL::Value<archVal,archVal::at91sam7aqxx> at91sam7aqxx{};
            constexpr MPL::Value<archVal,archVal::at91x63> at91x63{};
            constexpr MPL::Value<archVal,archVal::at91sam7sxx> at91sam7sxx{};
            constexpr MPL::Value<archVal,archVal::at91sam7xcxx> at91sam7xcxx{};
            constexpr MPL::Value<archVal,archVal::at91sam7sexx> at91sam7sexx{};
            constexpr MPL::Value<archVal,archVal::at91sam7lxx> at91sam7lxx{};
            constexpr MPL::Value<archVal,archVal::at91sam7xxx> at91sam7xxx{};
            constexpr MPL::Value<archVal,archVal::at91sam7slxx> at91sam7slxx{};
            constexpr MPL::Value<archVal,archVal::sam3uxc> sam3uxc{};
            constexpr MPL::Value<archVal,archVal::sam3uxe> sam3uxe{};
            constexpr MPL::Value<archVal,archVal::sam3axc> sam3axc{};
            constexpr MPL::Value<archVal,archVal::sam4axc> sam4axc{};
            constexpr MPL::Value<archVal,archVal::sam3xxc> sam3xxc{};
            constexpr MPL::Value<archVal,archVal::sam4xxc> sam4xxc{};
            constexpr MPL::Value<archVal,archVal::sam3xxe> sam3xxe{};
            constexpr MPL::Value<archVal,archVal::sam4xxe> sam4xxe{};
            constexpr MPL::Value<archVal,archVal::sam3xxg> sam3xxg{};
            constexpr MPL::Value<archVal,archVal::sam4xxg> sam4xxg{};
            constexpr MPL::Value<archVal,archVal::sam3sxa> sam3sxa{};
            constexpr MPL::Value<archVal,archVal::sam4sxa> sam4sxa{};
            constexpr MPL::Value<archVal,archVal::sam3sxb> sam3sxb{};
            constexpr MPL::Value<archVal,archVal::sam4sxb> sam4sxb{};
            constexpr MPL::Value<archVal,archVal::sam3sxc> sam3sxc{};
            constexpr MPL::Value<archVal,archVal::sam4sxc> sam4sxc{};
            constexpr MPL::Value<archVal,archVal::at91x92> at91x92{};
            constexpr MPL::Value<archVal,archVal::sam3nxa> sam3nxa{};
            constexpr MPL::Value<archVal,archVal::sam3nxb> sam3nxb{};
            constexpr MPL::Value<archVal,archVal::sam3nxc> sam3nxc{};
            constexpr MPL::Value<archVal,archVal::sam3sdxb> sam3sdxb{};
            constexpr MPL::Value<archVal,archVal::sam3sdxc> sam3sdxc{};
            constexpr MPL::Value<archVal,archVal::sam5a> sam5a{};
            constexpr MPL::Value<archVal,archVal::at75cxx> at75cxx{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,20),Register::ReadWriteAccess,archVal> arch{}; 
        ///Nonvolatile Program Memory Type
        enum class nvptypVal {
            rom=0x00000000,     ///<ROM
            romless=0x00000001,     ///<ROMless or on-chip Flash
            flash=0x00000002,     ///<Embedded Flash Memory
            romFlash=0x00000003,     ///<ROM and Embedded Flash MemoryNVPSIZ is ROM size      NVPSIZ2 is Flash size
            sram=0x00000004,     ///<SRAM emulating ROM
        };
        namespace nvptypValC{
            constexpr MPL::Value<nvptypVal,nvptypVal::rom> rom{};
            constexpr MPL::Value<nvptypVal,nvptypVal::romless> romless{};
            constexpr MPL::Value<nvptypVal,nvptypVal::flash> flash{};
            constexpr MPL::Value<nvptypVal,nvptypVal::romFlash> romFlash{};
            constexpr MPL::Value<nvptypVal,nvptypVal::sram> sram{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,nvptypVal> nvptyp{}; 
        ///Extension Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ext{}; 
    }
    namespace ChipidExid{    ///<Chip ID Extension Register
        using Addr = Register::Address<0x400e0744,0x00000000,0,unsigned>;
        ///Chip ID Extension
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> exid{}; 
    }
}
