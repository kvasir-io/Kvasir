#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Touch Sensing Input
    namespace Tsi0Gencs{    ///<General Control and Status Register
        using Addr = Register::Address<0x40045000,0xe0000c0c,0,unsigned>;
        ///no description available
        enum class StpeVal {
            v0=0x00000000,     ///<Disable TSI when MCU enters low-power modes
            v1=0x00000001,     ///<Allow TSI to continue running in all low power modes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StpeVal> stpe{}; 
        namespace StpeValC{
            constexpr Register::FieldValue<decltype(stpe),StpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stpe),StpeVal::v1> v1{};
        }
        ///Scan trigger mode
        enum class StmVal {
            v0=0x00000000,     ///<Software trigger scan
            v1=0x00000001,     ///<Periodical scan
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StmVal> stm{}; 
        namespace StmValC{
            constexpr Register::FieldValue<decltype(stm),StmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stm),StmVal::v1> v1{};
        }
        ///End-of-scan or out-of-range interrupt select
        enum class EsorVal {
            v0=0x00000000,     ///<Out-of-range interrupt selected
            v1=0x00000001,     ///<End-of-scan interrupt selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsorVal> esor{}; 
        namespace EsorValC{
            constexpr Register::FieldValue<decltype(esor),EsorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esor),EsorVal::v1> v1{};
        }
        ///TSI error interrupt Enable
        enum class ErieVal {
            v0=0x00000000,     ///<Error interrupt disabled
            v1=0x00000001,     ///<Error interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ErieVal> erie{}; 
        namespace ErieValC{
            constexpr Register::FieldValue<decltype(erie),ErieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erie),ErieVal::v1> v1{};
        }
        ///TSI interrupt enable
        enum class TsiieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TsiieVal> tsiie{}; 
        namespace TsiieValC{
            constexpr Register::FieldValue<decltype(tsiie),TsiieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsiie),TsiieVal::v1> v1{};
        }
        ///TSI module enable
        enum class TsienVal {
            v0=0x00000000,     ///<TSI disabled
            v1=0x00000001,     ///<TSI enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TsienVal> tsien{}; 
        namespace TsienValC{
            constexpr Register::FieldValue<decltype(tsien),TsienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsien),TsienVal::v1> v1{};
        }
        ///Software trigger start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swts{}; 
        namespace SwtsValC{
        }
        ///Scan-in-progress status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> scnip{}; 
        namespace ScnipValC{
        }
        ///Overrun error flag
        enum class OvrfVal {
            v0=0x00000000,     ///<No overrun
            v1=0x00000001,     ///<Overrun occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,OvrfVal> ovrf{}; 
        namespace OvrfValC{
            constexpr Register::FieldValue<decltype(ovrf),OvrfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ovrf),OvrfVal::v1> v1{};
        }
        ///External electrode error occurred
        enum class ExterfVal {
            v0=0x00000000,     ///<No short
            v1=0x00000001,     ///<Short to VDD or VSS occured on the electrodes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ExterfVal> exterf{}; 
        namespace ExterfValC{
            constexpr Register::FieldValue<decltype(exterf),ExterfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exterf),ExterfVal::v1> v1{};
        }
        ///Out of Range Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> outrgf{}; 
        namespace OutrgfValC{
        }
        ///End of scan flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eosf{}; 
        namespace EosfValC{
        }
        ///Electrode oscillator prescaler
        enum class PsVal {
            v000=0x00000000,     ///<Electrode oscillator frequency divided by 1
            v001=0x00000001,     ///<Electrode oscillator frequency divided by 2
            v010=0x00000002,     ///<Electrode oscillator frequency divided by 4
            v011=0x00000003,     ///<Electrode oscillator frequency divided by 8
            v100=0x00000004,     ///<Electrode oscillator frequency divided by 16
            v101=0x00000005,     ///<Electrode oscillator frequency divided by 32
            v110=0x00000006,     ///<Electrode oscillator frequency divided by 64
            v111=0x00000007,     ///<Electrode oscillator frequency divided by 128
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v111> v111{};
        }
        ///Number of Consecutive Scans per Electrode
        enum class NscnVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,NscnVal> nscn{}; 
        namespace NscnValC{
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v00000> v00000{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v00001> v00001{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v00010> v00010{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v00011> v00011{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v00100> v00100{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v00101> v00101{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v00110> v00110{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v00111> v00111{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v01000> v01000{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v01001> v01001{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v01010> v01010{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v01011> v01011{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v01100> v01100{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v01101> v01101{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v01110> v01110{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v01111> v01111{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v10000> v10000{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v10001> v10001{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v10010> v10010{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v10011> v10011{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v10100> v10100{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v10101> v10101{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v10110> v10110{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v10111> v10111{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v11000> v11000{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v11001> v11001{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v11010> v11010{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v11011> v11011{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v11100> v11100{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v11101> v11101{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v11110> v11110{};
            constexpr Register::FieldValue<decltype(nscn),NscnVal::v11111> v11111{};
        }
        ///TSI Low Power Mode Scan Interval
        enum class LpscnitvVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,LpscnitvVal> lpscnitv{}; 
        namespace LpscnitvValC{
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(lpscnitv),LpscnitvVal::v1111> v1111{};
        }
        ///Low Power Mode Clock Source Selection
        enum class LpclksVal {
            v0=0x00000000,     ///<LPOCLK
            v1=0x00000001,     ///<VLPOSCCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,LpclksVal> lpclks{}; 
        namespace LpclksValC{
            constexpr Register::FieldValue<decltype(lpclks),LpclksVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpclks),LpclksVal::v1> v1{};
        }
    }
    namespace Tsi0Scanc{    ///<SCAN control register
        using Addr = Register::Address<0x40045004,0x000000c0,0,unsigned>;
        ///Active mode prescaler
        enum class AmpscVal {
            v000=0x00000000,     ///<Input clock source divided by 1
            v001=0x00000001,     ///<Input clock source divided by 2
            v010=0x00000002,     ///<Input clock source divided by 4
            v011=0x00000003,     ///<Input clock source divided by 8
            v100=0x00000004,     ///<Input clock source divided by 16
            v101=0x00000005,     ///<Input clock source divided by 32
            v110=0x00000006,     ///<Input clock source divided by 64
            v111=0x00000007,     ///<Input clock source divided by 128
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,AmpscVal> ampsc{}; 
        namespace AmpscValC{
            constexpr Register::FieldValue<decltype(ampsc),AmpscVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ampsc),AmpscVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ampsc),AmpscVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ampsc),AmpscVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ampsc),AmpscVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ampsc),AmpscVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ampsc),AmpscVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ampsc),AmpscVal::v111> v111{};
        }
        ///Active mode clock source
        enum class AmclksVal {
            v00=0x00000000,     ///<Bus Clock
            v01=0x00000001,     ///<MCGIRCLK
            v10=0x00000002,     ///<OSCERCLK
            v11=0x00000003,     ///<Not valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,AmclksVal> amclks{}; 
        namespace AmclksValC{
            constexpr Register::FieldValue<decltype(amclks),AmclksVal::v00> v00{};
            constexpr Register::FieldValue<decltype(amclks),AmclksVal::v01> v01{};
            constexpr Register::FieldValue<decltype(amclks),AmclksVal::v10> v10{};
            constexpr Register::FieldValue<decltype(amclks),AmclksVal::v11> v11{};
        }
        ///Active mode clock divider
        enum class AmclkdivVal {
            v0=0x00000000,     ///<Divider set to 1
            v1=0x00000001,     ///<Divider set to 2048
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AmclkdivVal> amclkdiv{}; 
        namespace AmclkdivValC{
            constexpr Register::FieldValue<decltype(amclkdiv),AmclkdivVal::v0> v0{};
            constexpr Register::FieldValue<decltype(amclkdiv),AmclkdivVal::v1> v1{};
        }
        ///Scan modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> smod{}; 
        namespace SmodValC{
        }
        ///Delta voltage select applied to analog oscillators
        enum class DelvolVal {
            v000=0x00000000,     ///<100 mV delta voltage is applied
            v001=0x00000001,     ///<150 mV delta voltage is applied
            v010=0x00000002,     ///<200 mV delta voltage is applied
            v011=0x00000003,     ///<250 mV delta voltage is applied
            v100=0x00000004,     ///<300 mV delta voltage is applied
            v101=0x00000005,     ///<400 mV delta voltage is applied
            v110=0x00000006,     ///<500 mV delta voltage is applied
            v111=0x00000007,     ///<600 mV delta voltage is applied
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,DelvolVal> delvol{}; 
        namespace DelvolValC{
            constexpr Register::FieldValue<decltype(delvol),DelvolVal::v000> v000{};
            constexpr Register::FieldValue<decltype(delvol),DelvolVal::v001> v001{};
            constexpr Register::FieldValue<decltype(delvol),DelvolVal::v010> v010{};
            constexpr Register::FieldValue<decltype(delvol),DelvolVal::v011> v011{};
            constexpr Register::FieldValue<decltype(delvol),DelvolVal::v100> v100{};
            constexpr Register::FieldValue<decltype(delvol),DelvolVal::v101> v101{};
            constexpr Register::FieldValue<decltype(delvol),DelvolVal::v110> v110{};
            constexpr Register::FieldValue<decltype(delvol),DelvolVal::v111> v111{};
        }
        ///External oscillator charge current select
        enum class ExtchrgVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,ExtchrgVal> extchrg{}; 
        namespace ExtchrgValC{
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v00000> v00000{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v00001> v00001{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v00010> v00010{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v00011> v00011{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v00100> v00100{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v00101> v00101{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v00110> v00110{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v00111> v00111{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v01000> v01000{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v01001> v01001{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v01010> v01010{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v01011> v01011{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v01100> v01100{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v01101> v01101{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v01110> v01110{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v01111> v01111{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v10000> v10000{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v10001> v10001{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v10010> v10010{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v10011> v10011{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v10100> v10100{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v10101> v10101{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v10110> v10110{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v10111> v10111{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v11000> v11000{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v11001> v11001{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v11010> v11010{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v11011> v11011{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v11100> v11100{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v11101> v11101{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v11110> v11110{};
            constexpr Register::FieldValue<decltype(extchrg),ExtchrgVal::v11111> v11111{};
        }
        ///Internal capacitance trim value
        enum class CaptrmVal {
            v000=0x00000000,     ///<0.5 pF internal reference capacitance
            v001=0x00000001,     ///<0.6 pF internal reference capacitance
            v010=0x00000002,     ///<0.7 pF internal reference capacitance
            v011=0x00000003,     ///<0.8 pF internal reference capacitance
            v100=0x00000004,     ///<0.9 pF internal reference capacitance
            v101=0x00000005,     ///<1.0 pF internal reference capacitance
            v110=0x00000006,     ///<1.1 pF internal reference capacitance
            v111=0x00000007,     ///<1.2 pF internal reference capacitance
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,CaptrmVal> captrm{}; 
        namespace CaptrmValC{
            constexpr Register::FieldValue<decltype(captrm),CaptrmVal::v000> v000{};
            constexpr Register::FieldValue<decltype(captrm),CaptrmVal::v001> v001{};
            constexpr Register::FieldValue<decltype(captrm),CaptrmVal::v010> v010{};
            constexpr Register::FieldValue<decltype(captrm),CaptrmVal::v011> v011{};
            constexpr Register::FieldValue<decltype(captrm),CaptrmVal::v100> v100{};
            constexpr Register::FieldValue<decltype(captrm),CaptrmVal::v101> v101{};
            constexpr Register::FieldValue<decltype(captrm),CaptrmVal::v110> v110{};
            constexpr Register::FieldValue<decltype(captrm),CaptrmVal::v111> v111{};
        }
        ///Reference oscillator charge current select
        enum class RefchrgVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,RefchrgVal> refchrg{}; 
        namespace RefchrgValC{
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v00000> v00000{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v00001> v00001{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v00010> v00010{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v00011> v00011{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v00100> v00100{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v00101> v00101{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v00110> v00110{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v00111> v00111{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v01000> v01000{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v01001> v01001{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v01010> v01010{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v01011> v01011{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v01100> v01100{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v01101> v01101{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v01110> v01110{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v01111> v01111{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v10000> v10000{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v10001> v10001{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v10010> v10010{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v10011> v10011{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v10100> v10100{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v10101> v10101{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v10110> v10110{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v10111> v10111{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v11000> v11000{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v11001> v11001{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v11010> v11010{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v11011> v11011{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v11100> v11100{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v11101> v11101{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v11110> v11110{};
            constexpr Register::FieldValue<decltype(refchrg),RefchrgVal::v11111> v11111{};
        }
    }
    namespace Tsi0Pen{    ///<Pin enable register
        using Addr = Register::Address<0x40045008,0xfff00000,0,unsigned>;
        ///TSI pin 0 enable
        enum class Pen0Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pen0Val> pen0{}; 
        namespace Pen0ValC{
            constexpr Register::FieldValue<decltype(pen0),Pen0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen0),Pen0Val::v1> v1{};
        }
        ///TSI pin 1 enable
        enum class Pen1Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pen1Val> pen1{}; 
        namespace Pen1ValC{
            constexpr Register::FieldValue<decltype(pen1),Pen1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen1),Pen1Val::v1> v1{};
        }
        ///TSI pin 2 enable
        enum class Pen2Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pen2Val> pen2{}; 
        namespace Pen2ValC{
            constexpr Register::FieldValue<decltype(pen2),Pen2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen2),Pen2Val::v1> v1{};
        }
        ///TSI pin 3 enable
        enum class Pen3Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pen3Val> pen3{}; 
        namespace Pen3ValC{
            constexpr Register::FieldValue<decltype(pen3),Pen3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen3),Pen3Val::v1> v1{};
        }
        ///TSI pin 4 enable
        enum class Pen4Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pen4Val> pen4{}; 
        namespace Pen4ValC{
            constexpr Register::FieldValue<decltype(pen4),Pen4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen4),Pen4Val::v1> v1{};
        }
        ///TSI pin 5 enable
        enum class Pen5Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pen5Val> pen5{}; 
        namespace Pen5ValC{
            constexpr Register::FieldValue<decltype(pen5),Pen5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen5),Pen5Val::v1> v1{};
        }
        ///TSI pin 6 enable
        enum class Pen6Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pen6Val> pen6{}; 
        namespace Pen6ValC{
            constexpr Register::FieldValue<decltype(pen6),Pen6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen6),Pen6Val::v1> v1{};
        }
        ///TSI pin 7 enable
        enum class Pen7Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pen7Val> pen7{}; 
        namespace Pen7ValC{
            constexpr Register::FieldValue<decltype(pen7),Pen7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen7),Pen7Val::v1> v1{};
        }
        ///TSI pin 8 enable
        enum class Pen8Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pen8Val> pen8{}; 
        namespace Pen8ValC{
            constexpr Register::FieldValue<decltype(pen8),Pen8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen8),Pen8Val::v1> v1{};
        }
        ///TSI pin 9 enable
        enum class Pen9Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pen9Val> pen9{}; 
        namespace Pen9ValC{
            constexpr Register::FieldValue<decltype(pen9),Pen9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen9),Pen9Val::v1> v1{};
        }
        ///TSI pin 10 enable
        enum class Pen10Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pen10Val> pen10{}; 
        namespace Pen10ValC{
            constexpr Register::FieldValue<decltype(pen10),Pen10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen10),Pen10Val::v1> v1{};
        }
        ///TSI pin 11 enable
        enum class Pen11Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pen11Val> pen11{}; 
        namespace Pen11ValC{
            constexpr Register::FieldValue<decltype(pen11),Pen11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen11),Pen11Val::v1> v1{};
        }
        ///TSI pin 12 enable
        enum class Pen12Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pen12Val> pen12{}; 
        namespace Pen12ValC{
            constexpr Register::FieldValue<decltype(pen12),Pen12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen12),Pen12Val::v1> v1{};
        }
        ///TSI pin 13 enable
        enum class Pen13Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pen13Val> pen13{}; 
        namespace Pen13ValC{
            constexpr Register::FieldValue<decltype(pen13),Pen13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen13),Pen13Val::v1> v1{};
        }
        ///TSI pin 14 enable
        enum class Pen14Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pen14Val> pen14{}; 
        namespace Pen14ValC{
            constexpr Register::FieldValue<decltype(pen14),Pen14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen14),Pen14Val::v1> v1{};
        }
        ///TSI pin 15 enable
        enum class Pen15Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI
            v1=0x00000001,     ///<The corresponding pin is used by TSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pen15Val> pen15{}; 
        namespace Pen15ValC{
            constexpr Register::FieldValue<decltype(pen15),Pen15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen15),Pen15Val::v1> v1{};
        }
        ///Low-power scan pin
        enum class LpspVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,LpspVal> lpsp{}; 
        namespace LpspValC{
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(lpsp),LpspVal::v1111> v1111{};
        }
    }
    namespace Tsi0Status{    ///<Status Register
        using Addr = Register::Address<0x4004500c,0x00000000,0,unsigned>;
        ///Touch Sensing Electrode Out-of-Range Flag 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> orngf0{}; 
        namespace Orngf0ValC{
        }
        ///Touch Sensing Electrode Out-of-Range Flag 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> orngf1{}; 
        namespace Orngf1ValC{
        }
        ///Touch Sensing Electrode Out-of-Range Flag 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> orngf2{}; 
        namespace Orngf2ValC{
        }
        ///Touch Sensing Electrode Out-of-Range Flag 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> orngf3{}; 
        namespace Orngf3ValC{
        }
        ///Touch Sensing Electrode Out-of-Range Flag 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> orngf4{}; 
        namespace Orngf4ValC{
        }
        ///Touch Sensing Electrode Out-of-Range Flag 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> orngf5{}; 
        namespace Orngf5ValC{
        }
        ///Touch Sensing Electrode Out-of-Range Flag 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> orngf6{}; 
        namespace Orngf6ValC{
        }
        ///Touch Sensing Electrode Out-of-Range Flag 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> orngf7{}; 
        namespace Orngf7ValC{
        }
        ///Touch Sensing Electrode Out-of-Range Flag 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> orngf8{}; 
        namespace Orngf8ValC{
        }
        ///Touch Sensing Electrode Out-of-Range Flag 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> orngf9{}; 
        namespace Orngf9ValC{
        }
        ///Touch Sensing Electrode Out-of-Range Flag 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> orngf10{}; 
        namespace Orngf10ValC{
        }
        ///Touch Sensing Electrode Out-of-Range Flag 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> orngf11{}; 
        namespace Orngf11ValC{
        }
        ///Touch Sensing Electrode Out-of-Range Flag 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> orngf12{}; 
        namespace Orngf12ValC{
        }
        ///Touch Sensing Electrode Out-of-Range Flag 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> orngf13{}; 
        namespace Orngf13ValC{
        }
        ///Touch Sensing Electrode Out-of-Range Flag 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> orngf14{}; 
        namespace Orngf14ValC{
        }
        ///Touch Sensing Electrode Out-of-Range Flag 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> orngf15{}; 
        namespace Orngf15ValC{
        }
        ///TouchSensing Error Flag 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> errof0{}; 
        namespace Errof0ValC{
        }
        ///TouchSensing Error Flag 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> errof1{}; 
        namespace Errof1ValC{
        }
        ///TouchSensing Error Flag 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> errof2{}; 
        namespace Errof2ValC{
        }
        ///TouchSensing Error Flag 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> errof3{}; 
        namespace Errof3ValC{
        }
        ///TouchSensing Error Flag 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> errof4{}; 
        namespace Errof4ValC{
        }
        ///TouchSensing Error Flag 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> errof5{}; 
        namespace Errof5ValC{
        }
        ///TouchSensing Error Flag 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> errof6{}; 
        namespace Errof6ValC{
        }
        ///TouchSensing Error Flag 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> errof7{}; 
        namespace Errof7ValC{
        }
        ///TouchSensing Error Flag 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> errof8{}; 
        namespace Errof8ValC{
        }
        ///TouchSensing Error Flag 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> errof9{}; 
        namespace Errof9ValC{
        }
        ///TouchSensing Error Flag 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> errof10{}; 
        namespace Errof10ValC{
        }
        ///TouchSensing Error Flag 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> errof11{}; 
        namespace Errof11ValC{
        }
        ///TouchSensing Error Flag 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> errof12{}; 
        namespace Errof12ValC{
        }
        ///TouchSensing Error Flag 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> errof13{}; 
        namespace Errof13ValC{
        }
        ///TouchSensing Error Flag 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> errof14{}; 
        namespace Errof14ValC{
        }
        ///TouchSensing Error Flag 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> errof15{}; 
        namespace Errof15ValC{
        }
    }
    namespace Tsi0Cntr1{    ///<Counter Register
        using Addr = Register::Address<0x40045100,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        namespace Ctn1ValC{
        }
        ///Touch sensing channel n counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
        namespace CtnValC{
        }
    }
    namespace Tsi0Cntr3{    ///<Counter Register
        using Addr = Register::Address<0x40045104,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        namespace Ctn1ValC{
        }
        ///Touch sensing channel n counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
        namespace CtnValC{
        }
    }
    namespace Tsi0Cntr5{    ///<Counter Register
        using Addr = Register::Address<0x40045108,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        namespace Ctn1ValC{
        }
        ///Touch sensing channel n counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
        namespace CtnValC{
        }
    }
    namespace Tsi0Cntr7{    ///<Counter Register
        using Addr = Register::Address<0x4004510c,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        namespace Ctn1ValC{
        }
        ///Touch sensing channel n counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
        namespace CtnValC{
        }
    }
    namespace Tsi0Cntr9{    ///<Counter Register
        using Addr = Register::Address<0x40045110,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        namespace Ctn1ValC{
        }
        ///Touch sensing channel n counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
        namespace CtnValC{
        }
    }
    namespace Tsi0Cntr11{    ///<Counter Register
        using Addr = Register::Address<0x40045114,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        namespace Ctn1ValC{
        }
        ///Touch sensing channel n counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
        namespace CtnValC{
        }
    }
    namespace Tsi0Cntr13{    ///<Counter Register
        using Addr = Register::Address<0x40045118,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        namespace Ctn1ValC{
        }
        ///Touch sensing channel n counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
        namespace CtnValC{
        }
    }
    namespace Tsi0Cntr15{    ///<Counter Register
        using Addr = Register::Address<0x4004511c,0x00000000,0,unsigned>;
        ///Touch sensing channel n-1 counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        namespace Ctn1ValC{
        }
        ///Touch sensing channel n counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
        namespace CtnValC{
        }
    }
    namespace Tsi0Threshld0{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045120,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
    namespace Tsi0Threshld1{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045124,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
    namespace Tsi0Threshld2{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045128,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
    namespace Tsi0Threshld3{    ///<Channel n threshold register
        using Addr = Register::Address<0x4004512c,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
    namespace Tsi0Threshld4{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045130,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
    namespace Tsi0Threshld5{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045134,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
    namespace Tsi0Threshld6{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045138,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
    namespace Tsi0Threshld7{    ///<Channel n threshold register
        using Addr = Register::Address<0x4004513c,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
    namespace Tsi0Threshld8{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045140,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
    namespace Tsi0Threshld9{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045144,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
    namespace Tsi0Threshld10{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045148,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
    namespace Tsi0Threshld11{    ///<Channel n threshold register
        using Addr = Register::Address<0x4004514c,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
    namespace Tsi0Threshld12{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045150,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
    namespace Tsi0Threshld13{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045154,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
    namespace Tsi0Threshld14{    ///<Channel n threshold register
        using Addr = Register::Address<0x40045158,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
    namespace Tsi0Threshld15{    ///<Channel n threshold register
        using Addr = Register::Address<0x4004515c,0x00000000,0,unsigned>;
        ///High threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        namespace HthhValC{
        }
        ///Low threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
        namespace LthhValC{
        }
    }
}
