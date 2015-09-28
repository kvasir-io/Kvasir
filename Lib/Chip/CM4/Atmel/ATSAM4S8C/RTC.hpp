#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RTC_cr{
        using Addr = Register::Address<0x400e1460,0xfffcfcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UPDTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> TIMEVSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CALEVSEL; 
    }
    namespace RTC_mr{
        using Addr = Register::Address<0x400e1464,0xc88800ec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HRMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PERSIAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NEGPPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> CORRECTION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> HIGHPPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> OUT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> OUT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> THIGH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> TPERIOD; 
    }
    namespace RTC_timr{
        using Addr = Register::Address<0x400e1468,0xff808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> MIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> HOUR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AMPM; 
    }
    namespace RTC_calr{
        using Addr = Register::Address<0x400e146c,0xc0000080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> CENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> YEAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> MONTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> DATE; 
    }
    namespace RTC_timalr{
        using Addr = Register::Address<0x400e1470,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SECEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> MIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MINEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> HOUR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AMPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> HOUREN; 
    }
    namespace RTC_calalr{
        using Addr = Register::Address<0x400e1474,0x4060ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> MONTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> DATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DATEEN; 
    }
    namespace RTC_sr{
        using Addr = Register::Address<0x400e1478,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACKUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALARM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CALEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TDERR; 
    }
    namespace RTC_sccr{
        using Addr = Register::Address<0x400e147c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACKCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALRCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SECCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CALCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TDERRCLR; 
    }
    namespace RTC_ier{
        using Addr = Register::Address<0x400e1480,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SECEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CALEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TDERREN; 
    }
    namespace RTC_idr{
        using Addr = Register::Address<0x400e1484,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACKDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALRDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SECDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CALDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TDERRDIS; 
    }
    namespace RTC_imr{
        using Addr = Register::Address<0x400e1488,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAL; 
    }
    namespace RTC_ver{
        using Addr = Register::Address<0x400e148c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NVTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NVCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NVTIMALR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NVCALALR; 
    }
}
