#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Analog-to-Digital Converter
    namespace Adc34Csr{    ///<ADC Common status register
        using Addr = Register::Address<0x50000700,0xf800f800,0x00000000,unsigned>;
        ///ADDRDY_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> addrdyMst{}; 
        ///EOSMP_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmpMst{}; 
        ///EOC_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eocMst{}; 
        ///EOS_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eosMst{}; 
        ///OVR_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovrMst{}; 
        ///JEOC_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jeocMst{}; 
        ///JEOS_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> jeosMst{}; 
        ///AWD1_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd1Mst{}; 
        ///AWD2_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> awd2Mst{}; 
        ///AWD3_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awd3Mst{}; 
        ///JQOVF_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jqovfMst{}; 
        ///ADRDY_SLV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrdySlv{}; 
        ///EOSMP_SLV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eosmpSlv{}; 
        ///End of regular conversion of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eocSlv{}; 
        ///End of regular sequence flag of the              slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eosSlv{}; 
        ///Overrun flag of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ovrSlv{}; 
        ///End of injected conversion flag of the              slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> jeocSlv{}; 
        ///End of injected sequence flag of the              slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> jeosSlv{}; 
        ///Analog watchdog 1 flag of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awd1Slv{}; 
        ///Analog watchdog 2 flag of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> awd2Slv{}; 
        ///Analog watchdog 3 flag of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> awd3Slv{}; 
        ///Injected Context Queue Overflow flag of              the slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> jqovfSlv{}; 
    }
    namespace Adc34Ccr{    ///<ADC common control register
        using Addr = Register::Address<0x50000708,0xfe3c10e0,0x00000000,unsigned>;
        ///Multi ADC mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> mult{}; 
        ///Delay between 2 sampling              phases
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> delay{}; 
        ///DMA configuration (for multi-ADC              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmacfg{}; 
        ///Direct memory access mode for multi ADC              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> mdma{}; 
        ///ADC clock mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ckmode{}; 
        ///VREFINT enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> vrefen{}; 
        ///Temperature sensor enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tsen{}; 
        ///VBAT enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> vbaten{}; 
    }
    namespace Adc34Cdr{    ///<ADC common regular data register for dual          and triple modes
        using Addr = Register::Address<0x5000070c,0x00000000,0x00000000,unsigned>;
        ///Regular data of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> rdataSlv{}; 
        ///Regular data of the master              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rdataMst{}; 
    }
}
