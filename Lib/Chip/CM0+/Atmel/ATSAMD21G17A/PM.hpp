#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power Manager
    namespace PmAhbmask{    ///<AHB Mask
        using Addr = Register::Address<0x40000414,0xffffff80,0,unsigned>;
        ///HPB0 AHB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hpb0{}; 
        namespace Hpb0ValC{
        }
        ///HPB1 AHB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hpb1{}; 
        namespace Hpb1ValC{
        }
        ///HPB2 AHB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hpb2{}; 
        namespace Hpb2ValC{
        }
        ///DSU AHB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsu{}; 
        namespace DsuValC{
        }
        ///NVMCTRL AHB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nvmctrl{}; 
        namespace NvmctrlValC{
        }
        ///DMAC AHB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dmac{}; 
        namespace DmacValC{
        }
        ///USB AHB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> usb{}; 
        namespace UsbValC{
        }
    }
    namespace PmApbamask{    ///<APBA Mask
        using Addr = Register::Address<0x40000418,0xffffff80,0,unsigned>;
        ///PAC0 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pac0{}; 
        namespace Pac0ValC{
        }
        ///PM APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm{}; 
        namespace PmValC{
        }
        ///SYSCTRL APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sysctrl{}; 
        namespace SysctrlValC{
        }
        ///GCLK APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gclk{}; 
        namespace GclkValC{
        }
        ///WDT APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wdt{}; 
        namespace WdtValC{
        }
        ///RTC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtc{}; 
        namespace RtcValC{
        }
        ///EIC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eic{}; 
        namespace EicValC{
        }
    }
    namespace PmApbasel{    ///<APBA Clock Select
        using Addr = Register::Address<0x40000409,0xfffffff8,0,unsigned char>;
        ///APBA Prescaler Selection
        enum class ApbadivVal {
            div1=0x00000000,     ///<Divide by 1
            div2=0x00000001,     ///<Divide by 2
            div4=0x00000002,     ///<Divide by 4
            div8=0x00000003,     ///<Divide by 8
            div16=0x00000004,     ///<Divide by 16
            div32=0x00000005,     ///<Divide by 32
            div64=0x00000006,     ///<Divide by 64
            div128=0x00000007,     ///<Divide by 128
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ApbadivVal> apbadiv{}; 
        namespace ApbadivValC{
            constexpr Register::FieldValue<decltype(apbadiv),ApbadivVal::div1> div1{};
            constexpr Register::FieldValue<decltype(apbadiv),ApbadivVal::div2> div2{};
            constexpr Register::FieldValue<decltype(apbadiv),ApbadivVal::div4> div4{};
            constexpr Register::FieldValue<decltype(apbadiv),ApbadivVal::div8> div8{};
            constexpr Register::FieldValue<decltype(apbadiv),ApbadivVal::div16> div16{};
            constexpr Register::FieldValue<decltype(apbadiv),ApbadivVal::div32> div32{};
            constexpr Register::FieldValue<decltype(apbadiv),ApbadivVal::div64> div64{};
            constexpr Register::FieldValue<decltype(apbadiv),ApbadivVal::div128> div128{};
        }
    }
    namespace PmApbbmask{    ///<APBB Mask
        using Addr = Register::Address<0x4000041c,0xffffffc0,0,unsigned>;
        ///PAC1 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pac1{}; 
        namespace Pac1ValC{
        }
        ///DSU APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsu{}; 
        namespace DsuValC{
        }
        ///NVMCTRL APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nvmctrl{}; 
        namespace NvmctrlValC{
        }
        ///PORT APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port{}; 
        namespace PortValC{
        }
        ///DMAC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dmac{}; 
        namespace DmacValC{
        }
        ///USB APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usb{}; 
        namespace UsbValC{
        }
    }
    namespace PmApbbsel{    ///<APBB Clock Select
        using Addr = Register::Address<0x4000040a,0xfffffff8,0,unsigned char>;
        ///APBB Prescaler Selection
        enum class ApbbdivVal {
            div1=0x00000000,     ///<Divide by 1
            div2=0x00000001,     ///<Divide by 2
            div4=0x00000002,     ///<Divide by 4
            div8=0x00000003,     ///<Divide by 8
            div16=0x00000004,     ///<Divide by 16
            div32=0x00000005,     ///<Divide by 32
            div64=0x00000006,     ///<Divide by 64
            div128=0x00000007,     ///<Divide by 128
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ApbbdivVal> apbbdiv{}; 
        namespace ApbbdivValC{
            constexpr Register::FieldValue<decltype(apbbdiv),ApbbdivVal::div1> div1{};
            constexpr Register::FieldValue<decltype(apbbdiv),ApbbdivVal::div2> div2{};
            constexpr Register::FieldValue<decltype(apbbdiv),ApbbdivVal::div4> div4{};
            constexpr Register::FieldValue<decltype(apbbdiv),ApbbdivVal::div8> div8{};
            constexpr Register::FieldValue<decltype(apbbdiv),ApbbdivVal::div16> div16{};
            constexpr Register::FieldValue<decltype(apbbdiv),ApbbdivVal::div32> div32{};
            constexpr Register::FieldValue<decltype(apbbdiv),ApbbdivVal::div64> div64{};
            constexpr Register::FieldValue<decltype(apbbdiv),ApbbdivVal::div128> div128{};
        }
    }
    namespace PmApbcmask{    ///<APBC Mask
        using Addr = Register::Address<0x40000420,0xff68c000,0,unsigned>;
        ///PAC2 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pac2{}; 
        namespace Pac2ValC{
        }
        ///EVSYS APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evsys{}; 
        namespace EvsysValC{
        }
        ///SERCOM0 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sercom0{}; 
        namespace Sercom0ValC{
        }
        ///SERCOM1 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sercom1{}; 
        namespace Sercom1ValC{
        }
        ///SERCOM2 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sercom2{}; 
        namespace Sercom2ValC{
        }
        ///SERCOM3 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sercom3{}; 
        namespace Sercom3ValC{
        }
        ///SERCOM4 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sercom4{}; 
        namespace Sercom4ValC{
        }
        ///SERCOM5 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sercom5{}; 
        namespace Sercom5ValC{
        }
        ///TCC0 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tcc0{}; 
        namespace Tcc0ValC{
        }
        ///TCC1 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcc1{}; 
        namespace Tcc1ValC{
        }
        ///TCC2 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tcc2{}; 
        namespace Tcc2ValC{
        }
        ///TC3 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tc3{}; 
        namespace Tc3ValC{
        }
        ///TC4 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tc4{}; 
        namespace Tc4ValC{
        }
        ///TC5 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tc5{}; 
        namespace Tc5ValC{
        }
        ///ADC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adc{}; 
        namespace AdcValC{
        }
        ///AC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ac{}; 
        namespace AcValC{
        }
        ///DAC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dac{}; 
        namespace DacValC{
        }
        ///I2S APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> i2s{}; 
        namespace I2sValC{
        }
        ///ATW APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> atw{}; 
        namespace AtwValC{
        }
    }
    namespace PmApbcsel{    ///<APBC Clock Select
        using Addr = Register::Address<0x4000040b,0xfffffff8,0,unsigned char>;
        ///APBC Prescaler Selection
        enum class ApbcdivVal {
            div1=0x00000000,     ///<Divide by 1
            div2=0x00000001,     ///<Divide by 2
            div4=0x00000002,     ///<Divide by 4
            div8=0x00000003,     ///<Divide by 8
            div16=0x00000004,     ///<Divide by 16
            div32=0x00000005,     ///<Divide by 32
            div64=0x00000006,     ///<Divide by 64
            div128=0x00000007,     ///<Divide by 128
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ApbcdivVal> apbcdiv{}; 
        namespace ApbcdivValC{
            constexpr Register::FieldValue<decltype(apbcdiv),ApbcdivVal::div1> div1{};
            constexpr Register::FieldValue<decltype(apbcdiv),ApbcdivVal::div2> div2{};
            constexpr Register::FieldValue<decltype(apbcdiv),ApbcdivVal::div4> div4{};
            constexpr Register::FieldValue<decltype(apbcdiv),ApbcdivVal::div8> div8{};
            constexpr Register::FieldValue<decltype(apbcdiv),ApbcdivVal::div16> div16{};
            constexpr Register::FieldValue<decltype(apbcdiv),ApbcdivVal::div32> div32{};
            constexpr Register::FieldValue<decltype(apbcdiv),ApbcdivVal::div64> div64{};
            constexpr Register::FieldValue<decltype(apbcdiv),ApbcdivVal::div128> div128{};
        }
    }
    namespace PmCpusel{    ///<CPU Clock Select
        using Addr = Register::Address<0x40000408,0xfffffff8,0,unsigned char>;
        ///CPU Prescaler Selection
        enum class CpudivVal {
            div1=0x00000000,     ///<Divide by 1
            div2=0x00000001,     ///<Divide by 2
            div4=0x00000002,     ///<Divide by 4
            div8=0x00000003,     ///<Divide by 8
            div16=0x00000004,     ///<Divide by 16
            div32=0x00000005,     ///<Divide by 32
            div64=0x00000006,     ///<Divide by 64
            div128=0x00000007,     ///<Divide by 128
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,CpudivVal> cpudiv{}; 
        namespace CpudivValC{
            constexpr Register::FieldValue<decltype(cpudiv),CpudivVal::div1> div1{};
            constexpr Register::FieldValue<decltype(cpudiv),CpudivVal::div2> div2{};
            constexpr Register::FieldValue<decltype(cpudiv),CpudivVal::div4> div4{};
            constexpr Register::FieldValue<decltype(cpudiv),CpudivVal::div8> div8{};
            constexpr Register::FieldValue<decltype(cpudiv),CpudivVal::div16> div16{};
            constexpr Register::FieldValue<decltype(cpudiv),CpudivVal::div32> div32{};
            constexpr Register::FieldValue<decltype(cpudiv),CpudivVal::div64> div64{};
            constexpr Register::FieldValue<decltype(cpudiv),CpudivVal::div128> div128{};
        }
    }
    namespace PmCtrl{    ///<Control
        using Addr = Register::Address<0x40000400,0xffffffeb,0,unsigned char>;
        ///Clock Failure Detector Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cfden{}; 
        namespace CfdenValC{
        }
        ///Backup Clock Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bkupclk{}; 
        namespace BkupclkValC{
        }
    }
    namespace PmIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40000434,0xfffffffc,0,unsigned char>;
        ///Clock Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ckrdy{}; 
        namespace CkrdyValC{
        }
        ///Clock Failure Detector Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cfd{}; 
        namespace CfdValC{
        }
    }
    namespace PmIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40000435,0xfffffffc,0,unsigned char>;
        ///Clock Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ckrdy{}; 
        namespace CkrdyValC{
        }
        ///Clock Failure Detector Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cfd{}; 
        namespace CfdValC{
        }
    }
    namespace PmIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40000436,0xfffffffc,0,unsigned char>;
        ///Clock Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ckrdy{}; 
        namespace CkrdyValC{
        }
        ///Clock Failure Detector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cfd{}; 
        namespace CfdValC{
        }
    }
    namespace PmRcause{    ///<Reset Cause
        using Addr = Register::Address<0x40000438,0xffffff88,0,unsigned char>;
        ///Power On Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> por{}; 
        namespace PorValC{
        }
        ///Brown Out 12 Detector Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bod12{}; 
        namespace Bod12ValC{
        }
        ///Brown Out 33 Detector Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bod33{}; 
        namespace Bod33ValC{
        }
        ///External Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Watchdog Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wdt{}; 
        namespace WdtValC{
        }
        ///System Reset Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> syst{}; 
        namespace SystValC{
        }
    }
    namespace PmSleep{    ///<Sleep Mode
        using Addr = Register::Address<0x40000401,0xfffffffc,0,unsigned char>;
        ///Idle Mode Configuration
        enum class IdleVal {
            cpu=0x00000000,     ///<The CPU clock domain is stopped
            ahb=0x00000001,     ///<The CPU and AHB clock domains are stopped
            apb=0x00000002,     ///<The CPU, AHB and APB clock domains are stopped
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,IdleVal> idle{}; 
        namespace IdleValC{
            constexpr Register::FieldValue<decltype(idle),IdleVal::cpu> cpu{};
            constexpr Register::FieldValue<decltype(idle),IdleVal::ahb> ahb{};
            constexpr Register::FieldValue<decltype(idle),IdleVal::apb> apb{};
        }
    }
}
