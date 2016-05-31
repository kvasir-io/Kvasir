#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Aes0Control{    ///<Module Control
        using Addr = Register::Address<0x40027000,0x3cfcc0f8,0x00000000,unsigned>;
        ///AES Transfer Start. 
        enum class XfrstaVal {
            start=0x00000001,     ///<Start the AES operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,XfrstaVal> xfrsta{}; 
        namespace XfrstaValC{
            constexpr Register::FieldValue<decltype(xfrsta)::Type,XfrstaVal::start> start{};
        }
        ///Key Capture Enable. 
        enum class KeycpenVal {
            disabled=0x00000000,     ///<Disable key capture.
            enabled=0x00000001,     ///<Enable key capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,KeycpenVal> keycpen{}; 
        namespace KeycpenValC{
            constexpr Register::FieldValue<decltype(keycpen)::Type,KeycpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(keycpen)::Type,KeycpenVal::enabled> enabled{};
        }
        ///Encryption/Decryption Mode. 
        enum class EdmdVal {
            decrypt=0x00000000,     ///<AES module performs a decryption operation
            encrypt=0x00000001,     ///<AES module performs an encryption operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,EdmdVal> edmd{}; 
        namespace EdmdValC{
            constexpr Register::FieldValue<decltype(edmd)::Type,EdmdVal::decrypt> decrypt{};
            constexpr Register::FieldValue<decltype(edmd)::Type,EdmdVal::encrypt> encrypt{};
        }
        ///Software Mode Enable. 
        enum class SwmdenVal {
            disabled=0x00000000,     ///<Disable software mode.
            enabled=0x00000001,     ///<Enable software mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SwmdenVal> swmden{}; 
        namespace SwmdenValC{
            constexpr Register::FieldValue<decltype(swmden)::Type,SwmdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(swmden)::Type,SwmdenVal::enabled> enabled{};
        }
        ///Bypass AES Operation Enable. 
        enum class BenVal {
            disabled=0x00000000,     ///<Do not bypass AES operations.
            enabled=0x00000001,     ///<Bypass AES operations.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,BenVal> ben{}; 
        namespace BenValC{
            constexpr Register::FieldValue<decltype(ben)::Type,BenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ben)::Type,BenVal::enabled> enabled{};
        }
        ///XOR Enable. 
        enum class XorenVal {
            xorDisabled=0x00000000,     ///<Disable the XOR paths.
            xorInput=0x00000001,     ///<Enable the XOR input path, disable the XOR output path.
            xorOutput=0x00000002,     ///<Disable the XOR input path, enable the XOR output path.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,XorenVal> xoren{}; 
        namespace XorenValC{
            constexpr Register::FieldValue<decltype(xoren)::Type,XorenVal::xorDisabled> xorDisabled{};
            constexpr Register::FieldValue<decltype(xoren)::Type,XorenVal::xorInput> xorInput{};
            constexpr Register::FieldValue<decltype(xoren)::Type,XorenVal::xorOutput> xorOutput{};
        }
        ///Hardware Counter Mode Enable. 
        enum class HctrenVal {
            disabled=0x00000000,     ///<Disable hardware counter mode.
            enabled=0x00000001,     ///<Enable hardware counter mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,HctrenVal> hctren{}; 
        namespace HctrenValC{
            constexpr Register::FieldValue<decltype(hctren)::Type,HctrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hctren)::Type,HctrenVal::enabled> enabled{};
        }
        ///Hardware Cipher-Block Chaining Mode Enable. 
        enum class HcbcenVal {
            disabled=0x00000000,     ///<Disable hardware cipher-block chaining (CBC) mode.
            enabled=0x00000001,     ///<Enable hardware cipher-block chaining (CBC) mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,HcbcenVal> hcbcen{}; 
        namespace HcbcenValC{
            constexpr Register::FieldValue<decltype(hcbcen)::Type,HcbcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hcbcen)::Type,HcbcenVal::enabled> enabled{};
        }
        ///Keystore Size Select. 
        enum class KeysizeVal {
            key128=0x00000000,     ///<Key is composed of 128 bits.
            key192=0x00000001,     ///<Key is composed of 192 bits.
            key256=0x00000002,     ///<Key is composed of 256 bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,KeysizeVal> keysize{}; 
        namespace KeysizeValC{
            constexpr Register::FieldValue<decltype(keysize)::Type,KeysizeVal::key128> key128{};
            constexpr Register::FieldValue<decltype(keysize)::Type,KeysizeVal::key192> key192{};
            constexpr Register::FieldValue<decltype(keysize)::Type,KeysizeVal::key256> key256{};
        }
        ///Error Interrupt Enable. 
        enum class ErrienVal {
            disabled=0x00000000,     ///<Disable the error interrupt.
            enabled=0x00000001,     ///<Enable the error interrupt. An interrupt is generated when the Input/Output Data FIFO Overun (DORI), Input/Output Data FIFO Underun (DURI), or XOR Data FIFO Overrun (XORI) flags are set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ErrienVal> errien{}; 
        namespace ErrienValC{
            constexpr Register::FieldValue<decltype(errien)::Type,ErrienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(errien)::Type,ErrienVal::enabled> enabled{};
        }
        ///Operation Complete Interrupt Enable. 
        enum class OcienVal {
            disabled=0x00000000,     ///<Disable the operation complete interrupt.
            enabled=0x00000001,     ///<Enable the operation complete interrupt. An interrupt is generated when the Operation Complete Interrupt (OCI) flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,OcienVal> ocien{}; 
        namespace OcienValC{
            constexpr Register::FieldValue<decltype(ocien)::Type,OcienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ocien)::Type,OcienVal::enabled> enabled{};
        }
        ///AES Debug Mode. 
        enum class DbgmdVal {
            halt=0x00000000,     ///<A debug breakpoint will cause the AES module to halt.
            run=0x00000001,     ///<The AES module will continue to operate while the core is halted in debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DbgmdVal> dbgmd{}; 
        namespace DbgmdValC{
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::halt> halt{};
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::run> run{};
        }
        ///Module Soft Reset. 
        enum class ResetVal {
            inactive=0x00000000,     ///<AES module is not in soft reset.
            active=0x00000001,     ///<AES module is in soft reset and none of the module bits can be accessed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ResetVal> reset{}; 
        namespace ResetValC{
            constexpr Register::FieldValue<decltype(reset)::Type,ResetVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(reset)::Type,ResetVal::active> active{};
        }
    }
    namespace Aes0Xfrsize{    ///<Number of Blocks
        using Addr = Register::Address<0x40027010,0xfffff800,0x00000000,unsigned>;
        ///Transfer Size. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> xfrsize{}; 
    }
    namespace Aes0Datafifo{    ///<Input/Output Data FIFO Access
        using Addr = Register::Address<0x40027020,0x00000000,0x00000000,unsigned>;
        ///Input/Output Data FIFO Access. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datafifo{}; 
    }
    namespace Aes0Xorfifo{    ///<XOR Data FIFO Access
        using Addr = Register::Address<0x40027030,0x00000000,0x00000000,unsigned>;
        ///XOR Data FIFO Access. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> xorfifo{}; 
    }
    namespace Aes0Hwkey0{    ///<Hardware Key Word 0
        using Addr = Register::Address<0x40027040,0x00000000,0x00000000,unsigned>;
        ///Hardware Key Word 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey0{}; 
    }
    namespace Aes0Hwkey1{    ///<Hardware Key Word 1
        using Addr = Register::Address<0x40027050,0x00000000,0x00000000,unsigned>;
        ///Hardware Key Word 1. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey1{}; 
    }
    namespace Aes0Hwkey2{    ///<Hardware Key Word 2
        using Addr = Register::Address<0x40027060,0x00000000,0x00000000,unsigned>;
        ///Hardware Key Word 2. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey2{}; 
    }
    namespace Aes0Hwkey3{    ///<Hardware Key Word 3
        using Addr = Register::Address<0x40027070,0x00000000,0x00000000,unsigned>;
        ///Hardware Key Word 3. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey3{}; 
    }
    namespace Aes0Hwkey4{    ///<Hardware Key Word 4
        using Addr = Register::Address<0x40027080,0x00000000,0x00000000,unsigned>;
        ///Hardware Key Word 4. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey4{}; 
    }
    namespace Aes0Hwkey5{    ///<Hardware Key Word 5
        using Addr = Register::Address<0x40027090,0x00000000,0x00000000,unsigned>;
        ///Hardware Key Word 5. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey5{}; 
    }
    namespace Aes0Hwkey6{    ///<Hardware Key Word 6
        using Addr = Register::Address<0x400270a0,0x00000000,0x00000000,unsigned>;
        ///Hardware Key Word 6. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey6{}; 
    }
    namespace Aes0Hwkey7{    ///<Hardware Key Word 7
        using Addr = Register::Address<0x400270b0,0x00000000,0x00000000,unsigned>;
        ///Hardware Key Word 7. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwkey7{}; 
    }
    namespace Aes0Hwctr0{    ///<Hardware Counter Word 0
        using Addr = Register::Address<0x400270c0,0x00000000,0x00000000,unsigned>;
        ///Hardware Counter Word 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwctr0{}; 
    }
    namespace Aes0Hwctr1{    ///<Hardware Counter Word 1
        using Addr = Register::Address<0x400270d0,0x00000000,0x00000000,unsigned>;
        ///Hardware Counter Word 1. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwctr1{}; 
    }
    namespace Aes0Hwctr2{    ///<Hardware Counter Word 2
        using Addr = Register::Address<0x400270e0,0x00000000,0x00000000,unsigned>;
        ///Hardware Counter Word 2. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwctr2{}; 
    }
    namespace Aes0Hwctr3{    ///<Hardware Counter Word 3
        using Addr = Register::Address<0x400270f0,0x00000000,0x00000000,unsigned>;
        ///Hardware Counter Word 3. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hwctr3{}; 
    }
    namespace Aes0Status{    ///<Module Status
        using Addr = Register::Address<0x40027100,0x0effe0e0,0x00000000,unsigned>;
        ///Input/Output Data FIFO Level. 
        enum class DfifolvlVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DfifolvlVal> dfifolvl{}; 
        namespace DfifolvlValC{
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::empty> empty{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::v1Byte> v1Byte{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::v2Bytes> v2Bytes{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::v3Bytes> v3Bytes{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::v4Bytes> v4Bytes{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::v5Bytes> v5Bytes{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::v6Bytes> v6Bytes{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::v7Bytes> v7Bytes{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::v8Bytes> v8Bytes{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::v9Bytes> v9Bytes{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::v10Bytes> v10Bytes{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::v11Bytes> v11Bytes{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::v12Bytes> v12Bytes{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::v13Bytes> v13Bytes{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::v14Bytes> v14Bytes{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::v15Bytes> v15Bytes{};
            constexpr Register::FieldValue<decltype(dfifolvl)::Type,DfifolvlVal::full> full{};
        }
        ///XOR Data FIFO Level. 
        enum class XfifolvlVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,XfifolvlVal> xfifolvl{}; 
        namespace XfifolvlValC{
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::empty> empty{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::v1Byte> v1Byte{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::v2Bytes> v2Bytes{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::v3Bytes> v3Bytes{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::v4Bytes> v4Bytes{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::v5Bytes> v5Bytes{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::v6Bytes> v6Bytes{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::v7Bytes> v7Bytes{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::v8Bytes> v8Bytes{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::v9Bytes> v9Bytes{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::v10Bytes> v10Bytes{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::v11Bytes> v11Bytes{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::v12Bytes> v12Bytes{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::v13Bytes> v13Bytes{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::v14Bytes> v14Bytes{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::v15Bytes> v15Bytes{};
            constexpr Register::FieldValue<decltype(xfifolvl)::Type,XfifolvlVal::full> full{};
        }
        ///Module Busy Flag. 
        enum class BusyfVal {
            notSet=0x00000000,     ///<AES module is not busy.
            set=0x00000001,     ///<AES module is completing an operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusyfVal> busyf{}; 
        namespace BusyfValC{
            constexpr Register::FieldValue<decltype(busyf)::Type,BusyfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(busyf)::Type,BusyfVal::set> set{};
        }
        ///Input/Output Data FIFO Underrun Interrupt Flag. 
        enum class DuriVal {
            notSet=0x00000000,     ///<No input/output data FIFO underrun.
            set=0x00000001,     ///<An input/output data FIFO underrun has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,DuriVal> duri{}; 
        namespace DuriValC{
            constexpr Register::FieldValue<decltype(duri)::Type,DuriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(duri)::Type,DuriVal::set> set{};
        }
        ///Input/Output Data FIFO Overrun Interrupt Flag. 
        enum class DoriVal {
            notSet=0x00000000,     ///<No input/output data FIFO overrun.
            set=0x00000001,     ///<An input/output data FIFO overrun has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,DoriVal> dori{}; 
        namespace DoriValC{
            constexpr Register::FieldValue<decltype(dori)::Type,DoriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(dori)::Type,DoriVal::set> set{};
        }
        ///XOR Data FIFO Overrun Interrupt Flag. 
        enum class XoriVal {
            notSet=0x00000000,     ///<No XOR data FIFO overrun.
            set=0x00000001,     ///<An XOR data FIFO overrun has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,XoriVal> xori{}; 
        namespace XoriValC{
            constexpr Register::FieldValue<decltype(xori)::Type,XoriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(xori)::Type,XoriVal::set> set{};
        }
        ///Operation Complete Interrupt Flag. 
        enum class OciVal {
            notSet=0x00000000,     ///<AES operation complete interrupt has not occurred.
            set=0x00000001,     ///<AES operation complete interrupt occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,OciVal> oci{}; 
        namespace OciValC{
            constexpr Register::FieldValue<decltype(oci)::Type,OciVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oci)::Type,OciVal::set> set{};
        }
    }
}
