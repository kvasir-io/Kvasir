#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Synchronous DRAM Controller
    namespace SdramCtrl{    ///<Control Register
        using Addr = Register::Address<0x4000f042,0xfffff000,0,unsigned>;
        ///Refresh count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rc{}; 
        ///Refresh timing
        enum class rtimVal {
            v00=0x00000000,     ///<3 clocks
            v01=0x00000001,     ///<6 clocks
            v10=0x00000002,     ///<9 clocks
            v11=0x00000003,     ///<9 clocks
        };
        namespace rtimValC{
            constexpr MPL::Value<rtimVal,rtimVal::v00> v00{};
            constexpr MPL::Value<rtimVal,rtimVal::v01> v01{};
            constexpr MPL::Value<rtimVal,rtimVal::v10> v10{};
            constexpr MPL::Value<rtimVal,rtimVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,rtimVal> rtim{}; 
        ///no description available
        enum class isVal {
            v0=0x00000000,     ///<Take no action or issue a selfx command to exit self refresh.
            v1=0x00000001,     ///<SDRAM controller sends a self command to both SDRAM blocks to put them in low-power, self-refresh state where they remain until IS is cleared. When IS is cleared, the controller sends a selfx command for the SDRAMs to exit self-refresh. The refresh counter is suspended while the SDRAMs are in self-refresh; the SDRAM controls the refresh period.
        };
        namespace isValC{
            constexpr MPL::Value<isVal,isVal::v0> v0{};
            constexpr MPL::Value<isVal,isVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,isVal> is{}; 
    }
    namespace SdramAc0{    ///<Address and Control Register
        using Addr = Register::Address<0x4000f048,0x00034887,0,unsigned>;
        ///Initiate precharge all (pall) command.
        enum class ipVal {
            v0=0x00000000,     ///<Take no action.
            v1=0x00000001,     ///<A pall command is sent to the associated SDRAM block. During initialization, this command is executed after all DRAM controller registers are programmed. After IP is set, the next write to an appropriate SDRAM address generates the pall command to the SDRAM block.
        };
        namespace ipValC{
            constexpr MPL::Value<ipVal,ipVal::v0> v0{};
            constexpr MPL::Value<ipVal,ipVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ipVal> ip{}; 
        ///Port size.
        enum class psVal {
            v00=0x00000000,     ///<32-bit port
            v01=0x00000001,     ///<8-bit port
            v10=0x00000002,     ///<16-bit port
            v11=0x00000003,     ///<16-bit port
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v00> v00{};
            constexpr MPL::Value<psVal,psVal::v01> v01{};
            constexpr MPL::Value<psVal,psVal::v10> v10{};
            constexpr MPL::Value<psVal,psVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,psVal> ps{}; 
        ///Initiate mode register set (mrs) command.
        enum class imrsVal {
            v0=0x00000000,     ///<Take no action
            v1=0x00000001,     ///<Initiate mrs command
        };
        namespace imrsValC{
            constexpr MPL::Value<imrsVal,imrsVal::v0> v0{};
            constexpr MPL::Value<imrsVal,imrsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,imrsVal> imrs{}; 
        ///Command bit location
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> cbm{}; 
        ///CAS Latency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> casl{}; 
        ///Refresh enable
        enum class reVal {
            v0=0x00000000,     ///<Do not refresh associated DRAM block
            v1=0x00000001,     ///<Refresh associated DRAM block
        };
        namespace reValC{
            constexpr MPL::Value<reVal,reVal::v0> v0{};
            constexpr MPL::Value<reVal,reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,reVal> re{}; 
        ///Base address register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace SdramAc1{    ///<Address and Control Register
        using Addr = Register::Address<0x4000f050,0x00034887,0,unsigned>;
        ///Initiate precharge all (pall) command.
        enum class ipVal {
            v0=0x00000000,     ///<Take no action.
            v1=0x00000001,     ///<A pall command is sent to the associated SDRAM block. During initialization, this command is executed after all DRAM controller registers are programmed. After IP is set, the next write to an appropriate SDRAM address generates the pall command to the SDRAM block.
        };
        namespace ipValC{
            constexpr MPL::Value<ipVal,ipVal::v0> v0{};
            constexpr MPL::Value<ipVal,ipVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ipVal> ip{}; 
        ///Port size.
        enum class psVal {
            v00=0x00000000,     ///<32-bit port
            v01=0x00000001,     ///<8-bit port
            v10=0x00000002,     ///<16-bit port
            v11=0x00000003,     ///<16-bit port
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v00> v00{};
            constexpr MPL::Value<psVal,psVal::v01> v01{};
            constexpr MPL::Value<psVal,psVal::v10> v10{};
            constexpr MPL::Value<psVal,psVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,psVal> ps{}; 
        ///Initiate mode register set (mrs) command.
        enum class imrsVal {
            v0=0x00000000,     ///<Take no action
            v1=0x00000001,     ///<Initiate mrs command
        };
        namespace imrsValC{
            constexpr MPL::Value<imrsVal,imrsVal::v0> v0{};
            constexpr MPL::Value<imrsVal,imrsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,imrsVal> imrs{}; 
        ///Command bit location
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> cbm{}; 
        ///CAS Latency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> casl{}; 
        ///Refresh enable
        enum class reVal {
            v0=0x00000000,     ///<Do not refresh associated DRAM block
            v1=0x00000001,     ///<Refresh associated DRAM block
        };
        namespace reValC{
            constexpr MPL::Value<reVal,reVal::v0> v0{};
            constexpr MPL::Value<reVal,reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,reVal> re{}; 
        ///Base address register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace SdramCm0{    ///<Control Mask
        using Addr = Register::Address<0x4000f04c,0x0003fefe,0,unsigned>;
        ///Valid.
        enum class vVal {
            v0=0x00000000,     ///<Do not decode DRAM accesses.
            v1=0x00000001,     ///<Registers controlling the DRAM block are initialized; DRAM accesses can be decoded
        };
        namespace vValC{
            constexpr MPL::Value<vVal,vVal::v0> v0{};
            constexpr MPL::Value<vVal,vVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vVal> v{}; 
        ///Write protect.
        enum class wpVal {
            v0=0x00000000,     ///<Allow write accesses
            v1=0x00000001,     ///<Ignore write accesses. The DRAM controller ignores write accesses to the memory block and an address exception occurs. Write accesses to a write-protected DRAM region are compared in the chip select module for a hit. If no hit occurs, an external bus cycle is generated. If this external bus cycle is not acknowledged, an access exception occurs.
        };
        namespace wpValC{
            constexpr MPL::Value<wpVal,wpVal::v0> v0{};
            constexpr MPL::Value<wpVal,wpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wpVal> wp{}; 
        ///Base address mask.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace SdramCm1{    ///<Control Mask
        using Addr = Register::Address<0x4000f054,0x0003fefe,0,unsigned>;
        ///Valid.
        enum class vVal {
            v0=0x00000000,     ///<Do not decode DRAM accesses.
            v1=0x00000001,     ///<Registers controlling the DRAM block are initialized; DRAM accesses can be decoded
        };
        namespace vValC{
            constexpr MPL::Value<vVal,vVal::v0> v0{};
            constexpr MPL::Value<vVal,vVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vVal> v{}; 
        ///Write protect.
        enum class wpVal {
            v0=0x00000000,     ///<Allow write accesses
            v1=0x00000001,     ///<Ignore write accesses. The DRAM controller ignores write accesses to the memory block and an address exception occurs. Write accesses to a write-protected DRAM region are compared in the chip select module for a hit. If no hit occurs, an external bus cycle is generated. If this external bus cycle is not acknowledged, an access exception occurs.
        };
        namespace wpValC{
            constexpr MPL::Value<wpVal,wpVal::v0> v0{};
            constexpr MPL::Value<wpVal,wpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wpVal> wp{}; 
        ///Base address mask.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> bam{}; 
    }
}
