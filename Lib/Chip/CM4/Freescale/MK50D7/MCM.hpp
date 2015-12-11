#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Core Platform Miscellaneous Control Module
    namespace McmPlasc{    ///<Crossbar switch (AXBS) slave configuration
        using Addr = Register::Address<0xe0080008,0xffffff00,0,unsigned>;
        ///Each bit in the ASC field indicates if there is a corresponding connection to the crossbar switch's slave input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> asc{}; 
    }
    namespace McmPlamc{    ///<Crossbar switch (AXBS) master configuration
        using Addr = Register::Address<0xe008000a,0xffffff00,0,unsigned>;
        ///Each bit in the AMC field indicates if there is a corresponding connection to the AXBS master input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> amc{}; 
    }
    namespace McmCr{    ///<Control register
        using Addr = Register::Address<0xe008000c,0x88ffffff,0,unsigned>;
        ///SRAM_U arbitration priority
        enum class SramuapVal {
            v00=0x00000000,     ///<Round robin
            v01=0x00000001,     ///<Special round robin (favors SRAM backoor accesses over the processor)
            v10=0x00000002,     ///<Fixed priority. Processor has highest, backdoor has lowest
            v11=0x00000003,     ///<Fixed priority. Backdoor has highest, processor has lowest
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SramuapVal> sramuap{}; 
        namespace SramuapValC{
            constexpr Register::FieldValue<decltype(sramuap)::Type,SramuapVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sramuap)::Type,SramuapVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sramuap)::Type,SramuapVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sramuap)::Type,SramuapVal::v11> v11{};
        }
        ///SRAM_U write protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> sramuwp{}; 
        ///SRAM_L arbitration priority
        enum class SramlapVal {
            v00=0x00000000,     ///<Round robin
            v01=0x00000001,     ///<Special round robin (favors SRAM backoor accesses over the processor)
            v10=0x00000002,     ///<Fixed priority. Processor has highest, backdoor has lowest
            v11=0x00000003,     ///<Fixed priority. Backdoor has highest, processor has lowest
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,SramlapVal> sramlap{}; 
        namespace SramlapValC{
            constexpr Register::FieldValue<decltype(sramlap)::Type,SramlapVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sramlap)::Type,SramlapVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sramlap)::Type,SramlapVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sramlap)::Type,SramlapVal::v11> v11{};
        }
        ///SRAM_L write protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sramlwp{}; 
    }
}
