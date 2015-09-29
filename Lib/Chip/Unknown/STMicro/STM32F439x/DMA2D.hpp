#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA2D controller
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x4002b000,0xfffcc0f8,0,unsigned>;
        ///DMA2D mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Configuration Error Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ceie{}; 
        ///CLUT transfer complete interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///CLUT access error interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> caeie{}; 
        ///Transfer watermark interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> twie{}; 
        ///Transfer complete interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Abort
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> abort{}; 
        ///Suspend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> susp{}; 
        ///Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
    }
    namespace Noneisr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x4002b004,0xffffffc0,0,unsigned>;
        ///Configuration error interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ceif{}; 
        ///CLUT transfer complete interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctcif{}; 
        ///CLUT access error interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> caeif{}; 
        ///Transfer watermark interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> twif{}; 
        ///Transfer complete interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcif{}; 
        ///Transfer error interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif{}; 
    }
    namespace Noneifcr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4002b008,0xffffffc0,0,unsigned>;
        ///Clear configuration error interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cceif{}; 
        ///Clear CLUT transfer complete interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cctcif{}; 
        ///Clear CLUT access error interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> caecif{}; 
        ///Clear transfer watermark interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctwif{}; 
        ///Clear transfer complete interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif{}; 
        ///Clear Transfer error interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif{}; 
    }
    namespace Nonefgmar{    ///<foreground memory address
          register
        using Addr = Register::Address<0x4002b00c,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Nonefgor{    ///<foreground offset register
        using Addr = Register::Address<0x4002b010,0xffffc000,0,unsigned>;
        ///Line offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> lo{}; 
    }
    namespace Nonebgmar{    ///<background memory address
          register
        using Addr = Register::Address<0x4002b014,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Nonebgor{    ///<background offset register
        using Addr = Register::Address<0x4002b018,0xffffc000,0,unsigned>;
        ///Line offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> lo{}; 
    }
    namespace Nonefgpfccr{    ///<foreground PFC control
          register
        using Addr = Register::Address<0x4002b01c,0x00fc00c0,0,unsigned>;
        ///Alpha value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> alpha{}; 
        ///Alpha mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> am{}; 
        ///CLUT size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cs{}; 
        ///Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> start{}; 
        ///CLUT color mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccm{}; 
        ///Color mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cm{}; 
    }
    namespace Nonefgcolr{    ///<foreground color register
        using Addr = Register::Address<0x4002b020,0xff000000,0,unsigned>;
        ///Red Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        ///Green Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///Blue Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
    }
    namespace Nonebgpfccr{    ///<background PFC control
          register
        using Addr = Register::Address<0x4002b024,0x00fc00c0,0,unsigned>;
        ///Alpha value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> alpha{}; 
        ///Alpha mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> am{}; 
        ///CLUT size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cs{}; 
        ///Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> start{}; 
        ///CLUT Color mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccm{}; 
        ///Color mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cm{}; 
    }
    namespace Nonebgcolr{    ///<background color register
        using Addr = Register::Address<0x4002b028,0xff000000,0,unsigned>;
        ///Red Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        ///Green Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///Blue Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
    }
    namespace Nonefgcmar{    ///<foreground CLUT memory address
          register
        using Addr = Register::Address<0x4002b02c,0x00000000,0,unsigned>;
        ///Memory Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Nonebgcmar{    ///<background CLUT memory address
          register
        using Addr = Register::Address<0x4002b030,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Noneopfccr{    ///<output PFC control register
        using Addr = Register::Address<0x4002b034,0xfffffff8,0,unsigned>;
        ///Color mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> cm{}; 
    }
    namespace Noneocolr{    ///<output color register
        using Addr = Register::Address<0x4002b038,0x00000000,0,unsigned>;
        ///Alpha Channel Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aplha{}; 
        ///Red Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        ///Green Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///Blue Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
    }
    namespace Noneomar{    ///<output memory address register
        using Addr = Register::Address<0x4002b03c,0x00000000,0,unsigned>;
        ///Memory Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Noneoor{    ///<output offset register
        using Addr = Register::Address<0x4002b040,0xffffc000,0,unsigned>;
        ///Line Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> lo{}; 
    }
    namespace Nonenlr{    ///<number of line register
        using Addr = Register::Address<0x4002b044,0xc0000000,0,unsigned>;
        ///Pixel per lines
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Number of lines
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> nl{}; 
    }
    namespace Nonelwr{    ///<line watermark register
        using Addr = Register::Address<0x4002b048,0xffff0000,0,unsigned>;
        ///Line watermark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lw{}; 
    }
    namespace Noneamtcr{    ///<AHB master timer configuration
          register
        using Addr = Register::Address<0x4002b04c,0xffff00fe,0,unsigned>;
        ///Dead Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nonefgclut{    ///<FGCLUT
        using Addr = Register::Address<0x4002b400,0x00000000,0,unsigned>;
        ///APLHA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aplha{}; 
        ///RED
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        ///GREEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///BLUE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
    }
    namespace Nonebgclut{    ///<BGCLUT
        using Addr = Register::Address<0x4002b800,0x00000000,0,unsigned>;
        ///APLHA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aplha{}; 
        ///RED
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        ///GREEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///BLUE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
    }
}
