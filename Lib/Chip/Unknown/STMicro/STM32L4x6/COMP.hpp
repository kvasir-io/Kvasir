#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Comparator
    namespace Nonecomp1Csr{    ///<Comparator 1 control and status
          register
        using Addr = Register::Address<0x40010200,0x3f207f02,0,unsigned>;
        ///Comparator 1 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp1En{}; 
        namespace Comp1enValC{
        }
        ///Power Mode of the comparator
              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp1Pwrmode{}; 
        namespace Comp1pwrmodeValC{
        }
        ///Comparator 1 Input Minus connection
              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp1Inmsel{}; 
        namespace Comp1inmselValC{
        }
        ///Comparator1 input plus selection
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp1Inpsel{}; 
        namespace Comp1inpselValC{
        }
        ///Comparator 1 polarity selection
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp1Polarity{}; 
        namespace Comp1polarityValC{
        }
        ///Comparator 1 hysteresis selection
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp1Hyst{}; 
        namespace Comp1hystValC{
        }
        ///Comparator 1 blanking source selection
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp1Blanking{}; 
        namespace Comp1blankingValC{
        }
        ///Scaler bridge enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> comp1Brgen{}; 
        namespace Comp1brgenValC{
        }
        ///Voltage scaler enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> comp1Scalen{}; 
        namespace Comp1scalenValC{
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
        using Addr = Register::Address<0x40010204,0x3f207d02,0,unsigned>;
        ///Comparator 2 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp2En{}; 
        namespace Comp2enValC{
        }
        ///Power Mode of the comparator
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp2Pwrmode{}; 
        namespace Comp2pwrmodeValC{
        }
        ///Comparator 2 Input Minus connection
              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp2Inmsel{}; 
        namespace Comp2inmselValC{
        }
        ///Comparator 2 Input Plus connection
              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp2Inpsel{}; 
        namespace Comp2inpselValC{
        }
        ///Windows mode selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> comp2Winmode{}; 
        namespace Comp2winmodeValC{
        }
        ///Comparator 2 polarity selection
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp2Polarity{}; 
        namespace Comp2polarityValC{
        }
        ///Comparator 2 hysteresis selection
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp2Hyst{}; 
        namespace Comp2hystValC{
        }
        ///Comparator 2 blanking source selection
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp2Blanking{}; 
        namespace Comp2blankingValC{
        }
        ///Scaler bridge enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> comp2Brgen{}; 
        namespace Comp2brgenValC{
        }
        ///Voltage scaler enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> comp2Scalen{}; 
        namespace Comp2scalenValC{
        }
        ///Comparator 2 output status
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp2Value{}; 
        namespace Comp2valueValC{
        }
        ///COMP2_CSR register lock
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp2Lock{}; 
        namespace Comp2lockValC{
        }
    }
}
