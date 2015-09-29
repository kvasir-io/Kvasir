#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Debug Unit
    namespace DbguCr{    ///<Control Register
        using Addr = Register::Address<0xfffff200,0xfffffe03,0,unsigned>;
        ///Reset Receiver
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rstrx{}; 
        ///Reset Transmitter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsttx{}; 
        ///Receiver Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxen{}; 
        ///Receiver Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxdis{}; 
        ///Transmitter Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txen{}; 
        ///Transmitter Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txdis{}; 
        ///Reset Status Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rststa{}; 
    }
    namespace DbguMr{    ///<Mode Register
        using Addr = Register::Address<0xfffff204,0xffff31ff,0,unsigned>;
        ///Parity Type
        enum class parVal {
            even=0x00000000,     ///<Even Parity
            odd=0x00000001,     ///<Odd Parity
            space=0x00000002,     ///<Space: Parity forced to 0
            mark=0x00000003,     ///<Mark: Parity forced to 1
            none=0x00000004,     ///<No Parity
        };
        namespace parValC{
            constexpr MPL::Value<parVal,parVal::even> even{};
            constexpr MPL::Value<parVal,parVal::odd> odd{};
            constexpr MPL::Value<parVal,parVal::space> space{};
            constexpr MPL::Value<parVal,parVal::mark> mark{};
            constexpr MPL::Value<parVal,parVal::none> none{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,parVal> par{}; 
        ///Channel Mode
        enum class chmodeVal {
            norm=0x00000000,     ///<Normal Mode
            auto_=0x00000001,     ///<Automatic Echo
            locloop=0x00000002,     ///<Local Loopback
            remloop=0x00000003,     ///<Remote Loopback
        };
        namespace chmodeValC{
            constexpr MPL::Value<chmodeVal,chmodeVal::norm> norm{};
            constexpr MPL::Value<chmodeVal,chmodeVal::auto_> auto_{};
            constexpr MPL::Value<chmodeVal,chmodeVal::locloop> locloop{};
            constexpr MPL::Value<chmodeVal,chmodeVal::remloop> remloop{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,chmodeVal> chmode{}; 
    }
    namespace DbguIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffff208,0x3ffffd1c,0,unsigned>;
        ///Enable RXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Enable TXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Enable Overrun Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Enable Framing Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Enable Parity Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Enable TXEMPTY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Enable COMMTX (from ARM) Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> commtx{}; 
        ///Enable COMMRX (from ARM) Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> commrx{}; 
    }
    namespace DbguIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffff20c,0x3ffffd1c,0,unsigned>;
        ///Disable RXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Disable TXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Disable Overrun Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Disable Framing Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Disable Parity Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Disable TXEMPTY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Disable COMMTX (from ARM) Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> commtx{}; 
        ///Disable COMMRX (from ARM) Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> commrx{}; 
    }
    namespace DbguImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffff210,0x3ffffd1c,0,unsigned>;
        ///Mask RXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Disable TXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Mask Overrun Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Mask Framing Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Mask Parity Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Mask TXEMPTY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Mask COMMTX Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> commtx{}; 
        ///Mask COMMRX Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> commrx{}; 
    }
    namespace DbguSr{    ///<Status Register
        using Addr = Register::Address<0xfffff214,0x3ffffd1c,0,unsigned>;
        ///Receiver Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmitter Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Overrun Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Framing Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Parity Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Transmitter Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Debug Communication Channel Write Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> commtx{}; 
        ///Debug Communication Channel Read Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> commrx{}; 
    }
    namespace DbguRhr{    ///<Receive Holding Register
        using Addr = Register::Address<0xfffff218,0xffffff00,0,unsigned>;
        ///Received Character
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxchr{}; 
    }
    namespace DbguThr{    ///<Transmit Holding Register
        using Addr = Register::Address<0xfffff21c,0xffffff00,0,unsigned>;
        ///Character to be Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txchr{}; 
    }
    namespace DbguBrgr{    ///<Baud Rate Generator Register
        using Addr = Register::Address<0xfffff220,0xffff0000,0,unsigned>;
        ///Clock Divisor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cd{}; 
    }
    namespace DbguCidr{    ///<Chip ID Register
        using Addr = Register::Address<0xfffff240,0x00000000,0,unsigned>;
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
        };
        namespace eprocValC{
            constexpr MPL::Value<eprocVal,eprocVal::arm946es> arm946es{};
            constexpr MPL::Value<eprocVal,eprocVal::arm7tdmi> arm7tdmi{};
            constexpr MPL::Value<eprocVal,eprocVal::cm3> cm3{};
            constexpr MPL::Value<eprocVal,eprocVal::arm920t> arm920t{};
            constexpr MPL::Value<eprocVal,eprocVal::arm926ejs> arm926ejs{};
            constexpr MPL::Value<eprocVal,eprocVal::ca5> ca5{};
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
        ///None
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
            v1k=0x00000001,     ///<1K bytes
            v2k=0x00000002,     ///<2K bytes
            v6k=0x00000003,     ///<6K bytes
            v112k=0x00000004,     ///<112K bytes
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
            constexpr MPL::Value<sramsizVal,sramsizVal::v1k> v1k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v2k> v2k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v6k> v6k{};
            constexpr MPL::Value<sramsizVal,sramsizVal::v112k> v112k{};
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
            atsam3uxc=0x00000080,     ///<ATSAM3UxC Series (100-pin version)
            atsam3uxe=0x00000081,     ///<ATSAM3UxE Series (144-pin version)
            atsam3axc=0x00000083,     ///<ATSAM3AxC Series (100-pin version)
            atsam3xxc=0x00000084,     ///<ATSAM3XxC Series (100-pin version)
            atsam3xxe=0x00000085,     ///<ATSAM3XxE Series (144-pin version)
            atsam3xxg=0x00000086,     ///<ATSAM3XxG Series (208/217-pin version)
            atsam3sxa=0x00000088,     ///<ATSAM3SxA Series (48-pin version)
            atsam3sxb=0x00000089,     ///<ATSAM3SxB Series (64-pin version)
            atsam3sxc=0x0000008a,     ///<ATSAM3SxC Series (100-pin version)
            at91x92=0x00000092,     ///<AT91x92 Series
            atsam3nxa=0x00000093,     ///<ATSAM3NxA Series (48-pin version)
            atsam3nxb=0x00000094,     ///<ATSAM3NxB Series (64-pin version)
            atsam3nxc=0x00000095,     ///<ATSAM3NxC Series (100-pin version)
            atsam3sdxa=0x00000098,     ///<ATSAM3SDxA Series (48-pin version)
            atsam3sdxb=0x00000099,     ///<ATSAM3SDxB Series (64-pin version)
            atsam3sdxc=0x0000009a,     ///<ATSAM3SDxC Series (100-pin version)
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
            constexpr MPL::Value<archVal,archVal::atsam3uxc> atsam3uxc{};
            constexpr MPL::Value<archVal,archVal::atsam3uxe> atsam3uxe{};
            constexpr MPL::Value<archVal,archVal::atsam3axc> atsam3axc{};
            constexpr MPL::Value<archVal,archVal::atsam3xxc> atsam3xxc{};
            constexpr MPL::Value<archVal,archVal::atsam3xxe> atsam3xxe{};
            constexpr MPL::Value<archVal,archVal::atsam3xxg> atsam3xxg{};
            constexpr MPL::Value<archVal,archVal::atsam3sxa> atsam3sxa{};
            constexpr MPL::Value<archVal,archVal::atsam3sxb> atsam3sxb{};
            constexpr MPL::Value<archVal,archVal::atsam3sxc> atsam3sxc{};
            constexpr MPL::Value<archVal,archVal::at91x92> at91x92{};
            constexpr MPL::Value<archVal,archVal::atsam3nxa> atsam3nxa{};
            constexpr MPL::Value<archVal,archVal::atsam3nxb> atsam3nxb{};
            constexpr MPL::Value<archVal,archVal::atsam3nxc> atsam3nxc{};
            constexpr MPL::Value<archVal,archVal::atsam3sdxa> atsam3sdxa{};
            constexpr MPL::Value<archVal,archVal::atsam3sdxb> atsam3sdxb{};
            constexpr MPL::Value<archVal,archVal::atsam3sdxc> atsam3sdxc{};
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
    namespace DbguExid{    ///<Chip ID Extension Register
        using Addr = Register::Address<0xfffff244,0x00000000,0,unsigned>;
        ///Chip ID Extension
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> exid{}; 
    }
    namespace DbguFnr{    ///<Force NTRST Register
        using Addr = Register::Address<0xfffff248,0xfffffffe,0,unsigned>;
        ///Force NTRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fntrst{}; 
    }
}
