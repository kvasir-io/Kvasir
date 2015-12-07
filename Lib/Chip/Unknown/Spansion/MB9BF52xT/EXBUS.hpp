#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral EXBUS 
    namespace Nonemode0{    ///< register MODE0 
        using Addr = Register::Address<0x4003f000,0xffffc400,0,unsigned>;
        /// bitfield MOEXEUP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> moexeup{}; 
        namespace MoexeupValC{
        }
        /// bitfield MPXCSOF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mpxcsof{}; 
        namespace MpxcsofValC{
        }
        /// bitfield MPXDOFF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mpxdoff{}; 
        namespace MpxdoffValC{
        }
        /// bitfield ALEINV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> aleinv{}; 
        namespace AleinvValC{
        }
        /// bitfield MPXMODE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mpxmode{}; 
        namespace MpxmodeValC{
        }
        /// bitfield SHRTDOUT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shrtdout{}; 
        namespace ShrtdoutValC{
        }
        /// bitfield RDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rdy{}; 
        namespace RdyValC{
        }
        /// bitfield PAGE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> page{}; 
        namespace PageValC{
        }
        /// bitfield NAND 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nand{}; 
        namespace NandValC{
        }
        /// bitfield WEOFF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> weoff{}; 
        namespace WeoffValC{
        }
        /// bitfield RBMON 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rbmon{}; 
        namespace RbmonValC{
        }
        /// bitfield WDTH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wdth{}; 
        namespace WdthValC{
        }
    }
    namespace Nonemode1{    ///< register MODE1 
        using Addr = Register::Address<0x4003f004,0xffffffff,0,unsigned>;
    }
    namespace Nonemode2{    ///< register MODE2 
        using Addr = Register::Address<0x4003f008,0xffffffff,0,unsigned>;
    }
    namespace Nonemode3{    ///< register MODE3 
        using Addr = Register::Address<0x4003f00c,0xffffffff,0,unsigned>;
    }
    namespace Nonemode4{    ///< register MODE4 
        using Addr = Register::Address<0x4003f010,0xffffffff,0,unsigned>;
    }
    namespace Nonemode5{    ///< register MODE5 
        using Addr = Register::Address<0x4003f014,0xffffffff,0,unsigned>;
    }
    namespace Nonemode6{    ///< register MODE6 
        using Addr = Register::Address<0x4003f018,0xffffffff,0,unsigned>;
    }
    namespace Nonemode7{    ///< register MODE7 
        using Addr = Register::Address<0x4003f01c,0xffffffff,0,unsigned>;
    }
    namespace Nonetim0{    ///< register TIM0 
        using Addr = Register::Address<0x4003f020,0x00000000,0,unsigned>;
        /// bitfield WIDLC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> widlc{}; 
        namespace WidlcValC{
        }
        /// bitfield WWEC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> wwec{}; 
        namespace WwecValC{
        }
        /// bitfield WADC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> wadc{}; 
        namespace WadcValC{
        }
        /// bitfield WACC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> wacc{}; 
        namespace WaccValC{
        }
        /// bitfield RIDLC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ridlc{}; 
        namespace RidlcValC{
        }
        /// bitfield FRADC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> fradc{}; 
        namespace FradcValC{
        }
        /// bitfield RADC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> radc{}; 
        namespace RadcValC{
        }
        /// bitfield RACC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> racc{}; 
        namespace RaccValC{
        }
    }
    namespace Nonetim1{    ///< register TIM1 
        using Addr = Register::Address<0x4003f024,0xffffffff,0,unsigned>;
    }
    namespace Nonetim2{    ///< register TIM2 
        using Addr = Register::Address<0x4003f028,0xffffffff,0,unsigned>;
    }
    namespace Nonetim3{    ///< register TIM3 
        using Addr = Register::Address<0x4003f02c,0xffffffff,0,unsigned>;
    }
    namespace Nonetim4{    ///< register TIM4 
        using Addr = Register::Address<0x4003f030,0xffffffff,0,unsigned>;
    }
    namespace Nonetim5{    ///< register TIM5 
        using Addr = Register::Address<0x4003f034,0xffffffff,0,unsigned>;
    }
    namespace Nonetim6{    ///< register TIM6 
        using Addr = Register::Address<0x4003f038,0xffffffff,0,unsigned>;
    }
    namespace Nonetim7{    ///< register TIM7 
        using Addr = Register::Address<0x4003f03c,0xffffffff,0,unsigned>;
    }
    namespace Nonearea0{    ///< register AREA0 
        using Addr = Register::Address<0x4003f040,0xff80ff00,0,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Nonearea1{    ///< register AREA1 
        using Addr = Register::Address<0x4003f044,0xff80ff00,0,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Nonearea2{    ///< register AREA2 
        using Addr = Register::Address<0x4003f048,0xff80ff00,0,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Nonearea3{    ///< register AREA3 
        using Addr = Register::Address<0x4003f04c,0xff80ff00,0,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Nonearea4{    ///< register AREA4 
        using Addr = Register::Address<0x4003f050,0xff80ff00,0,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Nonearea5{    ///< register AREA5 
        using Addr = Register::Address<0x4003f054,0xff80ff00,0,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Nonearea6{    ///< register AREA6 
        using Addr = Register::Address<0x4003f058,0xff80ff00,0,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Nonearea7{    ///< register AREA7 
        using Addr = Register::Address<0x4003f05c,0xff80ff00,0,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Noneatim0{    ///< register ATIM0 
        using Addr = Register::Address<0x4003f060,0xfffff000,0,unsigned>;
        /// bitfield ALEW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> alew{}; 
        namespace AlewValC{
        }
        /// bitfield ALES 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ales{}; 
        namespace AlesValC{
        }
        /// bitfield ALC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> alc{}; 
        namespace AlcValC{
        }
    }
    namespace Noneatim1{    ///< register ATIM1 
        using Addr = Register::Address<0x4003f064,0xffffffff,0,unsigned>;
    }
    namespace Noneatim2{    ///< register ATIM2 
        using Addr = Register::Address<0x4003f068,0xffffffff,0,unsigned>;
    }
    namespace Noneatim3{    ///< register ATIM3 
        using Addr = Register::Address<0x4003f06c,0xffffffff,0,unsigned>;
    }
    namespace Noneatim4{    ///< register ATIM4 
        using Addr = Register::Address<0x4003f070,0xffffffff,0,unsigned>;
    }
    namespace Noneatim5{    ///< register ATIM5 
        using Addr = Register::Address<0x4003f074,0xffffffff,0,unsigned>;
    }
    namespace Noneatim6{    ///< register ATIM6 
        using Addr = Register::Address<0x4003f078,0xffffffff,0,unsigned>;
    }
    namespace Noneatim7{    ///< register ATIM7 
        using Addr = Register::Address<0x4003f07c,0xffffffff,0,unsigned>;
    }
    namespace Nonedclkr{    ///< register DCLKR 
        using Addr = Register::Address<0x4003f300,0xffffffe0,0,unsigned>;
        /// bitfield MCLKON 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mclkon{}; 
        namespace MclkonValC{
        }
        /// bitfield MDIV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mdiv{}; 
        namespace MdivValC{
        }
    }
}
