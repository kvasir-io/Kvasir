#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Touch Sensing Input
    namespace Tsi0Gencs{    ///<General Control and Status Register
        using Addr = Register::Address<0x40045000,0xe0000c0c,0,unsigned>;
        ///no description available
        enum class stpeVal {
            v0=0x00000000,     ///<Disable TSI when MCU enters low-power modes
            v1=0x00000001,     ///<Allow TSI to continue running in all low power modes
        };
        namespace stpeValC{
            constexpr MPL::Value<stpeVal,stpeVal::v0> v0{};
            constexpr MPL::Value<stpeVal,stpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,stpeVal> stpe{}; 
        ///Scan trigger mode
        enum class stmVal {
            v0=0x00000000,     ///<Software trigger scan
            v1=0x00000001,     ///<Periodical scan
        };
        namespace stmValC{
            constexpr MPL::Value<stmVal,stmVal::v0> v0{};
            constexpr MPL::Value<stmVal,stmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,stmVal> stm{}; 
        ///End-of-scan or out-of-range interrupt select
        enum class esorVal {
            v0=0x00000000,     ///<Out-of-range interrupt selected
            v1=0x00000001,     ///<End-of-scan interrupt selected
        };
        namespace esorValC{
            constexpr MPL::Value<esorVal,esorVal::v0> v0{};
            constexpr MPL::Value<esorVal,esorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esorVal> esor{}; 
        ///TSI error interrupt Enable
        enum class erieVal {
            v0=0x00000000,     ///<Error interrupt disabled
            v1=0x00000001,     ///<Error interrupt enabled
        };
        namespace erieValC{
            constexpr MPL::Value<erieVal,erieVal::v0> v0{};
            constexpr MPL::Value<erieVal,erieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,erieVal> erie{}; 
        ///TSI interrupt enable
        enum class tsiieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace tsiieValC{
            constexpr MPL::Value<tsiieVal,tsiieVal::v0> v0{};
            constexpr MPL::Value<tsiieVal,tsiieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tsiieVal> tsiie{}; 
        ///TSI module enable
        enum class tsienVal {
            v0=0x00000000,     ///<TSI disabled
            v1=0x00000001,     ///<TSI enabled
        };
        namespace tsienValC{
            constexpr MPL::Value<tsienVal,tsienVal::v0> v0{};
            constexpr MPL::Value<tsienVal,tsienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tsienVal> tsien{}; 
        ///Software trigger start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swts{}; 
        ///Scan-in-progress status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> scnip{}; 
        ///Overrun error flag
        enum class ovrfVal {
            v0=0x00000000,     ///<No overrun
            v1=0x00000001,     ///<Overrun occurred
        };
        namespace ovrfValC{
            constexpr MPL::Value<ovrfVal,ovrfVal::v0> v0{};
            constexpr MPL::Value<ovrfVal,ovrfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ovrfVal> ovrf{}; 
        ///External electrode error occurred
        enum class exterfVal {
            v0=0x00000000,     ///<No short
            v1=0x00000001,     ///<Short to VDD or VSS occured on the electrodes
        };
        namespace exterfValC{
            constexpr MPL::Value<exterfVal,exterfVal::v0> v0{};
            constexpr MPL::Value<exterfVal,exterfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,exterfVal> exterf{}; 
        ///Out of Range Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> outrgf{}; 
        ///End of scan flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eosf{}; 
        ///Electrode oscillator prescaler
        enum class psVal {
            v000=0x00000000,     ///<Electrode oscillator frequency divided by 1
            v001=0x00000001,     ///<Electrode oscillator frequency divided by 2
            v010=0x00000002,     ///<Electrode oscillator frequency divided by 4
            v011=0x00000003,     ///<Electrode oscillator frequency divided by 8
            v100=0x00000004,     ///<Electrode oscillator frequency divided by 16
            v101=0x00000005,     ///<Electrode oscillator frequency divided by 32
            v110=0x00000006,     ///<Electrode oscillator frequency divided by 64
            v111=0x00000007,     ///<Electrode oscillator frequency divided by 128
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v000> v000{};
            constexpr MPL::Value<psVal,psVal::v001> v001{};
            constexpr MPL::Value<psVal,psVal::v010> v010{};
            constexpr MPL::Value<psVal,psVal::v011> v011{};
            constexpr MPL::Value<psVal,psVal::v100> v100{};
            constexpr MPL::Value<psVal,psVal::v101> v101{};
            constexpr MPL::Value<psVal,psVal::v110> v110{};
            constexpr MPL::Value<psVal,psVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,psVal> ps{}; 
        ///Number of Consecutive Scans per Electrode
        enum class nscnVal {
            v00000=0x00000000,     ///<1 time per electrode
            v00001=0x00000001,     ///<2 times per electrode
            v00010=0x00000002,     ///<3 times per electrode
            v00011=0x00000003,     ///<4 times per electrode
            v00100=0x00000004,     ///<5 times per electrode
            v00101=0x00000005,     ///<6 times per electrode
            v00110=0x00000006,     ///<7 times per electrode
            v00111=0x00000007,     ///<8 times per electrode
            v01000=0x00000008,     ///<9 times per electrode
            v01001=0x00000009,     ///<10 times per electrode
            v01010=0x0000000a,     ///<11 times per electrode
            v01011=0x0000000b,     ///<12 times per electrode
            v01100=0x0000000c,     ///<13 times per electrode
            v01101=0x0000000d,     ///<14 times per electrode
            v01110=0x0000000e,     ///<15 times per electrode
            v01111=0x0000000f,     ///<16 times per electrode
            v10000=0x00000010,     ///<17 times per electrode
            v10001=0x00000011,     ///<18 times per electrode
            v10010=0x00000012,     ///<19 times per electrode
            v10011=0x00000013,     ///<20 times per electrode
            v10100=0x00000014,     ///<21 times per electrode
            v10101=0x00000015,     ///<22 times per electrode
            v10110=0x00000016,     ///<23 times per electrode
            v10111=0x00000017,     ///<24 times per electrode
            v11000=0x00000018,     ///<25 times per electrode
            v11001=0x00000019,     ///<26 times per electrode
            v11010=0x0000001a,     ///<27 times per electrode
            v11011=0x0000001b,     ///<28 times per electrode
            v11100=0x0000001c,     ///<29 times per electrode
            v11101=0x0000001d,     ///<30 times per electrode
            v11110=0x0000001e,     ///<31 times per electrode
            v11111=0x0000001f,     ///<32 times per electrode
        };
        namespace nscnValC{
            constexpr MPL::Value<nscnVal,nscnVal::v00000> v00000{};
            constexpr MPL::Value<nscnVal,nscnVal::v00001> v00001{};
            constexpr MPL::Value<nscnVal,nscnVal::v00010> v00010{};
            constexpr MPL::Value<nscnVal,nscnVal::v00011> v00011{};
            constexpr MPL::Value<nscnVal,nscnVal::v00100> v00100{};
            constexpr MPL::Value<nscnVal,nscnVal::v00101> v00101{};
            constexpr MPL::Value<nscnVal,nscnVal::v00110> v00110{};
            constexpr MPL::Value<nscnVal,nscnVal::v00111> v00111{};
            constexpr MPL::Value<nscnVal,nscnVal::v01000> v01000{};
            constexpr MPL::Value<nscnVal,nscnVal::v01001> v01001{};
            constexpr MPL::Value<nscnVal,nscnVal::v01010> v01010{};
            constexpr MPL::Value<nscnVal,nscnVal::v01011> v01011{};
            constexpr MPL::Value<nscnVal,nscnVal::v01100> v01100{};
            constexpr MPL::Value<nscnVal,nscnVal::v01101> v01101{};
            constexpr MPL::Value<nscnVal,nscnVal::v01110> v01110{};
            constexpr MPL::Value<nscnVal,nscnVal::v01111> v01111{};
            constexpr MPL::Value<nscnVal,nscnVal::v10000> v10000{};
            constexpr MPL::Value<nscnVal,nscnVal::v10001> v10001{};
            constexpr MPL::Value<nscnVal,nscnVal::v10010> v10010{};
            constexpr MPL::Value<nscnVal,nscnVal::v10011> v10011{};
            constexpr MPL::Value<nscnVal,nscnVal::v10100> v10100{};
            constexpr MPL::Value<nscnVal,nscnVal::v10101> v10101{};
            constexpr MPL::Value<nscnVal,nscnVal::v10110> v10110{};
            constexpr MPL::Value<nscnVal,nscnVal::v10111> v10111{};
            constexpr MPL::Value<nscnVal,nscnVal::v11000> v11000{};
            constexpr MPL::Value<nscnVal,nscnVal::v11001> v11001{};
            constexpr MPL::Value<nscnVal,nscnVal::v11010> v11010{};
            constexpr MPL::Value<nscnVal,nscnVal::v11011> v11011{};
            constexpr MPL::Value<nscnVal,nscnVal::v11100> v11100{};
            constexpr MPL::Value<nscnVal,nscnVal::v11101> v11101{};
            constexpr MPL::Value<nscnVal,nscnVal::v11110> v11110{};
            constexpr MPL::Value<nscnVal,nscnVal::v11111> v11111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,nscnVal> nscn{}; 
        ///TSI Low Power Mode Scan Interval
        enum class lpscnitvVal {
            v0000=0x00000000,     ///<1 ms scan interval
            v0001=0x00000001,     ///<5 ms scan interval
            v0010=0x00000002,     ///<10 ms scan interval
            v0011=0x00000003,     ///<15 ms scan interval
            v0100=0x00000004,     ///<20 ms scan interval
            v0101=0x00000005,     ///<30 ms scan interval
            v0110=0x00000006,     ///<40 ms scan interval
            v0111=0x00000007,     ///<50 ms scan interval
            v1000=0x00000008,     ///<75 ms scan interval
            v1001=0x00000009,     ///<100 ms scan interval
            v1010=0x0000000a,     ///<125 ms scan interval
            v1011=0x0000000b,     ///<150 ms scan interval
            v1100=0x0000000c,     ///<200 ms scan interval
            v1101=0x0000000d,     ///<300 ms scan interval
            v1110=0x0000000e,     ///<400 ms scan interval
            v1111=0x0000000f,     ///<500 ms scan interval
        };
        namespace lpscnitvValC{
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v0000> v0000{};
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v0001> v0001{};
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v0010> v0010{};
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v0011> v0011{};
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v0100> v0100{};
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v0101> v0101{};
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v0110> v0110{};
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v0111> v0111{};
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v1000> v1000{};
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v1001> v1001{};
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v1010> v1010{};
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v1011> v1011{};
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v1100> v1100{};
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v1101> v1101{};
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v1110> v1110{};
            constexpr MPL::Value<lpscnitvVal,lpscnitvVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,lpscnitvVal> lpscnitv{}; 
        ///Low Power Mode Clock Source Selection
        enum class lpclksVal {
            v0=0x00000000,     ///<LPOCLK
            v1=0x00000001,     ///<VLPOSCCLK
        };
        namespace lpclksValC{
            constexpr MPL::Value<lpclksVal,lpclksVal::v0> v0{};
            constexpr MPL::Value<lpclksVal,lpclksVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,lpclksVal> lpclks{}; 
    }
    namespace Tsi0Scanc{    ///<SCAN control register
        using Addr = Register::Address<0x40045004,0x000000c0,0,unsigned>;
        ///Active mode prescaler
        enum class ampscVal {
            v000=0x00000000,     ///<Input clock source divided by 1
            v001=0x00000001,     ///<Input clock source divided by 2
            v010=0x00000002,     ///<Input clock source divided by 4
            v011=0x00000003,     ///<Input clock source divided by 8
            v100=0x00000004,     ///<Input clock source divided by 16
            v101=0x00000005,     ///<Input clock source divided by 32
            v110=0x00000006,     ///<Input clock source divided by 64
            v111=0x00000007,     ///<Input clock source divided by 128
        };
        namespace ampscValC{
            constexpr MPL::Value<ampscVal,ampscVal::v000> v000{};
            constexpr MPL::Value<ampscVal,ampscVal::v001> v001{};
            constexpr MPL::Value<ampscVal,ampscVal::v010> v010{};
            constexpr MPL::Value<ampscVal,ampscVal::v011> v011{};
            constexpr MPL::Value<ampscVal,ampscVal::v100> v100{};
            constexpr MPL::Value<ampscVal,ampscVal::v101> v101{};
            constexpr MPL::Value<ampscVal,ampscVal::v110> v110{};
            constexpr MPL::Value<ampscVal,ampscVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ampscVal> ampsc{}; 
        ///Active mode clock source
        enum class amclksVal {
            v00=0x00000000,     ///<Bus Clock
            v01=0x00000001,     ///<MCGIRCLK
            v10=0x00000002,     ///<OSCERCLK
            v11=0x00000003,     ///<Not valid
        };
        namespace amclksValC{
            constexpr MPL::Value<amclksVal,amclksVal::v00> v00{};
            constexpr MPL::Value<amclksVal,amclksVal::v01> v01{};
            constexpr MPL::Value<amclksVal,amclksVal::v10> v10{};
            constexpr MPL::Value<amclksVal,amclksVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,amclksVal> amclks{}; 
        ///Active mode clock divider
        enum class amclkdivVal {
            v0=0x00000000,     ///<Divider set to 1
            v1=0x00000001,     ///<Divider set to 2048
        };
        namespace amclkdivValC{
            constexpr MPL::Value<amclkdivVal,amclkdivVal::v0> v0{};
            constexpr MPL::Value<amclkdivVal,amclkdivVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,amclkdivVal> amclkdiv{}; 
        ///Scan modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> smod{}; 
        ///Delta voltage select applied to analog oscillators
        enum class delvolVal {
            v000=0x00000000,     ///<100 mV delta voltage is applied
            v001=0x00000001,     ///<150 mV delta voltage is applied
            v010=0x00000002,     ///<200 mV delta voltage is applied
            v011=0x00000003,     ///<250 mV delta voltage is applied
            v100=0x00000004,     ///<300 mV delta voltage is applied
            v101=0x00000005,     ///<400 mV delta voltage is applied
            v110=0x00000006,     ///<500 mV delta voltage is applied
            v111=0x00000007,     ///<600 mV delta voltage is applied
        };
        namespace delvolValC{
            constexpr MPL::Value<delvolVal,delvolVal::v000> v000{};
            constexpr MPL::Value<delvolVal,delvolVal::v001> v001{};
            constexpr MPL::Value<delvolVal,delvolVal::v010> v010{};
            constexpr MPL::Value<delvolVal,delvolVal::v011> v011{};
            constexpr MPL::Value<delvolVal,delvolVal::v100> v100{};
            constexpr MPL::Value<delvolVal,delvolVal::v101> v101{};
            constexpr MPL::Value<delvolVal,delvolVal::v110> v110{};
            constexpr MPL::Value<delvolVal,delvolVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,delvolVal> delvol{}; 
        ///External oscillator charge current select
        enum class extchrgVal {
            v00000=0x00000000,     ///<1 uA charge current
            v00001=0x00000001,     ///<2 uA charge current
            v00010=0x00000002,     ///<3 uA charge current
            v00011=0x00000003,     ///<4 uA charge current
            v00100=0x00000004,     ///<5 uA charge current
            v00101=0x00000005,     ///<6 uA charge current
            v00110=0x00000006,     ///<7 uA charge current
            v00111=0x00000007,     ///<8 uA charge current
            v01000=0x00000008,     ///<9 uA charge current
            v01001=0x00000009,     ///<10 uA charge current
            v01010=0x0000000a,     ///<11 uA charge current
            v01011=0x0000000b,     ///<12 uA charge current
            v01100=0x0000000c,     ///<13 uA charge current
            v01101=0x0000000d,     ///<14 uA charge current
            v01110=0x0000000e,     ///<15 uA charge current
            v01111=0x0000000f,     ///<16 uA charge current
            v10000=0x00000010,     ///<17 uA charge current
            v10001=0x00000011,     ///<18 uA charge current
            v10010=0x00000012,     ///<19 uA charge current
            v10011=0x00000013,     ///<20 uA charge current
            v10100=0x00000014,     ///<21 uA charge current
            v10101=0x00000015,     ///<22 uA charge current
            v10110=0x00000016,     ///<23 uA charge current
            v10111=0x00000017,     ///<24 uA charge current
            v11000=0x00000018,     ///<25 uA charge current
            v11001=0x00000019,     ///<26 uA charge current
            v11010=0x0000001a,     ///<27 uA charge current
            v11011=0x0000001b,     ///<28 uA charge current
            v11100=0x0000001c,     ///<29 uA charge current
            v11101=0x0000001d,     ///<30 uA charge current
            v11110=0x0000001e,     ///<31 uA charge current
            v11111=0x0000001f,     ///<32 uA charge current
        };
        namespace extchrgValC{
            constexpr MPL::Value<extchrgVal,extchrgVal::v00000> v00000{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v00001> v00001{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v00010> v00010{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v00011> v00011{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v00100> v00100{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v00101> v00101{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v00110> v00110{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v00111> v00111{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v01000> v01000{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v01001> v01001{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v01010> v01010{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v01011> v01011{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v01100> v01100{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v01101> v01101{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v01110> v01110{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v01111> v01111{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v10000> v10000{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v10001> v10001{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v10010> v10010{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v10011> v10011{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v10100> v10100{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v10101> v10101{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v10110> v10110{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v10111> v10111{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v11000> v11000{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v11001> v11001{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v11010> v11010{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v11011> v11011{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v11100> v11100{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v11101> v11101{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v11110> v11110{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v11111> v11111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,extchrgVal> extchrg{}; 
        ///Internal capacitance trim value
        enum class captrmVal {
            v000=0x00000000,     ///<0.5 pF internal reference capacitance
            v001=0x00000001,     ///<0.6 pF internal reference capacitance
            v010=0x00000002,     ///<0.7 pF internal reference capacitance
            v011=0x00000003,     ///<0.8 pF internal reference capacitance
            v100=0x00000004,     ///<0.9 pF internal reference capacitance
            v101=0x00000005,     ///<1.0 pF internal reference capacitance
            v110=0x00000006,     ///<1.1 pF internal reference capacitance
            v111=0x00000007,     ///<1.2 pF internal reference capacitance
        };
        namespace captrmValC{
            constexpr MPL::Value<captrmVal,captrmVal::v000> v000{};
            constexpr MPL::Value<captrmVal,captrmVal::v001> v001{};
            constexpr MPL::Value<captrmVal,captrmVal::v010> v010{};
            constexpr MPL::Value<captrmVal,captrmVal::v011> v011{};
            constexpr MPL::Value<captrmVal,captrmVal::v100> v100{};
            constexpr MPL::Value<captrmVal,captrmVal::v101> v101{};
            constexpr MPL::Value<captrmVal,captrmVal::v110> v110{};
            constexpr MPL::Value<captrmVal,captrmVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,captrmVal> captrm{}; 
        ///Reference oscillator charge current select
        enum class refchrgVal {
            v00000=0x00000000,     ///<1 uA charge current
            v00001=0x00000001,     ///<2 uA charge current
            v00010=0x00000002,     ///<3 uA charge current
            v00011=0x00000003,     ///<4 uA charge current
            v00100=0x00000004,     ///<5 uA charge current
            v00101=0x00000005,     ///<6 uA charge current
            v00110=0x00000006,     ///<7 uA charge current
            v00111=0x00000007,     ///<8 uA charge current
            v01000=0x00000008,     ///<9 uA charge current
            v01001=0x00000009,     ///<10 uA charge current
            v01010=0x0000000a,     ///<11 uA charge current
            v01011=0x0000000b,     ///<12 uA charge current
            v01100=0x0000000c,     ///<13 uA charge current
            v01101=0x0000000d,     ///<14 uA charge current
            v01110=0x0000000e,     ///<15 uA charge current
            v01111=0x0000000f,     ///<16 uA charge current
            v10000=0x00000010,     ///<17 uA charge current
            v10001=0x00000011,     ///<18 uA charge current
            v10010=0x00000012,     ///<19 uA charge current
            v10011=0x00000013,     ///<20 uA charge current
            v10100=0x00000014,     ///<21 uA charge current
            v10101=0x00000015,     ///<22 uA charge current
            v10110=0x00000016,     ///<23 uA charge current
            v10111=0x00000017,     ///<24 uA charge current
            v11000=0x00000018,     ///<25 uA charge current
            v11001=0x00000019,     ///<26 uA charge current
            v11010=0x0000001a,     ///<27 uA charge current
            v11011=0x0000001b,     ///<28 uA charge current
            v11100=0x0000001c,     ///<29 uA charge current
            v11101=0x0000001d,     ///<30 uA charge current
            v11110=0x0000001e,     ///<31 uA charge current
            v11111=0x0000001f,     ///<32 uA charge current
        };
        namespace refchrgValC{
            constexpr MPL::Value<refchrgVal,refchrgVal::v00000> v00000{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v00001> v00001{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v00010> v00010{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v00011> v00011{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v00100> v00100{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v00101> v00101{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v00110> v00110{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v00111> v00111{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v01000> v01000{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v01001> v01001{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v01010> v01010{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v01011> v01011{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v01100> v01100{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v01101> v01101{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v01110> v01110{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v01111> v01111{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v10000> v10000{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v10001> v10001{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v10010> v10010{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v10011> v10011{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v10100> v10100{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v10101> v10101{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v10110> v10110{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v10111> v10111{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v11000> v11000{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v11001> v11001{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v11010> v11010{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v11011> v11011{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v11100> v11100{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v11101> v11101{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v11110> v11110{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v11111> v11111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,refchrgVal> refchrg{}; 
    }
    namespace Tsi0Pen{    ///<Pin enable register
        using Addr = Register::Address<0x40045008,0xfff00000,0,unsigned>;
        ///TSI pin 0 enable
        enum class pen0Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen0ValC{
            constexpr MPL::Value<pen0Val,pen0Val::v0> v0{};
            constexpr MPL::Value<pen0Val,pen0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pen0Val> pen0{}; 
        ///TSI pin 1 enable
        enum class pen1Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen1ValC{
            constexpr MPL::Value<pen1Val,pen1Val::v0> v0{};
            constexpr MPL::Value<pen1Val,pen1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pen1Val> pen1{}; 
        ///TSI pin 2 enable
        enum class pen2Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen2ValC{
            constexpr MPL::Value<pen2Val,pen2Val::v0> v0{};
            constexpr MPL::Value<pen2Val,pen2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pen2Val> pen2{}; 
        ///TSI pin 3 enable
        enum class pen3Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen3ValC{
            constexpr MPL::Value<pen3Val,pen3Val::v0> v0{};
            constexpr MPL::Value<pen3Val,pen3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pen3Val> pen3{}; 
        ///TSI pin 4 enable
        enum class pen4Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen4ValC{
            constexpr MPL::Value<pen4Val,pen4Val::v0> v0{};
            constexpr MPL::Value<pen4Val,pen4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pen4Val> pen4{}; 
        ///TSI pin 5 enable
        enum class pen5Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen5ValC{
            constexpr MPL::Value<pen5Val,pen5Val::v0> v0{};
            constexpr MPL::Value<pen5Val,pen5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pen5Val> pen5{}; 
        ///TSI pin 6 enable
        enum class pen6Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen6ValC{
            constexpr MPL::Value<pen6Val,pen6Val::v0> v0{};
            constexpr MPL::Value<pen6Val,pen6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pen6Val> pen6{}; 
        ///TSI pin 7 enable
        enum class pen7Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen7ValC{
            constexpr MPL::Value<pen7Val,pen7Val::v0> v0{};
            constexpr MPL::Value<pen7Val,pen7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pen7Val> pen7{}; 
        ///TSI pin 8 enable
        enum class pen8Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen8ValC{
            constexpr MPL::Value<pen8Val,pen8Val::v0> v0{};
            constexpr MPL::Value<pen8Val,pen8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pen8Val> pen8{}; 
        ///TSI pin 9 enable
        enum class pen9Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen9ValC{
            constexpr MPL::Value<pen9Val,pen9Val::v0> v0{};
            constexpr MPL::Value<pen9Val,pen9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pen9Val> pen9{}; 
        ///TSI pin 10 enable
        enum class pen10Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen10ValC{
            constexpr MPL::Value<pen10Val,pen10Val::v0> v0{};
            constexpr MPL::Value<pen10Val,pen10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pen10Val> pen10{}; 
        ///TSI pin 11 enable
        enum class pen11Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen11ValC{
            constexpr MPL::Value<pen11Val,pen11Val::v0> v0{};
            constexpr MPL::Value<pen11Val,pen11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pen11Val> pen11{}; 
        ///TSI pin 12 enable
        enum class pen12Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen12ValC{
            constexpr MPL::Value<pen12Val,pen12Val::v0> v0{};
            constexpr MPL::Value<pen12Val,pen12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pen12Val> pen12{}; 
        ///TSI pin 13 enable
        enum class pen13Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen13ValC{
            constexpr MPL::Value<pen13Val,pen13Val::v0> v0{};
            constexpr MPL::Value<pen13Val,pen13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pen13Val> pen13{}; 
        ///TSI pin 14 enable
        enum class pen14Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen14ValC{
            constexpr MPL::Value<pen14Val,pen14Val::v0> v0{};
            constexpr MPL::Value<pen14Val,pen14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pen14Val> pen14{}; 
        ///TSI pin 15 enable
        enum class pen15Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        namespace pen15ValC{
            constexpr MPL::Value<pen15Val,pen15Val::v0> v0{};
            constexpr MPL::Value<pen15Val,pen15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pen15Val> pen15{}; 
        ///Low-power scan pin
        enum class lpspVal {
            v0000=0x00000000,     ///<TSI_IN[0] is active in low power mode
            v0001=0x00000001,     ///<TSI_IN[1] is active in low power mode
            v0010=0x00000002,     ///<TSI_IN[2] is active in low power mode
            v0011=0x00000003,     ///<TSI_IN[3] is active in low power mode
            v0100=0x00000004,     ///<TSI_IN[4] is active in low power mode
            v0101=0x00000005,     ///<TSI_IN[5] is active in low power mode
            v0110=0x00000006,     ///<TSI_IN[6] is active in low power mode
            v0111=0x00000007,     ///<TSI_IN[7] is active in low power mode
            v1000=0x00000008,     ///<TSI_IN[8] is active in low power mode
            v1001=0x00000009,     ///<TSI_IN[9] is active in low power mode
            v1010=0x0000000a,     ///<TSI_IN[10] is active in low power mode
            v1011=0x0000000b,     ///<TSI_IN[11] is active in low power mode
            v1100=0x0000000c,     ///<TSI_IN[12] is active in low power mode
            v1101=0x0000000d,     ///<TSI_IN[13] is active in low power mode
            v1110=0x0000000e,     ///<TSI_IN[14] is active in low power mode
            v1111=0x0000000f,     ///<TSI_IN[15] is active in low power mode
        };
        namespace lpspValC{
            constexpr MPL::Value<lpspVal,lpspVal::v0000> v0000{};
            constexpr MPL::Value<lpspVal,lpspVal::v0001> v0001{};
            constexpr MPL::Value<lpspVal,lpspVal::v0010> v0010{};
            constexpr MPL::Value<lpspVal,lpspVal::v0011> v0011{};
            constexpr MPL::Value<lpspVal,lpspVal::v0100> v0100{};
            constexpr MPL::Value<lpspVal,lpspVal::v0101> v0101{};
            constexpr MPL::Value<lpspVal,lpspVal::v0110> v0110{};
            constexpr MPL::Value<lpspVal,lpspVal::v0111> v0111{};
            constexpr MPL::Value<lpspVal,lpspVal::v1000> v1000{};
            constexpr MPL::Value<lpspVal,lpspVal::v1001> v1001{};
            constexpr MPL::Value<lpspVal,lpspVal::v1010> v1010{};
            constexpr MPL::Value<lpspVal,lpspVal::v1011> v1011{};
            constexpr MPL::Value<lpspVal,lpspVal::v1100> v1100{};
            constexpr MPL::Value<lpspVal,lpspVal::v1101> v1101{};
            constexpr MPL::Value<lpspVal,lpspVal::v1110> v1110{};
            constexpr MPL::Value<lpspVal,lpspVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,lpspVal> lpsp{}; 
    }
    namespace Tsi0Status{    ///<Status Register
        using Addr = Register::Address<0x4004500c,0x00000000,0,unsigned>;
        ///Touch Sensing Electrode Out-of-Range Flag 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> orngf0{}; 
        ///Touch Sensing Electrode Out-of-Range Flag 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> orngf1{}; 
        ///Touch Sensing Electrode Out-of-Range Flag 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> orngf2{}; 
        ///Touch Sensing Electrode Out-of-Range Flag 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> orngf3{}; 
        ///Touch Sensing Electrode Out-of-Range Flag 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> orngf4{}; 
        ///Touch Sensing Electrode Out-of-Range Flag 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> orngf5{}; 
        ///Touch Sensing Electrode Out-of-Range Flag 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> orngf6{}; 
        ///Touch Sensing Electrode Out-of-Range Flag 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> orngf7{}; 
        ///Touch Sensing Electrode Out-of-Range Flag 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> orngf8{}; 
        ///Touch Sensing Electrode Out-of-Range Flag 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> orngf9{}; 
        ///Touch Sensing Electrode Out-of-Range Flag 10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> orngf10{}; 
        ///Touch Sensing Electrode Out-of-Range Flag 11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> orngf11{}; 
        ///Touch Sensing Electrode Out-of-Range Flag 12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> orngf12{}; 
        ///Touch Sensing Electrode Out-of-Range Flag 13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> orngf13{}; 
        ///Touch Sensing Electrode Out-of-Range Flag 14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> orngf14{}; 
        ///Touch Sensing Electrode Out-of-Range Flag 15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> orngf15{}; 
        ///TouchSensing Error Flag 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> errof0{}; 
        ///TouchSensing Error Flag 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> errof1{}; 
        ///TouchSensing Error Flag 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> errof2{}; 
        ///TouchSensing Error Flag 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> errof3{}; 
        ///TouchSensing Error Flag 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> errof4{}; 
        ///TouchSensing Error Flag 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> errof5{}; 
        ///TouchSensing Error Flag 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> errof6{}; 
        ///TouchSensing Error Flag 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> errof7{}; 
        ///TouchSensing Error Flag 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> errof8{}; 
        ///TouchSensing Error Flag 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> errof9{}; 
        ///TouchSensing Error Flag 10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> errof10{}; 
        ///TouchSensing Error Flag 11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> errof11{}; 
        ///TouchSensing Error Flag 12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> errof12{}; 
        ///TouchSensing Error Flag 13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> errof13{}; 
        ///TouchSensing Error Flag 14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> errof14{}; 
        ///TouchSensing Error Flag 15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> errof15{}; 
    }
    namespace Tsi0Cntr1{    ///<Counter Register
        using Addr = Register::Address<0x40045100,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///Touch sensing channel n counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Cntr3{    ///<Counter Register
        using Addr = Register::Address<0x40045104,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///Touch sensing channel n counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Cntr5{    ///<Counter Register
        using Addr = Register::Address<0x40045108,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///Touch sensing channel n counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Cntr7{    ///<Counter Register
        using Addr = Register::Address<0x4004510c,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///Touch sensing channel n counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Cntr9{    ///<Counter Register
        using Addr = Register::Address<0x40045110,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///Touch sensing channel n counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Cntr11{    ///<Counter Register
        using Addr = Register::Address<0x40045114,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///Touch sensing channel n counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Cntr13{    ///<Counter Register
        using Addr = Register::Address<0x40045118,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///Touch sensing channel n counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Cntr15{    ///<Counter Register
        using Addr = Register::Address<0x4004511c,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///Touch sensing channel n counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Threshld0{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045120,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
    namespace Tsi0Threshld1{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045124,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
    namespace Tsi0Threshld2{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045128,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
    namespace Tsi0Threshld3{    ///<Channel n threshold register
        using Addr = Register::Address<0x4004512c,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
    namespace Tsi0Threshld4{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045130,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
    namespace Tsi0Threshld5{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045134,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
    namespace Tsi0Threshld6{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045138,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
    namespace Tsi0Threshld7{    ///<Channel n threshold register
        using Addr = Register::Address<0x4004513c,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
    namespace Tsi0Threshld8{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045140,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
    namespace Tsi0Threshld9{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045144,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
    namespace Tsi0Threshld10{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045148,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
    namespace Tsi0Threshld11{    ///<Channel n threshold register
        using Addr = Register::Address<0x4004514c,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
    namespace Tsi0Threshld12{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045150,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
    namespace Tsi0Threshld13{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045154,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
    namespace Tsi0Threshld14{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045158,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
    namespace Tsi0Threshld15{    ///<Channel n threshold register
        using Addr = Register::Address<0x4004515c,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Low threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
}
