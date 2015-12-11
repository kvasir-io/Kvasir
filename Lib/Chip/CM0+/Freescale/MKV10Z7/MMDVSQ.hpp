#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Memory-Mapped Divide and Square Root
    namespace MmdvsqDend{    ///<Dividend Register
        using Addr = Register::Address<0xf0004000,0x00000000,0,unsigned>;
        ///Dividend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dividend{}; 
    }
    namespace MmdvsqDsor{    ///<Divisor Register
        using Addr = Register::Address<0xf0004004,0x00000000,0,unsigned>;
        ///Divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> divisor{}; 
    }
    namespace MmdvsqCsr{    ///<Control/Status Register
        using Addr = Register::Address<0xf0004008,0x1fffffc0,0,unsigned>;
        ///Start
        enum class SrtVal {
            v0=0x00000000,     ///<No operation initiated
            v1=0x00000001,     ///<If CSR[DFS] = 1, then initiate a divide calculation, else ignore
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SrtVal> srt{}; 
        namespace SrtValC{
            constexpr Register::FieldValue<decltype(srt)::Type,SrtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srt)::Type,SrtVal::v1> v1{};
        }
        }
        ///Unsigned calculation
        enum class UsgnVal {
            v0=0x00000000,     ///<Perform a signed divide
            v1=0x00000001,     ///<Perform an unsigned divide
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,UsgnVal> usgn{}; 
        namespace UsgnValC{
            constexpr Register::FieldValue<decltype(usgn)::Type,UsgnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usgn)::Type,UsgnVal::v1> v1{};
        }
        }
        ///REMainder calculation
        enum class RemVal {
            v0=0x00000000,     ///<Return the quotient in the RES for the divide calculation
            v1=0x00000001,     ///<Return the remainder in the RES for the divide calculation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RemVal> rem{}; 
        namespace RemValC{
            constexpr Register::FieldValue<decltype(rem)::Type,RemVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rem)::Type,RemVal::v1> v1{};
        }
        }
        ///Divide-by-Zero-Enable
        enum class DzeVal {
            v0=0x00000000,     ///<Reads of the RES register return the register contents
            v1=0x00000001,     ///<If CSR[DZ] = 1, an attempted read of RES register is error terminated to signal a divide-by-zero, else the register contents are returned
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DzeVal> dze{}; 
        namespace DzeValC{
            constexpr Register::FieldValue<decltype(dze)::Type,DzeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dze)::Type,DzeVal::v1> v1{};
        }
        }
        ///Divide-by-Zero
        enum class DzVal {
            v0=0x00000000,     ///<The last divide operation had a non-zero divisor, that is, DSOR != 0
            v1=0x00000001,     ///<The last divide operation had a zero divisor, that is, DSOR = 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DzVal> dz{}; 
        namespace DzValC{
            constexpr Register::FieldValue<decltype(dz)::Type,DzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dz)::Type,DzVal::v1> v1{};
        }
        }
        ///Disable Fast Start
        enum class DfsVal {
            v0=0x00000000,     ///<A divide operation is initiated by a write to the DSOR register
            v1=0x00000001,     ///<A divide operation is initiated by a write to the CSR register with CSR[SRT] = 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DfsVal> dfs{}; 
        namespace DfsValC{
            constexpr Register::FieldValue<decltype(dfs)::Type,DfsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dfs)::Type,DfsVal::v1> v1{};
        }
        }
        ///SQUARE ROOT
        enum class SqrtVal {
            v0=0x00000000,     ///<Current or last MMDVSQ operation was not a square root
            v1=0x00000001,     ///<Current or last MMDVSQ operation was a square root
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,SqrtVal> sqrt{}; 
        namespace SqrtValC{
            constexpr Register::FieldValue<decltype(sqrt)::Type,SqrtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sqrt)::Type,SqrtVal::v1> v1{};
        }
        }
        ///DIVIDE
        enum class DivVal {
            v0=0x00000000,     ///<Current or last MMDVSQ operation was not a divide
            v1=0x00000001,     ///<Current or last MMDVSQ operation was a divide
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DivVal> div{}; 
        namespace DivValC{
            constexpr Register::FieldValue<decltype(div)::Type,DivVal::v0> v0{};
            constexpr Register::FieldValue<decltype(div)::Type,DivVal::v1> v1{};
        }
        }
        ///BUSY
        enum class BusyVal {
            v0=0x00000000,     ///<MMDVSQ is idle
            v1=0x00000001,     ///<MMDVSQ is busy performing a divide or square root calculation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,BusyVal> busy{}; 
        namespace BusyValC{
            constexpr Register::FieldValue<decltype(busy)::Type,BusyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(busy)::Type,BusyVal::v1> v1{};
        }
        }
    }
    namespace MmdvsqRes{    ///<Result Register
        using Addr = Register::Address<0xf000400c,0x00000000,0,unsigned>;
        ///Result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> result{}; 
    }
    namespace MmdvsqRcnd{    ///<Radicand Register
        using Addr = Register::Address<0xf0004010,0x00000000,0,unsigned>;
        ///Radicand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> radicand{}; 
    }
}
