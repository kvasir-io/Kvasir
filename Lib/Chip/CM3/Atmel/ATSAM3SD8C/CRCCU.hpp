#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Cyclic Redundancy Check Calculation Unit
    namespace CrccuDscr{    ///<CRCCU Descriptor Base Register
        using Addr = Register::Address<0x40044000,0x000001ff,0,unsigned>;
        ///Descriptor Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace CrccuDmaEn{    ///<CRCCU DMA Enable Register
        using Addr = Register::Address<0x40044008,0xfffffffe,0,unsigned>;
        ///DMA Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
    }
    namespace CrccuDmaDis{    ///<CRCCU DMA Disable Register
        using Addr = Register::Address<0x4004400c,0xfffffffe,0,unsigned>;
        ///DMA Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmadis{}; 
    }
    namespace CrccuDmaSr{    ///<CRCCU DMA Status Register
        using Addr = Register::Address<0x40044010,0xfffffffe,0,unsigned>;
        ///DMA Status Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmasr{}; 
    }
    namespace CrccuDmaIer{    ///<CRCCU DMA Interrupt Enable Register
        using Addr = Register::Address<0x40044014,0xfffffffe,0,unsigned>;
        ///Interrupt Enable register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaier{}; 
    }
    namespace CrccuDmaIdr{    ///<CRCCU DMA Interrupt Disable Register
        using Addr = Register::Address<0x40044018,0xfffffffe,0,unsigned>;
        ///Interrupt Disable register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaidr{}; 
    }
    namespace CrccuDmaImr{    ///<CRCCU DMA Interrupt Mask Register
        using Addr = Register::Address<0x4004401c,0xfffffffe,0,unsigned>;
        ///Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaimr{}; 
    }
    namespace CrccuDmaIsr{    ///<CRCCU DMA Interrupt Status Register
        using Addr = Register::Address<0x40044020,0xfffffffe,0,unsigned>;
        ///Interrupt Status register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaisr{}; 
    }
    namespace CrccuCr{    ///<CRCCU Control Register
        using Addr = Register::Address<0x40044034,0xfffffffe,0,unsigned>;
        ///CRC Computation Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reset{}; 
    }
    namespace CrccuMr{    ///<CRCCU Mode Register
        using Addr = Register::Address<0x40044038,0xffffff00,0,unsigned>;
        ///CRC Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        ///CRC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> compare{}; 
        ///Primitive Polynomial
        enum class ptypeVal {
            ccitt8023=0x00000000,     ///<Polynom 0x04C11DB7
            castagnoli=0x00000001,     ///<Polynom 0x1EDC6F41
            ccitt16=0x00000002,     ///<Polynom 0x1021
        };
        namespace ptypeValC{
            constexpr MPL::Value<ptypeVal,ptypeVal::ccitt8023> ccitt8023{};
            constexpr MPL::Value<ptypeVal,ptypeVal::castagnoli> castagnoli{};
            constexpr MPL::Value<ptypeVal,ptypeVal::ccitt16> ccitt16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,ptypeVal> ptype{}; 
        ///Request Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> divider{}; 
    }
    namespace CrccuSr{    ///<CRCCU Status Register
        using Addr = Register::Address<0x4004403c,0x00000000,0,unsigned>;
        ///Cyclic Redundancy Check Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crc{}; 
    }
    namespace CrccuIer{    ///<CRCCU Interrupt Enable Register
        using Addr = Register::Address<0x40044040,0xfffffffe,0,unsigned>;
        ///CRC Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> errier{}; 
    }
    namespace CrccuIdr{    ///<CRCCU Interrupt Disable Register
        using Addr = Register::Address<0x40044044,0xfffffffe,0,unsigned>;
        ///CRC Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> erridr{}; 
    }
    namespace CrccuImr{    ///<CRCCU Interrupt Mask Register
        using Addr = Register::Address<0x40044048,0xfffffffe,0,unsigned>;
        ///CRC Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> errimr{}; 
    }
    namespace CrccuIsr{    ///<CRCCU Interrupt Status Register
        using Addr = Register::Address<0x4004404c,0xfffffffe,0,unsigned>;
        ///CRC Error Interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> errisr{}; 
    }
}
