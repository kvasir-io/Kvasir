#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonekey{    ///<Security Key
        using Addr = Register::Address<0x40049000,0xffffff00,0,unsigned>;
        ///Peripheral Lock Mask Key. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace Noneperiphlock0{    ///<Peripheral Lock Control 0
        using Addr = Register::Address<0x40049020,0xe8000020,0,unsigned>;
        ///USART/UART Module Lock Enable. 
        enum class usartlVal {
            unlocked=0x00000000,     ///<Unlock the USART0, USART1, UART0, and UART1 Module registers.
            locked=0x00000001,     ///<Lock the USART0, USART1, UART0, and UART1 Module registers (bits can still be read).
        };
        namespace usartlValC{
            constexpr MPL::Value<usartlVal,usartlVal::unlocked> unlocked{};
            constexpr MPL::Value<usartlVal,usartlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,usartlVal> usartl{}; 
        ///SPI Module Lock Enable. 
        enum class spilVal {
            unlocked=0x00000000,     ///<Unlock the SPI0, SPI1, and SPI2 Module registers.
            locked=0x00000001,     ///<Lock the SPI0, SPI1, and SPI2 Module registers (bits can still be read).
        };
        namespace spilValC{
            constexpr MPL::Value<spilVal,spilVal::unlocked> unlocked{};
            constexpr MPL::Value<spilVal,spilVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,spilVal> spil{}; 
        ///I2C Module Lock Enable. 
        enum class i2clVal {
            unlocked=0x00000000,     ///<Unlock the I2C0 and I2C1 Module registers.
            locked=0x00000001,     ///<Lock the I2C0 and I2C1 Module registers (bits can still be read).
        };
        namespace i2clValC{
            constexpr MPL::Value<i2clVal,i2clVal::unlocked> unlocked{};
            constexpr MPL::Value<i2clVal,i2clVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,i2clVal> i2cl{}; 
        ///PCA Module Lock Enable. 
        enum class pcalVal {
            unlocked=0x00000000,     ///<Unlock the EPCA0, PCA0, and PCA1 Module registers.
            locked=0x00000001,     ///<Lock the EPCA0, PCA0, and PCA1 Module registers (bits can still be read).
        };
        namespace pcalValC{
            constexpr MPL::Value<pcalVal,pcalVal::unlocked> unlocked{};
            constexpr MPL::Value<pcalVal,pcalVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pcalVal> pcal{}; 
        ///Timer Module Lock Enable. 
        enum class timerlVal {
            unlocked=0x00000000,     ///<Unlock the TIMER0 and TIMER1 Module registers.
            locked=0x00000001,     ///<Lock the TIMER0 and TIMER1 Module registers (bits can still be read).
        };
        namespace timerlValC{
            constexpr MPL::Value<timerlVal,timerlVal::unlocked> unlocked{};
            constexpr MPL::Value<timerlVal,timerlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,timerlVal> timerl{}; 
        ///SARADC Module Lock Enable. 
        enum class saradclVal {
            unlocked=0x00000000,     ///<Unlock the SARADC0 and SARADC1 Module registers.
            locked=0x00000001,     ///<Lock the SARADC0 and SARADC1 Module registers (bits can still be read).
        };
        namespace saradclValC{
            constexpr MPL::Value<saradclVal,saradclVal::unlocked> unlocked{};
            constexpr MPL::Value<saradclVal,saradclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,saradclVal> saradcl{}; 
        ///SSG Module Lock Enable. 
        enum class ssglVal {
            unlocked=0x00000000,     ///<Unlock the SSG0 Module registers.
            locked=0x00000001,     ///<Lock the SSG0 Module registers (bits can still be read).
        };
        namespace ssglValC{
            constexpr MPL::Value<ssglVal,ssglVal::unlocked> unlocked{};
            constexpr MPL::Value<ssglVal,ssglVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ssglVal> ssgl{}; 
        ///Comparator Module Lock Enable. 
        enum class cmplVal {
            unlocked=0x00000000,     ///<Unlock the Comparator 0 and Comparator 1 Module registers.
            locked=0x00000001,     ///<Lock the Comparator 0 and Comparator 1 Module registers (bits can still be read).
        };
        namespace cmplValC{
            constexpr MPL::Value<cmplVal,cmplVal::unlocked> unlocked{};
            constexpr MPL::Value<cmplVal,cmplVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cmplVal> cmpl{}; 
        ///Capacitive Sensing Module Lock Enable. 
        enum class cslVal {
            unlocked=0x00000000,     ///<Unlock the Capacitive Sensing (CAPSENSE0) Module registers.
            locked=0x00000001,     ///<Lock the Capacitive Sensing (CAPSENSE0) Module registers (bits can still be read).
        };
        namespace cslValC{
            constexpr MPL::Value<cslVal,cslVal::unlocked> unlocked{};
            constexpr MPL::Value<cslVal,cslVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,cslVal> csl{}; 
        ///EMIF Module Lock Enable. 
        enum class emiflVal {
            unlocked=0x00000000,     ///<Unlock the External Memory Interface (EMIF0) Module registers.
            locked=0x00000001,     ///<Lock the External Memory Interface (EMIF0) Module registers (bits can still be read).
        };
        namespace emiflValC{
            constexpr MPL::Value<emiflVal,emiflVal::unlocked> unlocked{};
            constexpr MPL::Value<emiflVal,emiflVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,emiflVal> emifl{}; 
        ///AES Module Lock Enable. 
        enum class aeslVal {
            unlocked=0x00000000,     ///<Unlock the AES0 Module registers.
            locked=0x00000001,     ///<Lock the AES0 Module registers (bits can still be read).
        };
        namespace aeslValC{
            constexpr MPL::Value<aeslVal,aeslVal::unlocked> unlocked{};
            constexpr MPL::Value<aeslVal,aeslVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,aeslVal> aesl{}; 
        ///CRC Module Lock Enable. 
        enum class crclVal {
            unlocked=0x00000000,     ///<Unlock the CRC0 Module registers.
            locked=0x00000001,     ///<Lock the CRC0 Module registers (bits can still be read).
        };
        namespace crclValC{
            constexpr MPL::Value<crclVal,crclVal::unlocked> unlocked{};
            constexpr MPL::Value<crclVal,crclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,crclVal> crcl{}; 
        ///RTC Module Lock Enable. 
        enum class rtclVal {
            unlocked=0x00000000,     ///<Unlock the RTC0 Module registers.
            locked=0x00000001,     ///<Lock the RTC0 Module registers (bits can still be read).
        };
        namespace rtclValC{
            constexpr MPL::Value<rtclVal,rtclVal::unlocked> unlocked{};
            constexpr MPL::Value<rtclVal,rtclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,rtclVal> rtcl{}; 
        ///Clock Control and Reset Sources Lock Enable. 
        enum class clkrstlVal {
            unlocked=0x00000000,     ///<Unlock the Clock Control (CLKCTRL) and Reset Sources (RSTSRC) Module registers.
            locked=0x00000001,     ///<Lock the Clock Control (CLKCTRL) and Reset Sources (RSTSRC) Module registers (bits can still be read).
        };
        namespace clkrstlValC{
            constexpr MPL::Value<clkrstlVal,clkrstlVal::unlocked> unlocked{};
            constexpr MPL::Value<clkrstlVal,clkrstlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,clkrstlVal> clkrstl{}; 
        ///Voltage Supply Monitor Module Lock Enable. 
        enum class vmonlVal {
            unlocked=0x00000000,     ///<Unlock the Voltage Supply Monitor (VMON0) Module registers.
            locked=0x00000001,     ///<Lock the Voltage Supply Monitor (VMON0) Module registers (bits can still be read).
        };
        namespace vmonlValC{
            constexpr MPL::Value<vmonlVal,vmonlVal::unlocked> unlocked{};
            constexpr MPL::Value<vmonlVal,vmonlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,vmonlVal> vmonl{}; 
        ///IDAC Module Lock Enable. 
        enum class idaclVal {
            unlocked=0x00000000,     ///<Unlock the IDAC0 and IDAC1 Module registers.
            locked=0x00000001,     ///<Lock the IDAC0 and IDAC1 Module registers (bits can still be read).
        };
        namespace idaclValC{
            constexpr MPL::Value<idaclVal,idaclVal::unlocked> unlocked{};
            constexpr MPL::Value<idaclVal,idaclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,idaclVal> idacl{}; 
        ///DMA Controller Module Lock Enable. 
        enum class dmactrllVal {
            unlocked=0x00000000,     ///<Unlock the DMA Controller (DMACTRL0) Module registers.
            locked=0x00000001,     ///<Lock the DMA Controller (DMACTRL0) Module registers (bits can still be read).
        };
        namespace dmactrllValC{
            constexpr MPL::Value<dmactrllVal,dmactrllVal::unlocked> unlocked{};
            constexpr MPL::Value<dmactrllVal,dmactrllVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,dmactrllVal> dmactrll{}; 
        ///DMA Crossbar Module Lock Enable. 
        enum class dmaxbarlVal {
            unlocked=0x00000000,     ///<Unlock the DMA Crossbar (DMAXBAR0) Module registers.
            locked=0x00000001,     ///<Lock the DMA Crossbar (DMAXBAR0) Module registers (bits can still be read).
        };
        namespace dmaxbarlValC{
            constexpr MPL::Value<dmaxbarlVal,dmaxbarlVal::unlocked> unlocked{};
            constexpr MPL::Value<dmaxbarlVal,dmaxbarlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,dmaxbarlVal> dmaxbarl{}; 
        ///Low Power Timer Module Lock Enable. 
        enum class lptlVal {
            unlocked=0x00000000,     ///<Unlock the Low Power Timer (LPTIMER0) Module registers.
            locked=0x00000001,     ///<Lock the Low Power Timer (LPTIMER0) Module registers (bits can still be read).
        };
        namespace lptlValC{
            constexpr MPL::Value<lptlVal,lptlVal::unlocked> unlocked{};
            constexpr MPL::Value<lptlVal,lptlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,lptlVal> lptl{}; 
        ///Voltage Reference Module Lock Enable. 
        enum class vreflVal {
            unlocked=0x00000000,     ///<Unlock the Voltage Reference (VREF0) Module registers.
            locked=0x00000001,     ///<Lock the Voltage Reference (VREF0) Module registers (bits can still be read).
        };
        namespace vreflValC{
            constexpr MPL::Value<vreflVal,vreflVal::unlocked> unlocked{};
            constexpr MPL::Value<vreflVal,vreflVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,vreflVal> vrefl{}; 
        ///I2S Module Lock Enable. 
        enum class i2slVal {
            unlocked=0x00000000,     ///<Unlock the I2S0 Module registers.
            locked=0x00000001,     ///<Lock the I2S0 Module registers (bits can still be read).
        };
        namespace i2slValC{
            constexpr MPL::Value<i2slVal,i2slVal::unlocked> unlocked{};
            constexpr MPL::Value<i2slVal,i2slVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,i2slVal> i2sl{}; 
        ///PLL Module Lock Enable. 
        enum class plllVal {
            unlocked=0x00000000,     ///<Unlock the PLL0 Module registers.
            locked=0x00000001,     ///<Lock the PLL0 Module registers (bits can still be read).
        };
        namespace plllValC{
            constexpr MPL::Value<plllVal,plllVal::unlocked> unlocked{};
            constexpr MPL::Value<plllVal,plllVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,plllVal> plll{}; 
        ///External Oscillator Module Lock Enable. 
        enum class extosclVal {
            unlocked=0x00000000,     ///<Unlock the External Oscillator (EXTOSC0) Module registers.
            locked=0x00000001,     ///<Lock the External Oscillator (EXTOSC0) Module registers (bits can still be read).
        };
        namespace extosclValC{
            constexpr MPL::Value<extosclVal,extosclVal::unlocked> unlocked{};
            constexpr MPL::Value<extosclVal,extosclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,extosclVal> extoscl{}; 
        ///Voltage Regulator Module Lock Enable. 
        enum class vreglVal {
            unlocked=0x00000000,     ///<Unlock the Voltage Regulator (VREG0) Module registers.
            locked=0x00000001,     ///<Lock the Voltage Regulator (VREG0) Module registers (bits can still be read).
        };
        namespace vreglValC{
            constexpr MPL::Value<vreglVal,vreglVal::unlocked> unlocked{};
            constexpr MPL::Value<vreglVal,vreglVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,vreglVal> vregl{}; 
        ///Low Power Oscillator Lock Enable. 
        enum class lposclVal {
            unlocked=0x00000000,     ///<Unlock the Low Power Oscillator (LPOSC0) Module registers.
            locked=0x00000001,     ///<Lock the Low Power Oscillator (LPOSC0) Module registers (bits can still be read).
        };
        namespace lposclValC{
            constexpr MPL::Value<lposclVal,lposclVal::unlocked> unlocked{};
            constexpr MPL::Value<lposclVal,lposclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,lposclVal> lposcl{}; 
        ///External Regulator Module Lock Enable. 
        enum class evreglVal {
            unlocked=0x00000000,     ///<Unlock the External Regulator (EXTVREG0) Module registers.
            locked=0x00000001,     ///<Lock the External Regulator (EXTVREG0) Module registers (bits can still be read).
        };
        namespace evreglValC{
            constexpr MPL::Value<evreglVal,evreglVal::unlocked> unlocked{};
            constexpr MPL::Value<evreglVal,evreglVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,evreglVal> evregl{}; 
        ///IVC Module Lock Enable. 
        enum class ivclVal {
            unlocked=0x00000000,     ///<Unlock the IVC0 Module registers.
            locked=0x00000001,     ///<Lock the IVC0 Module registers (bits can still be read).
        };
        namespace ivclValC{
            constexpr MPL::Value<ivclVal,ivclVal::unlocked> unlocked{};
            constexpr MPL::Value<ivclVal,ivclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ivclVal> ivcl{}; 
    }
    namespace Noneperiphlock1{    ///<Peripheral Lock Control 1
        using Addr = Register::Address<0x40049040,0xfffffffe,0,unsigned>;
        ///PMU Module Lock Enable. 
        enum class pmulVal {
            unlocked=0x00000000,     ///<Unlock the PMU Module registers.
            locked=0x00000001,     ///<Lock the PMU Module registers (bits can still be read).
        };
        namespace pmulValC{
            constexpr MPL::Value<pmulVal,pmulVal::unlocked> unlocked{};
            constexpr MPL::Value<pmulVal,pmulVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pmulVal> pmul{}; 
    }
}
