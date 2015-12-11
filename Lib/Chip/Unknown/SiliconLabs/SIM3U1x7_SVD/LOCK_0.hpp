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
        using Addr = Register::Address<0x40049020,0xe8000000,0,unsigned>;
        ///USART/UART Module Lock Enable. 
        enum class UsartlVal {
            unlocked=0x00000000,     ///<Unlock the USART0, USART1, UART0, and UART1 Module registers.
            locked=0x00000001,     ///<Lock the USART0, USART1, UART0, and UART1 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UsartlVal> usartl{}; 
        namespace UsartlValC{
            constexpr Register::FieldValue<decltype(usartl)::Type,UsartlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(usartl)::Type,UsartlVal::locked> locked{};
        }
        }
        ///SPI Module Lock Enable. 
        enum class SpilVal {
            unlocked=0x00000000,     ///<Unlock the SPI0, SPI1, and SPI2 Module registers.
            locked=0x00000001,     ///<Lock the SPI0, SPI1, and SPI2 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SpilVal> spil{}; 
        namespace SpilValC{
            constexpr Register::FieldValue<decltype(spil)::Type,SpilVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(spil)::Type,SpilVal::locked> locked{};
        }
        }
        ///I2C Module Lock Enable. 
        enum class I2clVal {
            unlocked=0x00000000,     ///<Unlock the I2C0 and I2C1 Module registers.
            locked=0x00000001,     ///<Lock the I2C0 and I2C1 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,I2clVal> i2cl{}; 
        namespace I2clValC{
            constexpr Register::FieldValue<decltype(i2cl)::Type,I2clVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(i2cl)::Type,I2clVal::locked> locked{};
        }
        }
        ///PCA Module Lock Enable. 
        enum class PcalVal {
            unlocked=0x00000000,     ///<Unlock the EPCA0, PCA0, and PCA1 Module registers.
            locked=0x00000001,     ///<Lock the EPCA0, PCA0, and PCA1 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PcalVal> pcal{}; 
        namespace PcalValC{
            constexpr Register::FieldValue<decltype(pcal)::Type,PcalVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(pcal)::Type,PcalVal::locked> locked{};
        }
        }
        ///Timer Module Lock Enable. 
        enum class TimerlVal {
            unlocked=0x00000000,     ///<Unlock the TIMER0 and TIMER1 Module registers.
            locked=0x00000001,     ///<Lock the TIMER0 and TIMER1 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TimerlVal> timerl{}; 
        namespace TimerlValC{
            constexpr Register::FieldValue<decltype(timerl)::Type,TimerlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(timerl)::Type,TimerlVal::locked> locked{};
        }
        }
        ///USB Module Lock Enable. 
        enum class UsblVal {
            unlocked=0x00000000,     ///<Unlock the USB0 Module registers.
            locked=0x00000001,     ///<Lock the USB0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,UsblVal> usbl{}; 
        namespace UsblValC{
            constexpr Register::FieldValue<decltype(usbl)::Type,UsblVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(usbl)::Type,UsblVal::locked> locked{};
        }
        }
        ///SARADC Module Lock Enable. 
        enum class SaradclVal {
            unlocked=0x00000000,     ///<Unlock the SARADC0 and SARADC1 Module registers.
            locked=0x00000001,     ///<Lock the SARADC0 and SARADC1 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SaradclVal> saradcl{}; 
        namespace SaradclValC{
            constexpr Register::FieldValue<decltype(saradcl)::Type,SaradclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(saradcl)::Type,SaradclVal::locked> locked{};
        }
        }
        ///SSG Module Lock Enable. 
        enum class SsglVal {
            unlocked=0x00000000,     ///<Unlock the SSG0 Module registers.
            locked=0x00000001,     ///<Lock the SSG0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SsglVal> ssgl{}; 
        namespace SsglValC{
            constexpr Register::FieldValue<decltype(ssgl)::Type,SsglVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(ssgl)::Type,SsglVal::locked> locked{};
        }
        }
        ///Comparator Module Lock Enable. 
        enum class CmplVal {
            unlocked=0x00000000,     ///<Unlock the Comparator 0 and Comparator 1 Module registers.
            locked=0x00000001,     ///<Lock the Comparator 0 and Comparator 1 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CmplVal> cmpl{}; 
        namespace CmplValC{
            constexpr Register::FieldValue<decltype(cmpl)::Type,CmplVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(cmpl)::Type,CmplVal::locked> locked{};
        }
        }
        ///Capacitive Sensing Module Lock Enable. 
        enum class CslVal {
            unlocked=0x00000000,     ///<Unlock the Capacitive Sensing (CAPSENSE0) Module registers.
            locked=0x00000001,     ///<Lock the Capacitive Sensing (CAPSENSE0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,CslVal> csl{}; 
        namespace CslValC{
            constexpr Register::FieldValue<decltype(csl)::Type,CslVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(csl)::Type,CslVal::locked> locked{};
        }
        }
        ///EMIF Module Lock Enable. 
        enum class EmiflVal {
            unlocked=0x00000000,     ///<Unlock the External Memory Interface (EMIF0) Module registers.
            locked=0x00000001,     ///<Lock the External Memory Interface (EMIF0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,EmiflVal> emifl{}; 
        namespace EmiflValC{
            constexpr Register::FieldValue<decltype(emifl)::Type,EmiflVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(emifl)::Type,EmiflVal::locked> locked{};
        }
        }
        ///AES Module Lock Enable. 
        enum class AeslVal {
            unlocked=0x00000000,     ///<Unlock the AES0 Module registers.
            locked=0x00000001,     ///<Lock the AES0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AeslVal> aesl{}; 
        namespace AeslValC{
            constexpr Register::FieldValue<decltype(aesl)::Type,AeslVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(aesl)::Type,AeslVal::locked> locked{};
        }
        }
        ///CRC Module Lock Enable. 
        enum class CrclVal {
            unlocked=0x00000000,     ///<Unlock the CRC0 Module registers.
            locked=0x00000001,     ///<Lock the CRC0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CrclVal> crcl{}; 
        namespace CrclValC{
            constexpr Register::FieldValue<decltype(crcl)::Type,CrclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(crcl)::Type,CrclVal::locked> locked{};
        }
        }
        ///RTC Module Lock Enable. 
        enum class RtclVal {
            unlocked=0x00000000,     ///<Unlock the RTC0 Module registers.
            locked=0x00000001,     ///<Lock the RTC0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,RtclVal> rtcl{}; 
        namespace RtclValC{
            constexpr Register::FieldValue<decltype(rtcl)::Type,RtclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(rtcl)::Type,RtclVal::locked> locked{};
        }
        }
        ///Clock Control and Reset Sources Lock Enable. 
        enum class ClkrstlVal {
            unlocked=0x00000000,     ///<Unlock the Clock Control (CLKCTRL) and Reset Sources (RSTSRC) Module registers.
            locked=0x00000001,     ///<Lock the Clock Control (CLKCTRL) and Reset Sources (RSTSRC) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ClkrstlVal> clkrstl{}; 
        namespace ClkrstlValC{
            constexpr Register::FieldValue<decltype(clkrstl)::Type,ClkrstlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(clkrstl)::Type,ClkrstlVal::locked> locked{};
        }
        }
        ///Voltage Supply Monitor Module Lock Enable. 
        enum class VmonlVal {
            unlocked=0x00000000,     ///<Unlock the Voltage Supply Monitor (VMON0) Module registers.
            locked=0x00000001,     ///<Lock the Voltage Supply Monitor (VMON0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,VmonlVal> vmonl{}; 
        namespace VmonlValC{
            constexpr Register::FieldValue<decltype(vmonl)::Type,VmonlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(vmonl)::Type,VmonlVal::locked> locked{};
        }
        }
        ///IDAC Module Lock Enable. 
        enum class IdaclVal {
            unlocked=0x00000000,     ///<Unlock the IDAC0 and IDAC1 Module registers.
            locked=0x00000001,     ///<Lock the IDAC0 and IDAC1 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,IdaclVal> idacl{}; 
        namespace IdaclValC{
            constexpr Register::FieldValue<decltype(idacl)::Type,IdaclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(idacl)::Type,IdaclVal::locked> locked{};
        }
        }
        ///DMA Controller Module Lock Enable. 
        enum class DmactrllVal {
            unlocked=0x00000000,     ///<Unlock the DMA Controller (DMACTRL0) Module registers.
            locked=0x00000001,     ///<Lock the DMA Controller (DMACTRL0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,DmactrllVal> dmactrll{}; 
        namespace DmactrllValC{
            constexpr Register::FieldValue<decltype(dmactrll)::Type,DmactrllVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(dmactrll)::Type,DmactrllVal::locked> locked{};
        }
        }
        ///DMA Crossbar Module Lock Enable. 
        enum class DmaxbarlVal {
            unlocked=0x00000000,     ///<Unlock the DMA Crossbar (DMAXBAR0) Module registers.
            locked=0x00000001,     ///<Lock the DMA Crossbar (DMAXBAR0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,DmaxbarlVal> dmaxbarl{}; 
        namespace DmaxbarlValC{
            constexpr Register::FieldValue<decltype(dmaxbarl)::Type,DmaxbarlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(dmaxbarl)::Type,DmaxbarlVal::locked> locked{};
        }
        }
        ///Low Power Timer Module Lock Enable. 
        enum class LptlVal {
            unlocked=0x00000000,     ///<Unlock the Low Power Timer (LPTIMER0) Module registers.
            locked=0x00000001,     ///<Lock the Low Power Timer (LPTIMER0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,LptlVal> lptl{}; 
        namespace LptlValC{
            constexpr Register::FieldValue<decltype(lptl)::Type,LptlVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(lptl)::Type,LptlVal::locked> locked{};
        }
        }
        ///Voltage Reference Module Lock Enable. 
        enum class VreflVal {
            unlocked=0x00000000,     ///<Unlock the Voltage Reference (VREF0) Module registers.
            locked=0x00000001,     ///<Lock the Voltage Reference (VREF0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,VreflVal> vrefl{}; 
        namespace VreflValC{
            constexpr Register::FieldValue<decltype(vrefl)::Type,VreflVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(vrefl)::Type,VreflVal::locked> locked{};
        }
        }
        ///I2S Module Lock Enable. 
        enum class I2slVal {
            unlocked=0x00000000,     ///<Unlock the I2S0 Module registers.
            locked=0x00000001,     ///<Lock the I2S0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,I2slVal> i2sl{}; 
        namespace I2slValC{
            constexpr Register::FieldValue<decltype(i2sl)::Type,I2slVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(i2sl)::Type,I2slVal::locked> locked{};
        }
        }
        ///PLL Module Lock Enable. 
        enum class PlllVal {
            unlocked=0x00000000,     ///<Unlock the PLL0 Module registers.
            locked=0x00000001,     ///<Lock the PLL0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,PlllVal> plll{}; 
        namespace PlllValC{
            constexpr Register::FieldValue<decltype(plll)::Type,PlllVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(plll)::Type,PlllVal::locked> locked{};
        }
        }
        ///External Oscillator Module Lock Enable. 
        enum class ExtosclVal {
            unlocked=0x00000000,     ///<Unlock the External Oscillator (EXTOSC0) Module registers.
            locked=0x00000001,     ///<Lock the External Oscillator (EXTOSC0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ExtosclVal> extoscl{}; 
        namespace ExtosclValC{
            constexpr Register::FieldValue<decltype(extoscl)::Type,ExtosclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(extoscl)::Type,ExtosclVal::locked> locked{};
        }
        }
        ///Voltage Regulator Module Lock Enable. 
        enum class VreglVal {
            unlocked=0x00000000,     ///<Unlock the Voltage Regulator (VREG0) Module registers.
            locked=0x00000001,     ///<Lock the Voltage Regulator (VREG0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,VreglVal> vregl{}; 
        namespace VreglValC{
            constexpr Register::FieldValue<decltype(vregl)::Type,VreglVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(vregl)::Type,VreglVal::locked> locked{};
        }
        }
        ///Low Power Oscillator Lock Enable. 
        enum class LposclVal {
            unlocked=0x00000000,     ///<Unlock the Low Power Oscillator (LPOSC0) Module registers.
            locked=0x00000001,     ///<Lock the Low Power Oscillator (LPOSC0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,LposclVal> lposcl{}; 
        namespace LposclValC{
            constexpr Register::FieldValue<decltype(lposcl)::Type,LposclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(lposcl)::Type,LposclVal::locked> locked{};
        }
        }
        ///External Regulator Module Lock Enable. 
        enum class EvreglVal {
            unlocked=0x00000000,     ///<Unlock the External Regulator (EXTVREG0) Module registers.
            locked=0x00000001,     ///<Lock the External Regulator (EXTVREG0) Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,EvreglVal> evregl{}; 
        namespace EvreglValC{
            constexpr Register::FieldValue<decltype(evregl)::Type,EvreglVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(evregl)::Type,EvreglVal::locked> locked{};
        }
        }
        ///IVC Module Lock Enable. 
        enum class IvclVal {
            unlocked=0x00000000,     ///<Unlock the IVC0 Module registers.
            locked=0x00000001,     ///<Lock the IVC0 Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,IvclVal> ivcl{}; 
        namespace IvclValC{
            constexpr Register::FieldValue<decltype(ivcl)::Type,IvclVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(ivcl)::Type,IvclVal::locked> locked{};
        }
        }
    }
    namespace Noneperiphlock1{    ///<Peripheral Lock Control 1
        using Addr = Register::Address<0x40049040,0xfffffffe,0,unsigned>;
        ///PMU Module Lock Enable. 
        enum class PmulVal {
            unlocked=0x00000000,     ///<Unlock the PMU Module registers.
            locked=0x00000001,     ///<Lock the PMU Module registers (bits can still be read).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PmulVal> pmul{}; 
        namespace PmulValC{
            constexpr Register::FieldValue<decltype(pmul)::Type,PmulVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(pmul)::Type,PmulVal::locked> locked{};
        }
        }
    }
}
