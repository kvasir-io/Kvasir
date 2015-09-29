#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Touch sense input
    namespace Tsi0Gencs{    ///<TSI General Control and Status Register
        using Addr = Register::Address<0x40045000,0x60000001,0,unsigned>;
        ///CURSW
        enum class curswVal {
            v0=0x00000000,     ///<The current source pair are not swapped.
            v1=0x00000001,     ///<The current source pair are swapped.
        };
        namespace curswValC{
            constexpr MPL::Value<curswVal,curswVal::v0> v0{};
            constexpr MPL::Value<curswVal,curswVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,curswVal> cursw{}; 
        ///End of Scan Flag
        enum class eosfVal {
            v0=0x00000000,     ///<Scan not complete.
            v1=0x00000001,     ///<Scan complete.
        };
        namespace eosfValC{
            constexpr MPL::Value<eosfVal,eosfVal::v0> v0{};
            constexpr MPL::Value<eosfVal,eosfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,eosfVal> eosf{}; 
        ///Scan In Progress Status
        enum class scnipVal {
            v0=0x00000000,     ///<No scan in progress.
            v1=0x00000001,     ///<Scan in progress.
        };
        namespace scnipValC{
            constexpr MPL::Value<scnipVal,scnipVal::v0> v0{};
            constexpr MPL::Value<scnipVal,scnipVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,scnipVal> scnip{}; 
        ///Scan Trigger Mode
        enum class stmVal {
            v0=0x00000000,     ///<Software trigger scan.
            v1=0x00000001,     ///<Hardware trigger scan.
        };
        namespace stmValC{
            constexpr MPL::Value<stmVal,stmVal::v0> v0{};
            constexpr MPL::Value<stmVal,stmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,stmVal> stm{}; 
        ///TSI STOP Enable
        enum class stpeVal {
            v0=0x00000000,     ///<TSI is disabled when MCU goes into low power mode.
            v1=0x00000001,     ///<Allows TSI to continue running in all low power modes.
        };
        namespace stpeValC{
            constexpr MPL::Value<stpeVal,stpeVal::v0> v0{};
            constexpr MPL::Value<stpeVal,stpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,stpeVal> stpe{}; 
        ///Touch Sensing Input Interrupt Enable
        enum class tsiienVal {
            v0=0x00000000,     ///<TSI interrupt is disabled.
            v1=0x00000001,     ///<TSI interrupt is enabled.
        };
        namespace tsiienValC{
            constexpr MPL::Value<tsiienVal,tsiienVal::v0> v0{};
            constexpr MPL::Value<tsiienVal,tsiienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tsiienVal> tsiien{}; 
        ///Touch Sensing Input Module Enable
        enum class tsienVal {
            v0=0x00000000,     ///<TSI module disabled.
            v1=0x00000001,     ///<TSI module enabled.
        };
        namespace tsienValC{
            constexpr MPL::Value<tsienVal,tsienVal::v0> v0{};
            constexpr MPL::Value<tsienVal,tsienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tsienVal> tsien{}; 
        ///NSCN
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,nscnVal> nscn{}; 
        ///PS
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,psVal> ps{}; 
        ///EXTCHRG
        enum class extchrgVal {
            v000=0x00000000,     ///<500 nA.
            v001=0x00000001,     ///<1 uA.
            v010=0x00000002,     ///<2 uA.
            v011=0x00000003,     ///<4 uA.
            v100=0x00000004,     ///<8 uA.
            v101=0x00000005,     ///<16 uA.
            v110=0x00000006,     ///<32 uA.
            v111=0x00000007,     ///<64 uA.
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
        ///DVOLT
        enum class dvoltVal {
            v00=0x00000000,     ///<DV = 1.03 V; VP = 1.33 V; Vm = 0.30 V.
            v01=0x00000001,     ///<DV = 0.73 V; VP = 1.18 V; Vm = 0.45 V.
            v10=0x00000002,     ///<DV = 0.43 V; VP = 1.03 V; Vm = 0.60 V.
            v11=0x00000003,     ///<DV = 0.29 V; VP = 0.95 V; Vm = 0.67 V.
        };
        namespace dvoltValC{
            constexpr MPL::Value<dvoltVal,dvoltVal::v00> v00{};
            constexpr MPL::Value<dvoltVal,dvoltVal::v01> v01{};
            constexpr MPL::Value<dvoltVal,dvoltVal::v10> v10{};
            constexpr MPL::Value<dvoltVal,dvoltVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,dvoltVal> dvolt{}; 
        ///REFCHRG
        enum class refchrgVal {
            v000=0x00000000,     ///<500 nA.
            v001=0x00000001,     ///<1 uA.
            v010=0x00000002,     ///<2 uA.
            v011=0x00000003,     ///<4 uA.
            v100=0x00000004,     ///<8 uA.
            v101=0x00000005,     ///<16 uA.
            v110=0x00000006,     ///<32 uA.
            v111=0x00000007,     ///<64 uA.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,refchrgVal> refchrg{}; 
        ///TSI analog modes setup and status bits.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> mode{}; 
        ///End-of-scan or Out-of-Range Interrupt Selection
        enum class esorVal {
            v0=0x00000000,     ///<Out-of-range interrupt is allowed.
            v1=0x00000001,     ///<End-of-scan interrupt is allowed.
        };
        namespace esorValC{
            constexpr MPL::Value<esorVal,esorVal::v0> v0{};
            constexpr MPL::Value<esorVal,esorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,esorVal> esor{}; 
        ///Out of Range Flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> outrgf{}; 
    }
    namespace Tsi0Data{    ///<TSI DATA Register
        using Addr = Register::Address<0x40045004,0x0f3f0000,0,unsigned>;
        ///TSI Conversion Counter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tsicnt{}; 
        ///Software Trigger Start
        enum class swtsVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Start a scan to determine which channel is specified by TSI_DATA[TSICH].
        };
        namespace swtsValC{
            constexpr MPL::Value<swtsVal,swtsVal::v0> v0{};
            constexpr MPL::Value<swtsVal,swtsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,swtsVal> swts{}; 
        ///DMA Transfer Enabled
        enum class dmaenVal {
            v0=0x00000000,     ///<Interrupt is selected when the interrupt enable bit is set and the corresponding TSI events assert.
            v1=0x00000001,     ///<DMA transfer request is selected when the interrupt enable bit is set and the corresponding TSI events assert.
        };
        namespace dmaenValC{
            constexpr MPL::Value<dmaenVal,dmaenVal::v0> v0{};
            constexpr MPL::Value<dmaenVal,dmaenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,dmaenVal> dmaen{}; 
        ///TSICH
        enum class tsichVal {
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
        namespace tsichValC{
            constexpr MPL::Value<tsichVal,tsichVal::v0000> v0000{};
            constexpr MPL::Value<tsichVal,tsichVal::v0001> v0001{};
            constexpr MPL::Value<tsichVal,tsichVal::v0010> v0010{};
            constexpr MPL::Value<tsichVal,tsichVal::v0011> v0011{};
            constexpr MPL::Value<tsichVal,tsichVal::v0100> v0100{};
            constexpr MPL::Value<tsichVal,tsichVal::v0101> v0101{};
            constexpr MPL::Value<tsichVal,tsichVal::v0110> v0110{};
            constexpr MPL::Value<tsichVal,tsichVal::v0111> v0111{};
            constexpr MPL::Value<tsichVal,tsichVal::v1000> v1000{};
            constexpr MPL::Value<tsichVal,tsichVal::v1001> v1001{};
            constexpr MPL::Value<tsichVal,tsichVal::v1010> v1010{};
            constexpr MPL::Value<tsichVal,tsichVal::v1011> v1011{};
            constexpr MPL::Value<tsichVal,tsichVal::v1100> v1100{};
            constexpr MPL::Value<tsichVal,tsichVal::v1101> v1101{};
            constexpr MPL::Value<tsichVal,tsichVal::v1110> v1110{};
            constexpr MPL::Value<tsichVal,tsichVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,tsichVal> tsich{}; 
    }
    namespace Tsi0Tshd{    ///<TSI Threshold Register
        using Addr = Register::Address<0x40045008,0x00000000,0,unsigned>;
        ///TSI Wakeup Channel Low-threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> thresl{}; 
        ///TSI Wakeup Channel High-threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> thresh{}; 
    }
}
