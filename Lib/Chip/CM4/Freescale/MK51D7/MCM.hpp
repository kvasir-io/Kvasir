#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Core Platform Miscellaneous Control Module
    namespace McmPlasc{    ///<Crossbar switch (AXBS) slave configuration
        using Addr = Register::Address<0xe0080008,0xffffff00,0,unsigned>;
        ///Each bit in the ASC field indicates if there is a corresponding connection to the crossbar switch's slave input port.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> asc{}; 
    }
    namespace McmPlamc{    ///<Crossbar switch (AXBS) master configuration
        using Addr = Register::Address<0xe008000a,0xffffff00,0,unsigned>;
        ///Each bit in the AMC field indicates if there is a corresponding connection to the AXBS master input port.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> amc{}; 
    }
    namespace McmCr{    ///<Control register
        using Addr = Register::Address<0xe008000c,0x88ffffff,0,unsigned>;
        ///SRAM_U arbitration priority
        enum class sramuapVal {
            v00=0x00000000,     ///<Round robin
            v01=0x00000001,     ///<Special round robin (favors SRAM backoor accesses over the processor)
            v10=0x00000002,     ///<Fixed priority. Processor has highest, backdoor has lowest
            v11=0x00000003,     ///<Fixed priority. Backdoor has highest, processor has lowest
        };
        namespace sramuapValC{
            constexpr MPL::Value<sramuapVal,sramuapVal::v00> v00{};
            constexpr MPL::Value<sramuapVal,sramuapVal::v01> v01{};
            constexpr MPL::Value<sramuapVal,sramuapVal::v10> v10{};
            constexpr MPL::Value<sramuapVal,sramuapVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,sramuapVal> sramuap{}; 
        ///SRAM_U write protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> sramuwp{}; 
        ///SRAM_L arbitration priority
        enum class sramlapVal {
            v00=0x00000000,     ///<Round robin
            v01=0x00000001,     ///<Special round robin (favors SRAM backoor accesses over the processor)
            v10=0x00000002,     ///<Fixed priority. Processor has highest, backdoor has lowest
            v11=0x00000003,     ///<Fixed priority. Backdoor has highest, processor has lowest
        };
        namespace sramlapValC{
            constexpr MPL::Value<sramlapVal,sramlapVal::v00> v00{};
            constexpr MPL::Value<sramlapVal,sramlapVal::v01> v01{};
            constexpr MPL::Value<sramlapVal,sramlapVal::v10> v10{};
            constexpr MPL::Value<sramlapVal,sramlapVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,sramlapVal> sramlap{}; 
        ///SRAM_L write protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sramlwp{}; 
    }
}
