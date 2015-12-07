#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Reset Controller
    namespace RstcCr{    ///<Control Register
        using Addr = Register::Address<0x400e1200,0x00fffff2,0,unsigned>;
        ///Processor Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> procrst{}; 
        namespace ProcrstValC{
        }
        ///Peripheral Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> perrst{}; 
        namespace PerrstValC{
        }
        ///External Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extrst{}; 
        namespace ExtrstValC{
        }
        ///Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace RstcSr{    ///<Status Register
        using Addr = Register::Address<0x400e1204,0xfffcf8fe,0,unsigned>;
        ///User Reset Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ursts{}; 
        namespace UrstsValC{
        }
        ///Reset Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> rsttyp{}; 
        namespace RsttypValC{
        }
        ///NRST Pin Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nrstl{}; 
        namespace NrstlValC{
        }
        ///Software Reset Command in Progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> srcmp{}; 
        namespace SrcmpValC{
        }
    }
    namespace RstcMr{    ///<Mode Register
        using Addr = Register::Address<0x400e1208,0x00fff0ee,0,unsigned>;
        ///User Reset Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ursten{}; 
        namespace UrstenValC{
        }
        ///User Reset Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> urstien{}; 
        namespace UrstienValC{
        }
        ///External Reset Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> erstl{}; 
        namespace ErstlValC{
        }
        ///Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
}
