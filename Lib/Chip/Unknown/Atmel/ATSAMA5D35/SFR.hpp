#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Special Function Registers
    namespace SfrOhciicr{    ///<OHCI Interrupt Configuration Register
        using Addr = Register::Address<0xf0038010,0xff7fffc8,0,unsigned>;
        ///USB PORTx RESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> res0{}; 
        namespace Res0ValC{
        }
        ///USB PORTx RESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> res1{}; 
        namespace Res1ValC{
        }
        ///USB PORTx RESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> res2{}; 
        namespace Res2ValC{
        }
        ///OHCI Asynchronous Resume Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> arie{}; 
        namespace ArieValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> appstart{}; 
        namespace AppstartValC{
        }
        ///OHCI USB DEVICE PULL-UP DISABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> udppudis{}; 
        namespace UdppudisValC{
        }
    }
    namespace SfrOhciisr{    ///<OHCI Interrupt Status Register
        using Addr = Register::Address<0xf0038014,0xfffffff8,0,unsigned>;
        ///OHCI Resume Interrupt Status Port 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ris0{}; 
        namespace Ris0ValC{
        }
        ///OHCI Resume Interrupt Status Port 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ris1{}; 
        namespace Ris1ValC{
        }
        ///OHCI Resume Interrupt Status Port 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ris2{}; 
        namespace Ris2ValC{
        }
    }
    namespace SfrAhb{    ///<AHB Configuration Register
        using Addr = Register::Address<0xf0038020,0x83ff83ff,0,unsigned>;
        ///AHB MASTERx 10 Converter Prefetch
        enum class Pfetch10Val {
            incr4=0x00000000,     ///<INCR undefined burst converted to burst of 4 beats.
            incr8=0x00000001,     ///<INCR undefined burst converted to burst of 8 beats.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pfetch10Val> pfetch10{}; 
        namespace Pfetch10ValC{
            constexpr Register::FieldValue<decltype(pfetch10),Pfetch10Val::incr4> incr4{};
            constexpr Register::FieldValue<decltype(pfetch10),Pfetch10Val::incr8> incr8{};
        }
        ///AHB MASTERx 11 Converter Prefetch
        enum class Pfetch11Val {
            incr4=0x00000000,     ///<INCR undefined burst converted to burst of 4 beats.
            incr8=0x00000001,     ///<INCR undefined burst converted to burst of 8 beats.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pfetch11Val> pfetch11{}; 
        namespace Pfetch11ValC{
            constexpr Register::FieldValue<decltype(pfetch11),Pfetch11Val::incr4> incr4{};
            constexpr Register::FieldValue<decltype(pfetch11),Pfetch11Val::incr8> incr8{};
        }
        ///AHB MASTERx 12 Converter Prefetch
        enum class Pfetch12Val {
            incr4=0x00000000,     ///<INCR undefined burst converted to burst of 4 beats.
            incr8=0x00000001,     ///<INCR undefined burst converted to burst of 8 beats.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pfetch12Val> pfetch12{}; 
        namespace Pfetch12ValC{
            constexpr Register::FieldValue<decltype(pfetch12),Pfetch12Val::incr4> incr4{};
            constexpr Register::FieldValue<decltype(pfetch12),Pfetch12Val::incr8> incr8{};
        }
        ///AHB MASTERx 13 Converter Prefetch
        enum class Pfetch13Val {
            incr4=0x00000000,     ///<INCR undefined burst converted to burst of 4 beats.
            incr8=0x00000001,     ///<INCR undefined burst converted to burst of 8 beats.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pfetch13Val> pfetch13{}; 
        namespace Pfetch13ValC{
            constexpr Register::FieldValue<decltype(pfetch13),Pfetch13Val::incr4> incr4{};
            constexpr Register::FieldValue<decltype(pfetch13),Pfetch13Val::incr8> incr8{};
        }
        ///AHB MASTERx 14 Converter Prefetch
        enum class Pfetch14Val {
            incr4=0x00000000,     ///<INCR undefined burst converted to burst of 4 beats.
            incr8=0x00000001,     ///<INCR undefined burst converted to burst of 8 beats.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pfetch14Val> pfetch14{}; 
        namespace Pfetch14ValC{
            constexpr Register::FieldValue<decltype(pfetch14),Pfetch14Val::incr4> incr4{};
            constexpr Register::FieldValue<decltype(pfetch14),Pfetch14Val::incr8> incr8{};
        }
        ///AHB MASTERx 10 Converter Define Length Burst Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dlbopt10{}; 
        namespace Dlbopt10ValC{
        }
        ///AHB MASTERx 11 Converter Define Length Burst Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dlbopt11{}; 
        namespace Dlbopt11ValC{
        }
        ///AHB MASTERx 12 Converter Define Length Burst Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dlbopt12{}; 
        namespace Dlbopt12ValC{
        }
        ///AHB MASTERx 13 Converter Define Length Burst Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dlbopt13{}; 
        namespace Dlbopt13ValC{
        }
        ///AHB MASTERx 14 Converter Define Length Burst Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dlbopt14{}; 
        namespace Dlbopt14ValC{
        }
    }
    namespace SfrBridge{    ///<Bridge Configuration Register
        using Addr = Register::Address<0xf0038024,0xfffffefe,0,unsigned>;
        ///AHB to APB Bridge mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> apbturbo{}; 
        namespace ApbturboValC{
        }
        ///AXI to AHB bridge for DDR controller selection
        enum class Axi2ahbselVal {
            single=0x00000000,     ///<use single port bridge.
            dual=0x00000001,     ///<use dual port bridge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Axi2ahbselVal> axi2ahbsel{}; 
        namespace Axi2ahbselValC{
            constexpr Register::FieldValue<decltype(axi2ahbsel),Axi2ahbselVal::single> single{};
            constexpr Register::FieldValue<decltype(axi2ahbsel),Axi2ahbselVal::dual> dual{};
        }
    }
    namespace SfrSecure{    ///<Security Configuration Register
        using Addr = Register::Address<0xf0038028,0xfffffefe,0,unsigned>;
        ///Disable Access to ROM Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rom{}; 
        namespace RomValC{
        }
        ///Disable Access to Fuse Controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace SfrUtmicktrim{    ///<UTMI Clock Trimming Register
        using Addr = Register::Address<0xf0038030,0xfff0fffc,0,unsigned>;
        ///UTMI Reference Clock Frequency
        enum class FreqVal {
            v12=0x00000000,     ///<12 MHz reference clock
            v16=0x00000001,     ///<16 MHz reference clock
            v24=0x00000002,     ///<24 MHz reference clock
            v48=0x00000003,     ///<48 MHz reference clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,FreqVal> freq{}; 
        namespace FreqValC{
            constexpr Register::FieldValue<decltype(freq),FreqVal::v12> v12{};
            constexpr Register::FieldValue<decltype(freq),FreqVal::v16> v16{};
            constexpr Register::FieldValue<decltype(freq),FreqVal::v24> v24{};
            constexpr Register::FieldValue<decltype(freq),FreqVal::v48> v48{};
        }
        ///UTMI Band Gap Voltage Trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> vbg{}; 
        namespace VbgValC{
        }
    }
    namespace SfrUtmihstrim{    ///<UTMI High Speed Trimming Register
        using Addr = Register::Address<0xf0038034,0xfff88888,0,unsigned>;
        ///UTMI HS SQUELCH Voltage Trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> squelch{}; 
        namespace SquelchValC{
        }
        ///UTMI Disconnect Voltage Trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> disc{}; 
        namespace DiscValC{
        }
        ///UTMI HS PORTx Transceiver Slope Trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> slope0{}; 
        namespace Slope0ValC{
        }
        ///UTMI HS PORTx Transceiver Slope Trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> slope1{}; 
        namespace Slope1ValC{
        }
        ///UTMI HS PORTx Transceiver Slope Trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> slope2{}; 
        namespace Slope2ValC{
        }
    }
    namespace SfrUtmifstrim{    ///<UTMI Full Speed Trimming Register
        using Addr = Register::Address<0xf0038038,0xff88fc88,0,unsigned>;
        ///FS Transceiver output rising slope trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rise{}; 
        namespace RiseValC{
        }
        ///FS Transceiver output falling slope trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fall{}; 
        namespace FallValC{
        }
        ///FS Transceiver crossover voltage trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> xcvr{}; 
        namespace XcvrValC{
        }
        ///FS Transceiver NMOS impedance trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> zn{}; 
        namespace ZnValC{
        }
        ///FS Transceiver PMOS impedance trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> zp{}; 
        namespace ZpValC{
        }
    }
    namespace SfrUtmiswap{    ///<UTMI DP/DM Pin Swapping Register
        using Addr = Register::Address<0xf003803c,0xfffffff8,0,unsigned>;
        ///PORT 0 DP/DM Pin Swapping
        enum class Port0Val {
            normal=0x00000000,     ///<DP/DM normal pinout.
            swapped=0x00000001,     ///<DP/DM swapped pinout.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Port0Val> port0{}; 
        namespace Port0ValC{
            constexpr Register::FieldValue<decltype(port0),Port0Val::normal> normal{};
            constexpr Register::FieldValue<decltype(port0),Port0Val::swapped> swapped{};
        }
        ///PORT 1 DP/DM Pin Swapping
        enum class Port1Val {
            normal=0x00000000,     ///<DP/DM normal pinout.
            swapped=0x00000001,     ///<DP/DM swapped pinout.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Port1Val> port1{}; 
        namespace Port1ValC{
            constexpr Register::FieldValue<decltype(port1),Port1Val::normal> normal{};
            constexpr Register::FieldValue<decltype(port1),Port1Val::swapped> swapped{};
        }
        ///PORT 2 DP/DM Pin Swapping
        enum class Port2Val {
            normal=0x00000000,     ///<DP/DM normal pinout.
            swapped=0x00000001,     ///<DP/DM swapped pinout.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Port2Val> port2{}; 
        namespace Port2ValC{
            constexpr Register::FieldValue<decltype(port2),Port2Val::normal> normal{};
            constexpr Register::FieldValue<decltype(port2),Port2Val::swapped> swapped{};
        }
    }
    namespace SfrEbicfg{    ///<EBI Configuration Register
        using Addr = Register::Address<0xf0038040,0xfffee0e0,0,unsigned>;
        ///EBI Pins Drive Level
        enum class Drive0Val {
            low=0x00000000,     ///<Low drive level
            medium=0x00000002,     ///<Medium drive level
            high=0x00000003,     ///<High drive level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Drive0Val> drive0{}; 
        namespace Drive0ValC{
            constexpr Register::FieldValue<decltype(drive0),Drive0Val::low> low{};
            constexpr Register::FieldValue<decltype(drive0),Drive0Val::medium> medium{};
            constexpr Register::FieldValue<decltype(drive0),Drive0Val::high> high{};
        }
        ///EBI Pins Pull Value
        enum class Pull0Val {
            up=0x00000000,     ///<Pull-up
            none=0x00000001,     ///<No Pull
            down=0x00000003,     ///<Pull-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pull0Val> pull0{}; 
        namespace Pull0ValC{
            constexpr Register::FieldValue<decltype(pull0),Pull0Val::up> up{};
            constexpr Register::FieldValue<decltype(pull0),Pull0Val::none> none{};
            constexpr Register::FieldValue<decltype(pull0),Pull0Val::down> down{};
        }
        ///EBI Pins Schmitt Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sch0{}; 
        namespace Sch0ValC{
        }
        ///EBI Pins Drive Level
        enum class Drive1Val {
            low=0x00000000,     ///<Low drive level
            medium=0x00000002,     ///<Medium drive level
            high=0x00000003,     ///<High drive level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Drive1Val> drive1{}; 
        namespace Drive1ValC{
            constexpr Register::FieldValue<decltype(drive1),Drive1Val::low> low{};
            constexpr Register::FieldValue<decltype(drive1),Drive1Val::medium> medium{};
            constexpr Register::FieldValue<decltype(drive1),Drive1Val::high> high{};
        }
        ///EBI Pins Pull Value
        enum class Pull1Val {
            up=0x00000000,     ///<Pull-up
            none=0x00000001,     ///<No Pull
            down=0x00000003,     ///<Pull-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Pull1Val> pull1{}; 
        namespace Pull1ValC{
            constexpr Register::FieldValue<decltype(pull1),Pull1Val::up> up{};
            constexpr Register::FieldValue<decltype(pull1),Pull1Val::none> none{};
            constexpr Register::FieldValue<decltype(pull1),Pull1Val::down> down{};
        }
        ///EBI Pins Schmitt Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sch1{}; 
        namespace Sch1ValC{
        }
        ///BMS Sampled Value (Read Only)
        enum class BmsVal {
            rom=0x00000000,     ///<Boot on ROM.
            ebi=0x00000001,     ///<Boot on EBI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,BmsVal> bms{}; 
        namespace BmsValC{
            constexpr Register::FieldValue<decltype(bms),BmsVal::rom> rom{};
            constexpr Register::FieldValue<decltype(bms),BmsVal::ebi> ebi{};
        }
    }
}
