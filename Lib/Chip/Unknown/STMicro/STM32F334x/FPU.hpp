#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Floting point unit
    namespace Nonecpacr{    ///<Coprocessor Access Control
          Register
        using Addr = Register::Address<0xe000ed88,0xffaf8aaa,0,unsigned>;
        ///Access privileges for coprocessor
              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cp0{}; 
        ///Access privileges for coprocessor
              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cp1{}; 
        ///Access privileges for coprocessor
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cp2{}; 
        ///Access privileges for coprocessor
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cp3{}; 
        ///Access privileges for coprocessor
              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cp4{}; 
        ///Access privileges for coprocessor
              5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cp5{}; 
        ///Access privileges for coprocessor
              6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> cp6{}; 
        ///Access privileges for coprocessor
              7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cp7{}; 
        ///Access privileges for coprocessor
              10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cp10{}; 
        ///Access privileges for coprocessor
              11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cp11{}; 
    }
    namespace Nonefpccr{    ///<FP Context Control Register
        using Addr = Register::Address<0xe000ef34,0x3ffffe84,0,unsigned>;
        ///LSPACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lspact{}; 
        ///USER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> user{}; 
        ///THREAD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> thread{}; 
        ///HFRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hfrdy{}; 
        ///MMRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mmrdy{}; 
        ///BFRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bfrdy{}; 
        ///MONRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> monrdy{}; 
        ///LSPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> lspen{}; 
        ///ASPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> aspen{}; 
    }
    namespace Nonefpcar{    ///<FP Context Address Register
        using Addr = Register::Address<0xe000ef38,0x00000007,0,unsigned>;
        ///ADDRESS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Nonefpdscr{    ///<FP Default Status Control
          Register
        using Addr = Register::Address<0xe000ef3c,0xf83fffff,0,unsigned>;
        ///RMode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> rmode{}; 
        ///FZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fz{}; 
        ///DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dn{}; 
        ///AHP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ahp{}; 
    }
    namespace Nonemvfr0{    ///<Media and VFP Feature Register
          0
        using Addr = Register::Address<0xe000ef40,0x00000000,0,unsigned>;
        ///A_SIMD registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> aSimd{}; 
        ///Single_precision
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> singlePrecision{}; 
        ///Double_precision
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> doublePrecision{}; 
        ///FP exception trapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> fpExceptionTrapping{}; 
        ///Divide
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> divide{}; 
        ///Square root
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> squareRoot{}; 
        ///Short vectors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> shortVectors{}; 
        ///FP rounding modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> fpRoundingModes{}; 
    }
    namespace Nonemvfr1{    ///<Media and VFP Feature Register
          1
        using Addr = Register::Address<0xe000ef44,0x00ffff00,0,unsigned>;
        ///FtZ mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ftzMode{}; 
        ///D_NaN mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dNanMode{}; 
        ///FP HPFP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> fpHpfp{}; 
        ///FP fused MAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> fpFusedMac{}; 
    }
}
