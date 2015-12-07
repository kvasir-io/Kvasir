#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Receiver Interface
    namespace Nonecr{    ///<Control register
        using Addr = Register::Address<0x40004000,0xfff88000,0,unsigned>;
        ///Peripheral Block Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> spdifen{}; 
        namespace SpdifenValC{
        }
        ///Receiver DMA ENable for data
              flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxdmaen{}; 
        namespace RxdmaenValC{
        }
        ///STerEO Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxsteo{}; 
        namespace RxsteoValC{
        }
        ///RX Data format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> drfmt{}; 
        namespace DrfmtValC{
        }
        ///Mask Parity error bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pmsk{}; 
        namespace PmskValC{
        }
        ///Mask of Validity bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> vmsk{}; 
        namespace VmskValC{
        }
        ///Mask of channel status and user
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cumsk{}; 
        namespace CumskValC{
        }
        ///Mask of Preamble Type bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ptmsk{}; 
        namespace PtmskValC{
        }
        ///Control Buffer DMA ENable for control
              flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbdmaen{}; 
        namespace CbdmaenValC{
        }
        ///Channel Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> chsel{}; 
        namespace ChselValC{
        }
        ///Maximum allowed re-tries during
              synchronization phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> nbtr{}; 
        namespace NbtrValC{
        }
        ///Wait For Activity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wfa{}; 
        namespace WfaValC{
        }
        ///input selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> insel{}; 
        namespace InselValC{
        }
    }
    namespace Noneimr{    ///<Interrupt mask register
        using Addr = Register::Address<0x40004004,0xffffff80,0,unsigned>;
        ///RXNE interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxneie{}; 
        namespace RxneieValC{
        }
        ///Control Buffer Ready Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csrneie{}; 
        namespace CsrneieValC{
        }
        ///Parity error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> perrie{}; 
        namespace PerrieValC{
        }
        ///Overrun error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovrie{}; 
        namespace OvrieValC{
        }
        ///Synchronization Block Detected Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sblkie{}; 
        namespace SblkieValC{
        }
        ///Synchronization Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> syncdie{}; 
        namespace SyncdieValC{
        }
        ///Serial Interface Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ifeie{}; 
        namespace IfeieValC{
        }
    }
    namespace Nonesr{    ///<Status register
        using Addr = Register::Address<0x40004008,0x8000fe00,0,unsigned>;
        ///Read data register not
              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxne{}; 
        namespace RxneValC{
        }
        ///Control Buffer register is not
              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csrne{}; 
        namespace CsrneValC{
        }
        ///Parity error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> perr{}; 
        namespace PerrValC{
        }
        ///Overrun error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
        ///Synchronization Block
              Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sbd{}; 
        namespace SbdValC{
        }
        ///Synchronization Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> syncd{}; 
        namespace SyncdValC{
        }
        ///Framing error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ferr{}; 
        namespace FerrValC{
        }
        ///Synchronization error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> serr{}; 
        namespace SerrValC{
        }
        ///Time-out error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> terr{}; 
        namespace TerrValC{
        }
        ///Duration of 5 symbols counted with
              SPDIF_CLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,16),Register::ReadWriteAccess,unsigned> width5{}; 
        namespace Width5ValC{
        }
    }
    namespace Noneifcr{    ///<Interrupt Flag Clear register
        using Addr = Register::Address<0x4000400c,0xffffffc3,0,unsigned>;
        ///Clears the Parity error
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> perrcf{}; 
        namespace PerrcfValC{
        }
        ///Clears the Overrun error
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovrcf{}; 
        namespace OvrcfValC{
        }
        ///Clears the Synchronization Block
              Detected flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sbdcf{}; 
        namespace SbdcfValC{
        }
        ///Clears the Synchronization Done
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> syncdcf{}; 
        namespace SyncdcfValC{
        }
    }
    namespace Nonedr{    ///<Data input register
        using Addr = Register::Address<0x40004010,0xc0000000,0,unsigned>;
        ///Parity Error bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> dr{}; 
        namespace DrValC{
        }
        ///Parity Error bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///Validity bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> v{}; 
        namespace VValC{
        }
        ///User bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> u{}; 
        namespace UValC{
        }
        ///Channel Status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> c{}; 
        namespace CValC{
        }
        ///Preamble Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pt{}; 
        namespace PtValC{
        }
    }
    namespace Nonecsr{    ///<Channel Status register
        using Addr = Register::Address<0x40004014,0xfe000000,0,unsigned>;
        ///User data information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> usr{}; 
        namespace UsrValC{
        }
        ///Channel A status
              information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> cs{}; 
        namespace CsValC{
        }
        ///Start Of Block
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> sob{}; 
        namespace SobValC{
        }
    }
    namespace Nonedir{    ///<Debug Information register
        using Addr = Register::Address<0x40004018,0xe000e000,0,unsigned>;
        ///Threshold HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> thi{}; 
        namespace ThiValC{
        }
        ///Threshold LOW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,16),Register::ReadWriteAccess,unsigned> tlo{}; 
        namespace TloValC{
        }
    }
}
