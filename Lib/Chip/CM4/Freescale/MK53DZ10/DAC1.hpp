#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//12-Bit Digital-to-Analog Converter
    namespace Dac1Dat0l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd000,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat1l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd002,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat2l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd004,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat3l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd006,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat4l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd008,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat5l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd00a,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat6l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd00c,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat7l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd00e,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat8l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd010,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat9l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd012,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat10l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd014,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat11l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd016,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat12l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd018,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat13l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd01a,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat14l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd01c,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat15l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd01e,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat0h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd001,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat1h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd003,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat2h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd005,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat3h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd007,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat4h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd009,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat5h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd00b,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat6h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd00d,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat7h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd00f,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat8h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd011,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat9h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd013,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat10h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd015,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat11h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd017,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat12h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd019,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat13h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd01b,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat14h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd01d,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Dat15h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd01f,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac1Sr{    ///<DAC Status Register
        using Addr = Register::Address<0x400cd020,0xfffffff8,0,unsigned char>;
        ///DAC buffer read pointer bottom position flag
        enum class dacbfrpbfVal {
            v0=0x00000000,     ///<The DAC buffer read pointer is not equal to the DACBFUP.
            v1=0x00000001,     ///<The DAC buffer read pointer is equal to the DACBFUP.
        };
        namespace dacbfrpbfValC{
            constexpr MPL::Value<dacbfrpbfVal,dacbfrpbfVal::v0> v0{};
            constexpr MPL::Value<dacbfrpbfVal,dacbfrpbfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dacbfrpbfVal> dacbfrpbf{}; 
        ///DAC buffer read pointer top position flag
        enum class dacbfrptfVal {
            v0=0x00000000,     ///<The DAC buffer read pointer is not zero.
            v1=0x00000001,     ///<The DAC buffer read pointer is zero.
        };
        namespace dacbfrptfValC{
            constexpr MPL::Value<dacbfrptfVal,dacbfrptfVal::v0> v0{};
            constexpr MPL::Value<dacbfrptfVal,dacbfrptfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dacbfrptfVal> dacbfrptf{}; 
        ///DAC buffer watermark flag
        enum class dacbfwmfVal {
            v0=0x00000000,     ///<The DAC buffer read pointer has not reached the watermark level.
            v1=0x00000001,     ///<The DAC buffer read pointer has reached the watermark level.
        };
        namespace dacbfwmfValC{
            constexpr MPL::Value<dacbfwmfVal,dacbfwmfVal::v0> v0{};
            constexpr MPL::Value<dacbfwmfVal,dacbfwmfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,dacbfwmfVal> dacbfwmf{}; 
    }
    namespace Dac1C0{    ///<DAC Control Register
        using Addr = Register::Address<0x400cd021,0xffffff00,0,unsigned char>;
        ///DAC buffer read pointer bottom flag interrupt enable
        enum class dacbbienVal {
            v0=0x00000000,     ///<The DAC buffer read pointer bottom flag interrupt is disabled.
            v1=0x00000001,     ///<The DAC buffer read pointer bottom flag interrupt is enabled.
        };
        namespace dacbbienValC{
            constexpr MPL::Value<dacbbienVal,dacbbienVal::v0> v0{};
            constexpr MPL::Value<dacbbienVal,dacbbienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dacbbienVal> dacbbien{}; 
        ///DAC buffer read pointer top flag interrupt enable
        enum class dacbtienVal {
            v0=0x00000000,     ///<The DAC buffer read pointer top flag interrupt is disabled.
            v1=0x00000001,     ///<The DAC buffer read pointer top flag interrupt is enabled.
        };
        namespace dacbtienValC{
            constexpr MPL::Value<dacbtienVal,dacbtienVal::v0> v0{};
            constexpr MPL::Value<dacbtienVal,dacbtienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dacbtienVal> dacbtien{}; 
        ///DAC buffer watermark interrupt enable
        enum class dacbwienVal {
            v0=0x00000000,     ///<The DAC buffer watermark interrupt is disabled.
            v1=0x00000001,     ///<The DAC buffer watermark interrupt is enabled.
        };
        namespace dacbwienValC{
            constexpr MPL::Value<dacbwienVal,dacbwienVal::v0> v0{};
            constexpr MPL::Value<dacbwienVal,dacbwienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,dacbwienVal> dacbwien{}; 
        ///DAC low power control
        enum class lpenVal {
            v0=0x00000000,     ///<high power mode.
            v1=0x00000001,     ///<low power mode.
        };
        namespace lpenValC{
            constexpr MPL::Value<lpenVal,lpenVal::v0> v0{};
            constexpr MPL::Value<lpenVal,lpenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,lpenVal> lpen{}; 
        ///DAC software trigger
        enum class dacswtrgVal {
            v0=0x00000000,     ///<The DAC soft trigger is not valid.
            v1=0x00000001,     ///<The DAC soft trigger is valid.
        };
        namespace dacswtrgValC{
            constexpr MPL::Value<dacswtrgVal,dacswtrgVal::v0> v0{};
            constexpr MPL::Value<dacswtrgVal,dacswtrgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dacswtrgVal> dacswtrg{}; 
        ///DAC trigger select
        enum class dactrgselVal {
            v0=0x00000000,     ///<The DAC hardware trigger is selected.
            v1=0x00000001,     ///<The DAC software trigger is selected.
        };
        namespace dactrgselValC{
            constexpr MPL::Value<dactrgselVal,dactrgselVal::v0> v0{};
            constexpr MPL::Value<dactrgselVal,dactrgselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,dactrgselVal> dactrgsel{}; 
        ///DAC Reference Select
        enum class dacrfsVal {
            v0=0x00000000,     ///<The DAC selets DACREF_1 as the reference voltage.
            v1=0x00000001,     ///<The DAC selets DACREF_2 as the reference voltage.
        };
        namespace dacrfsValC{
            constexpr MPL::Value<dacrfsVal,dacrfsVal::v0> v0{};
            constexpr MPL::Value<dacrfsVal,dacrfsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dacrfsVal> dacrfs{}; 
        ///DAC enable
        enum class dacenVal {
            v0=0x00000000,     ///<The DAC system is disabled.
            v1=0x00000001,     ///<The DAC system is enabled.
        };
        namespace dacenValC{
            constexpr MPL::Value<dacenVal,dacenVal::v0> v0{};
            constexpr MPL::Value<dacenVal,dacenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dacenVal> dacen{}; 
    }
    namespace Dac1C1{    ///<DAC Control Register 1
        using Addr = Register::Address<0x400cd022,0xffffff60,0,unsigned char>;
        ///DAC buffer enable
        enum class dacbfenVal {
            v0=0x00000000,     ///<Buffer read pointer disabled. The converted data is always the first word of the buffer.
            v1=0x00000001,     ///<Buffer read pointer enabled. The converted data is the word that the read pointer points to. It means converted data can be from any word of the buffer.
        };
        namespace dacbfenValC{
            constexpr MPL::Value<dacbfenVal,dacbfenVal::v0> v0{};
            constexpr MPL::Value<dacbfenVal,dacbfenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dacbfenVal> dacbfen{}; 
        ///DAC buffer work mode select
        enum class dacbfmdVal {
            v00=0x00000000,     ///<Normal Mode
            v01=0x00000001,     ///<Swing Mode
            v10=0x00000002,     ///<One-Time Scan Mode
        };
        namespace dacbfmdValC{
            constexpr MPL::Value<dacbfmdVal,dacbfmdVal::v00> v00{};
            constexpr MPL::Value<dacbfmdVal,dacbfmdVal::v01> v01{};
            constexpr MPL::Value<dacbfmdVal,dacbfmdVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,dacbfmdVal> dacbfmd{}; 
        ///DAC buffer watermark select
        enum class dacbfwmVal {
            v00=0x00000000,     ///<1 word
            v01=0x00000001,     ///<2 words
            v10=0x00000002,     ///<3 words
            v11=0x00000003,     ///<4 words
        };
        namespace dacbfwmValC{
            constexpr MPL::Value<dacbfwmVal,dacbfwmVal::v00> v00{};
            constexpr MPL::Value<dacbfwmVal,dacbfwmVal::v01> v01{};
            constexpr MPL::Value<dacbfwmVal,dacbfwmVal::v10> v10{};
            constexpr MPL::Value<dacbfwmVal,dacbfwmVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,dacbfwmVal> dacbfwm{}; 
        ///DMA enable select
        enum class dmaenVal {
            v0=0x00000000,     ///<DMA disabled.
            v1=0x00000001,     ///<DMA enabled. When DMA enabled, DMA request will be generated by original interrupts. And interrupts will not be presented on this module at the same time.
        };
        namespace dmaenValC{
            constexpr MPL::Value<dmaenVal,dmaenVal::v0> v0{};
            constexpr MPL::Value<dmaenVal,dmaenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dmaenVal> dmaen{}; 
    }
    namespace Dac1C2{    ///<DAC Control Register 2
        using Addr = Register::Address<0x400cd023,0xffffff00,0,unsigned char>;
        ///DAC buffer upper limit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dacbfup{}; 
        ///DAC buffer read pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dacbfrp{}; 
    }
}
