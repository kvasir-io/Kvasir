#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System configuration controller
    namespace Nonecfgr1{    ///<SYSCFG configuration register
          1
        using Addr = Register::Address<0x40010000,0xfffffcfc,0,unsigned>;
        ///Boot mode selected by the boot pins
              status bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> bootMode{}; 
        namespace BootmodeValC{
        }
        ///Memory mapping selection
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> memMode{}; 
        namespace MemmodeValC{
        }
    }
    namespace Nonecfgr2{    ///<SYSCFG configuration register
          2
        using Addr = Register::Address<0x40010004,0xffffc0f0,0,unsigned>;
        ///I2C2 Fm+ drive capability enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> i2c2Fmp{}; 
        namespace I2c2fmpValC{
        }
        ///I2C1 Fm+ drive capability enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> i2c1Fmp{}; 
        namespace I2c1fmpValC{
        }
        ///Fm+ drive capability on PB9 enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> i2cPb9Fmp{}; 
        namespace I2cpb9fmpValC{
        }
        ///Fm+ drive capability on PB8 enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> i2cPb8Fmp{}; 
        namespace I2cpb8fmpValC{
        }
        ///Fm+ drive capability on PB7 enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> i2cPb7Fmp{}; 
        namespace I2cpb7fmpValC{
        }
        ///Fm+ drive capability on PB6 enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> i2cPb6Fmp{}; 
        namespace I2cpb6fmpValC{
        }
        ///Configuration of internal VLCD rail
              connection to optional external
              capacitor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> capa{}; 
        namespace CapaValC{
        }
        ///Firewall disable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fwdisen{}; 
        namespace FwdisenValC{
        }
    }
    namespace Noneexticr1{    ///<external interrupt configuration register
          1
        using Addr = Register::Address<0x40010008,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3{}; 
        namespace Exti3ValC{
        }
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2{}; 
        namespace Exti2ValC{
        }
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1{}; 
        namespace Exti1ValC{
        }
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0{}; 
        namespace Exti0ValC{
        }
    }
    namespace Noneexticr2{    ///<external interrupt configuration register
          2
        using Addr = Register::Address<0x4001000c,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti7{}; 
        namespace Exti7ValC{
        }
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti6{}; 
        namespace Exti6ValC{
        }
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti5{}; 
        namespace Exti5ValC{
        }
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti4{}; 
        namespace Exti4ValC{
        }
    }
    namespace Noneexticr3{    ///<external interrupt configuration register
          3
        using Addr = Register::Address<0x40010010,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 8 to
              11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11{}; 
        namespace Exti11ValC{
        }
        ///EXTI10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10{}; 
        namespace Exti10ValC{
        }
        ///EXTI x configuration (x = 8 to
              11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9{}; 
        namespace Exti9ValC{
        }
        ///EXTI x configuration (x = 8 to
              11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8{}; 
        namespace Exti8ValC{
        }
    }
    namespace Noneexticr4{    ///<external interrupt configuration register
          4
        using Addr = Register::Address<0x40010014,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 12 to
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti15{}; 
        namespace Exti15ValC{
        }
        ///EXTI14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti14{}; 
        namespace Exti14ValC{
        }
        ///EXTI13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti13{}; 
        namespace Exti13ValC{
        }
        ///EXTI12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti12{}; 
        namespace Exti12ValC{
        }
    }
    namespace Nonecfgr3{    ///<SYSCFG configuration register
          3
        using Addr = Register::Address<0x40010020,0x03ffccce,0,unsigned>;
        ///REF_CTRL lock bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> refLock{}; 
        namespace ReflockValC{
        }
        ///VREFINT ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> vrefintRdyf{}; 
        namespace VrefintrdyfValC{
        }
        ///VREFINT for comparator ready
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> vrefintCompRdyf{}; 
        namespace VrefintcomprdyfValC{
        }
        ///VREFINT for ADC ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> vrefintAdcRdyf{}; 
        namespace VrefintadcrdyfValC{
        }
        ///Sensor for ADC ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> sensorAdcRdyf{}; 
        namespace SensoradcrdyfValC{
        }
        ///VREFINT for 48 MHz RC oscillator ready
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> refRc48mhzRdyf{}; 
        namespace Refrc48mhzrdyfValC{
        }
        ///VREFINT reference for 48 MHz RC
              oscillator enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enrefRc48mhz{}; 
        namespace Enrefrc48mhzValC{
        }
        ///VREFINT reference for comparator 2
              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enbufVrefintComp{}; 
        namespace EnbufvrefintcompValC{
        }
        ///Sensor reference for ADC enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> enbufSensorAdc{}; 
        namespace EnbufsensoradcValC{
        }
        ///VREFINT reference for ADC enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> enbufBgapAdc{}; 
        namespace EnbufbgapadcValC{
        }
        ///BGAP_ADC connection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> selVrefOut{}; 
        namespace SelvrefoutValC{
        }
        ///Vref Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enBgap{}; 
        namespace EnbgapValC{
        }
    }
}
