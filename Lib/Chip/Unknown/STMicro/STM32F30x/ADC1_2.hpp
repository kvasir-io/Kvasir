#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter
    namespace Nonecsr{    ///<ADC Common status register
        using Addr = Register::Address<0x50000300,0xf800f800,0,unsigned>;
        ///ADDRDY_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> addrdyMst{}; 
        namespace AddrdymstValC{
        }
        ///EOSMP_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmpMst{}; 
        namespace EosmpmstValC{
        }
        ///EOC_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eocMst{}; 
        namespace EocmstValC{
        }
        ///EOS_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eosMst{}; 
        namespace EosmstValC{
        }
        ///OVR_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovrMst{}; 
        namespace OvrmstValC{
        }
        ///JEOC_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jeocMst{}; 
        namespace JeocmstValC{
        }
        ///JEOS_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> jeosMst{}; 
        namespace JeosmstValC{
        }
        ///AWD1_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd1Mst{}; 
        namespace Awd1mstValC{
        }
        ///AWD2_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> awd2Mst{}; 
        namespace Awd2mstValC{
        }
        ///AWD3_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awd3Mst{}; 
        namespace Awd3mstValC{
        }
        ///JQOVF_MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jqovfMst{}; 
        namespace JqovfmstValC{
        }
        ///ADRDY_SLV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrdySlv{}; 
        namespace AdrdyslvValC{
        }
        ///EOSMP_SLV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eosmpSlv{}; 
        namespace EosmpslvValC{
        }
        ///End of regular conversion of the slave
              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eocSlv{}; 
        namespace EocslvValC{
        }
        ///End of regular sequence flag of the
              slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eosSlv{}; 
        namespace EosslvValC{
        }
        ///Overrun flag of the slave
              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ovrSlv{}; 
        namespace OvrslvValC{
        }
        ///End of injected conversion flag of the
              slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> jeocSlv{}; 
        namespace JeocslvValC{
        }
        ///End of injected sequence flag of the
              slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> jeosSlv{}; 
        namespace JeosslvValC{
        }
        ///Analog watchdog 1 flag of the slave
              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awd1Slv{}; 
        namespace Awd1slvValC{
        }
        ///Analog watchdog 2 flag of the slave
              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> awd2Slv{}; 
        namespace Awd2slvValC{
        }
        ///Analog watchdog 3 flag of the slave
              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> awd3Slv{}; 
        namespace Awd3slvValC{
        }
        ///Injected Context Queue Overflow flag of
              the slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> jqovfSlv{}; 
        namespace JqovfslvValC{
        }
    }
    namespace Noneccr{    ///<ADC common control register
        using Addr = Register::Address<0x50000308,0xfe3c10e0,0,unsigned>;
        ///Multi ADC mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> mult{}; 
        namespace MultValC{
        }
        ///Delay between 2 sampling
              phases
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> delay{}; 
        namespace DelayValC{
        }
        ///DMA configuration (for multi-ADC
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmacfg{}; 
        namespace DmacfgValC{
        }
        ///Direct memory access mode for multi ADC
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> mdma{}; 
        namespace MdmaValC{
        }
        ///ADC clock mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ckmode{}; 
        namespace CkmodeValC{
        }
        ///VREFINT enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> vrefen{}; 
        namespace VrefenValC{
        }
        ///Temperature sensor enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tsen{}; 
        namespace TsenValC{
        }
        ///VBAT enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> vbaten{}; 
        namespace VbatenValC{
        }
    }
    namespace Nonecdr{    ///<ADC common regular data register for dual
          and triple modes
        using Addr = Register::Address<0x5000030c,0x00000000,0,unsigned>;
        ///Regular data of the slave
              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> rdataSlv{}; 
        namespace RdataslvValC{
        }
        ///Regular data of the master
              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rdataMst{}; 
        namespace RdatamstValC{
        }
    }
}
