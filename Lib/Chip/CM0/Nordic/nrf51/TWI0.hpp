#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Two-wire interface master 0.
    namespace NonetasksStartrx{    ///<Start 2-Wire master receive sequence.
        using Addr = Register::Address<0x40003000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStarttx{    ///<Start 2-Wire master transmit sequence.
        using Addr = Register::Address<0x40003008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop 2-Wire transaction.
        using Addr = Register::Address<0x40003014,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSuspend{    ///<Suspend 2-Wire transaction.
        using Addr = Register::Address<0x4000301c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksResume{    ///<Resume 2-Wire transaction.
        using Addr = Register::Address<0x40003020,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsStopped{    ///<Two-wire stopped.
        using Addr = Register::Address<0x40003104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRxdready{    ///<Two-wire ready to deliver new RXD byte received.
        using Addr = Register::Address<0x40003108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsTxdsent{    ///<Two-wire finished sending last TXD byte.
        using Addr = Register::Address<0x4000311c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsError{    ///<Two-wire error detected.
        using Addr = Register::Address<0x40003124,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsBb{    ///<Two-wire byte boundary.
        using Addr = Register::Address<0x40003138,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsSuspended{    ///<Two-wire suspended.
        using Addr = Register::Address<0x40003148,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcuts for TWI.
        using Addr = Register::Address<0x40003200,0xfffffffc,0,unsigned>;
        ///Shortcut between BB event and the SUSPEND task.
        enum class bbSuspendVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace bbSuspendValC{
            constexpr MPL::Value<bbSuspendVal,bbSuspendVal::disabled> disabled{};
            constexpr MPL::Value<bbSuspendVal,bbSuspendVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bbSuspendVal> bbSuspend{}; 
        ///Shortcut between BB event and the STOP task.
        enum class bbStopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace bbStopValC{
            constexpr MPL::Value<bbStopVal,bbStopVal::disabled> disabled{};
            constexpr MPL::Value<bbStopVal,bbStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bbStopVal> bbStop{}; 
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40003304,0xfffbbd79,0,unsigned>;
        ///Enable interrupt on STOPPED event.
        enum class stoppedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Enable interrupt on READY event.
        enum class rxdreadyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace rxdreadyValC{
            constexpr MPL::Value<rxdreadyVal,rxdreadyVal::disabled> disabled{};
            constexpr MPL::Value<rxdreadyVal,rxdreadyVal::enabled> enabled{};
            constexpr MPL::Value<rxdreadyVal,rxdreadyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rxdreadyVal> rxdready{}; 
        ///Enable interrupt on TXDSENT event.
        enum class txdsentVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace txdsentValC{
            constexpr MPL::Value<txdsentVal,txdsentVal::disabled> disabled{};
            constexpr MPL::Value<txdsentVal,txdsentVal::enabled> enabled{};
            constexpr MPL::Value<txdsentVal,txdsentVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,txdsentVal> txdsent{}; 
        ///Enable interrupt on ERROR event.
        enum class errorVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace errorValC{
            constexpr MPL::Value<errorVal,errorVal::disabled> disabled{};
            constexpr MPL::Value<errorVal,errorVal::enabled> enabled{};
            constexpr MPL::Value<errorVal,errorVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,errorVal> error{}; 
        ///Enable interrupt on BB event.
        enum class bbVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace bbValC{
            constexpr MPL::Value<bbVal,bbVal::disabled> disabled{};
            constexpr MPL::Value<bbVal,bbVal::enabled> enabled{};
            constexpr MPL::Value<bbVal,bbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,bbVal> bb{}; 
        ///Enable interrupt on SUSPENDED event.
        enum class suspendedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace suspendedValC{
            constexpr MPL::Value<suspendedVal,suspendedVal::disabled> disabled{};
            constexpr MPL::Value<suspendedVal,suspendedVal::enabled> enabled{};
            constexpr MPL::Value<suspendedVal,suspendedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,suspendedVal> suspended{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40003308,0xfffbbd79,0,unsigned>;
        ///Disable interrupt on STOPPED event.
        enum class stoppedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Disable interrupt on RXDREADY event.
        enum class rxdreadyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace rxdreadyValC{
            constexpr MPL::Value<rxdreadyVal,rxdreadyVal::disabled> disabled{};
            constexpr MPL::Value<rxdreadyVal,rxdreadyVal::enabled> enabled{};
            constexpr MPL::Value<rxdreadyVal,rxdreadyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rxdreadyVal> rxdready{}; 
        ///Disable interrupt on TXDSENT event.
        enum class txdsentVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace txdsentValC{
            constexpr MPL::Value<txdsentVal,txdsentVal::disabled> disabled{};
            constexpr MPL::Value<txdsentVal,txdsentVal::enabled> enabled{};
            constexpr MPL::Value<txdsentVal,txdsentVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,txdsentVal> txdsent{}; 
        ///Disable interrupt on ERROR event.
        enum class errorVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace errorValC{
            constexpr MPL::Value<errorVal,errorVal::disabled> disabled{};
            constexpr MPL::Value<errorVal,errorVal::enabled> enabled{};
            constexpr MPL::Value<errorVal,errorVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,errorVal> error{}; 
        ///Disable interrupt on BB event.
        enum class bbVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace bbValC{
            constexpr MPL::Value<bbVal,bbVal::disabled> disabled{};
            constexpr MPL::Value<bbVal,bbVal::enabled> enabled{};
            constexpr MPL::Value<bbVal,bbVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,bbVal> bb{}; 
        ///Disable interrupt on SUSPENDED event.
        enum class suspendedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace suspendedValC{
            constexpr MPL::Value<suspendedVal,suspendedVal::disabled> disabled{};
            constexpr MPL::Value<suspendedVal,suspendedVal::enabled> enabled{};
            constexpr MPL::Value<suspendedVal,suspendedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,suspendedVal> suspended{}; 
    }
    namespace Noneerrorsrc{    ///<Two-wire error source. Write error field to 1 to clear error.
        using Addr = Register::Address<0x400034c4,0xfffffff8,0,unsigned>;
        ///Byte received in RXD register before read of the last received byte (data loss).
        enum class overrunVal {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear error on write.
        };
        namespace overrunValC{
            constexpr MPL::Value<overrunVal,overrunVal::notpresent> notpresent{};
            constexpr MPL::Value<overrunVal,overrunVal::present> present{};
            constexpr MPL::Value<overrunVal,overrunVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,overrunVal> overrun{}; 
        ///NACK received after sending the address.
        enum class anackVal {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear error on write.
        };
        namespace anackValC{
            constexpr MPL::Value<anackVal,anackVal::notpresent> notpresent{};
            constexpr MPL::Value<anackVal,anackVal::present> present{};
            constexpr MPL::Value<anackVal,anackVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,anackVal> anack{}; 
        ///NACK received after sending a data byte.
        enum class dnackVal {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear error on write.
        };
        namespace dnackValC{
            constexpr MPL::Value<dnackVal,dnackVal::notpresent> notpresent{};
            constexpr MPL::Value<dnackVal,dnackVal::present> present{};
            constexpr MPL::Value<dnackVal,dnackVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,dnackVal> dnack{}; 
    }
    namespace Noneenable{    ///<Enable two-wire master.
        using Addr = Register::Address<0x40003500,0xfffffff8,0,unsigned>;
        ///Enable or disable W2M
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Nonepselscl{    ///<Pin select for SCL.
        using Addr = Register::Address<0x40003508,0xffffffff,0,unsigned>;
    }
    namespace Nonepselsda{    ///<Pin select for SDA.
        using Addr = Register::Address<0x4000350c,0xffffffff,0,unsigned>;
    }
    namespace Nonerxd{    ///<RX data register.
        using Addr = Register::Address<0x40003518,0xffffff00,0,unsigned>;
        ///RX data from last transfer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
    }
    namespace Nonetxd{    ///<TX data register.
        using Addr = Register::Address<0x4000351c,0xffffff00,0,unsigned>;
        ///TX data for next transfer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace Nonefrequency{    ///<Two-wire frequency.
        using Addr = Register::Address<0x40003524,0x00000000,0,unsigned>;
        ///Two-wire master clock frequency.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> frequency{}; 
    }
    namespace Noneaddress{    ///<Address used in the two-wire transfer.
        using Addr = Register::Address<0x40003588,0xffffff80,0,unsigned>;
        ///Two-wire address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40003ffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control.
        enum class powerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        namespace powerValC{
            constexpr MPL::Value<powerVal,powerVal::disabled> disabled{};
            constexpr MPL::Value<powerVal,powerVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,powerVal> power{}; 
    }
}
