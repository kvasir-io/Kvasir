#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Carrier Modulator Transmitter
    namespace CmtCgh1{    ///<CMT Carrier Generator High Data Register 1
        using Addr = Register::Address<0x40062000,0xffffff00,0,unsigned char>;
        ///Primary Carrier High Time Data Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ph{}; 
    }
    namespace CmtCgl1{    ///<CMT Carrier Generator Low Data Register 1
        using Addr = Register::Address<0x40062001,0xffffff00,0,unsigned char>;
        ///Primary Carrier Low Time Data Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pl{}; 
    }
    namespace CmtCgh2{    ///<CMT Carrier Generator High Data Register 2
        using Addr = Register::Address<0x40062002,0xffffff00,0,unsigned char>;
        ///Secondary Carrier High Time Data Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sh{}; 
    }
    namespace CmtCgl2{    ///<CMT Carrier Generator Low Data Register 2
        using Addr = Register::Address<0x40062003,0xffffff00,0,unsigned char>;
        ///Secondary Carrier Low Time Data Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sl{}; 
    }
    namespace CmtOc{    ///<CMT Output Control Register
        using Addr = Register::Address<0x40062004,0xffffff1f,0,unsigned char>;
        ///IRO Pin Enable
        enum class iropenVal {
            v0=0x00000000,     ///<The IRO signal is disabled.
            v1=0x00000001,     ///<The IRO signal is enabled as output.
        };
        namespace iropenValC{
            constexpr MPL::Value<iropenVal,iropenVal::v0> v0{};
            constexpr MPL::Value<iropenVal,iropenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,iropenVal> iropen{}; 
        ///CMT Output Polarity
        enum class cmtpolVal {
            v0=0x00000000,     ///<The IRO signal is active-low.
            v1=0x00000001,     ///<The IRO signal is active-high.
        };
        namespace cmtpolValC{
            constexpr MPL::Value<cmtpolVal,cmtpolVal::v0> v0{};
            constexpr MPL::Value<cmtpolVal,cmtpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cmtpolVal> cmtpol{}; 
        ///IRO Latch Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irol{}; 
    }
    namespace CmtMsc{    ///<CMT Modulator Status and Control Register
        using Addr = Register::Address<0x40062005,0xffffff00,0,unsigned char>;
        ///Modulator and Carrier Generator Enable
        enum class mcgenVal {
            v0=0x00000000,     ///<Modulator and carrier generator disabled
            v1=0x00000001,     ///<Modulator and carrier generator enabled
        };
        namespace mcgenValC{
            constexpr MPL::Value<mcgenVal,mcgenVal::v0> v0{};
            constexpr MPL::Value<mcgenVal,mcgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,mcgenVal> mcgen{}; 
        ///End of Cycle Interrupt Enable
        enum class eocieVal {
            v0=0x00000000,     ///<CPU interrupt is disabled.
            v1=0x00000001,     ///<CPU interrupt is enabled.
        };
        namespace eocieValC{
            constexpr MPL::Value<eocieVal,eocieVal::v0> v0{};
            constexpr MPL::Value<eocieVal,eocieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,eocieVal> eocie{}; 
        ///FSK Mode Select
        enum class fskVal {
            v0=0x00000000,     ///<The CMT operates in Time or Baseband mode.
            v1=0x00000001,     ///<The CMT operates in FSK mode.
        };
        namespace fskValC{
            constexpr MPL::Value<fskVal,fskVal::v0> v0{};
            constexpr MPL::Value<fskVal,fskVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,fskVal> fsk{}; 
        ///Baseband Enable
        enum class baseVal {
            v0=0x00000000,     ///<Baseband mode is disabled.
            v1=0x00000001,     ///<Baseband mode is enabled.
        };
        namespace baseValC{
            constexpr MPL::Value<baseVal,baseVal::v0> v0{};
            constexpr MPL::Value<baseVal,baseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,baseVal> base{}; 
        ///Extended Space Enable
        enum class exspcVal {
            v0=0x00000000,     ///<Extended space is disabled.
            v1=0x00000001,     ///<Extended space is enabled.
        };
        namespace exspcValC{
            constexpr MPL::Value<exspcVal,exspcVal::v0> v0{};
            constexpr MPL::Value<exspcVal,exspcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,exspcVal> exspc{}; 
        ///CMT Clock Divide Prescaler
        enum class cmtdivVal {
            v00=0x00000000,     ///<IF * 1
            v01=0x00000001,     ///<IF * 2
            v10=0x00000002,     ///<IF * 4
            v11=0x00000003,     ///<IF * 8
        };
        namespace cmtdivValC{
            constexpr MPL::Value<cmtdivVal,cmtdivVal::v00> v00{};
            constexpr MPL::Value<cmtdivVal,cmtdivVal::v01> v01{};
            constexpr MPL::Value<cmtdivVal,cmtdivVal::v10> v10{};
            constexpr MPL::Value<cmtdivVal,cmtdivVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,cmtdivVal> cmtdiv{}; 
        ///End Of Cycle Status Flag
        enum class eocfVal {
            v0=0x00000000,     ///<End of modulation cycle has not occured since the flag last cleared.
            v1=0x00000001,     ///<End of modulator cycle has occurred.
        };
        namespace eocfValC{
            constexpr MPL::Value<eocfVal,eocfVal::v0> v0{};
            constexpr MPL::Value<eocfVal,eocfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,eocfVal> eocf{}; 
    }
    namespace CmtCmd1{    ///<CMT Modulator Data Register Mark High
        using Addr = Register::Address<0x40062006,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> mb{}; 
    }
    namespace CmtCmd2{    ///<CMT Modulator Data Register Mark Low
        using Addr = Register::Address<0x40062007,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> mb{}; 
    }
    namespace CmtCmd3{    ///<CMT Modulator Data Register Space High
        using Addr = Register::Address<0x40062008,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sb{}; 
    }
    namespace CmtCmd4{    ///<CMT Modulator Data Register Space Low
        using Addr = Register::Address<0x40062009,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sb{}; 
    }
    namespace CmtPps{    ///<CMT Primary Prescaler Register
        using Addr = Register::Address<0x4006200a,0xfffffff0,0,unsigned char>;
        ///Primary Prescaler Divider
        enum class ppsdivVal {
            v0000=0x00000000,     ///<Bus clock * 1
            v0001=0x00000001,     ///<Bus clock * 2
            v0010=0x00000002,     ///<Bus clock * 3
            v0011=0x00000003,     ///<Bus clock * 4
            v0100=0x00000004,     ///<Bus clock * 5
            v0101=0x00000005,     ///<Bus clock * 6
            v0110=0x00000006,     ///<Bus clock * 7
            v0111=0x00000007,     ///<Bus clock * 8
            v1000=0x00000008,     ///<Bus clock * 9
            v1001=0x00000009,     ///<Bus clock * 10
            v1010=0x0000000a,     ///<Bus clock * 11
            v1011=0x0000000b,     ///<Bus clock * 12
            v1100=0x0000000c,     ///<Bus clock * 13
            v1101=0x0000000d,     ///<Bus clock * 14
            v1110=0x0000000e,     ///<Bus clock * 15
            v1111=0x0000000f,     ///<Bus clock * 16
        };
        namespace ppsdivValC{
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v0000> v0000{};
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v0001> v0001{};
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v0010> v0010{};
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v0011> v0011{};
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v0100> v0100{};
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v0101> v0101{};
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v0110> v0110{};
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v0111> v0111{};
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v1000> v1000{};
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v1001> v1001{};
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v1010> v1010{};
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v1011> v1011{};
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v1100> v1100{};
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v1101> v1101{};
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v1110> v1110{};
            constexpr MPL::Value<ppsdivVal,ppsdivVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,ppsdivVal> ppsdiv{}; 
    }
    namespace CmtDma{    ///<CMT Direct Memory Access Register
        using Addr = Register::Address<0x4006200b,0xfffffffe,0,unsigned char>;
        ///DMA Enable
        enum class dmaVal {
            v0=0x00000000,     ///<DMA transfer request and done are disabled.
            v1=0x00000001,     ///<DMA transfer request and done are enabled.
        };
        namespace dmaValC{
            constexpr MPL::Value<dmaVal,dmaVal::v0> v0{};
            constexpr MPL::Value<dmaVal,dmaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dmaVal> dma{}; 
    }
}
