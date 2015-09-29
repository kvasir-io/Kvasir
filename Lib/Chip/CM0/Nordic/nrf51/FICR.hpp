#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Factory Information Configuration.
    namespace Nonecodepagesize{    ///<Code memory page size in bytes.
        using Addr = Register::Address<0x10000010,0xffffffff,0,unsigned>;
    }
    namespace Nonecodesize{    ///<Code memory size in pages.
        using Addr = Register::Address<0x10000014,0xffffffff,0,unsigned>;
    }
    namespace Noneclenr0{    ///<Length of code region 0 in bytes.
        using Addr = Register::Address<0x10000028,0xffffffff,0,unsigned>;
    }
    namespace Noneppfc{    ///<Pre-programmed factory code present.
        using Addr = Register::Address<0x1000002c,0xffffff00,0,unsigned>;
        ///Pre-programmed factory code present.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ppfc{}; 
    }
    namespace Nonenumramblock{    ///<Number of individualy controllable RAM blocks.
        using Addr = Register::Address<0x10000034,0xffffffff,0,unsigned>;
    }
    namespace Nonesizeramblocks{    ///<Size of RAM blocks in bytes.
        using Addr = Register::Address<0x10000038,0xffffffff,0,unsigned>;
    }
    namespace Nonesizeramblock0{    ///<Deprecated array of size of RAM block in bytes. This name is kept for backward compatinility purposes. Use SIZERAMBLOCKS instead.
        using Addr = Register::Address<0x10000038,0xffffffff,0,unsigned>;
    }
    namespace Nonesizeramblock1{    ///<Deprecated array of size of RAM block in bytes. This name is kept for backward compatinility purposes. Use SIZERAMBLOCKS instead.
        using Addr = Register::Address<0x1000003c,0xffffffff,0,unsigned>;
    }
    namespace Nonesizeramblock2{    ///<Deprecated array of size of RAM block in bytes. This name is kept for backward compatinility purposes. Use SIZERAMBLOCKS instead.
        using Addr = Register::Address<0x10000040,0xffffffff,0,unsigned>;
    }
    namespace Nonesizeramblock3{    ///<Deprecated array of size of RAM block in bytes. This name is kept for backward compatinility purposes. Use SIZERAMBLOCKS instead.
        using Addr = Register::Address<0x10000044,0xffffffff,0,unsigned>;
    }
    namespace Noneconfigid{    ///<Configuration identifier.
        using Addr = Register::Address<0x1000005c,0x00000000,0,unsigned>;
        ///Hardware Identification Number.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hwid{}; 
        ///Firmware Identification Number pre-loaded into the flash.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> fwid{}; 
    }
    namespace Nonedeviceid0{    ///<Device identifier.
        using Addr = Register::Address<0x10000060,0xffffffff,0,unsigned>;
    }
    namespace Nonedeviceid1{    ///<Device identifier.
        using Addr = Register::Address<0x10000064,0xffffffff,0,unsigned>;
    }
    namespace Noneer0{    ///<Encryption root.
        using Addr = Register::Address<0x10000080,0xffffffff,0,unsigned>;
    }
    namespace Noneer1{    ///<Encryption root.
        using Addr = Register::Address<0x10000084,0xffffffff,0,unsigned>;
    }
    namespace Noneer2{    ///<Encryption root.
        using Addr = Register::Address<0x10000088,0xffffffff,0,unsigned>;
    }
    namespace Noneer3{    ///<Encryption root.
        using Addr = Register::Address<0x1000008c,0xffffffff,0,unsigned>;
    }
    namespace Noneir0{    ///<Identity root.
        using Addr = Register::Address<0x10000090,0xffffffff,0,unsigned>;
    }
    namespace Noneir1{    ///<Identity root.
        using Addr = Register::Address<0x10000094,0xffffffff,0,unsigned>;
    }
    namespace Noneir2{    ///<Identity root.
        using Addr = Register::Address<0x10000098,0xffffffff,0,unsigned>;
    }
    namespace Noneir3{    ///<Identity root.
        using Addr = Register::Address<0x1000009c,0xffffffff,0,unsigned>;
    }
    namespace Nonedeviceaddrtype{    ///<Device address type.
        using Addr = Register::Address<0x100000a0,0xfffffffe,0,unsigned>;
        ///Device address type.
        enum class deviceaddrtypeVal {
            public_=0x00000000,     ///<Public address.
            random=0x00000001,     ///<Random address.
        };
        namespace deviceaddrtypeValC{
            constexpr MPL::Value<deviceaddrtypeVal,deviceaddrtypeVal::public_> public_{};
            constexpr MPL::Value<deviceaddrtypeVal,deviceaddrtypeVal::random> random{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,deviceaddrtypeVal> deviceaddrtype{}; 
    }
    namespace Nonedeviceaddr0{    ///<Device address.
        using Addr = Register::Address<0x100000a4,0xffffffff,0,unsigned>;
    }
    namespace Nonedeviceaddr1{    ///<Device address.
        using Addr = Register::Address<0x100000a8,0xffffffff,0,unsigned>;
    }
    namespace Noneoverrideen{    ///<Radio calibration override enable.
        using Addr = Register::Address<0x100000ac,0xfffffff6,0,unsigned>;
        ///Override default values for NRF_1Mbit mode.
        enum class nrf1mbitVal {
            override=0x00000000,     ///<Override the default values for NRF_1Mbit mode.
            notoverride=0x00000001,     ///<Do not override the default values for NRF_1Mbit mode.
        };
        namespace nrf1mbitValC{
            constexpr MPL::Value<nrf1mbitVal,nrf1mbitVal::override> override{};
            constexpr MPL::Value<nrf1mbitVal,nrf1mbitVal::notoverride> notoverride{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,nrf1mbitVal> nrf1mbit{}; 
        ///Override default values for BLE_1Mbit mode.
        enum class ble1mbitVal {
            override=0x00000000,     ///<Override the default values for BLE_1Mbit mode.
            notoverride=0x00000001,     ///<Do not override the default values for BLE_1Mbit mode.
        };
        namespace ble1mbitValC{
            constexpr MPL::Value<ble1mbitVal,ble1mbitVal::override> override{};
            constexpr MPL::Value<ble1mbitVal,ble1mbitVal::notoverride> notoverride{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ble1mbitVal> ble1mbit{}; 
    }
    namespace Nonenrf1mbit0{    ///<Override values for the OVERRIDEn registers in RADIO for NRF_1Mbit mode.
        using Addr = Register::Address<0x100000b0,0xffffffff,0,unsigned>;
    }
    namespace Nonenrf1mbit1{    ///<Override values for the OVERRIDEn registers in RADIO for NRF_1Mbit mode.
        using Addr = Register::Address<0x100000b4,0xffffffff,0,unsigned>;
    }
    namespace Nonenrf1mbit2{    ///<Override values for the OVERRIDEn registers in RADIO for NRF_1Mbit mode.
        using Addr = Register::Address<0x100000b8,0xffffffff,0,unsigned>;
    }
    namespace Nonenrf1mbit3{    ///<Override values for the OVERRIDEn registers in RADIO for NRF_1Mbit mode.
        using Addr = Register::Address<0x100000bc,0xffffffff,0,unsigned>;
    }
    namespace Nonenrf1mbit4{    ///<Override values for the OVERRIDEn registers in RADIO for NRF_1Mbit mode.
        using Addr = Register::Address<0x100000c0,0xffffffff,0,unsigned>;
    }
    namespace Noneble1mbit0{    ///<Override values for the OVERRIDEn registers in RADIO for BLE_1Mbit mode.
        using Addr = Register::Address<0x100000ec,0xffffffff,0,unsigned>;
    }
    namespace Noneble1mbit1{    ///<Override values for the OVERRIDEn registers in RADIO for BLE_1Mbit mode.
        using Addr = Register::Address<0x100000f0,0xffffffff,0,unsigned>;
    }
    namespace Noneble1mbit2{    ///<Override values for the OVERRIDEn registers in RADIO for BLE_1Mbit mode.
        using Addr = Register::Address<0x100000f4,0xffffffff,0,unsigned>;
    }
    namespace Noneble1mbit3{    ///<Override values for the OVERRIDEn registers in RADIO for BLE_1Mbit mode.
        using Addr = Register::Address<0x100000f8,0xffffffff,0,unsigned>;
    }
    namespace Noneble1mbit4{    ///<Override values for the OVERRIDEn registers in RADIO for BLE_1Mbit mode.
        using Addr = Register::Address<0x100000fc,0xffffffff,0,unsigned>;
    }
}
