#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonectrl{
        using Addr = Register::Address<0x40004000,0xfc00f008>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CONTROLLER_RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FIFO_RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA_RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DMA_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> READ_WAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SEND_IRQ_RESPONSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ABORT_READ_DATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SEND_CCSD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SEND_AUTO_STOP_CCSD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CEATA_DEVICE_INTERRUPT_STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CARD_VOLTAGE_A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CARD_VOLTAGE_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ENABLE_OD_PULLUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> USE_INTERNAL_DMAC; 
    }
    namespace Nonepwren{
        using Addr = Register::Address<0x40004004,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> POWER_ENABLE; 
    }
    namespace Noneclkdiv{
        using Addr = Register::Address<0x40004008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLK_DIVIDER0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CLK_DIVIDER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CLK_DIVIDER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> CLK_DIVIDER3; 
    }
    namespace Noneclksrc{
        using Addr = Register::Address<0x4000400c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLK_SOURCE; 
    }
    namespace Noneclkena{
        using Addr = Register::Address<0x40004010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CCLK_LOW_POWER; 
    }
    namespace Nonetmout{
        using Addr = Register::Address<0x40004014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RESPONSE_TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> DATA_TIMEOUT; 
    }
    namespace Nonectype{
        using Addr = Register::Address<0x40004018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CARD_WIDTH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CARD_WIDTH1; 
    }
    namespace Noneblksiz{
        using Addr = Register::Address<0x4000401c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BLOCK_SIZE; 
    }
    namespace Nonebytcnt{
        using Addr = Register::Address<0x40004020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BYTE_COUNT; 
    }
    namespace Noneintmask{
        using Addr = Register::Address<0x40004024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DRTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ACD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> SDIO_INT_MASK; 
    }
    namespace Nonecmdarg{
        using Addr = Register::Address<0x40004028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CMD_ARG; 
    }
    namespace Nonecmd{
        using Addr = Register::Address<0x4000402c,0x60000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CMD_INDEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RESPONSE_EXPECT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RESPONSE_LENGTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHECK_RESPONSE_CRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DATA_EXPECTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> READ_WRITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TRANSFER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SEND_AUTO_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAIT_PRVDATA_COMPLETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STOP_ABORT_CMd; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEND_INITIALIZATION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> CARD_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> UPDATE_CLOCK_REGISTERS_ONLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> READ_CEATA_DEVICE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CCS_EXPECTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ENABLE_BOOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EXPECT_BOOT_ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DISABLE_BOOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> BOOT_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> VOLT_SWITCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> START_CMD; 
    }
    namespace Noneresp0{
        using Addr = Register::Address<0x40004030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RESPONSE0; 
    }
    namespace Noneresp1{
        using Addr = Register::Address<0x40004034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RESPONSE1; 
    }
    namespace Noneresp2{
        using Addr = Register::Address<0x40004038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RESPONSE2; 
    }
    namespace Noneresp3{
        using Addr = Register::Address<0x4000403c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RESPONSE3; 
    }
    namespace Nonemintsts{
        using Addr = Register::Address<0x40004040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DRTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ACD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> SDIO_INTERRUPT; 
    }
    namespace Nonerintsts{
        using Addr = Register::Address<0x40004044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RTO_BAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DRTO_BDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ACD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> SDIO_INTERRUPT; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x40004048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIFO_RX_WATERMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FIFO_TX_WATERMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FIFO_EMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FIFO_FULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CMDFSMSTATES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DATA_3_STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DATA_BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DATA_STATE_MC_BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,11)> RESPONSE_INDEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,17)> FIFO_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMA_ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DMA_REQ; 
    }
    namespace Nonefifoth{
        using Addr = Register::Address<0x4000404c,0x8000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TX_WMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> RX_WMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> DW_DMA_MUTIPLE_TRANSACTION_SIZE; 
    }
    namespace Nonecdetect{
        using Addr = Register::Address<0x40004050,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> CARD_DETECT_N; 
    }
    namespace Nonewrtprt{
        using Addr = Register::Address<0x40004054,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> WRITE_PROTECT; 
    }
    namespace Nonegpio{
        using Addr = Register::Address<0x40004058,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> GPO; 
    }
    namespace Nonetcbcnt{
        using Addr = Register::Address<0x4000405c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TRANS_CARD_BYTE_COUNT; 
    }
    namespace Nonetbbcnt{
        using Addr = Register::Address<0x40004060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TRANS_FIFO_BYTE_COUNT; 
    }
    namespace Nonedebnce{
        using Addr = Register::Address<0x40004064,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> DEBOUNCE_COUNT; 
    }
    namespace Noneusrid{
        using Addr = Register::Address<0x40004068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> USRID; 
    }
    namespace Noneverid{
        using Addr = Register::Address<0x4000406c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VERID; 
    }
    namespace Noneuhs_reg{
        using Addr = Register::Address<0x40004074,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VOLT_REG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DDR_REG; 
    }
    namespace Nonerst_n{
        using Addr = Register::Address<0x40004078,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CARD_RESET; 
    }
    namespace Nonebmod{
        using Addr = Register::Address<0x40004080,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,2)> DSL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PBL; 
    }
    namespace Nonepldmnd{
        using Addr = Register::Address<0x40004084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PD; 
    }
    namespace Nonedbaddr{
        using Addr = Register::Address<0x40004088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SDL; 
    }
    namespace Noneidsts{
        using Addr = Register::Address<0x4000408c,0xfffe00c8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> EB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,13)> FSM; 
    }
    namespace Noneidinten{
        using Addr = Register::Address<0x40004090,0xfffffcc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AIS; 
    }
    namespace Nonedscaddr{
        using Addr = Register::Address<0x40004094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HDA; 
    }
    namespace Nonebufaddr{
        using Addr = Register::Address<0x40004098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HBA; 
    }
}
