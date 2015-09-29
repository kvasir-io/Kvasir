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
            enabled=0x00000001,     ///<Enable the error interrupt.
        };
        namespace errienValC{
            constexpr MPL::Value<errienVal,errienVal::disabled> disabled{};
            constexpr MPL::Value<errienVal,errienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,errienVal> errien{}; 
        ///Operation Complete Interrupt Enable. 
        enum class ocienVal {
            disabled=0x00000000,     ///<Disable the operation complete interrupt.
            enabled=0x00000001,     ///<Enable the operation complete interrupt.
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
        using Addr = Register::Address<0x40027100,0x3ffef888,0,unsigned>;
        ///Input/Output Data FIFO Underrun Flag. 
        enum class durfVal {
            notSet=0x00000000,     ///<No input/output data FIFO underrun.
            set=0x00000001,     ///<An input/output data FIFO underrun has occurred.
        };
        namespace durfValC{
            constexpr MPL::Value<durfVal,durfVal::notSet> notSet{};
            constexpr MPL::Value<durfVal,durfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,durfVal> durf{}; 
        ///Input/Output Data FIFO Overrun Flag. 
        enum class dorfVal {
            notSet=0x00000000,     ///<No input/output data FIFO overrun.
            set=0x00000001,     ///<An input/output data FIFO overrun has occurred.
        };
        namespace dorfValC{
            constexpr MPL::Value<dorfVal,dorfVal::notSet> notSet{};
            constexpr MPL::Value<dorfVal,dorfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dorfVal> dorf{}; 
        ///XOR Data FIFO Overrun Flag. 
        enum class xorfVal {
            notSet=0x00000000,     ///<No XOR data FIFO overrun.
            set=0x00000001,     ///<An XOR data FIFO overrun has occurred.
        };
        namespace xorfValC{
            constexpr MPL::Value<xorfVal,xorfVal::notSet> notSet{};
            constexpr MPL::Value<xorfVal,xorfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,xorfVal> xorf{}; 
        ///Input/Output Data FIFO Level. 
        enum class dfifolvlVal {
            empty=0x00000000,     ///<Input/Output data FIFO is empty.
            v1word=0x00000001,     ///<Input/Output data FIFO contains 1 word.
            v2words=0x00000002,     ///<Input/Output data FIFO contains 2 words.
            v3words=0x00000003,     ///<Input/Output data FIFO contains 3 words.
            full=0x00000004,     ///<Input/Output data FIFO contains 4 words (full).
        };
        namespace dfifolvlValC{
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::empty> empty{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v1word> v1word{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v2words> v2words{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::v3words> v3words{};
            constexpr MPL::Value<dfifolvlVal,dfifolvlVal::full> full{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,dfifolvlVal> dfifolvl{}; 
        ///XOR Data FIFO Level. 
        enum class xfifolvlVal {
            empty=0x00000000,     ///<XOR data FIFO is empty.
            v1word=0x00000001,     ///<XOR data FIFO contains 1 word.
            v2words=0x00000002,     ///<XOR data FIFO contains 2 words.
            v3words=0x00000003,     ///<XOR data FIFO contains 3 words.
            full=0x00000004,     ///<XOR data FIFO contains 4 words (full).
        };
        namespace xfifolvlValC{
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::empty> empty{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v1word> v1word{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v2words> v2words{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::v3words> v3words{};
            constexpr MPL::Value<xfifolvlVal,xfifolvlVal::full> full{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,xfifolvlVal> xfifolvl{}; 
        ///Module Busy Flag. 
        enum class busyfVal {
            notSet=0x00000000,     ///<AES module is not busy.
            set=0x00000001,     ///<AES module is completing an operation.
        };
        namespace busyfValC{
            constexpr MPL::Value<busyfVal,busyfVal::notSet> notSet{};
            constexpr MPL::Value<busyfVal,busyfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,busyfVal> busyf{}; 
        ///Error Interrupt Flag. 
        enum class erriVal {
            notSet=0x00000000,     ///<AES error interrupt has not occurred.
            set=0x00000001,     ///<AES error interrupt has occurred.
        };
        namespace erriValC{
            constexpr MPL::Value<erriVal,erriVal::notSet> notSet{};
            constexpr MPL::Value<erriVal,erriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,erriVal> erri{}; 
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
