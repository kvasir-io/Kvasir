#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//12-Bit Digital-to-Analog Converter
    namespace Dac0Dat0l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f000,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat1l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f002,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat2l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f004,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat3l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f006,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat4l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f008,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat5l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f00a,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat6l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f00c,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat7l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f00e,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat8l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f010,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat9l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f012,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat10l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f014,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat11l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f016,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat12l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f018,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat13l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f01a,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat14l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f01c,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat15l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x4003f01e,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac0Dat0h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f001,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Dat1h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f003,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Dat2h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f005,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Dat3h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f007,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Dat4h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f009,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Dat5h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f00b,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Dat6h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f00d,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Dat7h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f00f,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Dat8h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f011,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Dat9h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f013,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Dat10h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f015,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Dat11h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f017,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Dat12h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f019,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Dat13h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f01b,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Dat14h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f01d,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Dat15h{    ///<DAC Data High Register
        using Addr = Register::Address<0x4003f01f,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac0Sr{    ///<DAC Status Register
        using Addr = Register::Address<0x4003f020,0xfffffff8,0,unsigned char>;
        ///DAC Buffer Read Pointer Bottom Position Flag
        enum class dacbfrpbfVal {
            v0=0x00000000,     ///<The DAC buffer read pointer is not equal to C2[DACBFUP].
            v1=0x00000001,     ///<The DAC buffer read pointer is equal to C2[DACBFUP].
        };
        namespace dacbfrpbfValC{
            constexpr MPL::Value<dacbfrpbfVal,dacbfrpbfVal::v0> v0{};
            constexpr MPL::Value<dacbfrpbfVal,dacbfrpbfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dacbfrpbfVal> dacbfrpbf{}; 
        ///DAC Buffer Read Pointer Top Position Flag
        enum class dacbfrptfVal {
            v0=0x00000000,     ///<The DAC buffer read pointer is not zero.
            v1=0x00000001,     ///<The DAC buffer read pointer is zero.
        };
        namespace dacbfrptfValC{
            constexpr MPL::Value<dacbfrptfVal,dacbfrptfVal::v0> v0{};
            constexpr MPL::Value<dacbfrptfVal,dacbfrptfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dacbfrptfVal> dacbfrptf{}; 
        ///DAC Buffer Watermark Flag
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
        using Addr = Register::Address<0x4003f021,0xffffff00,0,unsigned char>;
        ///DAC Buffer Read Pointer Bottom Flag Interrupt Enable
        enum class dacbbienVal {
            v0=0x00000000,     ///<The DAC buffer read pointer bottom flag interrupt is disabled.
            v1=0x00000001,     ///<The DAC buffer read pointer bottom flag interrupt is enabled.
        };
        namespace dacbbienValC{
            constexpr MPL::Value<dacbbienVal,dacbbienVal::v0> v0{};
            constexpr MPL::Value<dacbbienVal,dacbbienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dacbbienVal> dacbbien{}; 
        ///DAC Buffer Read Pointer Top Flag Interrupt Enable
        enum class dacbtienVal {
            v0=0x00000000,     ///<The DAC buffer read pointer top flag interrupt is disabled.
            v1=0x00000001,     ///<The DAC buffer read pointer top flag interrupt is enabled.
        };
        namespace dacbtienValC{
            constexpr MPL::Value<dacbtienVal,dacbtienVal::v0> v0{};
            constexpr MPL::Value<dacbtienVal,dacbtienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dacbtienVal> dacbtien{}; 
        ///DAC Buffer Watermark Interrupt Enable
        enum class dacbwienVal {
            v0=0x00000000,     ///<The DAC buffer watermark interrupt is disabled.
            v1=0x00000001,     ///<The DAC buffer watermark interrupt is enabled.
        };
        namespace dacbwienValC{
            constexpr MPL::Value<dacbwienVal,dacbwienVal::v0> v0{};
            constexpr MPL::Value<dacbwienVal,dacbwienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,dacbwienVal> dacbwien{}; 
        ///DAC Low Power Control
        enum class lpenVal {
            v0=0x00000000,     ///<High-Power mode
            v1=0x00000001,     ///<Low-Power mode
        };
        namespace lpenValC{
            constexpr MPL::Value<lpenVal,lpenVal::v0> v0{};
            constexpr MPL::Value<lpenVal,lpenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,lpenVal> lpen{}; 
        ///DAC Software Trigger
        enum class dacswtrgVal {
            v0=0x00000000,     ///<The DAC soft trigger is not valid.
            v1=0x00000001,     ///<The DAC soft trigger is valid.
        };
        namespace dacswtrgValC{
            constexpr MPL::Value<dacswtrgVal,dacswtrgVal::v0> v0{};
            constexpr MPL::Value<dacswtrgVal,dacswtrgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dacswtrgVal> dacswtrg{}; 
        ///DAC Trigger Select
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
            v0=0x00000000,     ///<The DAC selects DACREF_1 as the reference voltage.
            v1=0x00000001,     ///<The DAC selects DACREF_2 as the reference voltage.
        };
        namespace dacrfsValC{
            constexpr MPL::Value<dacrfsVal,dacrfsVal::v0> v0{};
            constexpr MPL::Value<dacrfsVal,dacrfsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dacrfsVal> dacrfs{}; 
        ///DAC Enable
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
        using Addr = Register::Address<0x4003f022,0xffffff60,0,unsigned char>;
        ///DAC Buffer Enable
        enum class dacbfenVal {
            v0=0x00000000,     ///<Buffer read pointer is disabled. The converted data is always the first word of the buffer.
            v1=0x00000001,     ///<Buffer read pointer is enabled. The converted data is the word that the read pointer points to. It means converted data can be from any word of the buffer.
        };
        namespace dacbfenValC{
            constexpr MPL::Value<dacbfenVal,dacbfenVal::v0> v0{};
            constexpr MPL::Value<dacbfenVal,dacbfenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dacbfenVal> dacbfen{}; 
        ///DAC Buffer Work Mode Select
        enum class dacbfmdVal {
            v00=0x00000000,     ///<Normal mode
            v01=0x00000001,     ///<Swing mode
            v10=0x00000002,     ///<One-Time Scan mode
            v11=0x00000003,     ///<FIFO mode
        };
        namespace dacbfmdValC{
            constexpr MPL::Value<dacbfmdVal,dacbfmdVal::v00> v00{};
            constexpr MPL::Value<dacbfmdVal,dacbfmdVal::v01> v01{};
            constexpr MPL::Value<dacbfmdVal,dacbfmdVal::v10> v10{};
            constexpr MPL::Value<dacbfmdVal,dacbfmdVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,dacbfmdVal> dacbfmd{}; 
        ///DAC Buffer Watermark Select
        enum class dacbfwmVal {
            v00=0x00000000,     ///<In normal mode, 1 word . In FIFO mode, 2 or less than 2 data remaining in FIFO will set watermark status bit.
            v01=0x00000001,     ///<In normal mode, 2 words . In FIFO mode, Max/4 or less than Max/4 data remaining in FIFO will set watermark status bit.
            v10=0x00000002,     ///<In normal mode, 3 words . In FIFO mode, Max/2 or less than Max/2 data remaining in FIFO will set watermark status bit.
            v11=0x00000003,     ///<In normal mode, 4 words . In FIFO mode, Max-2 or less than Max-2 data remaining in FIFO will set watermark status bit.
        };
        namespace dacbfwmValC{
            constexpr MPL::Value<dacbfwmVal,dacbfwmVal::v00> v00{};
            constexpr MPL::Value<dacbfwmVal,dacbfwmVal::v01> v01{};
            constexpr MPL::Value<dacbfwmVal,dacbfwmVal::v10> v10{};
            constexpr MPL::Value<dacbfwmVal,dacbfwmVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,dacbfwmVal> dacbfwm{}; 
        ///DMA Enable Select
        enum class dmaenVal {
            v0=0x00000000,     ///<DMA is disabled.
            v1=0x00000001,     ///<DMA is enabled. When DMA is enabled, the DMA request will be generated by original interrupts. The interrupts will not be presented on this module at the same time.
        };
        namespace dmaenValC{
            constexpr MPL::Value<dmaenVal,dmaenVal::v0> v0{};
            constexpr MPL::Value<dmaenVal,dmaenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dmaenVal> dmaen{}; 
    }
    namespace Dac0C2{    ///<DAC Control Register 2
        using Addr = Register::Address<0x4003f023,0xffffff00,0,unsigned char>;
        ///DAC Buffer Upper Limit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dacbfup{}; 
        ///DAC Buffer Read Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dacbfrp{}; 
    }
}
