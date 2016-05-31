#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Power Manager
    namespace PmAhbmask{    ///<AHB Mask
        using Addr = Register::Address<0x40000414,0xffffff80,0x00000000,unsigned>;
        ///HPB0 AHB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hpb0{}; 
        ///HPB1 AHB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hpb1{}; 
        ///HPB2 AHB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hpb2{}; 
        ///DSU AHB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsu{}; 
        ///NVMCTRL AHB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nvmctrl{}; 
        ///DMAC AHB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dmac{}; 
        ///USB AHB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> usb{}; 
    }
    namespace PmApbamask{    ///<APBA Mask
        using Addr = Register::Address<0x40000418,0xffffff80,0x00000000,unsigned>;
        ///PAC0 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pac0{}; 
        ///PM APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm{}; 
        ///SYSCTRL APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sysctrl{}; 
        ///GCLK APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gclk{}; 
        ///WDT APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wdt{}; 
        ///RTC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtc{}; 
        ///EIC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eic{}; 
    }
    namespace PmApbasel{    ///<APBA Clock Select
        using Addr = Register::Address<0x40000409,0xfffffff8,0x00000000,unsigned char>;
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
            constexpr Register::FieldValue<decltype(apbadiv)::Type,ApbadivVal::div1> div1{};
            constexpr Register::FieldValue<decltype(apbadiv)::Type,ApbadivVal::div2> div2{};
            constexpr Register::FieldValue<decltype(apbadiv)::Type,ApbadivVal::div4> div4{};
            constexpr Register::FieldValue<decltype(apbadiv)::Type,ApbadivVal::div8> div8{};
            constexpr Register::FieldValue<decltype(apbadiv)::Type,ApbadivVal::div16> div16{};
            constexpr Register::FieldValue<decltype(apbadiv)::Type,ApbadivVal::div32> div32{};
            constexpr Register::FieldValue<decltype(apbadiv)::Type,ApbadivVal::div64> div64{};
            constexpr Register::FieldValue<decltype(apbadiv)::Type,ApbadivVal::div128> div128{};
        }
    }
    namespace PmApbbmask{    ///<APBB Mask
        using Addr = Register::Address<0x4000041c,0xffffffc0,0x00000000,unsigned>;
        ///PAC1 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pac1{}; 
        ///DSU APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsu{}; 
        ///NVMCTRL APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nvmctrl{}; 
        ///PORT APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port{}; 
        ///DMAC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dmac{}; 
        ///USB APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usb{}; 
    }
    namespace PmApbbsel{    ///<APBB Clock Select
        using Addr = Register::Address<0x4000040a,0xfffffff8,0x00000000,unsigned char>;
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
            constexpr Register::FieldValue<decltype(apbbdiv)::Type,ApbbdivVal::div1> div1{};
            constexpr Register::FieldValue<decltype(apbbdiv)::Type,ApbbdivVal::div2> div2{};
            constexpr Register::FieldValue<decltype(apbbdiv)::Type,ApbbdivVal::div4> div4{};
            constexpr Register::FieldValue<decltype(apbbdiv)::Type,ApbbdivVal::div8> div8{};
            constexpr Register::FieldValue<decltype(apbbdiv)::Type,ApbbdivVal::div16> div16{};
            constexpr Register::FieldValue<decltype(apbbdiv)::Type,ApbbdivVal::div32> div32{};
            constexpr Register::FieldValue<decltype(apbbdiv)::Type,ApbbdivVal::div64> div64{};
            constexpr Register::FieldValue<decltype(apbbdiv)::Type,ApbbdivVal::div128> div128{};
        }
    }
    namespace PmApbcmask{    ///<APBC Mask
        using Addr = Register::Address<0x40000420,0xff5c0000,0x00000000,unsigned>;
        ///PAC2 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pac2{}; 
        ///EVSYS APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evsys{}; 
        ///SERCOM0 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sercom0{}; 
        ///SERCOM1 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sercom1{}; 
        ///SERCOM2 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sercom2{}; 
        ///SERCOM3 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sercom3{}; 
        ///SERCOM4 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sercom4{}; 
        ///SERCOM5 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sercom5{}; 
        ///TCC0 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tcc0{}; 
        ///TCC1 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcc1{}; 
        ///TCC2 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tcc2{}; 
        ///TC3 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tc3{}; 
        ///TC4 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tc4{}; 
        ///TC5 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tc5{}; 
        ///TC6 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tc6{}; 
        ///TC7 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tc7{}; 
        ///ADC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adc{}; 
        ///AC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ac{}; 
        ///RFCTRL APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rfctrl{}; 
        ///ATW APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> atw{}; 
    }
    namespace PmApbcsel{    ///<APBC Clock Select
        using Addr = Register::Address<0x4000040b,0xfffffff8,0x00000000,unsigned char>;
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
            constexpr Register::FieldValue<decltype(apbcdiv)::Type,ApbcdivVal::div1> div1{};
            constexpr Register::FieldValue<decltype(apbcdiv)::Type,ApbcdivVal::div2> div2{};
            constexpr Register::FieldValue<decltype(apbcdiv)::Type,ApbcdivVal::div4> div4{};
            constexpr Register::FieldValue<decltype(apbcdiv)::Type,ApbcdivVal::div8> div8{};
            constexpr Register::FieldValue<decltype(apbcdiv)::Type,ApbcdivVal::div16> div16{};
            constexpr Register::FieldValue<decltype(apbcdiv)::Type,ApbcdivVal::div32> div32{};
            constexpr Register::FieldValue<decltype(apbcdiv)::Type,ApbcdivVal::div64> div64{};
            constexpr Register::FieldValue<decltype(apbcdiv)::Type,ApbcdivVal::div128> div128{};
        }
    }
    namespace PmCpusel{    ///<CPU Clock Select
        using Addr = Register::Address<0x40000408,0xfffffff8,0x00000000,unsigned char>;
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
            constexpr Register::FieldValue<decltype(cpudiv)::Type,CpudivVal::div1> div1{};
            constexpr Register::FieldValue<decltype(cpudiv)::Type,CpudivVal::div2> div2{};
            constexpr Register::FieldValue<decltype(cpudiv)::Type,CpudivVal::div4> div4{};
            constexpr Register::FieldValue<decltype(cpudiv)::Type,CpudivVal::div8> div8{};
            constexpr Register::FieldValue<decltype(cpudiv)::Type,CpudivVal::div16> div16{};
            constexpr Register::FieldValue<decltype(cpudiv)::Type,CpudivVal::div32> div32{};
            constexpr Register::FieldValue<decltype(cpudiv)::Type,CpudivVal::div64> div64{};
            constexpr Register::FieldValue<decltype(cpudiv)::Type,CpudivVal::div128> div128{};
        }
    }
    namespace PmCtrl{    ///<Control
        using Addr = Register::Address<0x40000400,0xffffffeb,0x00000000,unsigned char>;
        ///Clock Failure Detector Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cfden{}; 
        ///Backup Clock Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bkupclk{}; 
    }
    namespace PmIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40000434,0xfffffffc,0x00000000,unsigned char>;
        ///Clock Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ckrdy{}; 
        ///Clock Failure Detector Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cfd{}; 
    }
    namespace PmIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40000435,0xfffffffc,0x00000000,unsigned char>;
        ///Clock Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ckrdy{}; 
        ///Clock Failure Detector Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cfd{}; 
    }
    namespace PmIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40000436,0xfffffffc,0x00000000,unsigned char>;
        ///Clock Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ckrdy{}; 
        ///Clock Failure Detector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cfd{}; 
    }
    namespace PmRcause{    ///<Reset Cause
        using Addr = Register::Address<0x40000438,0xffffff88,0x00000000,unsigned char>;
        ///Power On Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> por{}; 
        ///Brown Out 12 Detector Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bod12{}; 
        ///Brown Out 33 Detector Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bod33{}; 
        ///External Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Watchdog Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wdt{}; 
        ///System Reset Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> syst{}; 
    }
    namespace PmSleep{    ///<Sleep Mode
        using Addr = Register::Address<0x40000401,0xfffffffc,0x00000000,unsigned char>;
        ///Idle Mode Configuration
        enum class IdleVal {
            cpu=0x00000000,     ///<The CPU clock domain is stopped
            ahb=0x00000001,     ///<The CPU and AHB clock domains are stopped
            apb=0x00000002,     ///<The CPU, AHB and APB clock domains are stopped
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,IdleVal> idle{}; 
        namespace IdleValC{
            constexpr Register::FieldValue<decltype(idle)::Type,IdleVal::cpu> cpu{};
            constexpr Register::FieldValue<decltype(idle)::Type,IdleVal::ahb> ahb{};
            constexpr Register::FieldValue<decltype(idle)::Type,IdleVal::apb> apb{};
        }
    }
}
