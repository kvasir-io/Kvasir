#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Floting point unit
    namespace Nonecpacr{    ///<Coprocessor Access Control           Register
        using Addr = Register::Address<0xe000ed88,0xffaf8aaa,0,unsigned>;
        ///Access privileges for coprocessor               0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cp0{}; 
        namespace Cp0ValC{
        }
        ///Access privileges for coprocessor               1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cp1{}; 
        namespace Cp1ValC{
        }
        ///Access privileges for coprocessor               2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cp2{}; 
        namespace Cp2ValC{
        }
        ///Access privileges for coprocessor               3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cp3{}; 
        namespace Cp3ValC{
        }
        ///Access privileges for coprocessor               4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cp4{}; 
        namespace Cp4ValC{
        }
        ///Access privileges for coprocessor               5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cp5{}; 
        namespace Cp5ValC{
        }
        ///Access privileges for coprocessor               6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> cp6{}; 
        namespace Cp6ValC{
        }
        ///Access privileges for coprocessor               7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cp7{}; 
        namespace Cp7ValC{
        }
        ///Access privileges for coprocessor               10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cp10{}; 
        namespace Cp10ValC{
        }
        ///Access privileges for coprocessor               11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cp11{}; 
        namespace Cp11ValC{
        }
    }
    namespace Nonefpccr{    ///<FP Context Control Register
        using Addr = Register::Address<0xe000ef34,0x3ffffe84,0,unsigned>;
        ///LSPACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lspact{}; 
        namespace LspactValC{
        }
        ///USER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> user{}; 
        namespace UserValC{
        }
        ///THREAD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> thread{}; 
        namespace ThreadValC{
        }
        ///HFRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hfrdy{}; 
        namespace HfrdyValC{
        }
        ///MMRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mmrdy{}; 
        namespace MmrdyValC{
        }
        ///BFRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bfrdy{}; 
        namespace BfrdyValC{
        }
        ///MONRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> monrdy{}; 
        namespace MonrdyValC{
        }
        ///LSPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> lspen{}; 
        namespace LspenValC{
        }
        ///ASPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> aspen{}; 
        namespace AspenValC{
        }
    }
    namespace Nonefpcar{    ///<FP Context Address Register
        using Addr = Register::Address<0xe000ef38,0x00000007,0,unsigned>;
        ///ADDRESS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> address{}; 
        namespace AddressValC{
        }
    }
    namespace Nonefpdscr{    ///<FP Default Status Control           Register
        using Addr = Register::Address<0xe000ef3c,0xf83fffff,0,unsigned>;
        ///RMode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> rmode{}; 
        namespace RmodeValC{
        }
        ///FZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fz{}; 
        namespace FzValC{
        }
        ///DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dn{}; 
        namespace DnValC{
        }
        ///AHP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ahp{}; 
        namespace AhpValC{
        }
    }
    namespace Nonemvfr0{    ///<Media and VFP Feature Register           0
        using Addr = Register::Address<0xe000ef40,0x00000000,0,unsigned>;
        ///A_SIMD registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> aSimd{}; 
        namespace AsimdValC{
        }
        ///Single_precision
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> singlePrecision{}; 
        namespace SingleprecisionValC{
        }
        ///Double_precision
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> doublePrecision{}; 
        namespace DoubleprecisionValC{
        }
        ///FP exception trapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> fpExceptionTrapping{}; 
        namespace FpexceptiontrappingValC{
        }
        ///Divide
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> divide{}; 
        namespace DivideValC{
        }
        ///Square root
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> squareRoot{}; 
        namespace SquarerootValC{
        }
        ///Short vectors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> shortVectors{}; 
        namespace ShortvectorsValC{
        }
        ///FP rounding modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> fpRoundingModes{}; 
        namespace FproundingmodesValC{
        }
    }
    namespace Nonemvfr1{    ///<Media and VFP Feature Register           1
        using Addr = Register::Address<0xe000ef44,0x00ffff00,0,unsigned>;
        ///FtZ mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ftzMode{}; 
        namespace FtzmodeValC{
        }
        ///D_NaN mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dNanMode{}; 
        namespace DnanmodeValC{
        }
        ///FP HPFP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> fpHpfp{}; 
        namespace FphpfpValC{
        }
        ///FP fused MAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> fpFusedMac{}; 
        namespace FpfusedmacValC{
        }
    }
}
