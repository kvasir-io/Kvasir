#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Watch Counter
    namespace Nonewcrd{    ///<Watch Counter Read Register
        using Addr = Register::Address<0x4003a000,0xffffffc0,0,unsigned char>;
        ///Counter read bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ctr{}; 
        namespace CtrValC{
        }
    }
    namespace Nonewcrl{    ///<Watch Counter Reload Register
        using Addr = Register::Address<0x4003a001,0xffffffc0,0,unsigned char>;
        ///Counter reload value setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> rlc{}; 
        namespace RlcValC{
        }
    }
    namespace Nonewccr{    ///<Watch Counter Control Register
        using Addr = Register::Address<0x4003a002,0xffffff30,0,unsigned char>;
        ///Watch counter operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wcen{}; 
        namespace WcenValC{
        }
        ///Watch counter operating state flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wcop{}; 
        namespace WcopValC{
        }
        ///Count clock select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cs{}; 
        namespace CsValC{
        }
        ///Interrupt request enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wcie{}; 
        namespace WcieValC{
        }
        ///Interrupt request flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wcif{}; 
        namespace WcifValC{
        }
    }
    namespace NoneclkSel{    ///<Clock Selection Register
        using Addr = Register::Address<0x4003a010,0xfffff8fc,0,unsigned>;
        ///Output clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> selOut{}; 
        namespace SeloutValC{
        }
        ///Input clock selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> selIn{}; 
        namespace SelinValC{
        }
    }
    namespace NoneclkEn{    ///<Division Clock Enable Register
        using Addr = Register::Address<0x4003a014,0xfffffffc,0,unsigned char>;
        ///Division clock enable read bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkEnR{}; 
        namespace ClkenrValC{
        }
        ///Division clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clkEn{}; 
        namespace ClkenValC{
        }
    }
}
