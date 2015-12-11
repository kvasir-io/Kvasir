#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonekey{    ///<Security Key
        using Addr = Register::Address<0x40049000,0xffffff00,0,unsigned>;
        ///Peripheral Lock Mask Key. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace Noneperiphlock0{    ///<Peripheral Lock Control 0
        using Addr = Register::Address<0x40049020,0x87800000,0,unsigned>;
        ///USART/UART Module Lock Enable. 
        enum class UsartlVal {
            unlocked=0x00000000,     ///<Unlock the USART0 and UART0 Module registers.
            locked=0x00000001,     ///<Lock the USART0 and UART0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UsartlVal> usartl{}; 
        namespace UsartlValC{
            constexpr Register::FieldValue<decltype(usartl)::Type,UsartlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(usartl)::Type,UsartlVal::locked> locked{};
        }
        ///SPI Module Lock Enable. 
        enum class SpilVal {
            unlocked=0x00000000,     ///<Unlock the SPI0 and SPI1 Module registers.
            locked=0x00000001,     ///<Lock the SPI0 and SPI1 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SpilVal> spil{}; 
        namespace SpilValC{
            constexpr Register::FieldValue<decltype(spil)::Type,SpilVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(spil)::Type,SpilVal::locked> locked{};
        }
        ///I2C Module Lock Enable. 
        enum class I2clVal {
            unlocked=0x00000000,     ///<Unlock the I2C0 Module registers.
            locked=0x00000001,     ///<Lock the I2C0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,I2clVal> i2cl{}; 
        namespace I2clValC{
            constexpr Register::FieldValue<decltype(i2cl)::Type,I2clVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(i2cl)::Type,I2clVal::locked> locked{};
        }
        ///PCA Module Lock Enable. 
        enum class PcalVal {
            unlocked=0x00000000,     ///<Unlock the EPCA0 Module registers.
            locked=0x00000001,     ///<Lock the EPCA0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PcalVal> pcal{}; 
        namespace PcalValC{
            constexpr Register::FieldValue<decltype(pcal)::Type,PcalVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(pcal)::Type,PcalVal::locked> locked{};
        }
        ///Timer Module Lock Enable. 
        enum class TimerlVal {
            unlocked=0x00000000,     ///<Unlock the TIMER0, TIMER1, and TIMER2 Module registers.
            locked=0x00000001,     ///<Lock the TIMER0, TIMER1, and TIMER2 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TimerlVal> timerl{}; 
        namespace TimerlValC{
            constexpr Register::FieldValue<decltype(timerl)::Type,TimerlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(timerl)::Type,TimerlVal::locked> locked{};
        }
        ///SARADC Module Lock Enable. 
        enum class SaradclVal {
            unlocked=0x00000000,     ///<Unlock the SARADC0 Module registers.
            locked=0x00000001,     ///<Lock the SARADC0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SaradclVal> saradcl{}; 
        namespace SaradclValC{
            constexpr Register::FieldValue<decltype(saradcl)::Type,SaradclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(saradcl)::Type,SaradclVal::locked> locked{};
        }
        ///Comparator Module Lock Enable. 
        enum class CmplVal {
            unlocked=0x00000000,     ///<Unlock the Comparator 0 and Comparator 1 Module registers.
            locked=0x00000001,     ///<Lock the Comparator 0 and Comparator 1 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CmplVal> cmpl{}; 
        namespace CmplValC{
            constexpr Register::FieldValue<decltype(cmpl)::Type,CmplVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(cmpl)::Type,CmplVal::locked> locked{};
        }
        ///AES Module Lock Enable. 
        enum class AeslVal {
            unlocked=0x00000000,     ///<Unlock the AES0 Module registers.
            locked=0x00000001,     ///<Lock the AES0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AeslVal> aesl{}; 
        namespace AeslValC{
            constexpr Register::FieldValue<decltype(aesl)::Type,AeslVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(aesl)::Type,AeslVal::locked> locked{};
        }
        ///CRC Module Lock Enable. 
        enum class CrclVal {
            unlocked=0x00000000,     ///<Unlock the CRC0 Module registers.
            locked=0x00000001,     ///<Lock the CRC0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CrclVal> crcl{}; 
        namespace CrclValC{
            constexpr Register::FieldValue<decltype(crcl)::Type,CrclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(crcl)::Type,CrclVal::locked> locked{};
        }
        ///RTC Module Lock Enable. 
        enum class RtclVal {
            unlocked=0x00000000,     ///<Unlock the RTC0 Module registers.
            locked=0x00000001,     ///<Lock the RTC0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RtclVal> rtcl{}; 
        namespace RtclValC{
            constexpr Register::FieldValue<decltype(rtcl)::Type,RtclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(rtcl)::Type,RtclVal::locked> locked{};
        }
        ///Reset Sources Module Lock Enable. 
        enum class RstsrclVal {
            unlocked=0x00000000,     ///<Unlock the Reset Sources (RSTSRC) Module registers.
            locked=0x00000001,     ///<Lock the Reset Sources (RSTSRC) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RstsrclVal> rstsrcl{}; 
        namespace RstsrclValC{
            constexpr Register::FieldValue<decltype(rstsrcl)::Type,RstsrclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(rstsrcl)::Type,RstsrclVal::locked> locked{};
        }
        ///Clock Control Lock Enable. 
        enum class ClkctrlVal {
            unlocked=0x00000000,     ///<Unlock the Clock Control (CLKCTRL)Module registers.
            locked=0x00000001,     ///<Lock the Clock Control (CLKCTRL) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ClkctrlVal> clkctrl{}; 
        namespace ClkctrlValC{
            constexpr Register::FieldValue<decltype(clkctrl)::Type,ClkctrlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(clkctrl)::Type,ClkctrlVal::locked> locked{};
        }
        ///Voltage Supply Monitor Module Lock Enable. 
        enum class VmonlVal {
            unlocked=0x00000000,     ///<Unlock the Voltage Supply Monitor (VMON0) Module registers.
            locked=0x00000001,     ///<Lock the Voltage Supply Monitor (VMON0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,VmonlVal> vmonl{}; 
        namespace VmonlValC{
            constexpr Register::FieldValue<decltype(vmonl)::Type,VmonlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(vmonl)::Type,VmonlVal::locked> locked{};
        }
        ///IDAC Module Lock Enable. 
        enum class IdaclVal {
            unlocked=0x00000000,     ///<Unlock the IDAC0 Module registers.
            locked=0x00000001,     ///<Lock the IDAC0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,IdaclVal> idacl{}; 
        namespace IdaclValC{
            constexpr Register::FieldValue<decltype(idacl)::Type,IdaclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(idacl)::Type,IdaclVal::locked> locked{};
        }
        ///DMA Controller Module Lock Enable. 
        enum class DmactrllVal {
            unlocked=0x00000000,     ///<Unlock the DMA Controller (DMACTRL0) Module registers.
            locked=0x00000001,     ///<Lock the DMA Controller (DMACTRL0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,DmactrllVal> dmactrll{}; 
        namespace DmactrllValC{
            constexpr Register::FieldValue<decltype(dmactrll)::Type,DmactrllVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(dmactrll)::Type,DmactrllVal::locked> locked{};
        }
        ///DMA Crossbar Module Lock Enable. 
        enum class DmaxbarlVal {
            unlocked=0x00000000,     ///<Unlock the DMA Crossbar (DMAXBAR0) Module registers.
            locked=0x00000001,     ///<Lock the DMA Crossbar (DMAXBAR0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DmaxbarlVal> dmaxbarl{}; 
        namespace DmaxbarlValC{
            constexpr Register::FieldValue<decltype(dmaxbarl)::Type,DmaxbarlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(dmaxbarl)::Type,DmaxbarlVal::locked> locked{};
        }
        ///Low Power Timer Module Lock Enable. 
        enum class LptlVal {
            unlocked=0x00000000,     ///<Unlock the Low Power Timer (LPTIMER0) Module registers.
            locked=0x00000001,     ///<Lock the Low Power Timer (LPTIMER0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,LptlVal> lptl{}; 
        namespace LptlValC{
            constexpr Register::FieldValue<decltype(lptl)::Type,LptlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(lptl)::Type,LptlVal::locked> locked{};
        }
        ///Voltage Reference Module Lock Enable. 
        enum class LdolVal {
            unlocked=0x00000000,     ///<Unlock the LDO0 Module registers.
            locked=0x00000001,     ///<Lock the LDO0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,LdolVal> ldol{}; 
        namespace LdolValC{
            constexpr Register::FieldValue<decltype(ldol)::Type,LdolVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(ldol)::Type,LdolVal::locked> locked{};
        }
        ///PLL Module Lock Enable. 
        enum class PlllVal {
            unlocked=0x00000000,     ///<Unlock the PLL0 Module registers.
            locked=0x00000001,     ///<Lock the PLL0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,PlllVal> plll{}; 
        namespace PlllValC{
            constexpr Register::FieldValue<decltype(plll)::Type,PlllVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(plll)::Type,PlllVal::locked> locked{};
        }
        ///External Oscillator Module Lock Enable. 
        enum class ExtosclVal {
            unlocked=0x00000000,     ///<Unlock the External Oscillator (EXTOSC0) Module registers.
            locked=0x00000001,     ///<Lock the External Oscillator (EXTOSC0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ExtosclVal> extoscl{}; 
        namespace ExtosclValC{
            constexpr Register::FieldValue<decltype(extoscl)::Type,ExtosclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(extoscl)::Type,ExtosclVal::locked> locked{};
        }
        ///PVT Oscillator Module Lock Enable. 
        enum class PvtlVal {
            unlocked=0x00000000,     ///<Unlock the PVTOSC0 Module registers.
            locked=0x00000001,     ///<Lock the PVTOSC0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PvtlVal> pvtl{}; 
        namespace PvtlValC{
            constexpr Register::FieldValue<decltype(pvtl)::Type,PvtlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(pvtl)::Type,PvtlVal::locked> locked{};
        }
        ///Low Power Oscillator Lock Enable. 
        enum class LposclVal {
            unlocked=0x00000000,     ///<Unlock the Low Power Oscillator (LPOSC0) Module registers.
            locked=0x00000001,     ///<Lock the Low Power Oscillator (LPOSC0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LposclVal> lposcl{}; 
        namespace LposclValC{
            constexpr Register::FieldValue<decltype(lposcl)::Type,LposclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(lposcl)::Type,LposclVal::locked> locked{};
        }
        ///Advanced Capture Counter  Module Lock. 
        enum class AcctrlVal {
            unlocked=0x00000000,     ///<Unlock the Advanced Capture Counter (ACCTR0) Module registers.
            locked=0x00000001,     ///<Lock the Advanced Capture Counter (ACCTR0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,AcctrlVal> acctrl{}; 
        namespace AcctrlValC{
            constexpr Register::FieldValue<decltype(acctrl)::Type,AcctrlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(acctrl)::Type,AcctrlVal::locked> locked{};
        }
        ///PMU Module Lock Enable. 
        enum class PmulVal {
            unlocked=0x00000000,     ///<Unlock the PMU Module registers.
            locked=0x00000001,     ///<Lock the PMU Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,PmulVal> pmul{}; 
        namespace PmulValC{
            constexpr Register::FieldValue<decltype(pmul)::Type,PmulVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(pmul)::Type,PmulVal::locked> locked{};
        }
        ///DTM Module Lock. 
        enum class DtmlVal {
            unlocked=0x00000000,     ///<Unlock the DTM0, DTM1, and DTM2 Module registers.
            locked=0x00000001,     ///<Lock the DTM0, DTM1, and DTM2 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,DtmlVal> dtml{}; 
        namespace DtmlValC{
            constexpr Register::FieldValue<decltype(dtml)::Type,DtmlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(dtml)::Type,DtmlVal::locked> locked{};
        }
        ///LCD Module Lock. 
        enum class LcdlVal {
            unlocked=0x00000000,     ///<Unlock the LCD0 Module registers.
            locked=0x00000001,     ///<Lock the LCD0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,LcdlVal> lcdl{}; 
        namespace LcdlValC{
            constexpr Register::FieldValue<decltype(lcdl)::Type,LcdlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(lcdl)::Type,LcdlVal::locked> locked{};
        }
        ///DC-DC Converter Module Lock. 
        enum class DcdclVal {
            unlocked=0x00000000,     ///<Unlock the DCDC0 Module registers.
            locked=0x00000001,     ///<Lock the DCDC0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DcdclVal> dcdcl{}; 
        namespace DcdclValC{
            constexpr Register::FieldValue<decltype(dcdcl)::Type,DcdclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(dcdcl)::Type,DcdclVal::locked> locked{};
        }
    }
    namespace Noneperiphlock1{    ///<Peripheral Lock Control 1
        using Addr = Register::Address<0x40049040,0xfffffffe,0,unsigned>;
        ///Encoder Decoder Module Lock. 
        enum class EncdeclVal {
            unlocked=0x00000000,     ///<Unlock the ENCDEC0 Module registers.
            locked=0x00000001,     ///<Lock the ENCDEC0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EncdeclVal> encdecl{}; 
        namespace EncdeclValC{
            constexpr Register::FieldValue<decltype(encdecl)::Type,EncdeclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(encdecl)::Type,EncdeclVal::locked> locked{};
        }
    }
}
