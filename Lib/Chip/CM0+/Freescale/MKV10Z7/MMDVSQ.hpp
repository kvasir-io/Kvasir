#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Memory-Mapped Divide and Square Root
    namespace MmdvsqDend{    ///<Dividend Register
        using Addr = Register::Address<0xf0004000,0x00000000,0,unsigned>;
        ///Dividend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dividend{}; 
    }
    namespace MmdvsqDsor{    ///<Divisor Register
        using Addr = Register::Address<0xf0004004,0x00000000,0,unsigned>;
        ///Divisor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> divisor{}; 
    }
    namespace MmdvsqCsr{    ///<Control/Status Register
        using Addr = Register::Address<0xf0004008,0x1fffffc0,0,unsigned>;
        ///Start
        enum class srtVal {
            v0=0x00000000,     ///<No operation initiated
            v1=0x00000001,     ///<If CSR[DFS] = 1, then initiate a divide calculation, else ignore
        };
        namespace srtValC{
            constexpr MPL::Value<srtVal,srtVal::v0> v0{};
            constexpr MPL::Value<srtVal,srtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,srtVal> srt{}; 
        ///Unsigned calculation
        enum class usgnVal {
            v0=0x00000000,     ///<Perform a signed divide
            v1=0x00000001,     ///<Perform an unsigned divide
        };
        namespace usgnValC{
            constexpr MPL::Value<usgnVal,usgnVal::v0> v0{};
            constexpr MPL::Value<usgnVal,usgnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,usgnVal> usgn{}; 
        ///REMainder calculation
        enum class remVal {
            v0=0x00000000,     ///<Return the quotient in the RES for the divide calculation
            v1=0x00000001,     ///<Return the remainder in the RES for the divide calculation
        };
        namespace remValC{
            constexpr MPL::Value<remVal,remVal::v0> v0{};
            constexpr MPL::Value<remVal,remVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,remVal> rem{}; 
        ///Divide-by-Zero-Enable
        enum class dzeVal {
            v0=0x00000000,     ///<Reads of the RES register return the register contents
            v1=0x00000001,     ///<If CSR[DZ] = 1, an attempted read of RES register is error terminated to signal a divide-by-zero, else the register contents are returned
        };
        namespace dzeValC{
            constexpr MPL::Value<dzeVal,dzeVal::v0> v0{};
            constexpr MPL::Value<dzeVal,dzeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dzeVal> dze{}; 
        ///Divide-by-Zero
        enum class dzVal {
            v0=0x00000000,     ///<The last divide operation had a non-zero divisor, that is, DSOR != 0
            v1=0x00000001,     ///<The last divide operation had a zero divisor, that is, DSOR = 0
        };
        namespace dzValC{
            constexpr MPL::Value<dzVal,dzVal::v0> v0{};
            constexpr MPL::Value<dzVal,dzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dzVal> dz{}; 
        ///Disable Fast Start
        enum class dfsVal {
            v0=0x00000000,     ///<A divide operation is initiated by a write to the DSOR register
            v1=0x00000001,     ///<A divide operation is initiated by a write to the CSR register with CSR[SRT] = 1
        };
        namespace dfsValC{
            constexpr MPL::Value<dfsVal,dfsVal::v0> v0{};
            constexpr MPL::Value<dfsVal,dfsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,dfsVal> dfs{}; 
        ///SQUARE ROOT
        enum class sqrtVal {
            v0=0x00000000,     ///<Current or last MMDVSQ operation was not a square root
            v1=0x00000001,     ///<Current or last MMDVSQ operation was a square root
        };
        namespace sqrtValC{
            constexpr MPL::Value<sqrtVal,sqrtVal::v0> v0{};
            constexpr MPL::Value<sqrtVal,sqrtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,sqrtVal> sqrt{}; 
        ///DIVIDE
        enum class divVal {
            v0=0x00000000,     ///<Current or last MMDVSQ operation was not a divide
            v1=0x00000001,     ///<Current or last MMDVSQ operation was a divide
        };
        namespace divValC{
            constexpr MPL::Value<divVal,divVal::v0> v0{};
            constexpr MPL::Value<divVal,divVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,divVal> div{}; 
        ///BUSY
        enum class busyVal {
            v0=0x00000000,     ///<MMDVSQ is idle
            v1=0x00000001,     ///<MMDVSQ is busy performing a divide or square root calculation
        };
        namespace busyValC{
            constexpr MPL::Value<busyVal,busyVal::v0> v0{};
            constexpr MPL::Value<busyVal,busyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,busyVal> busy{}; 
    }
    namespace MmdvsqRes{    ///<Result Register
        using Addr = Register::Address<0xf000400c,0x00000000,0,unsigned>;
        ///Result
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> result{}; 
    }
    namespace MmdvsqRcnd{    ///<Radicand Register
        using Addr = Register::Address<0xf0004010,0x00000000,0,unsigned>;
        ///Radicand
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> radicand{}; 
    }
}
