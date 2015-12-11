#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Touch Sensing Input
    namespace Tsi0Gencs{    ///<General Control and Status Register
        using Addr = Register::Address<0x40045000,0xe0000c0c,0,unsigned>;
        ///no description available
        enum class StpeVal {
            v0=0x00000000,     ///<Disable TSI when MCU goes into low power modes.
            v1=0x00000001,     ///<Allows TSI to continue running in all low power modes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StpeVal> stpe{}; 
        namespace StpeValC{
            constexpr Register::FieldValue<decltype(stpe)::Type,StpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stpe)::Type,StpeVal::v1> v1{};
        }
        ///Scan Trigger Mode. This bit-field can only be changed if the TSI module is disabled (TSIEN bit = 0).
        enum class StmVal {
            v0=0x00000000,     ///<Software trigger scan.
            v1=0x00000001,     ///<Periodical Scan.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StmVal> stm{}; 
        namespace StmValC{
            constexpr Register::FieldValue<decltype(stm)::Type,StmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stm)::Type,StmVal::v1> v1{};
        }
        ///End-of-Scan or Out-of-Range Interrupt select
        enum class EsorVal {
            v0=0x00000000,     ///<Out-of-Range interrupt is allowed.
            v1=0x00000001,     ///<End-of-Scan interrupt is allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsorVal> esor{}; 
        namespace EsorValC{
            constexpr Register::FieldValue<decltype(esor)::Type,EsorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esor)::Type,EsorVal::v1> v1{};
        }
        ///Error Interrupt Enable
        enum class ErieVal {
            v0=0x00000000,     ///<Interrupt disabled for error.
            v1=0x00000001,     ///<Interrupt enabled for error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ErieVal> erie{}; 
        namespace ErieValC{
            constexpr Register::FieldValue<decltype(erie)::Type,ErieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erie)::Type,ErieVal::v1> v1{};
        }
        ///Touch Sensing Input Interrupt Module Enable
        enum class TsiieVal {
            v0=0x00000000,     ///<Interrupt from TSI is disabled
            v1=0x00000001,     ///<Interrupt from TSI is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TsiieVal> tsiie{}; 
        namespace TsiieValC{
            constexpr Register::FieldValue<decltype(tsiie)::Type,TsiieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsiie)::Type,TsiieVal::v1> v1{};
        }
        ///Touch Sensing Input Module Enable
        enum class TsienVal {
            v0=0x00000000,     ///<TSI module is disabled
            v1=0x00000001,     ///<TSI module is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TsienVal> tsien{}; 
        namespace TsienValC{
            constexpr Register::FieldValue<decltype(tsien)::Type,TsienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsien)::Type,TsienVal::v1> v1{};
        }
        ///Software Trigger Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swts{}; 
        ///Scan In Progress status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> scnip{}; 
        ///Overrun error Flag. This flag is set when a scan trigger occurs while a scan is still in progress. Writing "1" to this bit will clear the flag to 0.
        enum class OvrfVal {
            v0=0x00000000,     ///<No over run.
            v1=0x00000001,     ///<Over Run occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,OvrfVal> ovrf{}; 
        namespace OvrfValC{
            constexpr Register::FieldValue<decltype(ovrf)::Type,OvrfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ovrf)::Type,OvrfVal::v1> v1{};
        }
        ///External Electrode error occurred
        enum class ExterfVal {
            v0=0x00000000,     ///<No fault happend on TSI electrodes
            v1=0x00000001,     ///<Short to VDD or VSS was detected on one or more electrodes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ExterfVal> exterf{}; 
        namespace ExterfValC{
            constexpr Register::FieldValue<decltype(exterf)::Type,ExterfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exterf)::Type,ExterfVal::v1> v1{};
        }
        ///Out of Range Flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> outrgf{}; 
        ///End of Scan Flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eosf{}; 
        ///Electrode Oscillator prescaler. .
        enum class PsVal {
            v000=0x00000000,     ///<Electrode Oscillator Frequency divided by 1
            v001=0x00000001,     ///<Electrode Oscillator Frequency divided by 2
            v010=0x00000002,     ///<Electrode Oscillator Frequency divided by 4
            v011=0x00000003,     ///<Electrode Oscillator Frequency divided by 8
            v100=0x00000004,     ///<Electrode Oscillator Frequency divided by 16
            v101=0x00000005,     ///<Electrode Oscillator Frequency divided by 32
            v110=0x00000006,     ///<Electrode Oscillator Frequency divided by 64
            v111=0x00000007,     ///<Electrode Oscillator Frequency divided by 128
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v111> v111{};
        }
        ///Number of Consecutive Scans per Electrode electrode.
        enum class NscnVal {
            v00000=0x00000000,     ///<Once per electrode
            v00001=0x00000001,     ///<Twice per electrode
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
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v00000> v00000{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v00001> v00001{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v00010> v00010{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v00011> v00011{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v00100> v00100{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v00101> v00101{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v00110> v00110{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v00111> v00111{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v01000> v01000{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v01001> v01001{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v01010> v01010{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v01011> v01011{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v01100> v01100{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v01101> v01101{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v01110> v01110{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v01111> v01111{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v10000> v10000{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v10001> v10001{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v10010> v10010{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v10011> v10011{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v10100> v10100{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v10101> v10101{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v10110> v10110{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v10111> v10111{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v11000> v11000{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v11001> v11001{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v11010> v11010{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v11011> v11011{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v11100> v11100{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v11101> v11101{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v11110> v11110{};
            constexpr Register::FieldValue<decltype(nscn)::Type,NscnVal::v11111> v11111{};
        }
        ///TSI Low Power Mode Scan Interval.
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
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(lpscnitv)::Type,LpscnitvVal::v1111> v1111{};
        }
        ///Low Power Mode Clock Source Selection.
        enum class LpclksVal {
            v0=0x00000000,     ///<LPOCLK is selected to determine the scan period in low power mode
            v1=0x00000001,     ///<VLPOSCCLK is selected to determine the scan period in low power mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,LpclksVal> lpclks{}; 
        namespace LpclksValC{
            constexpr Register::FieldValue<decltype(lpclks)::Type,LpclksVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpclks)::Type,LpclksVal::v1> v1{};
        }
    }
    namespace Tsi0Scanc{    ///<SCAN Control Register
        using Addr = Register::Address<0x40045004,0xf0f000e0,0,unsigned>;
        ///Active Mode Prescaler
        enum class AmpscVal {
            v000=0x00000000,     ///<Input Clock Source divided by 1.
            v001=0x00000001,     ///<Input Clock Source divided by 2.
            v010=0x00000002,     ///<Input Clock Source divided by 4.
            v011=0x00000003,     ///<Input Clock Source divided by 8.
            v100=0x00000004,     ///<Input Clock Source divided by 16.
            v101=0x00000005,     ///<Input Clock Source divided by 32.
            v110=0x00000006,     ///<Input Clock Source divided by 64.
            v111=0x00000007,     ///<Input Clock Source divided by 128.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,AmpscVal> ampsc{}; 
        namespace AmpscValC{
            constexpr Register::FieldValue<decltype(ampsc)::Type,AmpscVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ampsc)::Type,AmpscVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ampsc)::Type,AmpscVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ampsc)::Type,AmpscVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ampsc)::Type,AmpscVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ampsc)::Type,AmpscVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ampsc)::Type,AmpscVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ampsc)::Type,AmpscVal::v111> v111{};
        }
        ///Active Mode Clock Source
        enum class AmclksVal {
            v00=0x00000000,     ///<LPOSCCLK
            v01=0x00000001,     ///<MCGIRCLK.
            v10=0x00000002,     ///<OSC0ERCLK.
            v11=0x00000003,     ///<Not valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,AmclksVal> amclks{}; 
        namespace AmclksValC{
            constexpr Register::FieldValue<decltype(amclks)::Type,AmclksVal::v00> v00{};
            constexpr Register::FieldValue<decltype(amclks)::Type,AmclksVal::v01> v01{};
            constexpr Register::FieldValue<decltype(amclks)::Type,AmclksVal::v10> v10{};
            constexpr Register::FieldValue<decltype(amclks)::Type,AmclksVal::v11> v11{};
        }
        ///Scan Module
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> smod{}; 
        ///External OSC Charge Current select
        enum class ExtchrgVal {
            v0000=0x00000000,     ///<2 uA charge current.
            v0001=0x00000001,     ///<4 uA charge current.
            v0010=0x00000002,     ///<6 uA charge current.
            v0011=0x00000003,     ///<8 uA charge current.
            v0100=0x00000004,     ///<10 uA charge current.
            v0101=0x00000005,     ///<12 uA charge current.
            v0110=0x00000006,     ///<14 uA charge current.
            v0111=0x00000007,     ///<16 uA charge current.
            v1000=0x00000008,     ///<18 uA charge current.
            v1001=0x00000009,     ///<20 uA charge current.
            v1010=0x0000000a,     ///<22 uA charge current.
            v1011=0x0000000b,     ///<24 uA charge current.
            v1100=0x0000000c,     ///<26 uA charge current.
            v1101=0x0000000d,     ///<28 uA charge current.
            v1110=0x0000000e,     ///<30 uA charge current.
            v1111=0x0000000f,     ///<32 uA charge current.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,ExtchrgVal> extchrg{}; 
        namespace ExtchrgValC{
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v1111> v1111{};
        }
        ///Ref OSC Charge Current select
        enum class RefchrgVal {
            v0000=0x00000000,     ///<2 uA charge current.
            v0001=0x00000001,     ///<4 uA charge current.
            v0010=0x00000002,     ///<6 uA charge current.
            v0011=0x00000003,     ///<8 uA charge current.
            v0100=0x00000004,     ///<10 uA charge current.
            v0101=0x00000005,     ///<12 uA charge current.
            v0110=0x00000006,     ///<14 uA charge current.
            v0111=0x00000007,     ///<16 uA charge current.
            v1000=0x00000008,     ///<18 uA charge current.
            v1001=0x00000009,     ///<20 uA charge current.
            v1010=0x0000000a,     ///<22 uA charge current.
            v1011=0x0000000b,     ///<24 uA charge current.
            v1100=0x0000000c,     ///<26 uA charge current.
            v1101=0x0000000d,     ///<28 uA charge current.
            v1110=0x0000000e,     ///<30 uA charge current.
            v1111=0x0000000f,     ///<32 uA charge current.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,RefchrgVal> refchrg{}; 
        namespace RefchrgValC{
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v1111> v1111{};
        }
    }
    namespace Tsi0Pen{    ///<Pin Enable Register
        using Addr = Register::Address<0x40045008,0xfff00000,0,unsigned>;
        ///Touch Sensing Input Pin Enable Register 0
        enum class Pen0Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pen0Val> pen0{}; 
        namespace Pen0ValC{
            constexpr Register::FieldValue<decltype(pen0)::Type,Pen0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen0)::Type,Pen0Val::v1> v1{};
        }
        ///Touch Sensing Input Pin Enable Register 1
        enum class Pen1Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pen1Val> pen1{}; 
        namespace Pen1ValC{
            constexpr Register::FieldValue<decltype(pen1)::Type,Pen1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen1)::Type,Pen1Val::v1> v1{};
        }
        ///Touch Sensing Input Pin Enable Register 2
        enum class Pen2Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pen2Val> pen2{}; 
        namespace Pen2ValC{
            constexpr Register::FieldValue<decltype(pen2)::Type,Pen2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen2)::Type,Pen2Val::v1> v1{};
        }
        ///Touch Sensing Input Pin Enable Register 3
        enum class Pen3Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pen3Val> pen3{}; 
        namespace Pen3ValC{
            constexpr Register::FieldValue<decltype(pen3)::Type,Pen3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen3)::Type,Pen3Val::v1> v1{};
        }
        ///Touch Sensing Input Pin Enable Register 4
        enum class Pen4Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pen4Val> pen4{}; 
        namespace Pen4ValC{
            constexpr Register::FieldValue<decltype(pen4)::Type,Pen4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen4)::Type,Pen4Val::v1> v1{};
        }
        ///Touch Sensing Input Pin Enable Register 5
        enum class Pen5Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pen5Val> pen5{}; 
        namespace Pen5ValC{
            constexpr Register::FieldValue<decltype(pen5)::Type,Pen5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen5)::Type,Pen5Val::v1> v1{};
        }
        ///Touch Sensing Input Pin Enable Register 6
        enum class Pen6Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pen6Val> pen6{}; 
        namespace Pen6ValC{
            constexpr Register::FieldValue<decltype(pen6)::Type,Pen6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen6)::Type,Pen6Val::v1> v1{};
        }
        ///Touch Sensing Input Pin Enable Register 7
        enum class Pen7Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pen7Val> pen7{}; 
        namespace Pen7ValC{
            constexpr Register::FieldValue<decltype(pen7)::Type,Pen7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen7)::Type,Pen7Val::v1> v1{};
        }
        ///Touch Sensing Input Pin Enable Register 8
        enum class Pen8Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pen8Val> pen8{}; 
        namespace Pen8ValC{
            constexpr Register::FieldValue<decltype(pen8)::Type,Pen8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen8)::Type,Pen8Val::v1> v1{};
        }
        ///Touch Sensing Input Pin Enable Register 9
        enum class Pen9Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pen9Val> pen9{}; 
        namespace Pen9ValC{
            constexpr Register::FieldValue<decltype(pen9)::Type,Pen9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen9)::Type,Pen9Val::v1> v1{};
        }
        ///Touch Sensing Input Pin Enable Register 10
        enum class Pen10Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pen10Val> pen10{}; 
        namespace Pen10ValC{
            constexpr Register::FieldValue<decltype(pen10)::Type,Pen10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen10)::Type,Pen10Val::v1> v1{};
        }
        ///Touch Sensing Input Pin Enable Register 11
        enum class Pen11Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pen11Val> pen11{}; 
        namespace Pen11ValC{
            constexpr Register::FieldValue<decltype(pen11)::Type,Pen11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen11)::Type,Pen11Val::v1> v1{};
        }
        ///Touch Sensing Input Pin Enable Register 12
        enum class Pen12Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pen12Val> pen12{}; 
        namespace Pen12ValC{
            constexpr Register::FieldValue<decltype(pen12)::Type,Pen12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen12)::Type,Pen12Val::v1> v1{};
        }
        ///Touch Sensing Input Pin Enable Register 13
        enum class Pen13Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pen13Val> pen13{}; 
        namespace Pen13ValC{
            constexpr Register::FieldValue<decltype(pen13)::Type,Pen13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen13)::Type,Pen13Val::v1> v1{};
        }
        ///Touch Sensing Input Pin Enable Register 14
        enum class Pen14Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pen14Val> pen14{}; 
        namespace Pen14ValC{
            constexpr Register::FieldValue<decltype(pen14)::Type,Pen14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen14)::Type,Pen14Val::v1> v1{};
        }
        ///Touch Sensing Input Pin Enable Register 15
        enum class Pen15Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pen15Val> pen15{}; 
        namespace Pen15ValC{
            constexpr Register::FieldValue<decltype(pen15)::Type,Pen15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pen15)::Type,Pen15Val::v1> v1{};
        }
        ///Low Power Scan Pin
        enum class LpspVal {
            v0000=0x00000000,     ///<TSI_IN[0] is active in low power mode.
            v0001=0x00000001,     ///<TSI_IN[1] is active in low power mode.
            v0010=0x00000002,     ///<TSI_IN[2] is active in low power mode.
            v0011=0x00000003,     ///<TSI_IN[3] is active in low power mode.
            v0100=0x00000004,     ///<TSI_IN[4] is active in low power mode.
            v0101=0x00000005,     ///<TSI_IN[5] is active in low power mode.
            v0110=0x00000006,     ///<TSI_IN[6] is active in low power mode.
            v0111=0x00000007,     ///<TSI_IN[7] is active in low power mode.
            v1000=0x00000008,     ///<TSI_IN[8] is active in low power mode.
            v1001=0x00000009,     ///<TSI_IN[9] is active in low power mode.
            v1010=0x0000000a,     ///<TSI_IN[10] is active in low power mode.
            v1011=0x0000000b,     ///<TSI_IN[11] is active in low power mode.
            v1100=0x0000000c,     ///<TSI_IN[12] is active in low power mode.
            v1101=0x0000000d,     ///<TSI_IN[13] is active in low power mode.
            v1110=0x0000000e,     ///<TSI_IN[14] is active in low power mode.
            v1111=0x0000000f,     ///<TSI_IN[15] is active in low power mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,LpspVal> lpsp{}; 
        namespace LpspValC{
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(lpsp)::Type,LpspVal::v1111> v1111{};
        }
    }
    namespace Tsi0Wucntr{    ///<Wake-Up Channel Counter Register
        using Addr = Register::Address<0x4004500c,0xffff0000,0,unsigned>;
        ///TouchSensing wake-up Channel 16bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wucnt{}; 
    }
    namespace Tsi0Cntr1{    ///<Counter Register
        using Addr = Register::Address<0x40045100,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Cntr3{    ///<Counter Register
        using Addr = Register::Address<0x40045104,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Cntr5{    ///<Counter Register
        using Addr = Register::Address<0x40045108,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Cntr7{    ///<Counter Register
        using Addr = Register::Address<0x4004510c,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Cntr9{    ///<Counter Register
        using Addr = Register::Address<0x40045110,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Cntr11{    ///<Counter Register
        using Addr = Register::Address<0x40045114,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Cntr13{    ///<Counter Register
        using Addr = Register::Address<0x40045118,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Cntr15{    ///<Counter Register
        using Addr = Register::Address<0x4004511c,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctn{}; 
    }
    namespace Tsi0Threshold{    ///<Low Power Channel Threshold Register
        using Addr = Register::Address<0x40045120,0x00000000,0,unsigned>;
        ///Touch Sensing Channel High Threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Touch Sensing Channel Low Threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
}
