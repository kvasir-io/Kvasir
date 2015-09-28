#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace USBPHY_pwd{
        using Addr = Register::Address<0x400a2000,0xffe1e3ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXPWDFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXPWDIBIAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXPWDV2I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXPWDENV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RXPWD1PT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXPWDDIFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RXPWDRX; 
    }
    namespace USBPHY_pwd_set{
        using Addr = Register::Address<0x400a2004,0xffe1e3ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXPWDFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXPWDIBIAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXPWDV2I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXPWDENV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RXPWD1PT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXPWDDIFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RXPWDRX; 
    }
    namespace USBPHY_pwd_clr{
        using Addr = Register::Address<0x400a2008,0xffe1e3ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXPWDFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXPWDIBIAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXPWDV2I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXPWDENV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RXPWD1PT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXPWDDIFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RXPWDRX; 
    }
    namespace USBPHY_pwd_tog{
        using Addr = Register::Address<0x400a200c,0xffe1e3ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXPWDFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXPWDIBIAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXPWDV2I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXPWDENV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RXPWD1PT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXPWDDIFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RXPWDRX; 
    }
    namespace USBPHY_tx{
        using Addr = Register::Address<0x400a2010,0xe3f0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> D_CAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TXCAL45DM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TXCAL45DP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26)> USBPHY_TX_EDGECTRL; 
    }
    namespace USBPHY_tx_set{
        using Addr = Register::Address<0x400a2014,0xe3f0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> D_CAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TXCAL45DM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TXCAL45DP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26)> USBPHY_TX_EDGECTRL; 
    }
    namespace USBPHY_tx_clr{
        using Addr = Register::Address<0x400a2018,0xe3f0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> D_CAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TXCAL45DM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TXCAL45DP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26)> USBPHY_TX_EDGECTRL; 
    }
    namespace USBPHY_tx_tog{
        using Addr = Register::Address<0x400a201c,0xe3f0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> D_CAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TXCAL45DM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TXCAL45DP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26)> USBPHY_TX_EDGECTRL; 
    }
    namespace USBPHY_rx{
        using Addr = Register::Address<0x400a2020,0xffbfff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ENVADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> DISCONADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RXDBYPASS; 
    }
    namespace USBPHY_rx_set{
        using Addr = Register::Address<0x400a2024,0xffbfff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ENVADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> DISCONADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RXDBYPASS; 
    }
    namespace USBPHY_rx_clr{
        using Addr = Register::Address<0x400a2028,0xffbfff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ENVADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> DISCONADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RXDBYPASS; 
    }
    namespace USBPHY_rx_tog{
        using Addr = Register::Address<0x400a202c,0xffbfff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ENVADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> DISCONADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RXDBYPASS; 
    }
    namespace USBPHY_ctrl{
        using Addr = Register::Address<0x400a2030,0x06e32ffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENHOSTDISCONDETECT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DEVPLUGIN_IRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ENUTMILEVEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ENUTMILEVEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> AUTORESUME_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ENAUTOCLR_CLKGATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ENAUTOCLR_PHY_PWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FSDLL_RST_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> OTG_ID_VALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> HOST_FORCE_LS_SE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UTMI_SUSPENDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CLKGATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SFTRST; 
    }
    namespace USBPHY_ctrl_set{
        using Addr = Register::Address<0x400a2034,0x06e32ffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENHOSTDISCONDETECT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DEVPLUGIN_IRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ENUTMILEVEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ENUTMILEVEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> AUTORESUME_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ENAUTOCLR_CLKGATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ENAUTOCLR_PHY_PWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FSDLL_RST_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> OTG_ID_VALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> HOST_FORCE_LS_SE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UTMI_SUSPENDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CLKGATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SFTRST; 
    }
    namespace USBPHY_ctrl_clr{
        using Addr = Register::Address<0x400a2038,0x06e32ffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENHOSTDISCONDETECT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DEVPLUGIN_IRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ENUTMILEVEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ENUTMILEVEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> AUTORESUME_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ENAUTOCLR_CLKGATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ENAUTOCLR_PHY_PWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FSDLL_RST_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> OTG_ID_VALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> HOST_FORCE_LS_SE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UTMI_SUSPENDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CLKGATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SFTRST; 
    }
    namespace USBPHY_ctrl_tog{
        using Addr = Register::Address<0x400a203c,0x06e32ffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENHOSTDISCONDETECT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DEVPLUGIN_IRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ENUTMILEVEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ENUTMILEVEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> AUTORESUME_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ENAUTOCLR_CLKGATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ENAUTOCLR_PHY_PWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FSDLL_RST_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> OTG_ID_VALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> HOST_FORCE_LS_SE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UTMI_SUSPENDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CLKGATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SFTRST; 
    }
    namespace USBPHY_status{
        using Addr = Register::Address<0x400a2040,0xfffffab7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HOSTDISCONDETECT_STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DEVPLUGIN_STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OTGID_STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RESUME_STATUS; 
    }
    namespace USBPHY_debug{
        using Addr = Register::Address<0x400a2050,0x80e0e0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTGIDPIOLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DEBUG_INTERFACE_HOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> HSTPULLDOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> ENHSTPULLDOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TX2RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENTX2RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> SQUELCHRESETCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ENSQUELCHRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,25)> SQUELCHRESETLENGTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> HOST_RESUME_DEBUG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CLKGATE; 
    }
    namespace USBPHY_debug_set{
        using Addr = Register::Address<0x400a2054,0x80e0e0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTGIDPIOLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DEBUG_INTERFACE_HOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> HSTPULLDOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> ENHSTPULLDOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TX2RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENTX2RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> SQUELCHRESETCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ENSQUELCHRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,25)> SQUELCHRESETLENGTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> HOST_RESUME_DEBUG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CLKGATE; 
    }
    namespace USBPHY_debug_clr{
        using Addr = Register::Address<0x400a2058,0x80e0e0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTGIDPIOLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DEBUG_INTERFACE_HOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> HSTPULLDOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> ENHSTPULLDOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TX2RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENTX2RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> SQUELCHRESETCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ENSQUELCHRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,25)> SQUELCHRESETLENGTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> HOST_RESUME_DEBUG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CLKGATE; 
    }
    namespace USBPHY_debug_tog{
        using Addr = Register::Address<0x400a205c,0x80e0e0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTGIDPIOLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DEBUG_INTERFACE_HOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> HSTPULLDOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> ENHSTPULLDOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TX2RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENTX2RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> SQUELCHRESETCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ENSQUELCHRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,25)> SQUELCHRESETLENGTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> HOST_RESUME_DEBUG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CLKGATE; 
    }
    namespace USBPHY_debug0_status{
        using Addr = Register::Address<0x400a2060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LOOP_BACK_FAIL_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> UTMI_RXERROR_FAIL_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26)> SQUELCH_COUNT; 
    }
    namespace USBPHY_debug1{
        using Addr = Register::Address<0x400a2070,0xffff9fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> ENTAILADJVD; 
    }
    namespace USBPHY_debug1_set{
        using Addr = Register::Address<0x400a2074,0xffff9fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> ENTAILADJVD; 
    }
    namespace USBPHY_debug1_clr{
        using Addr = Register::Address<0x400a2078,0xffff9fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> ENTAILADJVD; 
    }
    namespace USBPHY_debug1_tog{
        using Addr = Register::Address<0x400a207c,0xffff9fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> ENTAILADJVD; 
    }
    namespace USBPHY_version{
        using Addr = Register::Address<0x400a2080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> STEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> MINOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> MAJOR; 
    }
    namespace USBPHY_pll_sic{
        using Addr = Register::Address<0x400a20a0,0x7ffec7bc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PLL_DIV_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PLL_EN_USB_CLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PLL_HOLD_RING_OFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PLL_POWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PLL_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLL_BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PLL_LOCK; 
    }
    namespace USBPHY_pll_sic_set{
        using Addr = Register::Address<0x400a20a4,0x7ffec7bc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PLL_DIV_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PLL_EN_USB_CLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PLL_HOLD_RING_OFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PLL_POWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PLL_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLL_BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PLL_LOCK; 
    }
    namespace USBPHY_pll_sic_clr{
        using Addr = Register::Address<0x400a20a8,0x7ffec7bc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PLL_DIV_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PLL_EN_USB_CLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PLL_HOLD_RING_OFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PLL_POWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PLL_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLL_BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PLL_LOCK; 
    }
    namespace USBPHY_pll_sic_tog{
        using Addr = Register::Address<0x400a20ac,0x7ffec7bc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PLL_DIV_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PLL_EN_USB_CLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PLL_HOLD_RING_OFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PLL_POWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PLL_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLL_BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PLL_LOCK; 
    }
    namespace USBPHY_usb1_vbus_detect{
        using Addr = Register::Address<0x400a20c0,0xf38bfff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> VBUSVALID_THRESH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> VBUSVALID_TO_SESSVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> PWRUP_CMPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DISCHARGE_VBUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CHARGE_VBUS; 
    }
    namespace USBPHY_usb1_vbus_detect_set{
        using Addr = Register::Address<0x400a20c4,0xf38bfff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> VBUSVALID_THRESH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> VBUSVALID_TO_SESSVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> PWRUP_CMPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DISCHARGE_VBUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CHARGE_VBUS; 
    }
    namespace USBPHY_usb1_vbus_detect_clr{
        using Addr = Register::Address<0x400a20c8,0xf38bfff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> VBUSVALID_THRESH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> VBUSVALID_TO_SESSVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> PWRUP_CMPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DISCHARGE_VBUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CHARGE_VBUS; 
    }
    namespace USBPHY_usb1_vbus_detect_tog{
        using Addr = Register::Address<0x400a20cc,0xf38bfff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> VBUSVALID_THRESH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> VBUSVALID_TO_SESSVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> PWRUP_CMPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DISCHARGE_VBUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CHARGE_VBUS; 
    }
    namespace USBPHY_usb1_vbus_det_stat{
        using Addr = Register::Address<0x400a20d0,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SESSEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VBUS_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> VBUS_VALID_3V; 
    }
    namespace USBPHY_anactrl{
        using Addr = Register::Address<0x400a2100,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TESTCLK_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PFD_CLKGATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PFD_CLK_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,4)> PFD_FRAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DEV_PULLDOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> EMPH_PULSE_CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EMPH_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> EMPH_CUR_CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PFD_STABLE; 
    }
    namespace USBPHY_anactrl_set{
        using Addr = Register::Address<0x400a2104,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TESTCLK_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PFD_CLKGATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PFD_CLK_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,4)> PFD_FRAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DEV_PULLDOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> EMPH_PULSE_CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EMPH_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> EMPH_CUR_CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PFD_STABLE; 
    }
    namespace USBPHY_anactrl_clr{
        using Addr = Register::Address<0x400a2108,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TESTCLK_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PFD_CLKGATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PFD_CLK_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,4)> PFD_FRAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DEV_PULLDOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> EMPH_PULSE_CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EMPH_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> EMPH_CUR_CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PFD_STABLE; 
    }
    namespace USBPHY_anactrl_tog{
        using Addr = Register::Address<0x400a210c,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TESTCLK_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PFD_CLKGATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PFD_CLK_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,4)> PFD_FRAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DEV_PULLDOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> EMPH_PULSE_CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EMPH_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> EMPH_CUR_CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PFD_STABLE; 
    }
    namespace USBPHY_usb1_loopback{
        using Addr = Register::Address<0x400a2110,0xff007e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UTMI_TESTSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UTMI_DIG_TST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UTMI_DIG_TST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSTI_TX_HS_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TSTI_TX_LS_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TSTI_TX_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TSTI_TX_HIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UTMO_DIG_TST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UTMO_DIG_TST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TSTI_HSFS_MODE_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TSTPKT; 
    }
    namespace USBPHY_usb1_loopback_set{
        using Addr = Register::Address<0x400a2114,0xff007e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UTMI_TESTSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UTMI_DIG_TST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UTMI_DIG_TST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSTI_TX_HS_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TSTI_TX_LS_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TSTI_TX_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TSTI_TX_HIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UTMO_DIG_TST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UTMO_DIG_TST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TSTI_HSFS_MODE_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TSTPKT; 
    }
    namespace USBPHY_usb1_loopback_clr{
        using Addr = Register::Address<0x400a2118,0xff007e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UTMI_TESTSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UTMI_DIG_TST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UTMI_DIG_TST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSTI_TX_HS_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TSTI_TX_LS_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TSTI_TX_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TSTI_TX_HIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UTMO_DIG_TST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UTMO_DIG_TST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TSTI_HSFS_MODE_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TSTPKT; 
    }
    namespace USBPHY_usb1_loopback_tog{
        using Addr = Register::Address<0x400a211c,0xff007e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UTMI_TESTSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UTMI_DIG_TST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UTMI_DIG_TST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSTI_TX_HS_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TSTI_TX_LS_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TSTI_TX_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TSTI_TX_HIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UTMO_DIG_TST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UTMO_DIG_TST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TSTI_HSFS_MODE_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TSTPKT; 
    }
    namespace USBPHY_usb1_loopback_hsfscnt{
        using Addr = Register::Address<0x400a2120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TSTI_HS_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TSTI_FS_NUMBER; 
    }
    namespace USBPHY_usb1_loopback_hsfscnt_set{
        using Addr = Register::Address<0x400a2124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TSTI_HS_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TSTI_FS_NUMBER; 
    }
    namespace USBPHY_usb1_loopback_hsfscnt_clr{
        using Addr = Register::Address<0x400a2128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TSTI_HS_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TSTI_FS_NUMBER; 
    }
    namespace USBPHY_usb1_loopback_hsfscnt_tog{
        using Addr = Register::Address<0x400a212c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TSTI_HS_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TSTI_FS_NUMBER; 
    }
    namespace USBPHY_trim_override_en{
        using Addr = Register::Address<0x400a2130,0x0000ffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRIM_DIV_SEL_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TRIM_ENV_TAIL_ADJ_VD_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIM_TX_D_CAL_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TRIM_TX_CAL45DP_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIM_TX_CAL45DM_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TRIM_PLL_CTRL0_DIV_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TRIM_USB_REG_ENV_TAIL_ADJ_VD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> TRIM_USBPHY_TX_D_CAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRIM_USBPHY_TX_CAL45DP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> TRIM_USBPHY_TX_CAL45DM; 
    }
    namespace USBPHY_trim_override_en_set{
        using Addr = Register::Address<0x400a2134,0x0000ffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRIM_DIV_SEL_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TRIM_ENV_TAIL_ADJ_VD_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIM_TX_D_CAL_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TRIM_TX_CAL45DP_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIM_TX_CAL45DM_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TRIM_PLL_CTRL0_DIV_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TRIM_USB_REG_ENV_TAIL_ADJ_VD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> TRIM_USBPHY_TX_D_CAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRIM_USBPHY_TX_CAL45DP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> TRIM_USBPHY_TX_CAL45DM; 
    }
    namespace USBPHY_trim_override_en_clr{
        using Addr = Register::Address<0x400a2138,0x0000ffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRIM_DIV_SEL_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TRIM_ENV_TAIL_ADJ_VD_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIM_TX_D_CAL_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TRIM_TX_CAL45DP_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIM_TX_CAL45DM_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TRIM_PLL_CTRL0_DIV_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TRIM_USB_REG_ENV_TAIL_ADJ_VD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> TRIM_USBPHY_TX_D_CAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRIM_USBPHY_TX_CAL45DP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> TRIM_USBPHY_TX_CAL45DM; 
    }
    namespace USBPHY_trim_override_en_tog{
        using Addr = Register::Address<0x400a213c,0x0000ffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRIM_DIV_SEL_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TRIM_ENV_TAIL_ADJ_VD_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIM_TX_D_CAL_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TRIM_TX_CAL45DP_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIM_TX_CAL45DM_OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TRIM_PLL_CTRL0_DIV_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TRIM_USB_REG_ENV_TAIL_ADJ_VD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> TRIM_USBPHY_TX_D_CAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRIM_USBPHY_TX_CAL45DP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> TRIM_USBPHY_TX_CAL45DM; 
    }
}
