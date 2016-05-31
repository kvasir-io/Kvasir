#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Factory Information Configuration.
    namespace FicrCodepagesize{    ///<Code memory page size in bytes.
        using Addr = Register::Address<0x10000010,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrCodesize{    ///<Code memory size in pages.
        using Addr = Register::Address<0x10000014,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrClenr0{    ///<Length of code region 0 in bytes.
        using Addr = Register::Address<0x10000028,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrPpfc{    ///<Pre-programmed factory code present.
        using Addr = Register::Address<0x1000002c,0xffffff00,0x00000000,unsigned>;
        ///Pre-programmed factory code present.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ppfc{}; 
    }
    namespace FicrNumramblock{    ///<Number of individualy controllable RAM blocks.
        using Addr = Register::Address<0x10000034,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrSizeramblocks{    ///<Size of RAM blocks in bytes.
        using Addr = Register::Address<0x10000038,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrConfigid{    ///<Configuration identifier.
        using Addr = Register::Address<0x1000005c,0x00000000,0x00000000,unsigned>;
        ///Hardware Identification Number.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hwid{}; 
        ///Firmware Identification Number pre-loaded into the flash.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> fwid{}; 
    }
    namespace FicrDeviceaddrtype{    ///<Device address type.
        using Addr = Register::Address<0x100000a0,0xfffffffe,0x00000000,unsigned>;
        ///Device address type.
        enum class DeviceaddrtypeVal {
            public_=0x00000000,     ///<Public address.
            random=0x00000001,     ///<Random address.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DeviceaddrtypeVal> deviceaddrtype{}; 
        namespace DeviceaddrtypeValC{
            constexpr Register::FieldValue<decltype(deviceaddrtype)::Type,DeviceaddrtypeVal::public_> public_{};
            constexpr Register::FieldValue<decltype(deviceaddrtype)::Type,DeviceaddrtypeVal::random> random{};
        }
    }
    namespace FicrOverrideen{    ///<Radio calibration override enable.
        using Addr = Register::Address<0x100000ac,0xfffffff6,0x00000000,unsigned>;
        ///Override default values for NRF_1Mbit mode.
        enum class Nrf1mbitVal {
            override=0x00000000,     ///<Override the default values for NRF_1Mbit mode.
            notoverride=0x00000001,     ///<Do not override the default values for NRF_1Mbit mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Nrf1mbitVal> nrf1mbit{}; 
        namespace Nrf1mbitValC{
            constexpr Register::FieldValue<decltype(nrf1mbit)::Type,Nrf1mbitVal::override> override{};
            constexpr Register::FieldValue<decltype(nrf1mbit)::Type,Nrf1mbitVal::notoverride> notoverride{};
        }
        ///Override default values for BLE_1Mbit mode.
        enum class Ble1mbitVal {
            override=0x00000000,     ///<Override the default values for BLE_1Mbit mode.
            notoverride=0x00000001,     ///<Do not override the default values for BLE_1Mbit mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ble1mbitVal> ble1mbit{}; 
        namespace Ble1mbitValC{
            constexpr Register::FieldValue<decltype(ble1mbit)::Type,Ble1mbitVal::override> override{};
            constexpr Register::FieldValue<decltype(ble1mbit)::Type,Ble1mbitVal::notoverride> notoverride{};
        }
    }
    namespace FicrSizeramblock0{    ///<Deprecated array of size of RAM block in bytes. This name is kept for backward compatinility purposes. Use SIZERAMBLOCKS instead.
        using Addr = Register::Address<0x10000038,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrSizeramblock1{    ///<Deprecated array of size of RAM block in bytes. This name is kept for backward compatinility purposes. Use SIZERAMBLOCKS instead.
        using Addr = Register::Address<0x1000003c,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrSizeramblock2{    ///<Deprecated array of size of RAM block in bytes. This name is kept for backward compatinility purposes. Use SIZERAMBLOCKS instead.
        using Addr = Register::Address<0x10000040,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrSizeramblock3{    ///<Deprecated array of size of RAM block in bytes. This name is kept for backward compatinility purposes. Use SIZERAMBLOCKS instead.
        using Addr = Register::Address<0x10000044,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrDeviceid0{    ///<Device identifier.
        using Addr = Register::Address<0x10000060,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrDeviceid1{    ///<Device identifier.
        using Addr = Register::Address<0x10000064,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrEr0{    ///<Encryption root.
        using Addr = Register::Address<0x10000080,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrEr1{    ///<Encryption root.
        using Addr = Register::Address<0x10000084,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrEr2{    ///<Encryption root.
        using Addr = Register::Address<0x10000088,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrEr3{    ///<Encryption root.
        using Addr = Register::Address<0x1000008c,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrIr0{    ///<Identity root.
        using Addr = Register::Address<0x10000090,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrIr1{    ///<Identity root.
        using Addr = Register::Address<0x10000094,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrIr2{    ///<Identity root.
        using Addr = Register::Address<0x10000098,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrIr3{    ///<Identity root.
        using Addr = Register::Address<0x1000009c,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrDeviceaddr0{    ///<Device address.
        using Addr = Register::Address<0x100000a4,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrDeviceaddr1{    ///<Device address.
        using Addr = Register::Address<0x100000a8,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrNrf1mbit0{    ///<Override values for the OVERRIDEn registers in RADIO for NRF_1Mbit mode.
        using Addr = Register::Address<0x100000b0,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrNrf1mbit1{    ///<Override values for the OVERRIDEn registers in RADIO for NRF_1Mbit mode.
        using Addr = Register::Address<0x100000b4,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrNrf1mbit2{    ///<Override values for the OVERRIDEn registers in RADIO for NRF_1Mbit mode.
        using Addr = Register::Address<0x100000b8,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrNrf1mbit3{    ///<Override values for the OVERRIDEn registers in RADIO for NRF_1Mbit mode.
        using Addr = Register::Address<0x100000bc,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrNrf1mbit4{    ///<Override values for the OVERRIDEn registers in RADIO for NRF_1Mbit mode.
        using Addr = Register::Address<0x100000c0,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrBle1mbit0{    ///<Override values for the OVERRIDEn registers in RADIO for BLE_1Mbit mode.
        using Addr = Register::Address<0x100000ec,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrBle1mbit1{    ///<Override values for the OVERRIDEn registers in RADIO for BLE_1Mbit mode.
        using Addr = Register::Address<0x100000f0,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrBle1mbit2{    ///<Override values for the OVERRIDEn registers in RADIO for BLE_1Mbit mode.
        using Addr = Register::Address<0x100000f4,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrBle1mbit3{    ///<Override values for the OVERRIDEn registers in RADIO for BLE_1Mbit mode.
        using Addr = Register::Address<0x100000f8,0xffffffff,0x00000000,unsigned>;
    }
    namespace FicrBle1mbit4{    ///<Override values for the OVERRIDEn registers in RADIO for BLE_1Mbit mode.
        using Addr = Register::Address<0x100000fc,0xffffffff,0x00000000,unsigned>;
    }
}
