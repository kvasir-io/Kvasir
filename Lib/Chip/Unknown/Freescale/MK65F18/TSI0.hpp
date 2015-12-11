#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Touch sense input
    namespace Tsi0Gencs{    ///<TSI General Control and Status Register
        using Addr = Register::Address<0x40045000,0x60000000,0,unsigned>;
        ///End-of-Scan DMA Transfer Request Enable Only
        enum class EosdmeoVal {
            v0=0x00000000,     ///<Do not enable the End-of-Scan DMA transfer request only. Depending on ESOR state, either Out-of-Range or End-of-Scan can trigger a DMA transfer request and interrupt.
            v1=0x00000001,     ///<Only the End-of-Scan event can trigger a DMA transfer request. The Out-of-Range event only and always triggers an interrupt if TSIIE is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EosdmeoVal> eosdmeo{}; 
        namespace EosdmeoValC{
            constexpr Register::FieldValue<decltype(eosdmeo)::Type,EosdmeoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eosdmeo)::Type,EosdmeoVal::v1> v1{};
        }
        ///CURSW
        enum class CurswVal {
            v0=0x00000000,     ///<The current source pair are not swapped.
            v1=0x00000001,     ///<The current source pair are swapped.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CurswVal> cursw{}; 
        namespace CurswValC{
            constexpr Register::FieldValue<decltype(cursw)::Type,CurswVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cursw)::Type,CurswVal::v1> v1{};
        }
        ///End of Scan Flag
        enum class EosfVal {
            v0=0x00000000,     ///<Scan not complete.
            v1=0x00000001,     ///<Scan complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,EosfVal> eosf{}; 
        namespace EosfValC{
            constexpr Register::FieldValue<decltype(eosf)::Type,EosfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eosf)::Type,EosfVal::v1> v1{};
        }
        ///Scan In Progress Status
        enum class ScnipVal {
            v0=0x00000000,     ///<No scan in progress.
            v1=0x00000001,     ///<Scan in progress.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ScnipVal> scnip{}; 
        namespace ScnipValC{
            constexpr Register::FieldValue<decltype(scnip)::Type,ScnipVal::v0> v0{};
            constexpr Register::FieldValue<decltype(scnip)::Type,ScnipVal::v1> v1{};
        }
        ///Scan Trigger Mode
        enum class StmVal {
            v0=0x00000000,     ///<Software trigger scan.
            v1=0x00000001,     ///<Hardware trigger scan.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,StmVal> stm{}; 
        namespace StmValC{
            constexpr Register::FieldValue<decltype(stm)::Type,StmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stm)::Type,StmVal::v1> v1{};
        }
        ///TSI STOP Enable
        enum class StpeVal {
            v0=0x00000000,     ///<TSI is disabled when MCU goes into low power mode.
            v1=0x00000001,     ///<Allows TSI to continue running in all low power modes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,StpeVal> stpe{}; 
        namespace StpeValC{
            constexpr Register::FieldValue<decltype(stpe)::Type,StpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stpe)::Type,StpeVal::v1> v1{};
        }
        ///Touch Sensing Input Interrupt Enable
        enum class TsiienVal {
            v0=0x00000000,     ///<TSI interrupt is disabled.
            v1=0x00000001,     ///<TSI interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TsiienVal> tsiien{}; 
        namespace TsiienValC{
            constexpr Register::FieldValue<decltype(tsiien)::Type,TsiienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsiien)::Type,TsiienVal::v1> v1{};
        }
        ///Touch Sensing Input Module Enable
        enum class TsienVal {
            v0=0x00000000,     ///<TSI module disabled.
            v1=0x00000001,     ///<TSI module enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TsienVal> tsien{}; 
        namespace TsienValC{
            constexpr Register::FieldValue<decltype(tsien)::Type,TsienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsien)::Type,TsienVal::v1> v1{};
        }
        ///NSCN
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,NscnVal> nscn{}; 
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
        ///PS
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,PsVal> ps{}; 
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
        ///EXTCHRG
        enum class ExtchrgVal {
            v000=0x00000000,     ///<500 nA.
            v001=0x00000001,     ///<1 μA.
            v010=0x00000002,     ///<2 μA.
            v011=0x00000003,     ///<4 μA.
            v100=0x00000004,     ///<8 μA.
            v101=0x00000005,     ///<16 μA.
            v110=0x00000006,     ///<32 μA.
            v111=0x00000007,     ///<64 μA.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ExtchrgVal> extchrg{}; 
        namespace ExtchrgValC{
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v000> v000{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v001> v001{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v010> v010{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v011> v011{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v100> v100{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v101> v101{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v110> v110{};
            constexpr Register::FieldValue<decltype(extchrg)::Type,ExtchrgVal::v111> v111{};
        }
        ///DVOLT
        enum class DvoltVal {
            v00=0x00000000,     ///<DV = 1.026 V; VP = 1.328 V; Vm = 0.302 V.
            v01=0x00000001,     ///<DV = 0.592 V; VP = 1.111 V; Vm = 0.519 V.
            v10=0x00000002,     ///<DV = 0.342 V; VP = 0.986 V; Vm = 0.644 V.
            v11=0x00000003,     ///<DV = 0.197 V; VP = 0.914 V; Vm = 0.716 V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,DvoltVal> dvolt{}; 
        namespace DvoltValC{
            constexpr Register::FieldValue<decltype(dvolt)::Type,DvoltVal::v00> v00{};
            constexpr Register::FieldValue<decltype(dvolt)::Type,DvoltVal::v01> v01{};
            constexpr Register::FieldValue<decltype(dvolt)::Type,DvoltVal::v10> v10{};
            constexpr Register::FieldValue<decltype(dvolt)::Type,DvoltVal::v11> v11{};
        }
        ///REFCHRG
        enum class RefchrgVal {
            v000=0x00000000,     ///<500 nA.
            v001=0x00000001,     ///<1 μA.
            v010=0x00000002,     ///<2 μA.
            v011=0x00000003,     ///<4 μA.
            v100=0x00000004,     ///<8 μA.
            v101=0x00000005,     ///<16 μA.
            v110=0x00000006,     ///<32 μA.
            v111=0x00000007,     ///<64 μA.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,RefchrgVal> refchrg{}; 
        namespace RefchrgValC{
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v000> v000{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v001> v001{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v010> v010{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v011> v011{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v100> v100{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v101> v101{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v110> v110{};
            constexpr Register::FieldValue<decltype(refchrg)::Type,RefchrgVal::v111> v111{};
        }
        ///TSI analog modes setup and status bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> mode{}; 
        ///End-of-scan or Out-of-Range Interrupt Selection
        enum class EsorVal {
            v0=0x00000000,     ///<Out-of-range interrupt is allowed.
            v1=0x00000001,     ///<End-of-scan interrupt is allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,EsorVal> esor{}; 
        namespace EsorValC{
            constexpr Register::FieldValue<decltype(esor)::Type,EsorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esor)::Type,EsorVal::v1> v1{};
        }
        ///Out of Range Flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> outrgf{}; 
    }
    namespace Tsi0Data{    ///<TSI DATA Register
        using Addr = Register::Address<0x40045004,0x0f3f0000,0,unsigned>;
        ///TSI Conversion Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tsicnt{}; 
        ///Software Trigger Start
        enum class SwtsVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Start a scan to determine which channel is specified by TSI_DATA[TSICH].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,SwtsVal> swts{}; 
        namespace SwtsValC{
            constexpr Register::FieldValue<decltype(swts)::Type,SwtsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swts)::Type,SwtsVal::v1> v1{};
        }
        ///DMA Transfer Enabled
        enum class DmaenVal {
            v0=0x00000000,     ///<Interrupt is selected when the interrupt enable bit is set and the corresponding TSI events assert.
            v1=0x00000001,     ///<DMA transfer request is selected when the interrupt enable bit is set and the corresponding TSI events assert.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,DmaenVal> dmaen{}; 
        namespace DmaenValC{
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::v1> v1{};
        }
        ///TSICH
        enum class TsichVal {
            v0000=0x00000000,     ///<Channel 0.
            v0001=0x00000001,     ///<Channel 1.
            v0010=0x00000002,     ///<Channel 2.
            v0011=0x00000003,     ///<Channel 3.
            v0100=0x00000004,     ///<Channel 4.
            v0101=0x00000005,     ///<Channel 5.
            v0110=0x00000006,     ///<Channel 6.
            v0111=0x00000007,     ///<Channel 7.
            v1000=0x00000008,     ///<Channel 8.
            v1001=0x00000009,     ///<Channel 9.
            v1010=0x0000000a,     ///<Channel 10.
            v1011=0x0000000b,     ///<Channel 11.
            v1100=0x0000000c,     ///<Channel 12.
            v1101=0x0000000d,     ///<Channel 13.
            v1110=0x0000000e,     ///<Channel 14.
            v1111=0x0000000f,     ///<Channel 15.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,TsichVal> tsich{}; 
        namespace TsichValC{
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(tsich)::Type,TsichVal::v1111> v1111{};
        }
    }
    namespace Tsi0Tshd{    ///<TSI Threshold Register
        using Addr = Register::Address<0x40045008,0x00000000,0,unsigned>;
        ///TSI Wakeup Channel Low-threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> thresl{}; 
        ///TSI Wakeup Channel High-threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> thresh{}; 
    }
}
