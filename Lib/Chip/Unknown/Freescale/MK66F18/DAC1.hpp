#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//12-Bit Digital-to-Analog Converter
    namespace Dac1Dat0l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd000,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat1l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd002,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat2l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd004,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat3l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd006,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat4l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd008,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat5l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd00a,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat6l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd00c,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat7l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd00e,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat8l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd010,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat9l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd012,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat10l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd014,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat11l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd016,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat12l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd018,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat13l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd01a,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat14l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd01c,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat15l{    ///<DAC Data Low Register
        using Addr = Register::Address<0x400cd01e,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Dac1Dat0h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd001,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Dat1h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd003,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Dat2h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd005,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Dat3h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd007,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Dat4h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd009,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Dat5h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd00b,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Dat6h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd00d,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Dat7h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd00f,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Dat8h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd011,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Dat9h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd013,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Dat10h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd015,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Dat11h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd017,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Dat12h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd019,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Dat13h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd01b,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Dat14h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd01d,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Dat15h{    ///<DAC Data High Register
        using Addr = Register::Address<0x400cd01f,0xfffffff0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Dac1Sr{    ///<DAC Status Register
        using Addr = Register::Address<0x400cd020,0xfffffff8,0,unsigned char>;
        ///DAC Buffer Read Pointer Bottom Position Flag
        enum class DacbfrpbfVal {
            v0=0x00000000,     ///<The DAC buffer read pointer is not equal to C2[DACBFUP].
            v1=0x00000001,     ///<The DAC buffer read pointer is equal to C2[DACBFUP].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DacbfrpbfVal> dacbfrpbf{}; 
        namespace DacbfrpbfValC{
            constexpr Register::FieldValue<decltype(dacbfrpbf)::Type,DacbfrpbfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dacbfrpbf)::Type,DacbfrpbfVal::v1> v1{};
        }
        }
        ///DAC Buffer Read Pointer Top Position Flag
        enum class DacbfrptfVal {
            v0=0x00000000,     ///<The DAC buffer read pointer is not zero.
            v1=0x00000001,     ///<The DAC buffer read pointer is zero.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DacbfrptfVal> dacbfrptf{}; 
        namespace DacbfrptfValC{
            constexpr Register::FieldValue<decltype(dacbfrptf)::Type,DacbfrptfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dacbfrptf)::Type,DacbfrptfVal::v1> v1{};
        }
        }
        ///DAC Buffer Watermark Flag
        enum class DacbfwmfVal {
            v0=0x00000000,     ///<The DAC buffer read pointer has not reached the watermark level.
            v1=0x00000001,     ///<The DAC buffer read pointer has reached the watermark level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DacbfwmfVal> dacbfwmf{}; 
        namespace DacbfwmfValC{
            constexpr Register::FieldValue<decltype(dacbfwmf)::Type,DacbfwmfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dacbfwmf)::Type,DacbfwmfVal::v1> v1{};
        }
        }
    }
    namespace Dac1C0{    ///<DAC Control Register
        using Addr = Register::Address<0x400cd021,0xffffff00,0,unsigned char>;
        ///DAC Buffer Read Pointer Bottom Flag Interrupt Enable
        enum class DacbbienVal {
            v0=0x00000000,     ///<The DAC buffer read pointer bottom flag interrupt is disabled.
            v1=0x00000001,     ///<The DAC buffer read pointer bottom flag interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DacbbienVal> dacbbien{}; 
        namespace DacbbienValC{
            constexpr Register::FieldValue<decltype(dacbbien)::Type,DacbbienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dacbbien)::Type,DacbbienVal::v1> v1{};
        }
        }
        ///DAC Buffer Read Pointer Top Flag Interrupt Enable
        enum class DacbtienVal {
            v0=0x00000000,     ///<The DAC buffer read pointer top flag interrupt is disabled.
            v1=0x00000001,     ///<The DAC buffer read pointer top flag interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DacbtienVal> dacbtien{}; 
        namespace DacbtienValC{
            constexpr Register::FieldValue<decltype(dacbtien)::Type,DacbtienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dacbtien)::Type,DacbtienVal::v1> v1{};
        }
        }
        ///DAC Buffer Watermark Interrupt Enable
        enum class DacbwienVal {
            v0=0x00000000,     ///<The DAC buffer watermark interrupt is disabled.
            v1=0x00000001,     ///<The DAC buffer watermark interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DacbwienVal> dacbwien{}; 
        namespace DacbwienValC{
            constexpr Register::FieldValue<decltype(dacbwien)::Type,DacbwienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dacbwien)::Type,DacbwienVal::v1> v1{};
        }
        }
        ///DAC Low Power Control
        enum class LpenVal {
            v0=0x00000000,     ///<High-Power mode
            v1=0x00000001,     ///<Low-Power mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,LpenVal> lpen{}; 
        namespace LpenValC{
            constexpr Register::FieldValue<decltype(lpen)::Type,LpenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpen)::Type,LpenVal::v1> v1{};
        }
        }
        ///DAC Software Trigger
        enum class DacswtrgVal {
            v0=0x00000000,     ///<The DAC soft trigger is not valid.
            v1=0x00000001,     ///<The DAC soft trigger is valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DacswtrgVal> dacswtrg{}; 
        namespace DacswtrgValC{
            constexpr Register::FieldValue<decltype(dacswtrg)::Type,DacswtrgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dacswtrg)::Type,DacswtrgVal::v1> v1{};
        }
        }
        ///DAC Trigger Select
        enum class DactrgselVal {
            v0=0x00000000,     ///<The DAC hardware trigger is selected.
            v1=0x00000001,     ///<The DAC software trigger is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DactrgselVal> dactrgsel{}; 
        namespace DactrgselValC{
            constexpr Register::FieldValue<decltype(dactrgsel)::Type,DactrgselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dactrgsel)::Type,DactrgselVal::v1> v1{};
        }
        }
        ///DAC Reference Select
        enum class DacrfsVal {
            v0=0x00000000,     ///<The DAC selects DACREF_1 as the reference voltage.
            v1=0x00000001,     ///<The DAC selects DACREF_2 as the reference voltage.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DacrfsVal> dacrfs{}; 
        namespace DacrfsValC{
            constexpr Register::FieldValue<decltype(dacrfs)::Type,DacrfsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dacrfs)::Type,DacrfsVal::v1> v1{};
        }
        }
        ///DAC Enable
        enum class DacenVal {
            v0=0x00000000,     ///<The DAC system is disabled.
            v1=0x00000001,     ///<The DAC system is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DacenVal> dacen{}; 
        namespace DacenValC{
            constexpr Register::FieldValue<decltype(dacen)::Type,DacenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dacen)::Type,DacenVal::v1> v1{};
        }
        }
    }
    namespace Dac1C1{    ///<DAC Control Register 1
        using Addr = Register::Address<0x400cd022,0xffffff60,0,unsigned char>;
        ///DAC Buffer Enable
        enum class DacbfenVal {
            v0=0x00000000,     ///<Buffer read pointer is disabled. The converted data is always the first word of the buffer.
            v1=0x00000001,     ///<Buffer read pointer is enabled. The converted data is the word that the read pointer points to. It means converted data can be from any word of the buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DacbfenVal> dacbfen{}; 
        namespace DacbfenValC{
            constexpr Register::FieldValue<decltype(dacbfen)::Type,DacbfenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dacbfen)::Type,DacbfenVal::v1> v1{};
        }
        }
        ///DAC Buffer Work Mode Select
        enum class DacbfmdVal {
            v00=0x00000000,     ///<Normal mode
            v01=0x00000001,     ///<Swing mode
            v10=0x00000002,     ///<One-Time Scan mode
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,DacbfmdVal> dacbfmd{}; 
        namespace DacbfmdValC{
            constexpr Register::FieldValue<decltype(dacbfmd)::Type,DacbfmdVal::v00> v00{};
            constexpr Register::FieldValue<decltype(dacbfmd)::Type,DacbfmdVal::v01> v01{};
            constexpr Register::FieldValue<decltype(dacbfmd)::Type,DacbfmdVal::v10> v10{};
            constexpr Register::FieldValue<decltype(dacbfmd)::Type,DacbfmdVal::v11> v11{};
        }
        }
        ///DAC Buffer Watermark Select
        enum class DacbfwmVal {
            v00=0x00000000,     ///<1 word
            v01=0x00000001,     ///<2 words
            v10=0x00000002,     ///<3 words
            v11=0x00000003,     ///<4 words
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,DacbfwmVal> dacbfwm{}; 
        namespace DacbfwmValC{
            constexpr Register::FieldValue<decltype(dacbfwm)::Type,DacbfwmVal::v00> v00{};
            constexpr Register::FieldValue<decltype(dacbfwm)::Type,DacbfwmVal::v01> v01{};
            constexpr Register::FieldValue<decltype(dacbfwm)::Type,DacbfwmVal::v10> v10{};
            constexpr Register::FieldValue<decltype(dacbfwm)::Type,DacbfwmVal::v11> v11{};
        }
        }
        ///DMA Enable Select
        enum class DmaenVal {
            v0=0x00000000,     ///<DMA is disabled.
            v1=0x00000001,     ///<DMA is enabled. When DMA is enabled, the DMA request will be generated by original interrupts. The interrupts will not be presented on this module at the same time.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DmaenVal> dmaen{}; 
        namespace DmaenValC{
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::v1> v1{};
        }
        }
    }
    namespace Dac1C2{    ///<DAC Control Register 2
        using Addr = Register::Address<0x400cd023,0xffffff00,0,unsigned char>;
        ///DAC Buffer Upper Limit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dacbfup{}; 
        ///DAC Buffer Read Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dacbfrp{}; 
    }
}
