#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Special Function Registers
    namespace SfrOhciicr{    ///<OHCI Interrupt Configuration Register
        using Addr = Register::Address<0xf0038010,0xff7fffc8,0,unsigned>;
        ///USB PORTx RESET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> res0{}; 
        ///USB PORTx RESET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> res1{}; 
        ///USB PORTx RESET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> res2{}; 
        ///OHCI Asynchronous Resume Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> arie{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> appstart{}; 
        ///OHCI USB DEVICE PULL-UP DISABLE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> udppudis{}; 
    }
    namespace SfrOhciisr{    ///<OHCI Interrupt Status Register
        using Addr = Register::Address<0xf0038014,0xfffffff8,0,unsigned>;
        ///OHCI Resume Interrupt Status Port 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ris0{}; 
        ///OHCI Resume Interrupt Status Port 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ris1{}; 
        ///OHCI Resume Interrupt Status Port 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ris2{}; 
    }
    namespace SfrAhb{    ///<AHB Configuration Register
        using Addr = Register::Address<0xf0038020,0x83ff83ff,0,unsigned>;
        ///AHB MASTERx 10 Converter Prefetch
        enum class pfetch10Val {
            incr4=0x00000000,     ///<INCR undefined burst converted to burst of 4 beats.
            incr8=0x00000001,     ///<INCR undefined burst converted to burst of 8 beats.
        };
        namespace pfetch10ValC{
            constexpr MPL::Value<pfetch10Val,pfetch10Val::incr4> incr4{};
            constexpr MPL::Value<pfetch10Val,pfetch10Val::incr8> incr8{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pfetch10Val> pfetch10{}; 
        ///AHB MASTERx 11 Converter Prefetch
        enum class pfetch11Val {
            incr4=0x00000000,     ///<INCR undefined burst converted to burst of 4 beats.
            incr8=0x00000001,     ///<INCR undefined burst converted to burst of 8 beats.
        };
        namespace pfetch11ValC{
            constexpr MPL::Value<pfetch11Val,pfetch11Val::incr4> incr4{};
            constexpr MPL::Value<pfetch11Val,pfetch11Val::incr8> incr8{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pfetch11Val> pfetch11{}; 
        ///AHB MASTERx 12 Converter Prefetch
        enum class pfetch12Val {
            incr4=0x00000000,     ///<INCR undefined burst converted to burst of 4 beats.
            incr8=0x00000001,     ///<INCR undefined burst converted to burst of 8 beats.
        };
        namespace pfetch12ValC{
            constexpr MPL::Value<pfetch12Val,pfetch12Val::incr4> incr4{};
            constexpr MPL::Value<pfetch12Val,pfetch12Val::incr8> incr8{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pfetch12Val> pfetch12{}; 
        ///AHB MASTERx 13 Converter Prefetch
        enum class pfetch13Val {
            incr4=0x00000000,     ///<INCR undefined burst converted to burst of 4 beats.
            incr8=0x00000001,     ///<INCR undefined burst converted to burst of 8 beats.
        };
        namespace pfetch13ValC{
            constexpr MPL::Value<pfetch13Val,pfetch13Val::incr4> incr4{};
            constexpr MPL::Value<pfetch13Val,pfetch13Val::incr8> incr8{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pfetch13Val> pfetch13{}; 
        ///AHB MASTERx 14 Converter Prefetch
        enum class pfetch14Val {
            incr4=0x00000000,     ///<INCR undefined burst converted to burst of 4 beats.
            incr8=0x00000001,     ///<INCR undefined burst converted to burst of 8 beats.
        };
        namespace pfetch14ValC{
            constexpr MPL::Value<pfetch14Val,pfetch14Val::incr4> incr4{};
            constexpr MPL::Value<pfetch14Val,pfetch14Val::incr8> incr8{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pfetch14Val> pfetch14{}; 
        ///AHB MASTERx 10 Converter Define Length Burst Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dlbopt10{}; 
        ///AHB MASTERx 11 Converter Define Length Burst Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dlbopt11{}; 
        ///AHB MASTERx 12 Converter Define Length Burst Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dlbopt12{}; 
        ///AHB MASTERx 13 Converter Define Length Burst Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dlbopt13{}; 
        ///AHB MASTERx 14 Converter Define Length Burst Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dlbopt14{}; 
    }
    namespace SfrBridge{    ///<Bridge Configuration Register
        using Addr = Register::Address<0xf0038024,0xfffffefe,0,unsigned>;
        ///AHB to APB Bridge mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> apbturbo{}; 
        ///AXI to AHB bridge for DDR controller selection
        enum class axi2ahbselVal {
            single=0x00000000,     ///<use single port bridge.
            dual=0x00000001,     ///<use dual port bridge.
        };
        namespace axi2ahbselValC{
            constexpr MPL::Value<axi2ahbselVal,axi2ahbselVal::single> single{};
            constexpr MPL::Value<axi2ahbselVal,axi2ahbselVal::dual> dual{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,axi2ahbselVal> axi2ahbsel{}; 
    }
    namespace SfrSecure{    ///<Security Configuration Register
        using Addr = Register::Address<0xf0038028,0xfffffefe,0,unsigned>;
        ///Disable Access to ROM Code
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rom{}; 
        ///Disable Access to Fuse Controller
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fuse{}; 
    }
    namespace SfrUtmicktrim{    ///<UTMI Clock Trimming Register
        using Addr = Register::Address<0xf0038030,0xfff0fffc,0,unsigned>;
        ///UTMI Reference Clock Frequency
        enum class freqVal {
            v12=0x00000000,     ///<12 MHz reference clock
            v16=0x00000001,     ///<16 MHz reference clock
            v24=0x00000002,     ///<24 MHz reference clock
            v48=0x00000003,     ///<48 MHz reference clock
        };
        namespace freqValC{
            constexpr MPL::Value<freqVal,freqVal::v12> v12{};
            constexpr MPL::Value<freqVal,freqVal::v16> v16{};
            constexpr MPL::Value<freqVal,freqVal::v24> v24{};
            constexpr MPL::Value<freqVal,freqVal::v48> v48{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,freqVal> freq{}; 
        ///UTMI Band Gap Voltage Trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> vbg{}; 
    }
    namespace SfrUtmihstrim{    ///<UTMI High Speed Trimming Register
        using Addr = Register::Address<0xf0038034,0xfff88888,0,unsigned>;
        ///UTMI HS SQUELCH Voltage Trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> squelch{}; 
        ///UTMI Disconnect Voltage Trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> disc{}; 
        ///UTMI HS PORTx Transceiver Slope Trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> slope0{}; 
        ///UTMI HS PORTx Transceiver Slope Trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> slope1{}; 
        ///UTMI HS PORTx Transceiver Slope Trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> slope2{}; 
    }
    namespace SfrUtmifstrim{    ///<UTMI Full Speed Trimming Register
        using Addr = Register::Address<0xf0038038,0xff88fc88,0,unsigned>;
        ///FS Transceiver output rising slope trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rise{}; 
        ///FS Transceiver output falling slope trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fall{}; 
        ///FS Transceiver crossover voltage trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> xcvr{}; 
        ///FS Transceiver NMOS impedance trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> zn{}; 
        ///FS Transceiver PMOS impedance trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> zp{}; 
    }
    namespace SfrUtmiswap{    ///<UTMI DP/DM Pin Swapping Register
        using Addr = Register::Address<0xf003803c,0xfffffff8,0,unsigned>;
        ///PORT 0 DP/DM Pin Swapping
        enum class port0Val {
            normal=0x00000000,     ///<DP/DM normal pinout.
            swapped=0x00000001,     ///<DP/DM swapped pinout.
        };
        namespace port0ValC{
            constexpr MPL::Value<port0Val,port0Val::normal> normal{};
            constexpr MPL::Value<port0Val,port0Val::swapped> swapped{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,port0Val> port0{}; 
        ///PORT 1 DP/DM Pin Swapping
        enum class port1Val {
            normal=0x00000000,     ///<DP/DM normal pinout.
            swapped=0x00000001,     ///<DP/DM swapped pinout.
        };
        namespace port1ValC{
            constexpr MPL::Value<port1Val,port1Val::normal> normal{};
            constexpr MPL::Value<port1Val,port1Val::swapped> swapped{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,port1Val> port1{}; 
        ///PORT 2 DP/DM Pin Swapping
        enum class port2Val {
            normal=0x00000000,     ///<DP/DM normal pinout.
            swapped=0x00000001,     ///<DP/DM swapped pinout.
        };
        namespace port2ValC{
            constexpr MPL::Value<port2Val,port2Val::normal> normal{};
            constexpr MPL::Value<port2Val,port2Val::swapped> swapped{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,port2Val> port2{}; 
    }
    namespace SfrEbicfg{    ///<EBI Configuration Register
        using Addr = Register::Address<0xf0038040,0xfffee0e0,0,unsigned>;
        ///EBI Pins Drive Level
        enum class drive0Val {
            low=0x00000000,     ///<Low drive level
            medium=0x00000002,     ///<Medium drive level
            high=0x00000003,     ///<High drive level
        };
        namespace drive0ValC{
            constexpr MPL::Value<drive0Val,drive0Val::low> low{};
            constexpr MPL::Value<drive0Val,drive0Val::medium> medium{};
            constexpr MPL::Value<drive0Val,drive0Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,drive0Val> drive0{}; 
        ///EBI Pins Pull Value
        enum class pull0Val {
            up=0x00000000,     ///<Pull-up
            none=0x00000001,     ///<No Pull
            down=0x00000003,     ///<Pull-down
        };
        namespace pull0ValC{
            constexpr MPL::Value<pull0Val,pull0Val::up> up{};
            constexpr MPL::Value<pull0Val,pull0Val::none> none{};
            constexpr MPL::Value<pull0Val,pull0Val::down> down{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pull0Val> pull0{}; 
        ///EBI Pins Schmitt Trigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sch0{}; 
        ///EBI Pins Drive Level
        enum class drive1Val {
            low=0x00000000,     ///<Low drive level
            medium=0x00000002,     ///<Medium drive level
            high=0x00000003,     ///<High drive level
        };
        namespace drive1ValC{
            constexpr MPL::Value<drive1Val,drive1Val::low> low{};
            constexpr MPL::Value<drive1Val,drive1Val::medium> medium{};
            constexpr MPL::Value<drive1Val,drive1Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,drive1Val> drive1{}; 
        ///EBI Pins Pull Value
        enum class pull1Val {
            up=0x00000000,     ///<Pull-up
            none=0x00000001,     ///<No Pull
            down=0x00000003,     ///<Pull-down
        };
        namespace pull1ValC{
            constexpr MPL::Value<pull1Val,pull1Val::up> up{};
            constexpr MPL::Value<pull1Val,pull1Val::none> none{};
            constexpr MPL::Value<pull1Val,pull1Val::down> down{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,pull1Val> pull1{}; 
        ///EBI Pins Schmitt Trigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sch1{}; 
        ///BMS Sampled Value (Read Only)
        enum class bmsVal {
            rom=0x00000000,     ///<Boot on ROM.
            ebi=0x00000001,     ///<Boot on EBI.
        };
        namespace bmsValC{
            constexpr MPL::Value<bmsVal,bmsVal::rom> rom{};
            constexpr MPL::Value<bmsVal,bmsVal::ebi> ebi{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,bmsVal> bms{}; 
    }
}
