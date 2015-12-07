#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Comparator
    namespace Nonecomp1Csr{    ///<Comparator 1 control and status
          register
        using Addr = Register::Address<0x40010030,0x3fff0ece,0,unsigned>;
        ///Comparator 1 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp1En{}; 
        namespace Comp1enValC{
        }
        ///Comparator 1 Input Minus connection
              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> comp1InnSel{}; 
        namespace Comp1innselValC{
        }
        ///Comparator 1 window mode selection
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> comp1Wm{}; 
        namespace Comp1wmValC{
        }
        ///COMP1 output select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> comp1OutSel{}; 
        namespace Comp1outselValC{
        }
        ///Comparator 1 polarity selection
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp1Polarity{}; 
        namespace Comp1polarityValC{
        }
        ///Comparator 1 output status
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp1Value{}; 
        namespace Comp1valueValC{
        }
        ///COMP1_CSR register lock
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp1Lock{}; 
        namespace Comp1lockValC{
        }
    }
    namespace Nonecomp2Csr{    ///<Comparator 2 control and status
          register
        using Addr = Register::Address<0x40010034,0x3fff0886,0,unsigned>;
        ///COMP2_CSR register lock
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp2Lock{}; 
        namespace Comp2lockValC{
        }
        ///Comparator 2 output status
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp2Value{}; 
        namespace Comp2valueValC{
        }
        ///Comparator 2 polarity selection
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp2Polarity{}; 
        namespace Comp2polarityValC{
        }
        ///Comparator 2 Input Plus connection
              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> comp2InpSel{}; 
        namespace Comp2inpselValC{
        }
        ///Comparator 2 Input Minus connection
              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp2InnSel{}; 
        namespace Comp2innselValC{
        }
        ///Comparator 2 power mode selection
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> comp2Speed{}; 
        namespace Comp2speedValC{
        }
        ///Comparator 2 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp2En{}; 
        namespace Comp2enValC{
        }
        ///COMP2 output select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> comp2OutSel{}; 
        namespace Comp2outselValC{
        }
    }
}
