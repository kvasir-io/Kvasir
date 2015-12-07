#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Cyclic Redundancy Check Calculation Unit
    namespace CrccuDscr{    ///<CRCCU Descriptor Base Register
        using Addr = Register::Address<0x40044000,0x000001ff,0,unsigned>;
        ///Descriptor Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace CrccuDmaEn{    ///<CRCCU DMA Enable Register
        using Addr = Register::Address<0x40044008,0xfffffffe,0,unsigned>;
        ///DMA Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
        namespace DmaenValC{
        }
    }
    namespace CrccuDmaDis{    ///<CRCCU DMA Disable Register
        using Addr = Register::Address<0x4004400c,0xfffffffe,0,unsigned>;
        ///DMA Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmadis{}; 
        namespace DmadisValC{
        }
    }
    namespace CrccuDmaSr{    ///<CRCCU DMA Status Register
        using Addr = Register::Address<0x40044010,0xfffffffe,0,unsigned>;
        ///DMA Status Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmasr{}; 
        namespace DmasrValC{
        }
    }
    namespace CrccuDmaIer{    ///<CRCCU DMA Interrupt Enable Register
        using Addr = Register::Address<0x40044014,0xfffffffe,0,unsigned>;
        ///Interrupt Enable register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaier{}; 
        namespace DmaierValC{
        }
    }
    namespace CrccuDmaIdr{    ///<CRCCU DMA Interrupt Disable Register
        using Addr = Register::Address<0x40044018,0xfffffffe,0,unsigned>;
        ///Interrupt Disable register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaidr{}; 
        namespace DmaidrValC{
        }
    }
    namespace CrccuDmaImr{    ///<CRCCU DMA Interrupt Mask Register
        using Addr = Register::Address<0x4004401c,0xfffffffe,0,unsigned>;
        ///Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaimr{}; 
        namespace DmaimrValC{
        }
    }
    namespace CrccuDmaIsr{    ///<CRCCU DMA Interrupt Status Register
        using Addr = Register::Address<0x40044020,0xfffffffe,0,unsigned>;
        ///Interrupt Status register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaisr{}; 
        namespace DmaisrValC{
        }
    }
    namespace CrccuCr{    ///<CRCCU Control Register
        using Addr = Register::Address<0x40044034,0xfffffffe,0,unsigned>;
        ///CRC Computation Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reset{}; 
        namespace ResetValC{
        }
    }
    namespace CrccuMr{    ///<CRCCU Mode Register
        using Addr = Register::Address<0x40044038,0xffffff00,0,unsigned>;
        ///CRC Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///CRC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> compare{}; 
        namespace CompareValC{
        }
        ///Primitive Polynomial
        enum class PtypeVal {
            ccitt8023=0x00000000,     ///<Polynom 0x04C11DB7
            castagnoli=0x00000001,     ///<Polynom 0x1EDC6F41
            ccitt16=0x00000002,     ///<Polynom 0x1021
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::ccitt8023> ccitt8023{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::castagnoli> castagnoli{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::ccitt16> ccitt16{};
        }
        ///Request Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> divider{}; 
        namespace DividerValC{
        }
    }
    namespace CrccuSr{    ///<CRCCU Status Register
        using Addr = Register::Address<0x4004403c,0x00000000,0,unsigned>;
        ///Cyclic Redundancy Check Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crc{}; 
        namespace CrcValC{
        }
    }
    namespace CrccuIer{    ///<CRCCU Interrupt Enable Register
        using Addr = Register::Address<0x40044040,0xfffffffe,0,unsigned>;
        ///CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> errier{}; 
        namespace ErrierValC{
        }
    }
    namespace CrccuIdr{    ///<CRCCU Interrupt Disable Register
        using Addr = Register::Address<0x40044044,0xfffffffe,0,unsigned>;
        ///CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> erridr{}; 
        namespace ErridrValC{
        }
    }
    namespace CrccuImr{    ///<CRCCU Interrupt Mask Register
        using Addr = Register::Address<0x40044048,0xfffffffe,0,unsigned>;
        ///CRC Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> errimr{}; 
        namespace ErrimrValC{
        }
    }
    namespace CrccuIsr{    ///<CRCCU Interrupt Status Register
        using Addr = Register::Address<0x4004404c,0xfffffffe,0,unsigned>;
        ///CRC Error Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> errisr{}; 
        namespace ErrisrValC{
        }
    }
}
