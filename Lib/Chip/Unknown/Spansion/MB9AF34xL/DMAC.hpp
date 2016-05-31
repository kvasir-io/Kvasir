#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DMAC Registers
    namespace DmacDmacr{    ///<Entire DMAC Configuration Register
        using Addr = Register::Address<0x40060000,0x20ffffff,0x00000000,unsigned>;
        ///DMA Enable (all-channel operation enable bit) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> de{}; 
        ///DMA Stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ds{}; 
        ///Priority Rotation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pr{}; 
        ///DMA Halt (All-channel pause bit) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> dh{}; 
    }
    namespace DmacDmaca0{    ///<Configuration A Register
        using Addr = Register::Address<0x40060010,0x00700000,0x00000000,unsigned>;
        ///Enable bit (individual-channel operation enable bit)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eb{}; 
        ///Pause bit (individual-channel pause bit) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pb{}; 
        ///Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> st{}; 
        ///Input Select 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,23),Register::ReadWriteAccess,unsigned> is{}; 
        ///Block Count 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> bc{}; 
        ///Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tc{}; 
    }
    namespace DmacDmacb0{    ///<Configuration B Register
        using Addr = Register::Address<0x40060014,0xc000fffe,0x00000000,unsigned>;
        ///Mode Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ms{}; 
        ///Transfer Width 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tw{}; 
        ///Fixed Source 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> fs{}; 
        ///Fixed Destination
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fd{}; 
        ///Reload Count (BC/TC reload)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rc{}; 
        ///Reload Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> rs{}; 
        ///Reload Destination
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rd{}; 
        ///Error Interrupt (unsuccessful transfer completion interrupt enable)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ei{}; 
        ///Completion Interrupt (successful transfer completion interrupt enable)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ci{}; 
        ///Stop Status (stop status notification)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ss{}; 
        ///Enable bit Mask (EB bit clear mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> em{}; 
    }
    namespace DmacDmacsa0{    ///<Transfer Source Address Register
        using Addr = Register::Address<0x40060018,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacda0{    ///<Transfer Destination Address Register
        using Addr = Register::Address<0x4006001c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmaca1{    ///<Configuration A Register 1
        using Addr = Register::Address<0x40060020,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacb1{    ///<Configuration B Register 1
        using Addr = Register::Address<0x40060024,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacsa1{    ///<Transfer Source Address Register 1
        using Addr = Register::Address<0x40060028,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacda1{    ///<Transfer Destination Address Register 1
        using Addr = Register::Address<0x4006002c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmaca2{    ///<Configuration A Register 2
        using Addr = Register::Address<0x40060030,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacb2{    ///<Configuration B Register 2
        using Addr = Register::Address<0x40060034,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacsa2{    ///<Transfer Source Address Register 2
        using Addr = Register::Address<0x40060038,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacda2{    ///<Transfer Destination Address Register 2
        using Addr = Register::Address<0x4006003c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmaca3{    ///<Configuration A Register 3
        using Addr = Register::Address<0x40060040,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacb3{    ///<Configuration B Register 3
        using Addr = Register::Address<0x40060044,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacsa3{    ///<Transfer Source Address Register 3
        using Addr = Register::Address<0x40060048,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacda3{    ///<Transfer Destination Address Register 3
        using Addr = Register::Address<0x4006004c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmaca4{    ///<Configuration A Register 4
        using Addr = Register::Address<0x40060050,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacb4{    ///<Configuration B Register 4
        using Addr = Register::Address<0x40060054,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacsa4{    ///<Transfer Source Address Register 4
        using Addr = Register::Address<0x40060058,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacda4{    ///<Transfer Destination Address Register 4
        using Addr = Register::Address<0x4006005c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmaca5{    ///<Configuration A Register 5
        using Addr = Register::Address<0x40060060,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacb5{    ///<Configuration B Register 5
        using Addr = Register::Address<0x40060064,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacsa5{    ///<Transfer Source Address Register 5
        using Addr = Register::Address<0x40060068,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacda5{    ///<Transfer Destination Address Register 5
        using Addr = Register::Address<0x4006006c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmaca6{    ///<Configuration A Register 6
        using Addr = Register::Address<0x40060070,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacb6{    ///<Configuration B Register 6
        using Addr = Register::Address<0x40060074,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacsa6{    ///<Transfer Source Address Register 6
        using Addr = Register::Address<0x40060078,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacda6{    ///<Transfer Destination Address Register 6
        using Addr = Register::Address<0x4006007c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmaca7{    ///<Configuration A Register 7
        using Addr = Register::Address<0x40060080,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacb7{    ///<Configuration B Register 7
        using Addr = Register::Address<0x40060084,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacsa7{    ///<Transfer Source Address Register 7
        using Addr = Register::Address<0x40060088,0xffffffff,0x00000000,unsigned>;
    }
    namespace DmacDmacda7{    ///<Transfer Destination Address Register 7
        using Addr = Register::Address<0x4006008c,0xffffffff,0x00000000,unsigned>;
    }
}
