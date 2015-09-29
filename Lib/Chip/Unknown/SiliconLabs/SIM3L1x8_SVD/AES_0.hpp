#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40027000,0x3cfcc0f8,0,unsigned>;
        ///AES Transfer Start. 
        enum class xfrstaVal {
            start=0x00000001,     ///<Start the AES operation.
        };
        namespace xfrstaValC{
            constexpr MPL::Value<xfrstaVal,xfrstaVal::start> start{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,xfrstaVal> xfrsta{}; 
        ///Key Capture Enable. 
        enum class keycpenVal {
            disabled=0x00000000,     ///<Disable key capture.
            enabled=0x00000001,     ///<Enable key capture.
        };
        namespace keycpenValC{
            constexpr MPL::Value<keycpenVal,keycpenVal::disabled> disabled{};
            constexpr MPL::Value<keycpenVal,keycpenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,keycpenVal> keycpen{}; 
        ///Encryption/Decryption Mode. 
        enum class edmdVal {
            decrypt=0x00000000,     ///<AES module performs a decryption operation
            encrypt=0x00000001,     ///<AES module performs an encryption operation.
        };
        namespace edmdValC{
            constexpr MPL::Value<edmdVal,edmdVal::decrypt> decrypt{};
            constexpr MPL::Value<edmdVal,edmdVal::encrypt> encrypt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,edmdVal> edmd{}; 
        ///Software Mode Enable. 
        enum class swmdenVal {
            disabled=0x00000000,     ///<Disable software mode.
            enabled=0x00000001,     ///<Enable software mode.
        };
        namespace swmdenValC{
            constexpr MPL::Value<swmdenVal,swmdenVal::disabled> disabled{};
            constexpr MPL::Value<swmdenVal,swmdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,swmdenVal> swmden{}; 
        ///Bypass AES Operation Enable. 
        enum class benVal {
            disabled=0x00000000,     ///<Do not bypass AES operations.
            enabled=0x00000001,     ///<Bypass AES operations.
        };
        namespace benValC{
            constexpr MPL::Value<benVal,benVal::disabled> disabled{};
            constexpr MPL::Value<benVal,benVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,benVal> ben{}; 
        ///XOR Enable. 
        enum class xorenVal {
            xorDisabled=0x00000000,     ///<Disable the XOR paths.
            xorInput=0x00000001,     ///<Enable the XOR input path, disable the XOR output path.
            xorOutput=0x00000002,     ///<Disable the XOR input path, enable the XOR output path.
        };
        namespace xorenValC{
            constexpr MPL::Value<xorenVal,xorenVal::xorDisabled> xorDisabled{};
            constexpr MPL::Value<xorenVal,xorenVal::xorInput> xorInput{};
            constexpr MPL::Value<xorenVal,xorenVal::xorOutput> xorOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,xorenVal> xoren{}; 
        ///Hardware Counter Mode Enable. 
        enum class hctrenVal {
            disabled=0x00000000,     ///<Disable hardware counter mode.
            enabled=0x00000001,     ///<Enable hardware counter mode.
        };
        namespace hctrenValC{
            constexpr MPL::Value<hctrenVal,hctrenVal::disabled> disabled{};
            constexpr MPL::Value<hctrenVal,hctrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,hctrenVal> hctren{}; 
        ///Hardware Cipher-Block Chaining Mode Enable. 
        enum class hcbcenVal {
            disabled=0x00000000,     ///<Disable hardware cipher-block chaining (CBC) mode.
            enabled=0x00000001,     ///<Enable hardware cipher-block chaining (CBC) mode.
        };
        namespace hcbcenValC{
            constexpr MPL::Value<hcbcenVal,hcbcenVal::disabled> disabled{};
            constexpr MPL::Value<hcbcenVal,hcbcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,hcbcenVal> hcbcen{}; 
        ///Keystore Size Select. 
        enum class keysizeVal {
            key128=0x00000000,     ///<Key is composed of 128 bits.
            key192=0x00000001,     ///<Key is composed of 192 bits.
            key256=0x00000002,     ///<Key is composed of 256 bits.
        };
        namespace keysizeValC{
            constexpr MPL::Value<keysizeVal,keysizeVal::key128> key128{};
            constexpr MPL::Value<keysizeVal,keysizeVal::key192> key192{};
            constexpr MPL::Value<keysizeVal,keysizeVal::key256> key256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,keysizeVal> keysize{}; 
        ///Error Interrupt Enable. 
        enum class errienVal {
            disabled=0x00000000,     ///<Disable the error interrupt.
            enabled=0x00000001,     ///<Enable the error interrupt. An interrupt is generated when the Input/Output Data FIFO Overun (DORI), Input/Output Data FIFO Underun (DURI), or XOR Data FIFO Overrun (XORI) flags are set.
        };
        namespace errienValC{
            constexpr MPL::Value<errienVal,errienVal::disabled> disabled{};
            constexpr MPL::Value<errienVal,errienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,errienVal> errien{}; 
        ///Operation Complete Interrupt Enable. 
        enum class ocienVal {
            disabled=0x00000000,     ///<Disable the operation complete interrupt.
            enabled=0x00000001,     ///<Enable the operation complete interrupt. An interrupt is generated when the Operation Complete Interrupt (OCI) flag is set.
        };
        namespace ocienValC{
            constexpr MPL::Value<ocienVal,ocienVal::disabled> disabled{};
            constexpr MPL::Value<ocienVal,ocienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ocienVal> ocien{}; 
        ///AES Debug Mode. 
        enum class dbgmdVal {
            halt=0x00000000,     ///<A debug breakpoint will cause the AES module to halt.
            run=0x00000001,     ///<The AES module will continue to operate while the core is halted in debug mode.
        };
        namespace dbgmdValC{
            constexpr MPL::Value<dbgmdVal,dbgmdVal::halt> halt{};
            constexpr MPL::Value<dbgmdVal,dbgmdVal::run> run{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dbgmdVal> dbgmd{}; 
        ///Module Soft Reset. 
        enum class resetVal {
            inactive=0x00000000,     ///<AES module is not in soft reset.
            active=0x00000001,     ///<AES module is in soft reset and none of the module bits can be accessed.
        };
        namespace resetValC{
            constexpr MPL::Value<resetVal,resetVal::inactive> inactive{};
            constexpr MPL::Value<resetVal,resetVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,resetVal> reset{}; 
    }
    namespace Nonexfrsize{    ///<Number of Blocks
        using Addr = Register::Address<0x40027010,0xfffff800,0,unsigned>;
        ///Transfer Size. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> xfrsize{}; 
    }
    namespace Nonedatafifo{    ///<Input/Output Data FIFO Access
        using Addr = Register::Address<0x40027020,0x00000000,0,unsigned>;
        ///Input/Output Data FIFO Access. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datafifo{}; 
    }
    namespace Nonexorfifo{    ///<XOR Data FIFO Access
        using Addr = Register::Address<0x40027030,0x00000000,0,unsigned>;
        ///XOR Data FIFO Access. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> xorfifo{}; 
    }
    namespace Nonehwkey0{    ///<Hardware Key Word 0
        using Addr = Register::Address<0x40027040,0x00000000,0,unsigned>;
        ///Hardware Key Word 0. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey0{}; 
    }
    namespace Nonehwkey1{    ///<Hardware Key Word 1
        using Addr = Register::Address<0x40027050,0x00000000,0,unsigned>;
        ///Hardware Key Word 1. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey1{}; 
    }
    namespace Nonehwkey2{    ///<Hardware Key Word 2
        using Addr = Register::Address<0x40027060,0x00000000,0,unsigned>;
        ///Hardware Key Word 2. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey2{}; 
    }
    namespace Nonehwkey3{    ///<Hardware Key Word 3
        using Addr = Register::Address<0x40027070,0x00000000,0,unsigned>;
        ///Hardware Key Word 3. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey3{}; 
    }
    namespace Nonehwkey4{    ///<Hardware Key Word 4
        using Addr = Register::Address<0x40027080,0x00000000,0,unsigned>;
        ///Hardware Key Word 4. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey4{}; 
    }
    namespace Nonehwkey5{    ///<Hardware Key Word 5
        using Addr = Register::Address<0x40027090,0x00000000,0,unsigned>;
        ///Hardware Key Word 5. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey5{}; 
    }
    namespace Nonehwkey6{    ///<Hardware Key Word 6
        using Addr = Register::Address<0x400270a0,0x00000000,0,unsigned>;
        ///Hardware Key Word 6. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey6{}; 
    }
    namespace Nonehwkey7{    ///<Hardware Key Word 7
        using Addr = Register::Address<0x400270b0,0x00000000,0,unsigned>;
        ///Hardware Key Word 7. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey7{}; 
    }
    namespace Nonehwctr0{    ///<Hardware Counter Word 0
        using Addr = Register::Address<0x400270c0,0x00000000,0,unsigned>;
        ///Hardware Counter Word 0. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwctr0{}; 
    }
    namespace Nonehwctr1{    ///<Hardware Counter Word 1
        using Addr = Register::Address<0x400270d0,0x00000000,0,unsigned>;
        ///Hardware Counter Word 1. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwctr1{}; 
    }
    namespace Nonehwctr2{    ///<Hardware Counter Word 2
        using Addr = Register::Address<0x400270e0,0x00000000,0,unsigned>;
        ///Hardware Counter Word 2. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwctr2{}; 
    }
    namespace Nonehwctr3{    ///<Hardware Counter Word 3
        using Addr = Register::Address<0x400270f0,0x00000000,0,unsigned>;
        ///Hardware Counter Word 3. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwctr3{}; 
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x40027100,0x0effe0e0,0,unsigned>;
        ///Input/Output Data FIFO Level. 
        enum class dfifolvlVal {
            empty=0x00000000,     ///<Input/Output data FIFO is empty.
            v1Byte=0x00000001,     ///<Input/Output data FIFO contains 1 byte.
            v2Bytes=0x00000002,     ///<Input/Output data FIFO contains 2 bytes.
            v3Bytes=0x00000003,     ///<Input/Output data FIFO contains 3 bytes.
            v4Bytes=0x00000004,     ///<Input/Output data FIFO contains 4 bytes.
            v5Bytes=0x00000005,     ///<Input/Output data FIFO contains 5 bytes.
            v6Bytes=0x00000006,     ///<Input/Output data FIFO contains 6 bytes.
            v7Bytes=0x00000007,     ///<Input/Output data FIFO contains 7 bytes.
            v8Bytes=0x00000008,     ///<Input/Output data FIFO contains 8 bytes.
            v9Bytes=0x00000009,     ///<Input/Output data FIFO contains 9 bytes.
            v10Bytes=0x0000000a,     ///<Input/Output data FIFO contains 10 bytes.
            v11Bytes=0x0000000b,     ///<Input/Output data FIFO contains 11 bytes.
            v12Bytes=0x0000000c,     ///<Input/Output data FIFO contains 12 bytes.
            v13Bytes=0x0000000d,     ///<Input/Output data FIFO contains 13 bytes.
            v14Bytes=0x0000000e,     ///<Input/Output data FIFO contains 14 bytes.
            v15Bytes=0x0000000f,     ///<Input/Output data FIFO contains 15 bytes.
            full=0x00000010,     ///<Input/Output data FIFO contains 16 bytes (full).
        };
        namespace dfifolvlValC{
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::empty> empty{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v1Byte> v1Byte{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v2Bytes> v2Bytes{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v3Bytes> v3Bytes{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v4Bytes> v4Bytes{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v5Bytes> v5Bytes{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v6Bytes> v6Bytes{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v7Bytes> v7Bytes{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v8Bytes> v8Bytes{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v9Bytes> v9Bytes{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v10Bytes> v10Bytes{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v11Bytes> v11Bytes{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v12Bytes> v12Bytes{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v13Bytes> v13Bytes{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v14Bytes> v14Bytes{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v15Bytes> v15Bytes{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::full> full{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,dfifolvlVal> dfifolvl{}; 
        ///XOR Data FIFO Level. 
        enum class xfifolvlVal {
            empty=0x00000000,     ///<XOR data FIFO is empty.
            v1Byte=0x00000001,     ///<XOR data FIFO contains 1 byte.
            v2Bytes=0x00000002,     ///<XOR data FIFO contains 2 bytes.
            v3Bytes=0x00000003,     ///<XOR data FIFO contains 3 bytes.
            v4Bytes=0x00000004,     ///<XOR data FIFO contains 4 bytes.
            v5Bytes=0x00000005,     ///<XOR data FIFO contains 5 bytes.
            v6Bytes=0x00000006,     ///<XOR data FIFO contains 6 bytes.
            v7Bytes=0x00000007,     ///<XOR data FIFO contains 7 bytes.
            v8Bytes=0x00000008,     ///<XOR data FIFO contains 8 bytes.
            v9Bytes=0x00000009,     ///<XOR data FIFO contains 9 bytes.
            v10Bytes=0x0000000a,     ///<XOR data FIFO contains 10 bytes.
            v11Bytes=0x0000000b,     ///<XOR data FIFO contains 11 bytes.
            v12Bytes=0x0000000c,     ///<XOR data FIFO contains 12 bytes.
            v13Bytes=0x0000000d,     ///<XOR data FIFO contains 13 bytes.
            v14Bytes=0x0000000e,     ///<XOR data FIFO contains 14 bytes.
            v15Bytes=0x0000000f,     ///<XOR data FIFO contains 15 bytes.
            full=0x00000010,     ///<XOR data FIFO contains 16 bytes (full).
        };
        namespace xfifolvlValC{
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::empty> empty{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v1Byte> v1Byte{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v2Bytes> v2Bytes{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v3Bytes> v3Bytes{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v4Bytes> v4Bytes{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v5Bytes> v5Bytes{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v6Bytes> v6Bytes{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v7Bytes> v7Bytes{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v8Bytes> v8Bytes{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v9Bytes> v9Bytes{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v10Bytes> v10Bytes{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v11Bytes> v11Bytes{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v12Bytes> v12Bytes{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v13Bytes> v13Bytes{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v14Bytes> v14Bytes{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v15Bytes> v15Bytes{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::full> full{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,xfifolvlVal> xfifolvl{}; 
        ///Module Busy Flag. 
        enum class busyfVal {
            notSet=0x00000000,     ///<AES module is not busy.
            set=0x00000001,     ///<AES module is completing an operation.
        };
        namespace busyfValC{
            constexpr MPL::Value<busyfVal,busyfVal::notSet> notSet{};
            constexpr MPL::Value<busyfVal,busyfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,busyfVal> busyf{}; 
        ///Input/Output Data FIFO Underrun Interrupt Flag. 
        enum class duriVal {
            notSet=0x00000000,     ///<No input/output data FIFO underrun.
            set=0x00000001,     ///<An input/output data FIFO underrun has occurred.
        };
        namespace duriValC{
            constexpr MPL::Value<duriVal,duriVal::notSet> notSet{};
            constexpr MPL::Value<duriVal,duriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,duriVal> duri{}; 
        ///Input/Output Data FIFO Overrun Interrupt Flag. 
        enum class doriVal {
            notSet=0x00000000,     ///<No input/output data FIFO overrun.
            set=0x00000001,     ///<An input/output data FIFO overrun has occurred.
        };
        namespace doriValC{
            constexpr MPL::Value<doriVal,doriVal::notSet> notSet{};
            constexpr MPL::Value<doriVal,doriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,doriVal> dori{}; 
        ///XOR Data FIFO Overrun Interrupt Flag. 
        enum class xoriVal {
            notSet=0x00000000,     ///<No XOR data FIFO overrun.
            set=0x00000001,     ///<An XOR data FIFO overrun has occurred.
        };
        namespace xoriValC{
            constexpr MPL::Value<xoriVal,xoriVal::notSet> notSet{};
            constexpr MPL::Value<xoriVal,xoriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,xoriVal> xori{}; 
        ///Operation Complete Interrupt Flag. 
        enum class ociVal {
            notSet=0x00000000,     ///<AES operation complete interrupt has not occurred.
            set=0x00000001,     ///<AES operation complete interrupt occurred.
        };
        namespace ociValC{
            constexpr MPL::Value<ociVal,ociVal::notSet> notSet{};
            constexpr MPL::Value<ociVal,ociVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ociVal> oci{}; 
    }
}
