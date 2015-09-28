#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneusb_inten{
        using Addr = Register::Address<0x40060000,0xffff7ef0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BUS_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USB_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLDET_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKEUP_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WAKEUP_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> INNAK_EN; 
    }
    namespace Noneusb_intsts{
        using Addr = Register::Address<0x40060004,0x7fc0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BUS_STS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USB_STS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLDET_STS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKEUP_STS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPEVT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPEVT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPEVT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPEVT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPEVT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPEVT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SETUP; 
    }
    namespace Noneusb_faddr{
        using Addr = Register::Address<0x40060008,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> FADDR; 
    }
    namespace Noneusb_epsts{
        using Addr = Register::Address<0x4006000c,0xfc00007f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EPSTS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> EPSTS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,14)> EPSTS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> EPSTS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> EPSTS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23)> EPSTS5; 
    }
    namespace Noneusb_attr{
        using Addr = Register::Address<0x40060010,0xfffff840>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SUSPEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RESUME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PHY_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RWAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> USB_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DPPU_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PWRDN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BYTEM; 
    }
    namespace Noneusb_fldet{
        using Addr = Register::Address<0x40060014,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLDET; 
    }
    namespace Noneusb_bufseg{
        using Addr = Register::Address<0x40060018,0xfffffe07>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,3)> BUFSEG; 
    }
    namespace Noneusb_bufseg0{
        using Addr = Register::Address<0x40060020,0xfffffe07>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,3)> BUFSEG0; 
    }
    namespace Noneusb_mxpld0{
        using Addr = Register::Address<0x40060024,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> MXPLD; 
    }
    namespace Noneusb_cfg0{
        using Addr = Register::Address<0x40060028,0xfffffd00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EP_NUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ISOCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> STATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DSQ_SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CSTALL; 
    }
    namespace Noneusb_cfgp0{
        using Addr = Register::Address<0x4006002c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SSTALL; 
    }
    namespace Noneusb_bufseg1{
        using Addr = Register::Address<0x40060030,0xfffffe07>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,3)> BUFSEG1; 
    }
    namespace Noneusb_mxpld1{
        using Addr = Register::Address<0x40060034,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> MXPLD; 
    }
    namespace Noneusb_cfg1{
        using Addr = Register::Address<0x40060038,0xfffffd00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EP_NUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ISOCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> STATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DSQ_SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CSTALL; 
    }
    namespace Noneusb_cfgp1{
        using Addr = Register::Address<0x4006003c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SSTALL; 
    }
    namespace Noneusb_bufseg2{
        using Addr = Register::Address<0x40060040,0xfffffe07>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,3)> BUFSEG2; 
    }
    namespace Noneusb_mxpld2{
        using Addr = Register::Address<0x40060044,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> MXPLD; 
    }
    namespace Noneusb_cfg2{
        using Addr = Register::Address<0x40060048,0xfffffd00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EP_NUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ISOCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> STATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DSQ_SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CSTALL; 
    }
    namespace Noneusb_cfgp2{
        using Addr = Register::Address<0x4006004c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SSTALL; 
    }
    namespace Noneusb_bufseg3{
        using Addr = Register::Address<0x40060050,0xfffffe07>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,3)> BUFSEG3; 
    }
    namespace Noneusb_mxpld3{
        using Addr = Register::Address<0x40060054,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> MXPLD; 
    }
    namespace Noneusb_cfg3{
        using Addr = Register::Address<0x40060058,0xfffffd00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EP_NUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ISOCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> STATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DSQ_SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CSTALL; 
    }
    namespace Noneusb_cfgp3{
        using Addr = Register::Address<0x4006005c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SSTALL; 
    }
    namespace Noneusb_bufseg4{
        using Addr = Register::Address<0x40060060,0xfffffe07>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,3)> BUFSEG4; 
    }
    namespace Noneusb_mxpld4{
        using Addr = Register::Address<0x40060064,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> MXPLD; 
    }
    namespace Noneusb_cfg4{
        using Addr = Register::Address<0x40060068,0xfffffd00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EP_NUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ISOCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> STATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DSQ_SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CSTALL; 
    }
    namespace Noneusb_cfgp4{
        using Addr = Register::Address<0x4006006c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SSTALL; 
    }
    namespace Noneusb_bufseg5{
        using Addr = Register::Address<0x40060070,0xfffffe07>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,3)> BUFSEG5; 
    }
    namespace Noneusb_mxpld5{
        using Addr = Register::Address<0x40060074,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> MXPLD; 
    }
    namespace Noneusb_cfg5{
        using Addr = Register::Address<0x40060078,0xfffffd00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EP_NUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ISOCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> STATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DSQ_SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CSTALL; 
    }
    namespace Noneusb_cfgp5{
        using Addr = Register::Address<0x4006007c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SSTALL; 
    }
    namespace Noneusb_drvse0{
        using Addr = Register::Address<0x40060090,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DRVSE0; 
    }
    namespace Noneusb_pdma{
        using Addr = Register::Address<0x400600a4,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PDMA_RW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PDMA_EN; 
    }
}
