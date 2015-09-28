#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonelisr{
        using Addr = Register::Address<0x40026400,0xf082f082>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TCIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> HTIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TEIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DMEIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FEIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TCIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> HTIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TEIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DMEIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FEIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TCIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HTIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TEIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMEIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FEIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TCIF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HTIF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TEIF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMEIF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FEIF0; 
    }
    namespace Nonehisr{
        using Addr = Register::Address<0x40026404,0xf082f082>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TCIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> HTIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TEIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DMEIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FEIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TCIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> HTIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TEIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DMEIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FEIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TCIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HTIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TEIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMEIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FEIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TCIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HTIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TEIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMEIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FEIF4; 
    }
    namespace Nonelifcr{
        using Addr = Register::Address<0x40026408,0xf082f082>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CTCIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CHTIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CTEIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CDMEIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CFEIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CTCIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CHTIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CTEIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CDMEIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CFEIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CTCIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CHTIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTEIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CDMEIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CFEIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTCIF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CHTIF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CTEIF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CDMEIF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFEIF0; 
    }
    namespace Nonehifcr{
        using Addr = Register::Address<0x4002640c,0xf082f082>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CTCIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CHTIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CTEIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CDMEIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CFEIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CTCIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CHTIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CTEIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CDMEIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CFEIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CTCIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CHTIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTEIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CDMEIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CFEIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTCIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CHTIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CTEIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CDMEIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFEIF4; 
    }
    namespace Nones0cr{
        using Addr = Register::Address<0x40026410,0xf0100000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,25)> CHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,23)> MBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> PBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PINCOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> MSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CIRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PFCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nones0ndtr{
        using Addr = Register::Address<0x40026414,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NDT; 
    }
    namespace Nones0par{
        using Addr = Register::Address<0x40026418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PA; 
    }
    namespace Nones0m0ar{
        using Addr = Register::Address<0x4002641c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M0A; 
    }
    namespace Nones0m1ar{
        using Addr = Register::Address<0x40026420,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M1A; 
    }
    namespace Nones0fcr{
        using Addr = Register::Address<0x40026424,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> FS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FTH; 
    }
    namespace Nones1cr{
        using Addr = Register::Address<0x40026428,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,25)> CHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,23)> MBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> PBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PINCOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> MSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CIRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PFCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nones1ndtr{
        using Addr = Register::Address<0x4002642c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NDT; 
    }
    namespace Nones1par{
        using Addr = Register::Address<0x40026430,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PA; 
    }
    namespace Nones1m0ar{
        using Addr = Register::Address<0x40026434,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M0A; 
    }
    namespace Nones1m1ar{
        using Addr = Register::Address<0x40026438,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M1A; 
    }
    namespace Nones1fcr{
        using Addr = Register::Address<0x4002643c,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> FS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FTH; 
    }
    namespace Nones2cr{
        using Addr = Register::Address<0x40026440,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,25)> CHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,23)> MBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> PBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PINCOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> MSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CIRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PFCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nones2ndtr{
        using Addr = Register::Address<0x40026444,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NDT; 
    }
    namespace Nones2par{
        using Addr = Register::Address<0x40026448,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PA; 
    }
    namespace Nones2m0ar{
        using Addr = Register::Address<0x4002644c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M0A; 
    }
    namespace Nones2m1ar{
        using Addr = Register::Address<0x40026450,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M1A; 
    }
    namespace Nones2fcr{
        using Addr = Register::Address<0x40026454,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> FS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FTH; 
    }
    namespace Nones3cr{
        using Addr = Register::Address<0x40026458,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,25)> CHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,23)> MBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> PBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PINCOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> MSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CIRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PFCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nones3ndtr{
        using Addr = Register::Address<0x4002645c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NDT; 
    }
    namespace Nones3par{
        using Addr = Register::Address<0x40026460,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PA; 
    }
    namespace Nones3m0ar{
        using Addr = Register::Address<0x40026464,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M0A; 
    }
    namespace Nones3m1ar{
        using Addr = Register::Address<0x40026468,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M1A; 
    }
    namespace Nones3fcr{
        using Addr = Register::Address<0x4002646c,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> FS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FTH; 
    }
    namespace Nones4cr{
        using Addr = Register::Address<0x40026470,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,25)> CHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,23)> MBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> PBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PINCOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> MSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CIRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PFCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nones4ndtr{
        using Addr = Register::Address<0x40026474,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NDT; 
    }
    namespace Nones4par{
        using Addr = Register::Address<0x40026478,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PA; 
    }
    namespace Nones4m0ar{
        using Addr = Register::Address<0x4002647c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M0A; 
    }
    namespace Nones4m1ar{
        using Addr = Register::Address<0x40026480,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M1A; 
    }
    namespace Nones4fcr{
        using Addr = Register::Address<0x40026484,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> FS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FTH; 
    }
    namespace Nones5cr{
        using Addr = Register::Address<0x40026488,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,25)> CHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,23)> MBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> PBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PINCOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> MSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CIRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PFCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nones5ndtr{
        using Addr = Register::Address<0x4002648c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NDT; 
    }
    namespace Nones5par{
        using Addr = Register::Address<0x40026490,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PA; 
    }
    namespace Nones5m0ar{
        using Addr = Register::Address<0x40026494,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M0A; 
    }
    namespace Nones5m1ar{
        using Addr = Register::Address<0x40026498,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M1A; 
    }
    namespace Nones5fcr{
        using Addr = Register::Address<0x4002649c,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> FS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FTH; 
    }
    namespace Nones6cr{
        using Addr = Register::Address<0x400264a0,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,25)> CHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,23)> MBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> PBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PINCOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> MSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CIRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PFCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nones6ndtr{
        using Addr = Register::Address<0x400264a4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NDT; 
    }
    namespace Nones6par{
        using Addr = Register::Address<0x400264a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PA; 
    }
    namespace Nones6m0ar{
        using Addr = Register::Address<0x400264ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M0A; 
    }
    namespace Nones6m1ar{
        using Addr = Register::Address<0x400264b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M1A; 
    }
    namespace Nones6fcr{
        using Addr = Register::Address<0x400264b4,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> FS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FTH; 
    }
    namespace Nones7cr{
        using Addr = Register::Address<0x400264b8,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,25)> CHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,23)> MBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> PBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PINCOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> MSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CIRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PFCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nones7ndtr{
        using Addr = Register::Address<0x400264bc,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NDT; 
    }
    namespace Nones7par{
        using Addr = Register::Address<0x400264c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PA; 
    }
    namespace Nones7m0ar{
        using Addr = Register::Address<0x400264c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M0A; 
    }
    namespace Nones7m1ar{
        using Addr = Register::Address<0x400264c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> M1A; 
    }
    namespace Nones7fcr{
        using Addr = Register::Address<0x400264cc,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> FS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FTH; 
    }
}
