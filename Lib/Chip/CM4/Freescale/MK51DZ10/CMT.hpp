#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Carrier Modulator Transmitter
    namespace CmtCgh1{    ///<CMT Carrier Generator High Data Register 1
        using Addr = Register::Address<0x40062000,0xffffff00,0,unsigned char>;
        ///Primary Carrier High Time Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ph{}; 
        namespace PhValC{
        }
    }
    namespace CmtCgl1{    ///<CMT Carrier Generator Low Data Register 1
        using Addr = Register::Address<0x40062001,0xffffff00,0,unsigned char>;
        ///Primary Carrier Low Time Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
    }
    namespace CmtCgh2{    ///<CMT Carrier Generator High Data Register 2
        using Addr = Register::Address<0x40062002,0xffffff00,0,unsigned char>;
        ///Secondary Carrier High Time Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sh{}; 
        namespace ShValC{
        }
    }
    namespace CmtCgl2{    ///<CMT Carrier Generator Low Data Register 2
        using Addr = Register::Address<0x40062003,0xffffff00,0,unsigned char>;
        ///Secondary Carrier Low Time Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sl{}; 
        namespace SlValC{
        }
    }
    namespace CmtOc{    ///<CMT Output Control Register
        using Addr = Register::Address<0x40062004,0xffffff1f,0,unsigned char>;
        ///IRO Pin Enable
        enum class IropenVal {
            v0=0x00000000,     ///<CMT_IRO signal disabled
            v1=0x00000001,     ///<CMT_IRO signal enabled as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,IropenVal> iropen{}; 
        namespace IropenValC{
            constexpr Register::FieldValue<decltype(iropen),IropenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iropen),IropenVal::v1> v1{};
        }
        ///CMT Output Polarity
        enum class CmtpolVal {
            v0=0x00000000,     ///<CMT_IRO signal is active low
            v1=0x00000001,     ///<CMT_IRO signal is active high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CmtpolVal> cmtpol{}; 
        namespace CmtpolValC{
            constexpr Register::FieldValue<decltype(cmtpol),CmtpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmtpol),CmtpolVal::v1> v1{};
        }
        ///IRO Latch Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irol{}; 
        namespace IrolValC{
        }
    }
    namespace CmtMsc{    ///<CMT Modulator Status and Control Register
        using Addr = Register::Address<0x40062005,0xffffff00,0,unsigned char>;
        ///Modulator and Carrier Generator Enable
        enum class McgenVal {
            v0=0x00000000,     ///<Modulator and carrier generator disabled
            v1=0x00000001,     ///<Modulator and carrier generator enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,McgenVal> mcgen{}; 
        namespace McgenValC{
            constexpr Register::FieldValue<decltype(mcgen),McgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mcgen),McgenVal::v1> v1{};
        }
        ///End of Cycle Interrupt Enable
        enum class EocieVal {
            v0=0x00000000,     ///<CPU interrupt disabled
            v1=0x00000001,     ///<CPU interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EocieVal> eocie{}; 
        namespace EocieValC{
            constexpr Register::FieldValue<decltype(eocie),EocieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eocie),EocieVal::v1> v1{};
        }
        ///FSK Mode Select
        enum class FskVal {
            v0=0x00000000,     ///<CMT operates in Time or Baseband mode
            v1=0x00000001,     ///<CMT operates in FSK mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FskVal> fsk{}; 
        namespace FskValC{
            constexpr Register::FieldValue<decltype(fsk),FskVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fsk),FskVal::v1> v1{};
        }
        ///Baseband Enable
        enum class BaseVal {
            v0=0x00000000,     ///<Baseband mode disabled
            v1=0x00000001,     ///<Baseband mode enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BaseVal> base{}; 
        namespace BaseValC{
            constexpr Register::FieldValue<decltype(base),BaseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(base),BaseVal::v1> v1{};
        }
        ///Extended Space Enable
        enum class ExspcVal {
            v0=0x00000000,     ///<Extended space disabled
            v1=0x00000001,     ///<Extended space enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ExspcVal> exspc{}; 
        namespace ExspcValC{
            constexpr Register::FieldValue<decltype(exspc),ExspcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exspc),ExspcVal::v1> v1{};
        }
        ///CMT Clock Divide Prescaler
        enum class CmtdivVal {
            v00=0x00000000,     ///<IF * 1
            v01=0x00000001,     ///<IF * 2
            v10=0x00000002,     ///<IF * 4
            v11=0x00000003,     ///<IF * 8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,CmtdivVal> cmtdiv{}; 
        namespace CmtdivValC{
            constexpr Register::FieldValue<decltype(cmtdiv),CmtdivVal::v00> v00{};
            constexpr Register::FieldValue<decltype(cmtdiv),CmtdivVal::v01> v01{};
            constexpr Register::FieldValue<decltype(cmtdiv),CmtdivVal::v10> v10{};
            constexpr Register::FieldValue<decltype(cmtdiv),CmtdivVal::v11> v11{};
        }
        ///End Of Cycle Status Flag
        enum class EocfVal {
            v0=0x00000000,     ///<No end of modulation cycle occurrence since flag last cleared
            v1=0x00000001,     ///<End of modulator cycle has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EocfVal> eocf{}; 
        namespace EocfValC{
            constexpr Register::FieldValue<decltype(eocf),EocfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eocf),EocfVal::v1> v1{};
        }
    }
    namespace CmtCmd1{    ///<CMT Modulator Data Register Mark High
        using Addr = Register::Address<0x40062006,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> mb{}; 
        namespace MbValC{
        }
    }
    namespace CmtCmd2{    ///<CMT Modulator Data Register Mark Low
        using Addr = Register::Address<0x40062007,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> mb{}; 
        namespace MbValC{
        }
    }
    namespace CmtCmd3{    ///<CMT Modulator Data Register Space High
        using Addr = Register::Address<0x40062008,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sb{}; 
        namespace SbValC{
        }
    }
    namespace CmtCmd4{    ///<CMT Modulator Data Register Space Low
        using Addr = Register::Address<0x40062009,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sb{}; 
        namespace SbValC{
        }
    }
    namespace CmtPps{    ///<CMT Primary Prescaler Register
        using Addr = Register::Address<0x4006200a,0xfffffff0,0,unsigned char>;
        ///Primary Prescaler Divider
        enum class PpsdivVal {
            v0000=0x00000000,     ///<Bus Clock * 1
            v0001=0x00000001,     ///<Bus Clock * 2
            v0010=0x00000002,     ///<Bus Clock * 3
            v0011=0x00000003,     ///<Bus Clock * 4
            v0100=0x00000004,     ///<Bus Clock * 5
            v0101=0x00000005,     ///<Bus Clock * 6
            v0110=0x00000006,     ///<Bus Clock * 7
            v0111=0x00000007,     ///<Bus Clock * 8
            v1000=0x00000008,     ///<Bus Clock * 9
            v1001=0x00000009,     ///<Bus Clock * 10
            v1010=0x0000000a,     ///<Bus Clock * 11
            v1011=0x0000000b,     ///<Bus Clock * 12
            v1100=0x0000000c,     ///<Bus Clock * 13
            v1101=0x0000000d,     ///<Bus Clock * 14
            v1110=0x0000000e,     ///<Bus Clock * 15
            v1111=0x0000000f,     ///<Bus Clock * 16
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PpsdivVal> ppsdiv{}; 
        namespace PpsdivValC{
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(ppsdiv),PpsdivVal::v1111> v1111{};
        }
    }
    namespace CmtDma{    ///<CMT Direct Memory Access
        using Addr = Register::Address<0x4006200b,0xfffffffe,0,unsigned char>;
        ///DMA Enable
        enum class DmaVal {
            v0=0x00000000,     ///<DMA transfer request and done are disabled
            v1=0x00000001,     ///<DMA transfer request and done are enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma),DmaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dma),DmaVal::v1> v1{};
        }
    }
}
