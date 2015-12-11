#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Synchronous DRAM Controller
    namespace SdramCtrl{    ///<Control Register
        using Addr = Register::Address<0x4000f042,0xfffff000,0,unsigned>;
        ///Refresh count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rc{}; 
        ///Refresh timing
        enum class RtimVal {
            v00=0x00000000,     ///<3 clocks
            v01=0x00000001,     ///<6 clocks
            v10=0x00000002,     ///<9 clocks
            v11=0x00000003,     ///<9 clocks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,RtimVal> rtim{}; 
        namespace RtimValC{
            constexpr Register::FieldValue<decltype(rtim)::Type,RtimVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rtim)::Type,RtimVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rtim)::Type,RtimVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rtim)::Type,RtimVal::v11> v11{};
        }
        }
        ///no description available
        enum class IsVal {
            v0=0x00000000,     ///<Take no action or issue a selfx command to exit self refresh.
            v1=0x00000001,     ///<SDRAM controller sends a self command to both SDRAM blocks to put them in low-power, self-refresh state where they remain until IS is cleared. When IS is cleared, the controller sends a selfx command for the SDRAMs to exit self-refresh. The refresh counter is suspended while the SDRAMs are in self-refresh; the SDRAM controls the refresh period.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,IsVal> is{}; 
        namespace IsValC{
            constexpr Register::FieldValue<decltype(is)::Type,IsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(is)::Type,IsVal::v1> v1{};
        }
        }
    }
    namespace SdramAc0{    ///<Address and Control Register
        using Addr = Register::Address<0x4000f048,0x00034887,0,unsigned>;
        ///Initiate precharge all (pall) command.
        enum class IpVal {
            v0=0x00000000,     ///<Take no action.
            v1=0x00000001,     ///<A pall command is sent to the associated SDRAM block. During initialization, this command is executed after all DRAM controller registers are programmed. After IP is set, the next write to an appropriate SDRAM address generates the pall command to the SDRAM block.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,IpVal> ip{}; 
        namespace IpValC{
            constexpr Register::FieldValue<decltype(ip)::Type,IpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ip)::Type,IpVal::v1> v1{};
        }
        }
        ///Port size.
        enum class PsVal {
            v00=0x00000000,     ///<32-bit port
            v01=0x00000001,     ///<8-bit port
            v10=0x00000002,     ///<16-bit port
            v11=0x00000003,     ///<16-bit port
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v11> v11{};
        }
        }
        ///Initiate mode register set (mrs) command.
        enum class ImrsVal {
            v0=0x00000000,     ///<Take no action
            v1=0x00000001,     ///<Initiate mrs command
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ImrsVal> imrs{}; 
        namespace ImrsValC{
            constexpr Register::FieldValue<decltype(imrs)::Type,ImrsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(imrs)::Type,ImrsVal::v1> v1{};
        }
        }
        ///Command bit location
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> cbm{}; 
        ///CAS Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> casl{}; 
        ///Refresh enable
        enum class ReVal {
            v0=0x00000000,     ///<Do not refresh associated DRAM block
            v1=0x00000001,     ///<Refresh associated DRAM block
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ReVal> re{}; 
        namespace ReValC{
            constexpr Register::FieldValue<decltype(re)::Type,ReVal::v0> v0{};
            constexpr Register::FieldValue<decltype(re)::Type,ReVal::v1> v1{};
        }
        }
        ///Base address register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace SdramAc1{    ///<Address and Control Register
        using Addr = Register::Address<0x4000f050,0x00034887,0,unsigned>;
        ///Initiate precharge all (pall) command.
        enum class IpVal {
            v0=0x00000000,     ///<Take no action.
            v1=0x00000001,     ///<A pall command is sent to the associated SDRAM block. During initialization, this command is executed after all DRAM controller registers are programmed. After IP is set, the next write to an appropriate SDRAM address generates the pall command to the SDRAM block.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,IpVal> ip{}; 
        namespace IpValC{
            constexpr Register::FieldValue<decltype(ip)::Type,IpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ip)::Type,IpVal::v1> v1{};
        }
        }
        ///Port size.
        enum class PsVal {
            v00=0x00000000,     ///<32-bit port
            v01=0x00000001,     ///<8-bit port
            v10=0x00000002,     ///<16-bit port
            v11=0x00000003,     ///<16-bit port
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v11> v11{};
        }
        }
        ///Initiate mode register set (mrs) command.
        enum class ImrsVal {
            v0=0x00000000,     ///<Take no action
            v1=0x00000001,     ///<Initiate mrs command
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ImrsVal> imrs{}; 
        namespace ImrsValC{
            constexpr Register::FieldValue<decltype(imrs)::Type,ImrsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(imrs)::Type,ImrsVal::v1> v1{};
        }
        }
        ///Command bit location
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> cbm{}; 
        ///CAS Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> casl{}; 
        ///Refresh enable
        enum class ReVal {
            v0=0x00000000,     ///<Do not refresh associated DRAM block
            v1=0x00000001,     ///<Refresh associated DRAM block
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ReVal> re{}; 
        namespace ReValC{
            constexpr Register::FieldValue<decltype(re)::Type,ReVal::v0> v0{};
            constexpr Register::FieldValue<decltype(re)::Type,ReVal::v1> v1{};
        }
        }
        ///Base address register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace SdramCm0{    ///<Control Mask
        using Addr = Register::Address<0x4000f04c,0x0003fefe,0,unsigned>;
        ///Valid.
        enum class VVal {
            v0=0x00000000,     ///<Do not decode DRAM accesses.
            v1=0x00000001,     ///<Registers controlling the DRAM block are initialized; DRAM accesses can be decoded
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VVal> v{}; 
        namespace VValC{
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v0> v0{};
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v1> v1{};
        }
        }
        ///Write protect.
        enum class WpVal {
            v0=0x00000000,     ///<Allow write accesses
            v1=0x00000001,     ///<Ignore write accesses. The DRAM controller ignores write accesses to the memory block and an address exception occurs. Write accesses to a write-protected DRAM region are compared in the chip select module for a hit. If no hit occurs, an external bus cycle is generated. If this external bus cycle is not acknowledged, an access exception occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WpVal> wp{}; 
        namespace WpValC{
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v1> v1{};
        }
        }
        ///Base address mask.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace SdramCm1{    ///<Control Mask
        using Addr = Register::Address<0x4000f054,0x0003fefe,0,unsigned>;
        ///Valid.
        enum class VVal {
            v0=0x00000000,     ///<Do not decode DRAM accesses.
            v1=0x00000001,     ///<Registers controlling the DRAM block are initialized; DRAM accesses can be decoded
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VVal> v{}; 
        namespace VValC{
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v0> v0{};
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v1> v1{};
        }
        }
        ///Write protect.
        enum class WpVal {
            v0=0x00000000,     ///<Allow write accesses
            v1=0x00000001,     ///<Ignore write accesses. The DRAM controller ignores write accesses to the memory block and an address exception occurs. Write accesses to a write-protected DRAM region are compared in the chip select module for a hit. If no hit occurs, an external bus cycle is generated. If this external bus cycle is not acknowledged, an access exception occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WpVal> wp{}; 
        namespace WpValC{
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v1> v1{};
        }
        }
        ///Base address mask.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> bam{}; 
    }
}
