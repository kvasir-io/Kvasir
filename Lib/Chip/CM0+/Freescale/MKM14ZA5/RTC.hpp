#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RTC_yearmon{
        using Addr = Register::Address<0x40050000,0xffff00f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MON_CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> YROFST; 
    }
    namespace RTC_days{
        using Addr = Register::Address<0x40050002,0xfffff8e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DAY_CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DOW; 
    }
    namespace RTC_hourmin{
        using Addr = Register::Address<0x40050004,0xffffe0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> MIN_CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> HOUR_CNT; 
    }
    namespace RTC_seconds{
        using Addr = Register::Address<0x40050006,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEC_CNT; 
    }
    namespace RTC_alm_yearmon{
        using Addr = Register::Address<0x40050008,0xffff00f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ALM_MON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> ALM_YEAR; 
    }
    namespace RTC_alm_days{
        using Addr = Register::Address<0x4005000a,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ALM_DAY; 
    }
    namespace RTC_alm_hourmin{
        using Addr = Register::Address<0x4005000c,0xffffe0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> ALM_MIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> ALM_HOUR; 
    }
    namespace RTC_alm_seconds{
        using Addr = Register::Address<0x4005000e,0xfffffcc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> ALM_SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DEC_SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> INC_SEC; 
    }
    namespace RTC_ctrl{
        using Addr = Register::Address<0x40050010,0xffff9ea0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FINEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COMP_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> ALM_MATCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIMER_STB_MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DST_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> CLKOUT; 
    }
    namespace RTC_status{
        using Addr = Register::Address<0x40050012,0xfffff610>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INVAL_BIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_PROT_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPU_LOW_VOLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RST_SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CMP_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BUS_ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CMP_DONE; 
    }
    namespace RTC_isr{
        using Addr = Register::Address<0x40050014,0xffff0002>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TAMPER_IS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ALM_IS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DAY_IS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HOUR_IS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MIN_IS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IS_1HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IS_2HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IS_4HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IS_8HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IS_16HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IS_32HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IS_64HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IS_128HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IS_256HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> IS_512HZ; 
    }
    namespace RTC_ier{
        using Addr = Register::Address<0x40050016,0xffff0002>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TAMPER_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ALM_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DAY_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HOUR_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MIN_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IE_1HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IE_2HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IE_4HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IE_8HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IE_16HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IE_32HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IE_64HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IE_128HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE_256HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> IE_512HZ; 
    }
    namespace RTC_gp_data_reg{
        using Addr = Register::Address<0x40050020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GP_DATA_REG; 
    }
    namespace RTC_dst_hour{
        using Addr = Register::Address<0x40050022,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DST_END_HOUR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> DST_START_HOUR; 
    }
    namespace RTC_dst_month{
        using Addr = Register::Address<0x40050024,0xfffff0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DST_END_MONTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DST_START_MONTH; 
    }
    namespace RTC_dst_day{
        using Addr = Register::Address<0x40050026,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DST_END_DAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> DST_START_DAY; 
    }
    namespace RTC_compen{
        using Addr = Register::Address<0x40050028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COMPEN_VAL; 
    }
    namespace RTC_tamper_direction{
        using Addr = Register::Address<0x4005002c,0xfffff0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> A_P_TAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> I_O_TAMP; 
    }
    namespace RTC_tamper_qscr{
        using Addr = Register::Address<0x4005002e,0xffff08f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> Q_FULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> Q_FULL_INT_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> Q_CLEAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> LFSR_CLK_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> LFSR_DURATION; 
    }
    namespace RTC_tamper_scr{
        using Addr = Register::Address<0x40050032,0xfffff0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TMPR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TMPR_STS; 
    }
    namespace RTC_filter01_cfg{
        using Addr = Register::Address<0x40050034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FIL_DUR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CLK_SEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> FIL_DUR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> CLK_SEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> POL0; 
    }
    namespace RTC_filter2_cfg{
        using Addr = Register::Address<0x40050036,0xffff00ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> FIL_DUR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> CLK_SEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> POL2; 
    }
    namespace RTC_tamper_queue{
        using Addr = Register::Address<0x40050040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TAMPER_DATA; 
    }
    namespace RTC_ctrl2{
        using Addr = Register::Address<0x40050042,0xffffff1e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TAMP_CFG_OVER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> WAKEUP_STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WAKEUP_MODE; 
    }
}
