#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Touch Sensing Input
    namespace Tsi0Gencs{    ///<General Control and Status Register
        using Addr = Register::Address<0x40030000,0xff000c0c,0,unsigned>;
        ///no description available
        enum class stpeVal {
            v0=0x00000000,     ///<Disable TSI when MCU goes into low power modes.
            v1=0x00000001,     ///<Allows TSI to continue running in all low power modes.
        };
        namespace stpeValC{
            constexpr MPL::Value<stpeVal,stpeVal::v0> v0{};
            constexpr MPL::Value<stpeVal,stpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,stpeVal> stpe{}; 
        ///Scan Trigger Mode. User is allowed to change this bit when TSI is not working in progress.
        enum class stmVal {
            v0=0x00000000,     ///<Software trigger scan.
            v1=0x00000001,     ///<Periodical Scan.
        };
        namespace stmValC{
            constexpr MPL::Value<stmVal,stmVal::v0> v0{};
            constexpr MPL::Value<stmVal,stmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,stmVal> stm{}; 
        ///End-of-Scan or Out-of-Range Interrupt select
        enum class esorVal {
            v0=0x00000000,     ///<Out-of-Range interrupt is allowed.
            v1=0x00000001,     ///<End-of-Scan interrupt is allowed.
        };
        namespace esorValC{
            constexpr MPL::Value<esorVal,esorVal::v0> v0{};
            constexpr MPL::Value<esorVal,esorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esorVal> esor{}; 
        ///Error Interrupt Enable
        enum class erieVal {
            v0=0x00000000,     ///<Interrupt disabled for error.
            v1=0x00000001,     ///<Interrupt enabled for error.
        };
        namespace erieValC{
            constexpr MPL::Value<erieVal,erieVal::v0> v0{};
            constexpr MPL::Value<erieVal,erieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,erieVal> erie{}; 
        ///Touch Sensing Input Interrupt Module Enable
        enum class tsiieVal {
            v0=0x00000000,     ///<Interrupt from TSI is disabled.
            v1=0x00000001,     ///<Interrupt from TSI is enabled.
        };
        namespace tsiieValC{
            constexpr MPL::Value<tsiieVal,tsiieVal::v0> v0{};
            constexpr MPL::Value<tsiieVal,tsiieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tsiieVal> tsiie{}; 
        ///Touch Sensing Input Module Enable
        enum class tsienVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace tsienValC{
            constexpr MPL::Value<tsienVal,tsienVal::v0> v0{};
            constexpr MPL::Value<tsienVal,tsienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tsienVal> tsien{}; 
        ///Software Trigger Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swts{}; 
        ///Scan In Progress status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> scnip{}; 
        ///Overrun error Flag. This flag is set when a scan trigger occurs while a scan is still in progress. Write "1", when this flag is set, to clear it..
        enum class ovrfVal {
            v0=0x00000000,     ///<No over run.
            v1=0x00000001,     ///<Over Run occurred.
        };
        namespace ovrfValC{
            constexpr MPL::Value<ovrfVal,ovrfVal::v0> v0{};
            constexpr MPL::Value<ovrfVal,ovrfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ovrfVal> ovrf{}; 
        ///External Electrode error occurred
        enum class exterfVal {
            v0=0x00000000,     ///<No short.
            v1=0x00000001,     ///<Short to VDD or VSS was detected on one or more electrodes.
        };
        namespace exterfValC{
            constexpr MPL::Value<exterfVal,exterfVal::v0> v0{};
            constexpr MPL::Value<exterfVal,exterfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,exterfVal> exterf{}; 
        ///Out of Range Flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> outrgf{}; 
        ///End of Scan Flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eosf{}; 
        ///Electrode Oscillator prescaler. .
        enum class psVal {
            v000=0x00000000,     ///<Electrode Oscillator Frequency divided by 1
            v001=0x00000001,     ///<Electrode Oscillator Frequency divided by 2
            v010=0x00000002,     ///<Electrode Oscillator Frequency divided by 4
            v011=0x00000003,     ///<Electrode Oscillator Frequency divided by 8
            v100=0x00000004,     ///<Electrode Oscillator Frequency divided by 16
            v101=0x00000005,     ///<Electrode Oscillator Frequency divided by 32
            v110=0x00000006,     ///<Electrode Oscillator Frequency divided by 64
            v111=0x00000007,     ///<Electrode Oscillator Frequency divided by 128
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
        ///Number of Consecutive Scans per Electrode electrode.
        enum class nscnVal {
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
    }
    namespace Tsi0Scanc{    ///<SCAN Control Register
        using Addr = Register::Address<0x40030004,0x08c800e0,0,unsigned>;
        ///Active Mode Prescaler
        enum class ampscVal {
            v000=0x00000000,     ///<Input Clock Source divided by 1.
            v001=0x00000001,     ///<Input Clock Source divided by 2.
            v010=0x00000002,     ///<Input Clock Source divided by 4.
            v011=0x00000003,     ///<Input Clock Source divided by 8.
            v100=0x00000004,     ///<Input Clock Source divided by 16.
            v101=0x00000005,     ///<Input Clock Source divided by 32.
            v110=0x00000006,     ///<Input Clock Source divided by 64.
            v111=0x00000007,     ///<Input Clock Source divided by 128.
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
        ///Active Mode Clock Source
        enum class amclksVal {
            v00=0x00000000,     ///<LPOCLK
            v01=0x00000001,     ///<IRCLK.
            v10=0x00000002,     ///<ERCLK.
            v11=0x00000003,     ///<Not valid.
        };
        namespace amclksValC{
            constexpr MPL::Value<amclksVal,amclksVal::v00> v00{};
            constexpr MPL::Value<amclksVal,amclksVal::v01> v01{};
            constexpr MPL::Value<amclksVal,amclksVal::v10> v10{};
            constexpr MPL::Value<amclksVal,amclksVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,amclksVal> amclks{}; 
        ///Scan Module
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> smod{}; 
        ///External OSC Charge Current select
        enum class extchrgVal {
            v000=0x00000000,     ///<0.5 uA charge current.
            v001=0x00000001,     ///<1 uA charge current.
            v010=0x00000002,     ///<2 uA charge current.
            v011=0x00000003,     ///<4 uA charge current.
            v100=0x00000004,     ///<8 uA charge current.
            v101=0x00000005,     ///<16 uA charge current.
            v110=0x00000006,     ///<32 uA charge current.
            v111=0x00000007,     ///<64 uA charge current.
        };
        namespace extchrgValC{
            constexpr MPL::Value<extchrgVal,extchrgVal::v000> v000{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v001> v001{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v010> v010{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v011> v011{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v100> v100{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v101> v101{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v110> v110{};
            constexpr MPL::Value<extchrgVal,extchrgVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,extchrgVal> extchrg{}; 
        ///no description available
        enum class dvoltVal {
            v00=0x00000000,     ///<Vp = 1.33 V, Vm = 0.30 V, DV = 1.03 V.
            v01=0x00000001,     ///<Vp = 1.18 V, Vm = 0.45 V, DV = 0.73 V.
            v10=0x00000002,     ///<Vp = 1.03 V, Vm = 0.60 V, DV = 0.43 V.
            v11=0x00000003,     ///<Vp = 0.95 V, Vm = 0.67 V, DV = 0.29 V.
        };
        namespace dvoltValC{
            constexpr MPL::Value<dvoltVal,dvoltVal::v00> v00{};
            constexpr MPL::Value<dvoltVal,dvoltVal::v01> v01{};
            constexpr MPL::Value<dvoltVal,dvoltVal::v10> v10{};
            constexpr MPL::Value<dvoltVal,dvoltVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,dvoltVal> dvolt{}; 
        ///Ref OSC Charge Current select
        enum class refchrgVal {
            v000=0x00000000,     ///<0.5 uA charge current.
            v001=0x00000001,     ///<1 uA charge current.
            v010=0x00000002,     ///<2 uA charge current.
            v011=0x00000003,     ///<4 uA charge current.
            v100=0x00000004,     ///<8 uA charge current.
            v101=0x00000005,     ///<16 uA charge current.
            v110=0x00000006,     ///<32 uA charge current.
            v111=0x00000007,     ///<64 uA charge current.
        };
        namespace refchrgValC{
            constexpr MPL::Value<refchrgVal,refchrgVal::v000> v000{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v001> v001{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v010> v010{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v011> v011{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v100> v100{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v101> v101{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v110> v110{};
            constexpr MPL::Value<refchrgVal,refchrgVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,refchrgVal> refchrg{}; 
        ///R/W
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> rw{}; 
    }
    namespace Tsi0Pen{    ///<Pin Enable Register
        using Addr = Register::Address<0x40030008,0xfff00000,0,unsigned>;
        ///Touch Sensing Input Pin Enable Register 0
        enum class pen0Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen0ValC{
            constexpr MPL::Value<pen0Val,pen0Val::v0> v0{};
            constexpr MPL::Value<pen0Val,pen0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pen0Val> pen0{}; 
        ///Touch Sensing Input Pin Enable Register 1
        enum class pen1Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen1ValC{
            constexpr MPL::Value<pen1Val,pen1Val::v0> v0{};
            constexpr MPL::Value<pen1Val,pen1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pen1Val> pen1{}; 
        ///Touch Sensing Input Pin Enable Register 2
        enum class pen2Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen2ValC{
            constexpr MPL::Value<pen2Val,pen2Val::v0> v0{};
            constexpr MPL::Value<pen2Val,pen2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pen2Val> pen2{}; 
        ///Touch Sensing Input Pin Enable Register 3
        enum class pen3Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen3ValC{
            constexpr MPL::Value<pen3Val,pen3Val::v0> v0{};
            constexpr MPL::Value<pen3Val,pen3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pen3Val> pen3{}; 
        ///Touch Sensing Input Pin Enable Register 4
        enum class pen4Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen4ValC{
            constexpr MPL::Value<pen4Val,pen4Val::v0> v0{};
            constexpr MPL::Value<pen4Val,pen4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pen4Val> pen4{}; 
        ///Touch Sensing Input Pin Enable Register 5
        enum class pen5Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen5ValC{
            constexpr MPL::Value<pen5Val,pen5Val::v0> v0{};
            constexpr MPL::Value<pen5Val,pen5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pen5Val> pen5{}; 
        ///Touch Sensing Input Pin Enable Register 6
        enum class pen6Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen6ValC{
            constexpr MPL::Value<pen6Val,pen6Val::v0> v0{};
            constexpr MPL::Value<pen6Val,pen6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pen6Val> pen6{}; 
        ///Touch Sensing Input Pin Enable Register 7
        enum class pen7Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen7ValC{
            constexpr MPL::Value<pen7Val,pen7Val::v0> v0{};
            constexpr MPL::Value<pen7Val,pen7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pen7Val> pen7{}; 
        ///Touch Sensing Input Pin Enable Register 8
        enum class pen8Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen8ValC{
            constexpr MPL::Value<pen8Val,pen8Val::v0> v0{};
            constexpr MPL::Value<pen8Val,pen8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pen8Val> pen8{}; 
        ///Touch Sensing Input Pin Enable Register 9
        enum class pen9Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen9ValC{
            constexpr MPL::Value<pen9Val,pen9Val::v0> v0{};
            constexpr MPL::Value<pen9Val,pen9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pen9Val> pen9{}; 
        ///Touch Sensing Input Pin Enable Register 10
        enum class pen10Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen10ValC{
            constexpr MPL::Value<pen10Val,pen10Val::v0> v0{};
            constexpr MPL::Value<pen10Val,pen10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pen10Val> pen10{}; 
        ///Touch Sensing Input Pin Enable Register 11
        enum class pen11Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen11ValC{
            constexpr MPL::Value<pen11Val,pen11Val::v0> v0{};
            constexpr MPL::Value<pen11Val,pen11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pen11Val> pen11{}; 
        ///Touch Sensing Input Pin Enable Register 12
        enum class pen12Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen12ValC{
            constexpr MPL::Value<pen12Val,pen12Val::v0> v0{};
            constexpr MPL::Value<pen12Val,pen12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pen12Val> pen12{}; 
        ///Touch Sensing Input Pin Enable Register 13
        enum class pen13Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen13ValC{
            constexpr MPL::Value<pen13Val,pen13Val::v0> v0{};
            constexpr MPL::Value<pen13Val,pen13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pen13Val> pen13{}; 
        ///Touch Sensing Input Pin Enable Register 14
        enum class pen14Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen14ValC{
            constexpr MPL::Value<pen14Val,pen14Val::v0> v0{};
            constexpr MPL::Value<pen14Val,pen14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pen14Val> pen14{}; 
        ///Touch Sensing Input Pin Enable Register 15
        enum class pen15Val {
            v0=0x00000000,     ///<The corresponding pin is not used by TSI.
            v1=0x00000001,     ///<The corresponding pin is used by TSI.
        };
        namespace pen15ValC{
            constexpr MPL::Value<pen15Val,pen15Val::v0> v0{};
            constexpr MPL::Value<pen15Val,pen15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pen15Val> pen15{}; 
        ///Low Power Scan Pin
        enum class lpspVal {
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
    namespace Tsi0Cntr1{    ///<Counter Register
        using Addr = Register::Address<0x40030100,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cntn{}; 
    }
    namespace Tsi0Cntr3{    ///<Counter Register
        using Addr = Register::Address<0x40030104,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cntn{}; 
    }
    namespace Tsi0Cntr5{    ///<Counter Register
        using Addr = Register::Address<0x40030108,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cntn{}; 
    }
    namespace Tsi0Cntr7{    ///<Counter Register
        using Addr = Register::Address<0x4003010c,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cntn{}; 
    }
    namespace Tsi0Cntr9{    ///<Counter Register
        using Addr = Register::Address<0x40030110,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cntn{}; 
    }
    namespace Tsi0Cntr11{    ///<Counter Register
        using Addr = Register::Address<0x40030114,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cntn{}; 
    }
    namespace Tsi0Cntr13{    ///<Counter Register
        using Addr = Register::Address<0x40030118,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cntn{}; 
    }
    namespace Tsi0Cntr15{    ///<Counter Register
        using Addr = Register::Address<0x4003011c,0x00000000,0,unsigned>;
        ///TouchSensing Channel n-1 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntn1{}; 
        ///TouchSensing Channel n 16-bit counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cntn{}; 
    }
    namespace Tsi0Threshold{    ///<Low Power Channel Threshold Register
        using Addr = Register::Address<0x40030120,0x00000000,0,unsigned>;
        ///Touch Sensing Channel High Threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hthh{}; 
        ///Touch Sensing Channel Low Threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lthh{}; 
    }
}
