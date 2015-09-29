#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//12-Bit Digital-to-Analog Converter
    namespace Dac0Dat0l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc000,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat1l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc002,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat2l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc004,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat3l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc006,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat4l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc008,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat5l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc00a,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat6l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc00c,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat7l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc00e,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat8l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc010,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat9l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc012,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat10l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc014,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat11l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc016,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat12l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc018,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat13l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc01a,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat14l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc01c,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat15l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cc01e,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat0h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc001,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat1h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc003,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat2h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc005,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat3h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc007,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat4h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc009,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat5h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc00b,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat6h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc00d,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat7h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc00f,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat8h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc011,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat9h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc013,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat10h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc015,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat11h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc017,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat12h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc019,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat13h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc01b,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat14h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc01d,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Dat15h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cc01f,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Dac0Sr{    ///<DAC Status Register
        using Addr = Register::Address<0x400cc020,0xfffffff8,0,unsigned char>;
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
    namespace Dac0C0{    ///<DAC Control Register
        using Addr = Register::Address<0x400cc021,0xffffff00,0,unsigned char>;
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
    namespace Dac0C1{    ///<DAC Control Register 1
        using Addr = Register::Address<0x400cc022,0xffffff60,0,unsigned char>;
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
            v11=0x00000003,     ///<Reserved
        };
        namespace dacbfmdValC{
            constexpr MPL::Value<dacbfmdVal,dacbfmdVal::v00> v00{};
            constexpr MPL::Value<dacbfmdVal,dacbfmdVal::v01> v01{};
            constexpr MPL::Value<dacbfmdVal,dacbfmdVal::v10> v10{};
            constexpr MPL::Value<dacbfmdVal,dacbfmdVal::v11> v11{};
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
    namespace Dac0C2{    ///<DAC Control Register 2
        using Addr = Register::Address<0x400cc023,0xffffff00,0,unsigned char>;
        ///DAC buffer upper limit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dacbfup{}; 
        ///DAC buffer read pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dacbfrp{}; 
    }
}
