#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DSTC registers
    namespace Nonedestp{    ///<Descriptor top address Register
        using Addr = Register::Address<0x40061000,0xffffffff,0,unsigned>;
    }
    namespace Nonehwdesp{    ///<Hardware DES pointer Register
        using Addr = Register::Address<0x40061004,0xc000ff00,0,unsigned>;
        ///HWDESP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> hwdesp{}; 
        namespace HwdespValC{
        }
        ///CHANNEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
    }
    namespace Nonecmd{    ///<Command Register
        using Addr = Register::Address<0x40061008,0xffffffff,0,unsigned char>;
    }
    namespace Nonecfg{    ///<Configuration Register
        using Addr = Register::Address<0x40061009,0xffffff80,0,unsigned char>;
        ///Software transfer priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> swpr{}; 
        namespace SwprValC{
        }
        ///Error stop enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> este{}; 
        namespace EsteValC{
        }
        ///Read skip buffer disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rbdis{}; 
        namespace RbdisValC{
        }
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> erinte{}; 
        namespace ErinteValC{
        }
        ///Software interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swinte{}; 
        namespace SwinteValC{
        }
    }
    namespace Noneswtr{    ///<Software trigger Register
        using Addr = Register::Address<0x4006100a,0xffff0000,0,unsigned>;
        ///Software status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swst{}; 
        namespace SwstValC{
        }
        ///Software request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> swreq{}; 
        namespace SwreqValC{
        }
        ///Software DES pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> swdesp{}; 
        namespace SwdespValC{
        }
    }
    namespace Nonemoners{    ///<MONERS Register
        using Addr = Register::Address<0x4006100c,0xc00000a0,0,unsigned>;
        ///Error DES pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> edesp{}; 
        namespace EdespValC{
        }
        ///Error hardware channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ech{}; 
        namespace EchValC{
        }
        ///Error hardware software
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ehs{}; 
        namespace EhsValC{
        }
        ///Error stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> estop{}; 
        namespace EstopValC{
        }
        ///Double error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> der{}; 
        namespace DerValC{
        }
        ///Error status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> est{}; 
        namespace EstValC{
        }
    }
    namespace Nonedreqenb0{    ///<DMA request enable Register 0
        using Addr = Register::Address<0x40061010,0xffffffff,0,unsigned>;
    }
    namespace Nonedreqenb1{    ///<DMA request enable Register 1
        using Addr = Register::Address<0x40061014,0xffffffff,0,unsigned>;
    }
    namespace Nonedreqenb2{    ///<DMA request enable Register 2
        using Addr = Register::Address<0x40061018,0xffffffff,0,unsigned>;
    }
    namespace Nonedreqenb3{    ///<DMA request enable Register 3
        using Addr = Register::Address<0x4006101c,0xffffffff,0,unsigned>;
    }
    namespace Nonedreqenb4{    ///<DMA request enable Register 4
        using Addr = Register::Address<0x40061020,0xffffffff,0,unsigned>;
    }
    namespace Nonedreqenb5{    ///<DMA request enable Register 5
        using Addr = Register::Address<0x40061024,0xffffffff,0,unsigned>;
    }
    namespace Nonedreqenb6{    ///<DMA request enable Register 6
        using Addr = Register::Address<0x40061028,0xffffffff,0,unsigned>;
    }
    namespace Nonedreqenb7{    ///<DMA request enable Register 7
        using Addr = Register::Address<0x4006102c,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint0{    ///<Hardware transfer interrupt Register 0
        using Addr = Register::Address<0x40061030,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint1{    ///<Hardware transfer interrupt Register 1
        using Addr = Register::Address<0x40061034,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint2{    ///<Hardware transfer interrupt Register 2
        using Addr = Register::Address<0x40061038,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint3{    ///<Hardware transfer interrupt Register 3
        using Addr = Register::Address<0x4006103c,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint4{    ///<Hardware transfer interrupt Register 4
        using Addr = Register::Address<0x40061040,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint5{    ///<Hardware transfer interrupt Register 5
        using Addr = Register::Address<0x40061044,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint6{    ///<Hardware transfer interrupt Register 6
        using Addr = Register::Address<0x40061048,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint7{    ///<Hardware transfer interrupt Register 7
        using Addr = Register::Address<0x4006104c,0xffffffff,0,unsigned>;
    }
    namespace Nonehwintclr0{    ///<Hardware transfer interrupt clear Register 0
        using Addr = Register::Address<0x40061050,0xffffffff,0,unsigned>;
    }
    namespace Nonehwintclr1{    ///<Hardware transfer interrupt clear Register 1
        using Addr = Register::Address<0x40061054,0xffffffff,0,unsigned>;
    }
    namespace Nonehwintclr2{    ///<Hardware transfer interrupt clear Register 2
        using Addr = Register::Address<0x40061058,0xffffffff,0,unsigned>;
    }
    namespace Nonehwintclr3{    ///<Hardware transfer interrupt clear Register 3
        using Addr = Register::Address<0x4006105c,0xffffffff,0,unsigned>;
    }
    namespace Nonehwintclr4{    ///<Hardware transfer interrupt clear Register 4
        using Addr = Register::Address<0x40061060,0xffffffff,0,unsigned>;
    }
    namespace Nonehwintclr5{    ///<Hardware transfer interrupt clear Register 5
        using Addr = Register::Address<0x40061064,0xffffffff,0,unsigned>;
    }
    namespace Nonehwintclr6{    ///<Hardware transfer interrupt clear Register 6
        using Addr = Register::Address<0x40061068,0xffffffff,0,unsigned>;
    }
    namespace Nonehwintclr7{    ///<Hardware transfer interrupt clear Register 7
        using Addr = Register::Address<0x4006106c,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk0{    ///<DMA request mask Register 0
        using Addr = Register::Address<0x40061070,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk1{    ///<DMA request mask Register 1
        using Addr = Register::Address<0x40061074,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk2{    ///<DMA request mask Register 2
        using Addr = Register::Address<0x40061078,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk3{    ///<DMA request mask Register 3
        using Addr = Register::Address<0x4006107c,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk4{    ///<DMA request mask Register 4
        using Addr = Register::Address<0x40061080,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk5{    ///<DMA request mask Register 5
        using Addr = Register::Address<0x40061084,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk6{    ///<DMA request mask Register 6
        using Addr = Register::Address<0x40061088,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk7{    ///<DMA request mask Register 7
        using Addr = Register::Address<0x4006108c,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr0{    ///<DMA request mask clear Register 0
        using Addr = Register::Address<0x40061090,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr1{    ///<DMA request mask clear Register 1
        using Addr = Register::Address<0x40061094,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr2{    ///<DMA request mask clear Register 2
        using Addr = Register::Address<0x40061098,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr3{    ///<DMA request mask clear Register 3
        using Addr = Register::Address<0x4006109c,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr4{    ///<DMA request mask clear Register 4
        using Addr = Register::Address<0x400610a0,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr5{    ///<DMA request mask clear Register 5
        using Addr = Register::Address<0x400610a4,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr6{    ///<DMA request mask clear Register 6
        using Addr = Register::Address<0x400610a8,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr7{    ///<DMA request mask clear Register 7
        using Addr = Register::Address<0x400610ac,0xffffffff,0,unsigned>;
    }
}
