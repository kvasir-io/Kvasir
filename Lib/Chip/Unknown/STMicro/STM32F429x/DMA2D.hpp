#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA2D controller
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x4002b000,0xfffcc0f8,0,unsigned>;
        ///DMA2D mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
        ///Configuration Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ceie{}; 
        namespace CeieValC{
        }
        ///CLUT transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctcie{}; 
        namespace CtcieValC{
        }
        ///CLUT access error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> caeie{}; 
        namespace CaeieValC{
        }
        ///Transfer watermark interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> twie{}; 
        namespace TwieValC{
        }
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> abort{}; 
        namespace AbortValC{
        }
        ///Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> susp{}; 
        namespace SuspValC{
        }
        ///Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
    }
    namespace Noneisr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x4002b004,0xffffffc0,0,unsigned>;
        ///Configuration error interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ceif{}; 
        namespace CeifValC{
        }
        ///CLUT transfer complete interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctcif{}; 
        namespace CtcifValC{
        }
        ///CLUT access error interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> caeif{}; 
        namespace CaeifValC{
        }
        ///Transfer watermark interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> twif{}; 
        namespace TwifValC{
        }
        ///Transfer complete interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcif{}; 
        namespace TcifValC{
        }
        ///Transfer error interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif{}; 
        namespace TeifValC{
        }
    }
    namespace Noneifcr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4002b008,0xffffffc0,0,unsigned>;
        ///Clear configuration error interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cceif{}; 
        namespace CceifValC{
        }
        ///Clear CLUT transfer complete interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cctcif{}; 
        namespace CctcifValC{
        }
        ///Clear CLUT access error interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> caecif{}; 
        namespace CaecifValC{
        }
        ///Clear transfer watermark interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctwif{}; 
        namespace CtwifValC{
        }
        ///Clear transfer complete interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif{}; 
        namespace CtcifValC{
        }
        ///Clear Transfer error interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif{}; 
        namespace CteifValC{
        }
    }
    namespace Nonefgmar{    ///<foreground memory address
          register
        using Addr = Register::Address<0x4002b00c,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Nonefgor{    ///<foreground offset register
        using Addr = Register::Address<0x4002b010,0xffffc000,0,unsigned>;
        ///Line offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> lo{}; 
        namespace LoValC{
        }
    }
    namespace Nonebgmar{    ///<background memory address
          register
        using Addr = Register::Address<0x4002b014,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Nonebgor{    ///<background offset register
        using Addr = Register::Address<0x4002b018,0xffffc000,0,unsigned>;
        ///Line offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> lo{}; 
        namespace LoValC{
        }
    }
    namespace Nonefgpfccr{    ///<foreground PFC control
          register
        using Addr = Register::Address<0x4002b01c,0x00fc00c0,0,unsigned>;
        ///Alpha value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> alpha{}; 
        namespace AlphaValC{
        }
        ///Alpha mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> am{}; 
        namespace AmValC{
        }
        ///CLUT size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cs{}; 
        namespace CsValC{
        }
        ///Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///CLUT color mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccm{}; 
        namespace CcmValC{
        }
        ///Color mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cm{}; 
        namespace CmValC{
        }
    }
    namespace Nonefgcolr{    ///<foreground color register
        using Addr = Register::Address<0x4002b020,0xff000000,0,unsigned>;
        ///Red Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        namespace RedValC{
        }
        ///Green Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        namespace GreenValC{
        }
        ///Blue Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
        namespace BlueValC{
        }
    }
    namespace Nonebgpfccr{    ///<background PFC control
          register
        using Addr = Register::Address<0x4002b024,0x00fc00c0,0,unsigned>;
        ///Alpha value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> alpha{}; 
        namespace AlphaValC{
        }
        ///Alpha mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> am{}; 
        namespace AmValC{
        }
        ///CLUT size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cs{}; 
        namespace CsValC{
        }
        ///Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///CLUT Color mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccm{}; 
        namespace CcmValC{
        }
        ///Color mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cm{}; 
        namespace CmValC{
        }
    }
    namespace Nonebgcolr{    ///<background color register
        using Addr = Register::Address<0x4002b028,0xff000000,0,unsigned>;
        ///Red Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        namespace RedValC{
        }
        ///Green Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        namespace GreenValC{
        }
        ///Blue Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
        namespace BlueValC{
        }
    }
    namespace Nonefgcmar{    ///<foreground CLUT memory address
          register
        using Addr = Register::Address<0x4002b02c,0x00000000,0,unsigned>;
        ///Memory Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Nonebgcmar{    ///<background CLUT memory address
          register
        using Addr = Register::Address<0x4002b030,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Noneopfccr{    ///<output PFC control register
        using Addr = Register::Address<0x4002b034,0xfffffff8,0,unsigned>;
        ///Color mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> cm{}; 
        namespace CmValC{
        }
    }
    namespace Noneocolr{    ///<output color register
        using Addr = Register::Address<0x4002b038,0x00000000,0,unsigned>;
        ///Alpha Channel Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aplha{}; 
        namespace AplhaValC{
        }
        ///Red Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        namespace RedValC{
        }
        ///Green Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        namespace GreenValC{
        }
        ///Blue Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
        namespace BlueValC{
        }
    }
    namespace Noneomar{    ///<output memory address register
        using Addr = Register::Address<0x4002b03c,0x00000000,0,unsigned>;
        ///Memory Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Noneoor{    ///<output offset register
        using Addr = Register::Address<0x4002b040,0xffffc000,0,unsigned>;
        ///Line Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> lo{}; 
        namespace LoValC{
        }
    }
    namespace Nonenlr{    ///<number of line register
        using Addr = Register::Address<0x4002b044,0xc0000000,0,unsigned>;
        ///Pixel per lines
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Number of lines
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> nl{}; 
        namespace NlValC{
        }
    }
    namespace Nonelwr{    ///<line watermark register
        using Addr = Register::Address<0x4002b048,0xffff0000,0,unsigned>;
        ///Line watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lw{}; 
        namespace LwValC{
        }
    }
    namespace Noneamtcr{    ///<AHB master timer configuration
          register
        using Addr = Register::Address<0x4002b04c,0xffff00fe,0,unsigned>;
        ///Dead Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dt{}; 
        namespace DtValC{
        }
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nonefgclut{    ///<FGCLUT
        using Addr = Register::Address<0x4002b400,0x00000000,0,unsigned>;
        ///APLHA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aplha{}; 
        namespace AplhaValC{
        }
        ///RED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        namespace RedValC{
        }
        ///GREEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        namespace GreenValC{
        }
        ///BLUE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
        namespace BlueValC{
        }
    }
    namespace Nonebgclut{    ///<BGCLUT
        using Addr = Register::Address<0x4002b800,0x00000000,0,unsigned>;
        ///APLHA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aplha{}; 
        namespace AplhaValC{
        }
        ///RED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        namespace RedValC{
        }
        ///GREEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        namespace GreenValC{
        }
        ///BLUE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
        namespace BlueValC{
        }
    }
}
