#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pulse Width Modulation Controller
    namespace PwmMr{    ///<PWM Mode Register
        using Addr = Register::Address<0xfffb8000,0xf000f000,0,unsigned>;
        ///CLKA, CLKB Divide Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> diva{}; 
        ///None
        enum class PreaVal {
            mck=0x00000000,     ///<Master Clock
            mckdiv2=0x00000001,     ///<Master Clock divided by 2
            mckdiv4=0x00000002,     ///<Master Clock divided by 4
            mckdiv8=0x00000003,     ///<Master Clock divided by 8
            mckdiv16=0x00000004,     ///<Master Clock divided by 16
            mckdiv32=0x00000005,     ///<Master Clock divided by 32
            mckdiv64=0x00000006,     ///<Master Clock divided by 64
            mckdiv128=0x00000007,     ///<Master Clock divided by 128
            mckdiv256=0x00000008,     ///<Master Clock divided by 256
            mckdiv512=0x00000009,     ///<Master Clock divided by 512
            mckdiv1024=0x0000000a,     ///<Master Clock divided by 1024
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,PreaVal> prea{}; 
        namespace PreaValC{
            constexpr Register::FieldValue<decltype(prea)::Type,PreaVal::mck> mck{};
            constexpr Register::FieldValue<decltype(prea)::Type,PreaVal::mckdiv2> mckdiv2{};
            constexpr Register::FieldValue<decltype(prea)::Type,PreaVal::mckdiv4> mckdiv4{};
            constexpr Register::FieldValue<decltype(prea)::Type,PreaVal::mckdiv8> mckdiv8{};
            constexpr Register::FieldValue<decltype(prea)::Type,PreaVal::mckdiv16> mckdiv16{};
            constexpr Register::FieldValue<decltype(prea)::Type,PreaVal::mckdiv32> mckdiv32{};
            constexpr Register::FieldValue<decltype(prea)::Type,PreaVal::mckdiv64> mckdiv64{};
            constexpr Register::FieldValue<decltype(prea)::Type,PreaVal::mckdiv128> mckdiv128{};
            constexpr Register::FieldValue<decltype(prea)::Type,PreaVal::mckdiv256> mckdiv256{};
            constexpr Register::FieldValue<decltype(prea)::Type,PreaVal::mckdiv512> mckdiv512{};
            constexpr Register::FieldValue<decltype(prea)::Type,PreaVal::mckdiv1024> mckdiv1024{};
        }
        ///CLKA, CLKB Divide Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> divb{}; 
        ///None
        enum class PrebVal {
            mck=0x00000000,     ///<Master Clock
            mckdiv2=0x00000001,     ///<Master Clock divided by 2
            mckdiv4=0x00000002,     ///<Master Clock divided by 4
            mckdiv8=0x00000003,     ///<Master Clock divided by 8
            mckdiv16=0x00000004,     ///<Master Clock divided by 16
            mckdiv32=0x00000005,     ///<Master Clock divided by 32
            mckdiv64=0x00000006,     ///<Master Clock divided by 64
            mckdiv128=0x00000007,     ///<Master Clock divided by 128
            mckdiv256=0x00000008,     ///<Master Clock divided by 256
            mckdiv512=0x00000009,     ///<Master Clock divided by 512
            mckdiv1024=0x0000000a,     ///<Master Clock divided by 1024
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,PrebVal> preb{}; 
        namespace PrebValC{
            constexpr Register::FieldValue<decltype(preb)::Type,PrebVal::mck> mck{};
            constexpr Register::FieldValue<decltype(preb)::Type,PrebVal::mckdiv2> mckdiv2{};
            constexpr Register::FieldValue<decltype(preb)::Type,PrebVal::mckdiv4> mckdiv4{};
            constexpr Register::FieldValue<decltype(preb)::Type,PrebVal::mckdiv8> mckdiv8{};
            constexpr Register::FieldValue<decltype(preb)::Type,PrebVal::mckdiv16> mckdiv16{};
            constexpr Register::FieldValue<decltype(preb)::Type,PrebVal::mckdiv32> mckdiv32{};
            constexpr Register::FieldValue<decltype(preb)::Type,PrebVal::mckdiv64> mckdiv64{};
            constexpr Register::FieldValue<decltype(preb)::Type,PrebVal::mckdiv128> mckdiv128{};
            constexpr Register::FieldValue<decltype(preb)::Type,PrebVal::mckdiv256> mckdiv256{};
            constexpr Register::FieldValue<decltype(preb)::Type,PrebVal::mckdiv512> mckdiv512{};
            constexpr Register::FieldValue<decltype(preb)::Type,PrebVal::mckdiv1024> mckdiv1024{};
        }
    }
    namespace PwmEna{    ///<PWM Enable Register
        using Addr = Register::Address<0xfffb8004,0xfffffff0,0,unsigned>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
    }
    namespace PwmDis{    ///<PWM Disable Register
        using Addr = Register::Address<0xfffb8008,0xfffffff0,0,unsigned>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
    }
    namespace PwmSr{    ///<PWM Status Register
        using Addr = Register::Address<0xfffb800c,0xfffffff0,0,unsigned>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
    }
    namespace PwmIer{    ///<PWM Interrupt Enable Register
        using Addr = Register::Address<0xfffb8010,0xfffffff0,0,unsigned>;
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
    }
    namespace PwmIdr{    ///<PWM Interrupt Disable Register
        using Addr = Register::Address<0xfffb8014,0xfffffff0,0,unsigned>;
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
    }
    namespace PwmImr{    ///<PWM Interrupt Mask Register
        using Addr = Register::Address<0xfffb8018,0xfffffff0,0,unsigned>;
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
    }
    namespace PwmIsr{    ///<PWM Interrupt Status Register
        using Addr = Register::Address<0xfffb801c,0xfffffff0,0,unsigned>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
    }
    namespace PwmCmr0{    ///<PWM Channel Mode Register (ch_num = 0)
        using Addr = Register::Address<0xfffb8200,0xfffff8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master Clock
            mckdiv2=0x00000001,     ///<Master Clock divided by 2
            mckdiv4=0x00000002,     ///<Master Clock divided by 4
            mckdiv8=0x00000003,     ///<Master Clock divided by 8
            mckdiv16=0x00000004,     ///<Master Clock divided by 16
            mckdiv32=0x00000005,     ///<Master Clock divided by 32
            mckdiv64=0x00000006,     ///<Master Clock divided by 64
            mckdiv128=0x00000007,     ///<Master Clock divided by 128
            mckdiv256=0x00000008,     ///<Master Clock divided by 256
            mckdiv512=0x00000009,     ///<Master Clock divided by 512
            mckdiv1024=0x0000000a,     ///<Master Clock divided by 1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv2> mckdiv2{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv4> mckdiv4{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv8> mckdiv8{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv16> mckdiv16{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv32> mckdiv32{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv64> mckdiv64{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv128> mckdiv128{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv256> mckdiv256{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv512> mckdiv512{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv1024> mckdiv1024{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Channel Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cpd{}; 
    }
    namespace PwmCdty0{    ///<PWM Channel Duty Cycle Register (ch_num = 0)
        using Addr = Register::Address<0xfffb8204,0x00000000,0,unsigned>;
        ///Channel Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cdty{}; 
    }
    namespace PwmCprd0{    ///<PWM Channel Period Register (ch_num = 0)
        using Addr = Register::Address<0xfffb8208,0x00000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cprd{}; 
    }
    namespace PwmCcnt0{    ///<PWM Channel Counter Register (ch_num = 0)
        using Addr = Register::Address<0xfffb820c,0x00000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace PwmCupd0{    ///<PWM Channel Update Register (ch_num = 0)
        using Addr = Register::Address<0xfffb8210,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cupd{}; 
    }
    namespace PwmCmr1{    ///<PWM Channel Mode Register (ch_num = 1)
        using Addr = Register::Address<0xfffb8220,0xfffff8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master Clock
            mckdiv2=0x00000001,     ///<Master Clock divided by 2
            mckdiv4=0x00000002,     ///<Master Clock divided by 4
            mckdiv8=0x00000003,     ///<Master Clock divided by 8
            mckdiv16=0x00000004,     ///<Master Clock divided by 16
            mckdiv32=0x00000005,     ///<Master Clock divided by 32
            mckdiv64=0x00000006,     ///<Master Clock divided by 64
            mckdiv128=0x00000007,     ///<Master Clock divided by 128
            mckdiv256=0x00000008,     ///<Master Clock divided by 256
            mckdiv512=0x00000009,     ///<Master Clock divided by 512
            mckdiv1024=0x0000000a,     ///<Master Clock divided by 1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv2> mckdiv2{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv4> mckdiv4{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv8> mckdiv8{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv16> mckdiv16{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv32> mckdiv32{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv64> mckdiv64{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv128> mckdiv128{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv256> mckdiv256{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv512> mckdiv512{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv1024> mckdiv1024{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Channel Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cpd{}; 
    }
    namespace PwmCdty1{    ///<PWM Channel Duty Cycle Register (ch_num = 1)
        using Addr = Register::Address<0xfffb8224,0x00000000,0,unsigned>;
        ///Channel Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cdty{}; 
    }
    namespace PwmCprd1{    ///<PWM Channel Period Register (ch_num = 1)
        using Addr = Register::Address<0xfffb8228,0x00000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cprd{}; 
    }
    namespace PwmCcnt1{    ///<PWM Channel Counter Register (ch_num = 1)
        using Addr = Register::Address<0xfffb822c,0x00000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace PwmCupd1{    ///<PWM Channel Update Register (ch_num = 1)
        using Addr = Register::Address<0xfffb8230,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cupd{}; 
    }
    namespace PwmCmr2{    ///<PWM Channel Mode Register (ch_num = 2)
        using Addr = Register::Address<0xfffb8240,0xfffff8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master Clock
            mckdiv2=0x00000001,     ///<Master Clock divided by 2
            mckdiv4=0x00000002,     ///<Master Clock divided by 4
            mckdiv8=0x00000003,     ///<Master Clock divided by 8
            mckdiv16=0x00000004,     ///<Master Clock divided by 16
            mckdiv32=0x00000005,     ///<Master Clock divided by 32
            mckdiv64=0x00000006,     ///<Master Clock divided by 64
            mckdiv128=0x00000007,     ///<Master Clock divided by 128
            mckdiv256=0x00000008,     ///<Master Clock divided by 256
            mckdiv512=0x00000009,     ///<Master Clock divided by 512
            mckdiv1024=0x0000000a,     ///<Master Clock divided by 1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv2> mckdiv2{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv4> mckdiv4{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv8> mckdiv8{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv16> mckdiv16{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv32> mckdiv32{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv64> mckdiv64{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv128> mckdiv128{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv256> mckdiv256{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv512> mckdiv512{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv1024> mckdiv1024{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Channel Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cpd{}; 
    }
    namespace PwmCdty2{    ///<PWM Channel Duty Cycle Register (ch_num = 2)
        using Addr = Register::Address<0xfffb8244,0x00000000,0,unsigned>;
        ///Channel Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cdty{}; 
    }
    namespace PwmCprd2{    ///<PWM Channel Period Register (ch_num = 2)
        using Addr = Register::Address<0xfffb8248,0x00000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cprd{}; 
    }
    namespace PwmCcnt2{    ///<PWM Channel Counter Register (ch_num = 2)
        using Addr = Register::Address<0xfffb824c,0x00000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace PwmCupd2{    ///<PWM Channel Update Register (ch_num = 2)
        using Addr = Register::Address<0xfffb8250,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cupd{}; 
    }
    namespace PwmCmr3{    ///<PWM Channel Mode Register (ch_num = 3)
        using Addr = Register::Address<0xfffb8260,0xfffff8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master Clock
            mckdiv2=0x00000001,     ///<Master Clock divided by 2
            mckdiv4=0x00000002,     ///<Master Clock divided by 4
            mckdiv8=0x00000003,     ///<Master Clock divided by 8
            mckdiv16=0x00000004,     ///<Master Clock divided by 16
            mckdiv32=0x00000005,     ///<Master Clock divided by 32
            mckdiv64=0x00000006,     ///<Master Clock divided by 64
            mckdiv128=0x00000007,     ///<Master Clock divided by 128
            mckdiv256=0x00000008,     ///<Master Clock divided by 256
            mckdiv512=0x00000009,     ///<Master Clock divided by 512
            mckdiv1024=0x0000000a,     ///<Master Clock divided by 1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv2> mckdiv2{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv4> mckdiv4{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv8> mckdiv8{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv16> mckdiv16{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv32> mckdiv32{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv64> mckdiv64{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv128> mckdiv128{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv256> mckdiv256{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv512> mckdiv512{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckdiv1024> mckdiv1024{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Channel Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cpd{}; 
    }
    namespace PwmCdty3{    ///<PWM Channel Duty Cycle Register (ch_num = 3)
        using Addr = Register::Address<0xfffb8264,0x00000000,0,unsigned>;
        ///Channel Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cdty{}; 
    }
    namespace PwmCprd3{    ///<PWM Channel Period Register (ch_num = 3)
        using Addr = Register::Address<0xfffb8268,0x00000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cprd{}; 
    }
    namespace PwmCcnt3{    ///<PWM Channel Counter Register (ch_num = 3)
        using Addr = Register::Address<0xfffb826c,0x00000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace PwmCupd3{    ///<PWM Channel Update Register (ch_num = 3)
        using Addr = Register::Address<0xfffb8270,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cupd{}; 
    }
}
