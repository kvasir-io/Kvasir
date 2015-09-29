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
        using Addr = Register::Address<0x40049020,0x87800000,0,unsigned>;
        ///USART/UART Module Lock Enable. 
        enum class usartlVal {
            unlocked=0x00000000,     ///<Unlock the USART0 and UART0 Module registers.
            locked=0x00000001,     ///<Lock the USART0 and UART0 Module registers (bits can still be read).
        };
        namespace usartlValC{
            constexpr MPL::Value<usartlVal,usartlVal::unlocked> unlocked{};
            constexpr MPL::Value<usartlVal,usartlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,usartlVal> usartl{}; 
        ///SPI Module Lock Enable. 
        enum class spilVal {
            unlocked=0x00000000,     ///<Unlock the SPI0 and SPI1 Module registers.
            locked=0x00000001,     ///<Lock the SPI0 and SPI1 Module registers (bits can still be read).
        };
        namespace spilValC{
            constexpr MPL::Value<spilVal,spilVal::unlocked> unlocked{};
            constexpr MPL::Value<spilVal,spilVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,spilVal> spil{}; 
        ///I2C Module Lock Enable. 
        enum class i2clVal {
            unlocked=0x00000000,     ///<Unlock the I2C0 Module registers.
            locked=0x00000001,     ///<Lock the I2C0 Module registers (bits can still be read).
        };
        namespace i2clValC{
            constexpr MPL::Value<i2clVal,i2clVal::unlocked> unlocked{};
            constexpr MPL::Value<i2clVal,i2clVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,i2clVal> i2cl{}; 
        ///PCA Module Lock Enable. 
        enum class pcalVal {
            unlocked=0x00000000,     ///<Unlock the EPCA0 Module registers.
            locked=0x00000001,     ///<Lock the EPCA0 Module registers (bits can still be read).
        };
        namespace pcalValC{
            constexpr MPL::Value<pcalVal,pcalVal::unlocked> unlocked{};
            constexpr MPL::Value<pcalVal,pcalVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pcalVal> pcal{}; 
        ///Timer Module Lock Enable. 
        enum class timerlVal {
            unlocked=0x00000000,     ///<Unlock the TIMER0, TIMER1, and TIMER2 Module registers.
            locked=0x00000001,     ///<Lock the TIMER0, TIMER1, and TIMER2 Module registers (bits can still be read).
        };
        namespace timerlValC{
            constexpr MPL::Value<timerlVal,timerlVal::unlocked> unlocked{};
            constexpr MPL::Value<timerlVal,timerlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,timerlVal> timerl{}; 
        ///SARADC Module Lock Enable. 
        enum class saradclVal {
            unlocked=0x00000000,     ///<Unlock the SARADC0 Module registers.
            locked=0x00000001,     ///<Lock the SARADC0 Module registers (bits can still be read).
        };
        namespace saradclValC{
            constexpr MPL::Value<saradclVal,saradclVal::unlocked> unlocked{};
            constexpr MPL::Value<saradclVal,saradclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,saradclVal> saradcl{}; 
        ///Comparator Module Lock Enable. 
        enum class cmplVal {
            unlocked=0x00000000,     ///<Unlock the Comparator 0 and Comparator 1 Module registers.
            locked=0x00000001,     ///<Lock the Comparator 0 and Comparator 1 Module registers (bits can still be read).
        };
        namespace cmplValC{
            constexpr MPL::Value<cmplVal,cmplVal::unlocked> unlocked{};
            constexpr MPL::Value<cmplVal,cmplVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cmplVal> cmpl{}; 
        ///AES Module Lock Enable. 
        enum class aeslVal {
            unlocked=0x00000000,     ///<Unlock the AES0 Module registers.
            locked=0x00000001,     ///<Lock the AES0 Module registers (bits can still be read).
        };
        namespace aeslValC{
            constexpr MPL::Value<aeslVal,aeslVal::unlocked> unlocked{};
            constexpr MPL::Value<aeslVal,aeslVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,aeslVal> aesl{}; 
        ///CRC Module Lock Enable. 
        enum class crclVal {
            unlocked=0x00000000,     ///<Unlock the CRC0 Module registers.
            locked=0x00000001,     ///<Lock the CRC0 Module registers (bits can still be read).
        };
        namespace crclValC{
            constexpr MPL::Value<crclVal,crclVal::unlocked> unlocked{};
            constexpr MPL::Value<crclVal,crclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,crclVal> crcl{}; 
        ///RTC Module Lock Enable. 
        enum class rtclVal {
            unlocked=0x00000000,     ///<Unlock the RTC0 Module registers.
            locked=0x00000001,     ///<Lock the RTC0 Module registers (bits can still be read).
        };
        namespace rtclValC{
            constexpr MPL::Value<rtclVal,rtclVal::unlocked> unlocked{};
            constexpr MPL::Value<rtclVal,rtclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,rtclVal> rtcl{}; 
        ///Reset Sources Module Lock Enable. 
        enum class rstsrclVal {
            unlocked=0x00000000,     ///<Unlock the Reset Sources (RSTSRC) Module registers.
            locked=0x00000001,     ///<Lock the Reset Sources (RSTSRC) Module registers (bits can still be read).
        };
        namespace rstsrclValC{
            constexpr MPL::Value<rstsrclVal,rstsrclVal::unlocked> unlocked{};
            constexpr MPL::Value<rstsrclVal,rstsrclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rstsrclVal> rstsrcl{}; 
        ///Clock Control Lock Enable. 
        enum class clkctrlVal {
            unlocked=0x00000000,     ///<Unlock the Clock Control (CLKCTRL)Module registers.
            locked=0x00000001,     ///<Lock the Clock Control (CLKCTRL) Module registers (bits can still be read).
        };
        namespace clkctrlValC{
            constexpr MPL::Value<clkctrlVal,clkctrlVal::unlocked> unlocked{};
            constexpr MPL::Value<clkctrlVal,clkctrlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,clkctrlVal> clkctrl{}; 
        ///Voltage Supply Monitor Module Lock Enable. 
        enum class vmonlVal {
            unlocked=0x00000000,     ///<Unlock the Voltage Supply Monitor (VMON0) Module registers.
            locked=0x00000001,     ///<Lock the Voltage Supply Monitor (VMON0) Module registers (bits can still be read).
        };
        namespace vmonlValC{
            constexpr MPL::Value<vmonlVal,vmonlVal::unlocked> unlocked{};
            constexpr MPL::Value<vmonlVal,vmonlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,vmonlVal> vmonl{}; 
        ///IDAC Module Lock Enable. 
        enum class idaclVal {
            unlocked=0x00000000,     ///<Unlock the IDAC0 Module registers.
            locked=0x00000001,     ///<Lock the IDAC0 Module registers (bits can still be read).
        };
        namespace idaclValC{
            constexpr MPL::Value<idaclVal,idaclVal::unlocked> unlocked{};
            constexpr MPL::Value<idaclVal,idaclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,idaclVal> idacl{}; 
        ///DMA Controller Module Lock Enable. 
        enum class dmactrllVal {
            unlocked=0x00000000,     ///<Unlock the DMA Controller (DMACTRL0) Module registers.
            locked=0x00000001,     ///<Lock the DMA Controller (DMACTRL0) Module registers (bits can still be read).
        };
        namespace dmactrllValC{
            constexpr MPL::Value<dmactrllVal,dmactrllVal::unlocked> unlocked{};
            constexpr MPL::Value<dmactrllVal,dmactrllVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,dmactrllVal> dmactrll{}; 
        ///DMA Crossbar Module Lock Enable. 
        enum class dmaxbarlVal {
            unlocked=0x00000000,     ///<Unlock the DMA Crossbar (DMAXBAR0) Module registers.
            locked=0x00000001,     ///<Lock the DMA Crossbar (DMAXBAR0) Module registers (bits can still be read).
        };
        namespace dmaxbarlValC{
            constexpr MPL::Value<dmaxbarlVal,dmaxbarlVal::unlocked> unlocked{};
            constexpr MPL::Value<dmaxbarlVal,dmaxbarlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dmaxbarlVal> dmaxbarl{}; 
        ///Low Power Timer Module Lock Enable. 
        enum class lptlVal {
            unlocked=0x00000000,     ///<Unlock the Low Power Timer (LPTIMER0) Module registers.
            locked=0x00000001,     ///<Lock the Low Power Timer (LPTIMER0) Module registers (bits can still be read).
        };
        namespace lptlValC{
            constexpr MPL::Value<lptlVal,lptlVal::unlocked> unlocked{};
            constexpr MPL::Value<lptlVal,lptlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,lptlVal> lptl{}; 
        ///Voltage Reference Module Lock Enable. 
        enum class ldolVal {
            unlocked=0x00000000,     ///<Unlock the LDO0 Module registers.
            locked=0x00000001,     ///<Lock the LDO0 Module registers (bits can still be read).
        };
        namespace ldolValC{
            constexpr MPL::Value<ldolVal,ldolVal::unlocked> unlocked{};
            constexpr MPL::Value<ldolVal,ldolVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ldolVal> ldol{}; 
        ///PLL Module Lock Enable. 
        enum class plllVal {
            unlocked=0x00000000,     ///<Unlock the PLL0 Module registers.
            locked=0x00000001,     ///<Lock the PLL0 Module registers (bits can still be read).
        };
        namespace plllValC{
            constexpr MPL::Value<plllVal,plllVal::unlocked> unlocked{};
            constexpr MPL::Value<plllVal,plllVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,plllVal> plll{}; 
        ///External Oscillator Module Lock Enable. 
        enum class extosclVal {
            unlocked=0x00000000,     ///<Unlock the External Oscillator (EXTOSC0) Module registers.
            locked=0x00000001,     ///<Lock the External Oscillator (EXTOSC0) Module registers (bits can still be read).
        };
        namespace extosclValC{
            constexpr MPL::Value<extosclVal,extosclVal::unlocked> unlocked{};
            constexpr MPL::Value<extosclVal,extosclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,extosclVal> extoscl{}; 
        ///PVT Oscillator Module Lock Enable. 
        enum class pvtlVal {
            unlocked=0x00000000,     ///<Unlock the PVTOSC0 Module registers.
            locked=0x00000001,     ///<Lock the PVTOSC0 Module registers (bits can still be read).
        };
        namespace pvtlValC{
            constexpr MPL::Value<pvtlVal,pvtlVal::unlocked> unlocked{};
            constexpr MPL::Value<pvtlVal,pvtlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,pvtlVal> pvtl{}; 
        ///Low Power Oscillator Lock Enable. 
        enum class lposclVal {
            unlocked=0x00000000,     ///<Unlock the Low Power Oscillator (LPOSC0) Module registers.
            locked=0x00000001,     ///<Lock the Low Power Oscillator (LPOSC0) Module registers (bits can still be read).
        };
        namespace lposclValC{
            constexpr MPL::Value<lposclVal,lposclVal::unlocked> unlocked{};
            constexpr MPL::Value<lposclVal,lposclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,lposclVal> lposcl{}; 
        ///Advanced Capture Counter  Module Lock. 
        enum class acctrlVal {
            unlocked=0x00000000,     ///<Unlock the Advanced Capture Counter (ACCTR0) Module registers.
            locked=0x00000001,     ///<Lock the Advanced Capture Counter (ACCTR0) Module registers (bits can still be read).
        };
        namespace acctrlValC{
            constexpr MPL::Value<acctrlVal,acctrlVal::unlocked> unlocked{};
            constexpr MPL::Value<acctrlVal,acctrlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,acctrlVal> acctrl{}; 
        ///PMU Module Lock Enable. 
        enum class pmulVal {
            unlocked=0x00000000,     ///<Unlock the PMU Module registers.
            locked=0x00000001,     ///<Lock the PMU Module registers (bits can still be read).
        };
        namespace pmulValC{
            constexpr MPL::Value<pmulVal,pmulVal::unlocked> unlocked{};
            constexpr MPL::Value<pmulVal,pmulVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pmulVal> pmul{}; 
        ///DTM Module Lock. 
        enum class dtmlVal {
            unlocked=0x00000000,     ///<Unlock the DTM0, DTM1, and DTM2 Module registers.
            locked=0x00000001,     ///<Lock the DTM0, DTM1, and DTM2 Module registers (bits can still be read).
        };
        namespace dtmlValC{
            constexpr MPL::Value<dtmlVal,dtmlVal::unlocked> unlocked{};
            constexpr MPL::Value<dtmlVal,dtmlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,dtmlVal> dtml{}; 
        ///LCD Module Lock. 
        enum class lcdlVal {
            unlocked=0x00000000,     ///<Unlock the LCD0 Module registers.
            locked=0x00000001,     ///<Lock the LCD0 Module registers (bits can still be read).
        };
        namespace lcdlValC{
            constexpr MPL::Value<lcdlVal,lcdlVal::unlocked> unlocked{};
            constexpr MPL::Value<lcdlVal,lcdlVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,lcdlVal> lcdl{}; 
        ///DC-DC Converter Module Lock. 
        enum class dcdclVal {
            unlocked=0x00000000,     ///<Unlock the DCDC0 Module registers.
            locked=0x00000001,     ///<Lock the DCDC0 Module registers (bits can still be read).
        };
        namespace dcdclValC{
            constexpr MPL::Value<dcdclVal,dcdclVal::unlocked> unlocked{};
            constexpr MPL::Value<dcdclVal,dcdclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dcdclVal> dcdcl{}; 
    }
    namespace Noneperiphlock1{    ///<Peripheral Lock Control 1
        using Addr = Register::Address<0x40049040,0xfffffffe,0,unsigned>;
        ///Encoder Decoder Module Lock. 
        enum class encdeclVal {
            unlocked=0x00000000,     ///<Unlock the ENCDEC0 Module registers.
            locked=0x00000001,     ///<Lock the ENCDEC0 Module registers (bits can still be read).
        };
        namespace encdeclValC{
            constexpr MPL::Value<encdeclVal,encdeclVal::unlocked> unlocked{};
            constexpr MPL::Value<encdeclVal,encdeclVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,encdeclVal> encdecl{}; 
    }
}
