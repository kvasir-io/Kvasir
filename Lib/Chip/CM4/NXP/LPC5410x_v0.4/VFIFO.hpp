#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefifoctlusart{
        using Addr = Register::Address<0x1c038100,0x0000f8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXPAUSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXPAUSED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXPAUSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXPAUSED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXFIFOTOTAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXFIFOTOTAL; 
    }
    namespace Nonefifoupdateusart{
        using Addr = Register::Address<0x1c038104,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USART0RXUPDATESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USART1RXUPDATESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USART2RXUPDATESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USART3RXUPDATESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> USART0TXUPDATESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART1TXUPDATESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USART2TXUPDATESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> USART3TXUPDATESIZE; 
    }
    namespace Nonefifocfgusart0{
        using Addr = Register::Address<0x1c038110,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TXSIZE; 
    }
    namespace Nonefifocfgusart1{
        using Addr = Register::Address<0x1c038114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TXSIZE; 
    }
    namespace Nonefifocfgusart2{
        using Addr = Register::Address<0x1c038118,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TXSIZE; 
    }
    namespace Nonefifocfgusart3{
        using Addr = Register::Address<0x1c03811c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TXSIZE; 
    }
    namespace Nonefifoctlspi{
        using Addr = Register::Address<0x1c038200,0x0000f8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXPAUSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXPAUSED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXPAUSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXPAUSED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXFIFOTOTAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXFIFOTOTAL; 
    }
    namespace Nonefifoupdatespi{
        using Addr = Register::Address<0x1c038204,0xfffcfffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPI0RXUPDATESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPI1RXUPDATESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SPI0TXUPDATESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SPI1TXUPDATESIZE; 
    }
    namespace Nonefifocfgspi0{
        using Addr = Register::Address<0x1c038210,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TXSIZE; 
    }
    namespace Nonefifocfgspi1{
        using Addr = Register::Address<0x1c038214,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TXSIZE; 
    }
    namespace Nonecfgusart0{
        using Addr = Register::Address<0x1c039000,0x000000cf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIMEOUTCONTONWRITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIMEOUTCONTONEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TIMEOUTBASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TIMEOUTVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXTHRESHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXTHRESHOLD; 
    }
    namespace Nonecfgusart1{
        using Addr = Register::Address<0x1c039100,0x000000cf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIMEOUTCONTONWRITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIMEOUTCONTONEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TIMEOUTBASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TIMEOUTVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXTHRESHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXTHRESHOLD; 
    }
    namespace Nonecfgusart2{
        using Addr = Register::Address<0x1c039200,0x000000cf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIMEOUTCONTONWRITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIMEOUTCONTONEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TIMEOUTBASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TIMEOUTVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXTHRESHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXTHRESHOLD; 
    }
    namespace Nonecfgusart3{
        using Addr = Register::Address<0x1c039300,0x000000cf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIMEOUTCONTONWRITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIMEOUTCONTONEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TIMEOUTBASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TIMEOUTVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXTHRESHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXTHRESHOLD; 
    }
    namespace Nonestatusart0{
        using Addr = Register::Address<0x1c039004,0x0000fc6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BUSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXCOUNT; 
    }
    namespace Nonestatusart1{
        using Addr = Register::Address<0x1c039104,0x0000fc6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BUSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXCOUNT; 
    }
    namespace Nonestatusart2{
        using Addr = Register::Address<0x1c039204,0x0000fc6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BUSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXCOUNT; 
    }
    namespace Nonestatusart3{
        using Addr = Register::Address<0x1c039304,0x0000fc6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BUSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXCOUNT; 
    }
    namespace Noneintstatusart0{
        using Addr = Register::Address<0x1c039008,0x0000fc6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BUSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXCOUNT; 
    }
    namespace Noneintstatusart1{
        using Addr = Register::Address<0x1c039108,0x0000fc6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BUSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXCOUNT; 
    }
    namespace Noneintstatusart2{
        using Addr = Register::Address<0x1c039208,0x0000fc6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BUSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXCOUNT; 
    }
    namespace Noneintstatusart3{
        using Addr = Register::Address<0x1c039308,0x0000fc6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BUSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXCOUNT; 
    }
    namespace Nonectlsetusart0{
        using Addr = Register::Address<0x1c03900c,0xfffffcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTHINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTHINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUTINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXFLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXFLUSH; 
    }
    namespace Nonectlsetusart1{
        using Addr = Register::Address<0x1c03910c,0xfffffcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTHINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTHINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUTINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXFLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXFLUSH; 
    }
    namespace Nonectlsetusart2{
        using Addr = Register::Address<0x1c03920c,0xfffffcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTHINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTHINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUTINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXFLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXFLUSH; 
    }
    namespace Nonectlsetusart3{
        using Addr = Register::Address<0x1c03930c,0xfffffcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTHINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTHINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUTINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXFLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXFLUSH; 
    }
    namespace Nonectlclrusart0{
        using Addr = Register::Address<0x1c039010,0xfffffcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTHINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTHINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUTINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXFLUSHCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXFLUSHCLR; 
    }
    namespace Nonectlclrusart1{
        using Addr = Register::Address<0x1c039110,0xfffffcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTHINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTHINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUTINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXFLUSHCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXFLUSHCLR; 
    }
    namespace Nonectlclrusart2{
        using Addr = Register::Address<0x1c039210,0xfffffcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTHINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTHINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUTINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXFLUSHCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXFLUSHCLR; 
    }
    namespace Nonectlclrusart3{
        using Addr = Register::Address<0x1c039310,0xfffffcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTHINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTHINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUTINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXFLUSHCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXFLUSHCLR; 
    }
    namespace Nonerxdatusart0{
        using Addr = Register::Address<0x1c039014,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RXDAT; 
    }
    namespace Nonerxdatusart1{
        using Addr = Register::Address<0x1c039114,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RXDAT; 
    }
    namespace Nonerxdatusart2{
        using Addr = Register::Address<0x1c039214,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RXDAT; 
    }
    namespace Nonerxdatusart3{
        using Addr = Register::Address<0x1c039314,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RXDAT; 
    }
    namespace Nonerxdatstatusart0{
        using Addr = Register::Address<0x1c039018,0xffff1e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RXDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FRAMERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PARITYERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXNOISE; 
    }
    namespace Nonerxdatstatusart1{
        using Addr = Register::Address<0x1c039118,0xffff1e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RXDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FRAMERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PARITYERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXNOISE; 
    }
    namespace Nonerxdatstatusart2{
        using Addr = Register::Address<0x1c039218,0xffff1e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RXDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FRAMERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PARITYERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXNOISE; 
    }
    namespace Nonerxdatstatusart3{
        using Addr = Register::Address<0x1c039318,0xffff1e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RXDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FRAMERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PARITYERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXNOISE; 
    }
    namespace Nonetxdatusart0{
        using Addr = Register::Address<0x1c03901c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> TXDAT; 
    }
    namespace Nonetxdatusart1{
        using Addr = Register::Address<0x1c03911c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> TXDAT; 
    }
    namespace Nonetxdatusart2{
        using Addr = Register::Address<0x1c03921c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> TXDAT; 
    }
    namespace Nonetxdatusart3{
        using Addr = Register::Address<0x1c03931c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> TXDAT; 
    }
    namespace Nonecfgspi0{
        using Addr = Register::Address<0x1c03a000,0x000000cf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIMEOUTCONTONWRITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIMEOUTCONTONEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TIMEOUTBASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TIMEOUTVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXTHRESHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXTHRESHOLD; 
    }
    namespace Nonecfgspi1{
        using Addr = Register::Address<0x1c03a100,0x000000cf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIMEOUTCONTONWRITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIMEOUTCONTONEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TIMEOUTBASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TIMEOUTVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXTHRESHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXTHRESHOLD; 
    }
    namespace Nonestatspi0{
        using Addr = Register::Address<0x1c03a004,0x0000fc6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BUSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXCOUNT; 
    }
    namespace Nonestatspi1{
        using Addr = Register::Address<0x1c03a104,0x0000fc6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BUSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXCOUNT; 
    }
    namespace Noneintstatspi0{
        using Addr = Register::Address<0x1c03a008,0x0000fc6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BUSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXCOUNT; 
    }
    namespace Noneintstatspi1{
        using Addr = Register::Address<0x1c03a108,0x0000fc6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BUSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXCOUNT; 
    }
    namespace Nonectlsetspi0{
        using Addr = Register::Address<0x1c03a00c,0xfffffcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTHINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTHINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUTINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXFLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXFLUSH; 
    }
    namespace Nonectlsetspi1{
        using Addr = Register::Address<0x1c03a10c,0xfffffcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTHINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTHINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUTINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXFLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXFLUSH; 
    }
    namespace Nonectlclrspi0{
        using Addr = Register::Address<0x1c03a010,0xfffffcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTHINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTHINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUTINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXFLUSHCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXFLUSHCLR; 
    }
    namespace Nonectlclrspi1{
        using Addr = Register::Address<0x1c03a110,0xfffffcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTHINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTHINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXTIMEOUTINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXFLUSHCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXFLUSHCLR; 
    }
    namespace Nonerxdatspi0{
        using Addr = Register::Address<0x1c03a014,0xffe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RXSSEL0_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXSSEL1_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RXSSEL2_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXSSEL3_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SOT; 
    }
    namespace Nonerxdatspi1{
        using Addr = Register::Address<0x1c03a114,0xffe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RXSSEL0_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXSSEL1_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RXSSEL2_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXSSEL3_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SOT; 
    }
    namespace Nonetxdatspi0{
        using Addr = Register::Address<0x1c03a018,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXSSEL0_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TXSSEL1_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TXSSEL2_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TXSSEL3_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RXIGNORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> LEN; 
    }
    namespace Nonetxdatspi1{
        using Addr = Register::Address<0x1c03a118,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXSSEL0_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TXSSEL1_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TXSSEL2_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TXSSEL3_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RXIGNORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> LEN; 
    }
}
