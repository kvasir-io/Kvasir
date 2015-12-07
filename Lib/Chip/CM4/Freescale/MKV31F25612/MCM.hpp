#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Core Platform Miscellaneous Control Module
    namespace McmPlasc{    ///<Crossbar Switch (AXBS) Slave Configuration
        using Addr = Register::Address<0xe0080008,0xffffff00,0,unsigned>;
        ///Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> asc{}; 
        namespace AscValC{
        }
    }
    namespace McmPlamc{    ///<Crossbar Switch (AXBS) Master Configuration
        using Addr = Register::Address<0xe008000a,0xffffff00,0,unsigned>;
        ///Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> amc{}; 
        namespace AmcValC{
        }
    }
    namespace McmPlacr{    ///<Crossbar Switch (AXBS) Control Register
        using Addr = Register::Address<0xe008000c,0xfffffdff,0,unsigned>;
        ///Arbitration select
        enum class ArbVal {
            v0=0x00000000,     ///<Fixed-priority arbitration for the crossbar masters
            v1=0x00000001,     ///<Round-robin arbitration for the crossbar masters
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb),ArbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(arb),ArbVal::v1> v1{};
        }
    }
    namespace McmIscr{    ///<Interrupt Status and Control Register
        using Addr = Register::Address<0xe0080010,0x60ff60ff,0,unsigned>;
        ///FPU invalid operation interrupt status
        enum class FiocVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiocVal> fioc{}; 
        namespace FiocValC{
            constexpr Register::FieldValue<decltype(fioc),FiocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fioc),FiocVal::v1> v1{};
        }
        ///FPU divide-by-zero interrupt status
        enum class FdzcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,FdzcVal> fdzc{}; 
        namespace FdzcValC{
            constexpr Register::FieldValue<decltype(fdzc),FdzcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fdzc),FdzcVal::v1> v1{};
        }
        ///FPU overflow interrupt status
        enum class FofcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,FofcVal> fofc{}; 
        namespace FofcValC{
            constexpr Register::FieldValue<decltype(fofc),FofcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fofc),FofcVal::v1> v1{};
        }
        ///FPU underflow interrupt status
        enum class FufcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,FufcVal> fufc{}; 
        namespace FufcValC{
            constexpr Register::FieldValue<decltype(fufc),FufcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fufc),FufcVal::v1> v1{};
        }
        ///FPU inexact interrupt status
        enum class FixcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,FixcVal> fixc{}; 
        namespace FixcValC{
            constexpr Register::FieldValue<decltype(fixc),FixcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fixc),FixcVal::v1> v1{};
        }
        ///FPU input denormal interrupt status
        enum class FidcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,FidcVal> fidc{}; 
        namespace FidcValC{
            constexpr Register::FieldValue<decltype(fidc),FidcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fidc),FidcVal::v1> v1{};
        }
        ///FPU invalid operation interrupt enable
        enum class FioceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,FioceVal> fioce{}; 
        namespace FioceValC{
            constexpr Register::FieldValue<decltype(fioce),FioceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fioce),FioceVal::v1> v1{};
        }
        ///FPU divide-by-zero interrupt enable
        enum class FdzceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,FdzceVal> fdzce{}; 
        namespace FdzceValC{
            constexpr Register::FieldValue<decltype(fdzce),FdzceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fdzce),FdzceVal::v1> v1{};
        }
        ///FPU overflow interrupt enable
        enum class FofceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,FofceVal> fofce{}; 
        namespace FofceValC{
            constexpr Register::FieldValue<decltype(fofce),FofceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fofce),FofceVal::v1> v1{};
        }
        ///FPU underflow interrupt enable
        enum class FufceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,FufceVal> fufce{}; 
        namespace FufceValC{
            constexpr Register::FieldValue<decltype(fufce),FufceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fufce),FufceVal::v1> v1{};
        }
        ///FPU inexact interrupt enable
        enum class FixceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,FixceVal> fixce{}; 
        namespace FixceValC{
            constexpr Register::FieldValue<decltype(fixce),FixceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fixce),FixceVal::v1> v1{};
        }
        ///FPU input denormal interrupt enable
        enum class FidceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,FidceVal> fidce{}; 
        namespace FidceValC{
            constexpr Register::FieldValue<decltype(fidce),FidceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fidce),FidceVal::v1> v1{};
        }
    }
    namespace McmCpo{    ///<Compute Operation Control Register
        using Addr = Register::Address<0xe0080040,0xfffffff8,0,unsigned>;
        ///Compute Operation request
        enum class CporeqVal {
            v0=0x00000000,     ///<Request is cleared.
            v1=0x00000001,     ///<Request Compute Operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CporeqVal> cporeq{}; 
        namespace CporeqValC{
            constexpr Register::FieldValue<decltype(cporeq),CporeqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cporeq),CporeqVal::v1> v1{};
        }
        ///Compute Operation acknowledge
        enum class CpoackVal {
            v0=0x00000000,     ///<Compute operation entry has not completed or compute operation exit has completed.
            v1=0x00000001,     ///<Compute operation entry has completed or compute operation exit has not completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CpoackVal> cpoack{}; 
        namespace CpoackValC{
            constexpr Register::FieldValue<decltype(cpoack),CpoackVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpoack),CpoackVal::v1> v1{};
        }
        ///Compute Operation wakeup on interrupt
        enum class CpowoiVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<When set, the CPOREQ is cleared on any interrupt or exception vector fetch.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CpowoiVal> cpowoi{}; 
        namespace CpowoiValC{
            constexpr Register::FieldValue<decltype(cpowoi),CpowoiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpowoi),CpowoiVal::v1> v1{};
        }
    }
}
