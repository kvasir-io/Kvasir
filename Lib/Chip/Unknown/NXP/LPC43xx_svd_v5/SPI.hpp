#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10503 Chapter title=LPC43xx
SPI Modification date=10/7/2011 Major revision=0 Minor revision=3 
    namespace Nonecr{    ///<SPI Control Register. This register controls the operation of the SPI.
        using Addr = Register::Address<0x40100000,0xfffff003,0,unsigned>;
        ///The SPI controller sends and receives 8 bits of data per transfer.
        enum class bitenableVal {
            theSpiControllerS=0x00000001,     ///<The SPI controller sends and receives the number of bits selected by bits 11:8.
        };
        namespace bitenableValC{
            constexpr MPL::Value<bitenableVal,bitenableVal::theSpiControllerS> theSpiControllerS{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bitenableVal> bitenable{}; 
        ///Clock phase control determines the relationship between the data and the clock on SPI transfers, and controls when a slave transfer is defined as starting and ending.
        enum class cphaVal {
            firstEdge=0x00000000,     ///<Data is sampled on the first clock edge of SCK. A transfer starts and ends with activation and deactivation of the SSEL signal.
            secondEdge=0x00000001,     ///<Data is sampled on the second clock edge of the SCK. A transfer starts with the first clock edge, and ends with the last sampling edge when the SSEL signal is active.
        };
        namespace cphaValC{
            constexpr MPL::Value<cphaVal,cphaVal::firstEdge> firstEdge{};
            constexpr MPL::Value<cphaVal,cphaVal::secondEdge> secondEdge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cphaVal> cpha{}; 
        ///Clock polarity control.
        enum class cpolVal {
            sckIsActiveHigh=0x00000000,     ///<SCK is active high.
            sckIsActiveLow=0x00000001,     ///<SCK is active low.
        };
        namespace cpolValC{
            constexpr MPL::Value<cpolVal,cpolVal::sckIsActiveHigh> sckIsActiveHigh{};
            constexpr MPL::Value<cpolVal,cpolVal::sckIsActiveLow> sckIsActiveLow{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,cpolVal> cpol{}; 
        ///Master mode select.
        enum class mstrVal {
            slave=0x00000000,     ///<The SPI operates in Slave mode.
            master=0x00000001,     ///<The SPI operates in Master mode.
        };
        namespace mstrValC{
            constexpr MPL::Value<mstrVal,mstrVal::slave> slave{};
            constexpr MPL::Value<mstrVal,mstrVal::master> master{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,mstrVal> mstr{}; 
        ///LSB First controls which direction each byte is shifted when transferred.
        enum class lsbfVal {
            msb=0x00000000,     ///<SPI data is transferred MSB (bit 7) first.
            lsb=0x00000001,     ///<SPI data is transferred LSB (bit 0) first.
        };
        namespace lsbfValC{
            constexpr MPL::Value<lsbfVal,lsbfVal::msb> msb{};
            constexpr MPL::Value<lsbfVal,lsbfVal::lsb> lsb{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lsbfVal> lsbf{}; 
        ///Serial peripheral interrupt enable.
        enum class spieVal {
            intblock=0x00000000,     ///<SPI interrupts are inhibited.
            hwint=0x00000001,     ///<A hardware interrupt is generated each time the SPIF or MODF bits are activated.
        };
        namespace spieValC{
            constexpr MPL::Value<spieVal,spieVal::intblock> intblock{};
            constexpr MPL::Value<spieVal,spieVal::hwint> hwint{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,spieVal> spie{}; 
        ///When bit 2 of this register is 1, this field controls the number of bits per transfer:
        enum class bitsVal {
            v8BitsPerTransfer=0x00000008,     ///<8 bits per transfer
            v9BitsPerTransfer=0x00000009,     ///<9 bits per transfer
            v10BitsPerTransfer=0x0000000a,     ///<10 bits per transfer
            v11BitsPerTransfer=0x0000000b,     ///<11 bits per transfer
            v12BitsPerTransfer=0x0000000c,     ///<12 bits per transfer
            v13BitsPerTransfer=0x0000000d,     ///<13 bits per transfer
            v14BitsPerTransfer=0x0000000e,     ///<14 bits per transfer
            v15BitsPerTransfer=0x0000000f,     ///<15 bits per transfer
            v16BitsPerTransfer=0x00000000,     ///<16 bits per transfer
        };
        namespace bitsValC{
            constexpr MPL::Value<bitsVal,bitsVal::v8BitsPerTransfer> v8BitsPerTransfer{};
            constexpr MPL::Value<bitsVal,bitsVal::v9BitsPerTransfer> v9BitsPerTransfer{};
            constexpr MPL::Value<bitsVal,bitsVal::v10BitsPerTransfer> v10BitsPerTransfer{};
            constexpr MPL::Value<bitsVal,bitsVal::v11BitsPerTransfer> v11BitsPerTransfer{};
            constexpr MPL::Value<bitsVal,bitsVal::v12BitsPerTransfer> v12BitsPerTransfer{};
            constexpr MPL::Value<bitsVal,bitsVal::v13BitsPerTransfer> v13BitsPerTransfer{};
            constexpr MPL::Value<bitsVal,bitsVal::v14BitsPerTransfer> v14BitsPerTransfer{};
            constexpr MPL::Value<bitsVal,bitsVal::v15BitsPerTransfer> v15BitsPerTransfer{};
            constexpr MPL::Value<bitsVal,bitsVal::v16BitsPerTransfer> v16BitsPerTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,bitsVal> bits{}; 
    }
    namespace Nonesr{    ///<SPI Status Register. This register shows the status of the SPI.
        using Addr = Register::Address<0x40100004,0xffffff07,0,unsigned>;
        ///Slave abort. When 1, this bit indicates that a slave abort has occurred. This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> abrt{}; 
        ///Mode fault. when 1, this bit indicates that a Mode fault error has occurred. This bit is cleared by reading this register, then writing the SPI0 control register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> modf{}; 
        ///Read overrun. When 1, this bit indicates that a read overrun has occurred. This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///Write collision. When 1, this bit indicates that a write collision has occurred. This bit is cleared by reading this register, then accessing the SPI Data Register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wcol{}; 
        ///SPI transfer complete flag. When 1, this bit indicates when a SPI data transfer is complete. When a master, this bit is set at the end of the last cycle of the transfer. When a slave, this bit is set on the last data sampling edge of the SCK. This bit is cleared by first reading this register, then accessing the SPI Data Register. Note: this is not the SPI interrupt flag. This flag is found in the SPINT register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> spif{}; 
    }
    namespace Nonedr{    ///<SPI Data Register. This bi-directional register provides the transmit and receive data for the SPI. Transmit data is provided to the SPI0 by writing to this register. Data received by the SPI0 can be read from this register.
        using Addr = Register::Address<0x40100008,0xffff0000,0,unsigned>;
        ///SPI Bi-directional data port.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> datalow{}; 
        ///If bit 2 of the SPCR is 1 and bits 11:8 are other than 1000, some or all of these bits contain the additional transmit and receive bits. When less than 16 bits are selected, the more significant among these bits read as zeroes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datahigh{}; 
    }
    namespace Noneccr{    ///<SPI Clock Counter Register. This register controls the frequency of a master's SCK0.
        using Addr = Register::Address<0x4010000c,0xffffff00,0,unsigned>;
        ///SPI0 Clock counter setting.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace Nonetcr{    ///<SPI Test Control register. For functional testing only.
        using Addr = Register::Address<0x40100010,0xffffff01,0,unsigned>;
        ///SPI test mode. When 0, the SPI operates normally. When 1, SCK will always be on, independent of master mode select and data availability setting.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> test{}; 
    }
    namespace Nonetsr{    ///<SPI Test Status register. For functional testing only.
        using Addr = Register::Address<0x40100014,0xffffff07,0,unsigned>;
        ///Slave abort.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> abrt{}; 
        ///Mode fault.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> modf{}; 
        ///Read overrun.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///Write collision.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wcol{}; 
        ///SPI transfer complete flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> spif{}; 
    }
    namespace Noneint{    ///<SPI Interrupt Flag. This register contains the interrupt flag for the SPI interface.
        using Addr = Register::Address<0x4010001c,0xfffffffe,0,unsigned>;
        ///SPI interrupt flag. Set by the SPI interface to generate an interrupt. Cleared by writing a 1 to this bit. Note: this bit will be set once when SPIE = 1 and at least one of SPIF and WCOL bits is 1. However, only when the SPI Interrupt bit is set and SPI0 Interrupt is enabled in the NVIC, SPI based interrupt can be processed by interrupt handling software.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spif{}; 
    }
}
