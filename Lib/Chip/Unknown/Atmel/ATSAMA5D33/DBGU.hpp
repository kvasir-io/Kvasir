#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Debug Unit
    namespace DbguCr{    ///<Control Register
        using Addr = Register::Address<0xffffee00,0xfffffe03,0x00000000,unsigned>;
        ///Reset Receiver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstrx{}; 
        ///Reset Transmitter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsttx{}; 
        ///Receiver Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxen{}; 
        ///Receiver Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxdis{}; 
        ///Transmitter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txen{}; 
        ///Transmitter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txdis{}; 
        ///Reset Status Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rststa{}; 
    }
    namespace DbguMr{    ///<Mode Register
        using Addr = Register::Address<0xffffee04,0xffff31ff,0x00000000,unsigned>;
        ///Parity Type
        enum class ParVal {
            even=0x00000000,     ///<Even Parity
            odd=0x00000001,     ///<Odd Parity
            space=0x00000002,     ///<Space: Parity forced to 0
            mark=0x00000003,     ///<Mark: Parity forced to 1
            none=0x00000004,     ///<No Parity
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,ParVal> par{}; 
        namespace ParValC{
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::even> even{};
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::odd> odd{};
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::space> space{};
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::mark> mark{};
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::none> none{};
        }
        ///Channel Mode
        enum class ChmodeVal {
            norm=0x00000000,     ///<Normal Mode
            auto_=0x00000001,     ///<Automatic Echo
            locloop=0x00000002,     ///<Local Loopback
            remloop=0x00000003,     ///<Remote Loopback
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,ChmodeVal> chmode{}; 
        namespace ChmodeValC{
            constexpr Register::FieldValue<decltype(chmode)::Type,ChmodeVal::norm> norm{};
            constexpr Register::FieldValue<decltype(chmode)::Type,ChmodeVal::auto_> auto_{};
            constexpr Register::FieldValue<decltype(chmode)::Type,ChmodeVal::locloop> locloop{};
            constexpr Register::FieldValue<decltype(chmode)::Type,ChmodeVal::remloop> remloop{};
        }
    }
    namespace DbguIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xffffee08,0x3ffffd1c,0x00000000,unsigned>;
        ///Enable RXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Enable TXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Enable Overrun Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Enable Framing Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frame{}; 
        ///Enable Parity Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pare{}; 
        ///Enable TXEMPTY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
        ///Enable COMMTX (from ARM) Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> commtx{}; 
        ///Enable COMMRX (from ARM) Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> commrx{}; 
    }
    namespace DbguIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xffffee0c,0x3ffffd1c,0x00000000,unsigned>;
        ///Disable RXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Disable TXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Disable Overrun Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Disable Framing Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frame{}; 
        ///Disable Parity Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pare{}; 
        ///Disable TXEMPTY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
        ///Disable COMMTX (from ARM) Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> commtx{}; 
        ///Disable COMMRX (from ARM) Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> commrx{}; 
    }
    namespace DbguImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xffffee10,0x3ffffd1c,0x00000000,unsigned>;
        ///Mask RXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Disable TXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Mask Overrun Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Mask Framing Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frame{}; 
        ///Mask Parity Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pare{}; 
        ///Mask TXEMPTY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
        ///Mask COMMTX Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> commtx{}; 
        ///Mask COMMRX Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> commrx{}; 
    }
    namespace DbguSr{    ///<Status Register
        using Addr = Register::Address<0xffffee14,0x3ffffd1c,0x00000000,unsigned>;
        ///Receiver Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Transmitter Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Framing Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frame{}; 
        ///Parity Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pare{}; 
        ///Transmitter Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
        ///Debug Communication Channel Write Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> commtx{}; 
        ///Debug Communication Channel Read Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> commrx{}; 
    }
    namespace DbguRhr{    ///<Receive Holding Register
        using Addr = Register::Address<0xffffee18,0xffffff00,0x00000000,unsigned>;
        ///Received Character
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxchr{}; 
    }
    namespace DbguThr{    ///<Transmit Holding Register
        using Addr = Register::Address<0xffffee1c,0xffffff00,0x00000000,unsigned>;
        ///Character to be Transmitted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txchr{}; 
    }
    namespace DbguBrgr{    ///<Baud Rate Generator Register
        using Addr = Register::Address<0xffffee20,0xffff0000,0x00000000,unsigned>;
        ///Clock Divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cd{}; 
    }
    namespace DbguCidr{    ///<Chip ID Register
        using Addr = Register::Address<0xffffee40,0x00000000,0x00000000,unsigned>;
        ///Version of the Device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> version{}; 
        ///Embedded Processor
        enum class EprocVal {
            arm946es=0x00000001,     ///<ARM946ES
            arm7tdmi=0x00000002,     ///<ARM7TDMI
            cm3=0x00000003,     ///<Cortex-M3
            arm920t=0x00000004,     ///<ARM920T
            arm926ejs=0x00000005,     ///<ARM926EJS
            ca5=0x00000006,     ///<Cortex-A5
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,EprocVal> eproc{}; 
        namespace EprocValC{
            constexpr Register::FieldValue<decltype(eproc)::Type,EprocVal::arm946es> arm946es{};
            constexpr Register::FieldValue<decltype(eproc)::Type,EprocVal::arm7tdmi> arm7tdmi{};
            constexpr Register::FieldValue<decltype(eproc)::Type,EprocVal::cm3> cm3{};
            constexpr Register::FieldValue<decltype(eproc)::Type,EprocVal::arm920t> arm920t{};
            constexpr Register::FieldValue<decltype(eproc)::Type,EprocVal::arm926ejs> arm926ejs{};
            constexpr Register::FieldValue<decltype(eproc)::Type,EprocVal::ca5> ca5{};
        }
        ///Nonvolatile Program Memory Size
        enum class NvpsizVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NvpsizVal> nvpsiz{}; 
        namespace NvpsizValC{
            constexpr Register::FieldValue<decltype(nvpsiz)::Type,NvpsizVal::none> none{};
            constexpr Register::FieldValue<decltype(nvpsiz)::Type,NvpsizVal::v8k> v8k{};
            constexpr Register::FieldValue<decltype(nvpsiz)::Type,NvpsizVal::v16k> v16k{};
            constexpr Register::FieldValue<decltype(nvpsiz)::Type,NvpsizVal::v32k> v32k{};
            constexpr Register::FieldValue<decltype(nvpsiz)::Type,NvpsizVal::v64k> v64k{};
            constexpr Register::FieldValue<decltype(nvpsiz)::Type,NvpsizVal::v128k> v128k{};
            constexpr Register::FieldValue<decltype(nvpsiz)::Type,NvpsizVal::v256k> v256k{};
            constexpr Register::FieldValue<decltype(nvpsiz)::Type,NvpsizVal::v512k> v512k{};
            constexpr Register::FieldValue<decltype(nvpsiz)::Type,NvpsizVal::v1024k> v1024k{};
            constexpr Register::FieldValue<decltype(nvpsiz)::Type,NvpsizVal::v2048k> v2048k{};
        }
        ///
        enum class Nvpsiz2Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Nvpsiz2Val> nvpsiz2{}; 
        namespace Nvpsiz2ValC{
            constexpr Register::FieldValue<decltype(nvpsiz2)::Type,Nvpsiz2Val::none> none{};
            constexpr Register::FieldValue<decltype(nvpsiz2)::Type,Nvpsiz2Val::v8k> v8k{};
            constexpr Register::FieldValue<decltype(nvpsiz2)::Type,Nvpsiz2Val::v16k> v16k{};
            constexpr Register::FieldValue<decltype(nvpsiz2)::Type,Nvpsiz2Val::v32k> v32k{};
            constexpr Register::FieldValue<decltype(nvpsiz2)::Type,Nvpsiz2Val::v64k> v64k{};
            constexpr Register::FieldValue<decltype(nvpsiz2)::Type,Nvpsiz2Val::v128k> v128k{};
            constexpr Register::FieldValue<decltype(nvpsiz2)::Type,Nvpsiz2Val::v256k> v256k{};
            constexpr Register::FieldValue<decltype(nvpsiz2)::Type,Nvpsiz2Val::v512k> v512k{};
            constexpr Register::FieldValue<decltype(nvpsiz2)::Type,Nvpsiz2Val::v1024k> v1024k{};
            constexpr Register::FieldValue<decltype(nvpsiz2)::Type,Nvpsiz2Val::v2048k> v2048k{};
        }
        ///Internal SRAM Size
        enum class SramsizVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SramsizVal> sramsiz{}; 
        namespace SramsizValC{
            constexpr Register::FieldValue<decltype(sramsiz)::Type,SramsizVal::v1k> v1k{};
            constexpr Register::FieldValue<decltype(sramsiz)::Type,SramsizVal::v2k> v2k{};
            constexpr Register::FieldValue<decltype(sramsiz)::Type,SramsizVal::v6k> v6k{};
            constexpr Register::FieldValue<decltype(sramsiz)::Type,SramsizVal::v112k> v112k{};
            constexpr Register::FieldValue<decltype(sramsiz)::Type,SramsizVal::v4k> v4k{};
            constexpr Register::FieldValue<decltype(sramsiz)::Type,SramsizVal::v80k> v80k{};
            constexpr Register::FieldValue<decltype(sramsiz)::Type,SramsizVal::v160k> v160k{};
            constexpr Register::FieldValue<decltype(sramsiz)::Type,SramsizVal::v8k> v8k{};
            constexpr Register::FieldValue<decltype(sramsiz)::Type,SramsizVal::v16k> v16k{};
            constexpr Register::FieldValue<decltype(sramsiz)::Type,SramsizVal::v32k> v32k{};
            constexpr Register::FieldValue<decltype(sramsiz)::Type,SramsizVal::v64k> v64k{};
            constexpr Register::FieldValue<decltype(sramsiz)::Type,SramsizVal::v128k> v128k{};
            constexpr Register::FieldValue<decltype(sramsiz)::Type,SramsizVal::v256k> v256k{};
            constexpr Register::FieldValue<decltype(sramsiz)::Type,SramsizVal::v96k> v96k{};
            constexpr Register::FieldValue<decltype(sramsiz)::Type,SramsizVal::v512k> v512k{};
        }
        ///Architecture Identifier
        enum class ArchVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ArchVal> arch{}; 
        namespace ArchValC{
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91sam9xx> at91sam9xx{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91sam9xexx> at91sam9xexx{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91x34> at91x34{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::cap7> cap7{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::cap9> cap9{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::cap11> cap11{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91x40> at91x40{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91x42> at91x42{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91x55> at91x55{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91sam7axx> at91sam7axx{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91sam7aqxx> at91sam7aqxx{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91x63> at91x63{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91sam7sxx> at91sam7sxx{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91sam7xcxx> at91sam7xcxx{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91sam7sexx> at91sam7sexx{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91sam7lxx> at91sam7lxx{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91sam7xxx> at91sam7xxx{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91sam7slxx> at91sam7slxx{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::atsam3uxc> atsam3uxc{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::atsam3uxe> atsam3uxe{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::atsam3axc> atsam3axc{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::atsam3xxc> atsam3xxc{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::atsam3xxe> atsam3xxe{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::atsam3xxg> atsam3xxg{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::atsam3sxa> atsam3sxa{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::atsam3sxb> atsam3sxb{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::atsam3sxc> atsam3sxc{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at91x92> at91x92{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::atsam3nxa> atsam3nxa{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::atsam3nxb> atsam3nxb{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::atsam3nxc> atsam3nxc{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::atsam3sdxa> atsam3sdxa{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::atsam3sdxb> atsam3sdxb{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::atsam3sdxc> atsam3sdxc{};
            constexpr Register::FieldValue<decltype(arch)::Type,ArchVal::at75cxx> at75cxx{};
        }
        ///Nonvolatile Program Memory Type
        enum class NvptypVal {
            rom=0x00000000,     ///<ROM
            romless=0x00000001,     ///<ROMless or on-chip Flash
            flash=0x00000002,     ///<Embedded Flash Memory
            romFlash=0x00000003,     ///<ROM and Embedded Flash MemoryNVPSIZ is ROM size      NVPSIZ2 is Flash size
            sram=0x00000004,     ///<SRAM emulating ROM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NvptypVal> nvptyp{}; 
        namespace NvptypValC{
            constexpr Register::FieldValue<decltype(nvptyp)::Type,NvptypVal::rom> rom{};
            constexpr Register::FieldValue<decltype(nvptyp)::Type,NvptypVal::romless> romless{};
            constexpr Register::FieldValue<decltype(nvptyp)::Type,NvptypVal::flash> flash{};
            constexpr Register::FieldValue<decltype(nvptyp)::Type,NvptypVal::romFlash> romFlash{};
            constexpr Register::FieldValue<decltype(nvptyp)::Type,NvptypVal::sram> sram{};
        }
        ///Extension Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ext{}; 
    }
    namespace DbguExid{    ///<Chip ID Extension Register
        using Addr = Register::Address<0xffffee44,0x00000000,0x00000000,unsigned>;
        ///Chip ID Extension
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> exid{}; 
    }
    namespace DbguFnr{    ///<Force NTRST Register
        using Addr = Register::Address<0xffffee48,0xfffffffe,0x00000000,unsigned>;
        ///Force NTRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fntrst{}; 
    }
}
