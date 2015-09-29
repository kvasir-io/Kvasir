#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Core Platform Miscellaneous Control Module
    namespace McmPlasc{    ///<Crossbar Switch (AXBS) Slave Configuration
        using Addr = Register::Address<0xe0080008,0xffffff00,0,unsigned>;
        ///Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> asc{}; 
    }
    namespace McmPlamc{    ///<Crossbar Switch (AXBS) Master Configuration
        using Addr = Register::Address<0xe008000a,0xffffff00,0,unsigned>;
        ///Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> amc{}; 
    }
    namespace McmPlacr{    ///<Crossbar Switch (AXBS) Control Register
        using Addr = Register::Address<0xe008000c,0x88fffdff,0,unsigned>;
        ///Arbitration select
        enum class arbVal {
            v0=0x00000000,     ///<Fixed-priority arbitration for the crossbar masters
            v1=0x00000001,     ///<Round-robin arbitration for the crossbar masters
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::v0> v0{};
            constexpr MPL::Value<arbVal,arbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,arbVal> arb{}; 
        ///SRAM_U Arbitration Priority
        enum class sramuapVal {
            v00=0x00000000,     ///<Round robin
            v01=0x00000001,     ///<Special round robin, favors SRAM backdoor accesses over the processor
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
        ///SRAM_U Write Protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> sramuwp{}; 
        ///SRAM_L Arbitration Priority
        enum class sramlapVal {
            v00=0x00000000,     ///<Round robin
            v01=0x00000001,     ///<Special round robin, favors SRAM backdoor accesses over the processor
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
        ///SRAM_L Write Protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sramlwp{}; 
    }
    namespace McmIscr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xe0080010,0x60ff60ff,0,unsigned>;
        ///FPU invalid operation interrupt status
        enum class fiocVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        namespace fiocValC{
            constexpr MPL::Value<fiocVal,fiocVal::v0> v0{};
            constexpr MPL::Value<fiocVal,fiocVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fiocVal> fioc{}; 
        ///FPU divide-by-zero interrupt status
        enum class fdzcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        namespace fdzcValC{
            constexpr MPL::Value<fdzcVal,fdzcVal::v0> v0{};
            constexpr MPL::Value<fdzcVal,fdzcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,fdzcVal> fdzc{}; 
        ///FPU overflow interrupt status
        enum class fofcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        namespace fofcValC{
            constexpr MPL::Value<fofcVal,fofcVal::v0> v0{};
            constexpr MPL::Value<fofcVal,fofcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,fofcVal> fofc{}; 
        ///FPU underflow interrupt status
        enum class fufcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        namespace fufcValC{
            constexpr MPL::Value<fufcVal,fufcVal::v0> v0{};
            constexpr MPL::Value<fufcVal,fufcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,fufcVal> fufc{}; 
        ///FPU inexact interrupt status
        enum class fixcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        namespace fixcValC{
            constexpr MPL::Value<fixcVal,fixcVal::v0> v0{};
            constexpr MPL::Value<fixcVal,fixcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,fixcVal> fixc{}; 
        ///FPU input denormal interrupt status
        enum class fidcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        namespace fidcValC{
            constexpr MPL::Value<fidcVal,fidcVal::v0> v0{};
            constexpr MPL::Value<fidcVal,fidcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,fidcVal> fidc{}; 
        ///FPU invalid operation interrupt enable
        enum class fioceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        namespace fioceValC{
            constexpr MPL::Value<fioceVal,fioceVal::v0> v0{};
            constexpr MPL::Value<fioceVal,fioceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,fioceVal> fioce{}; 
        ///FPU divide-by-zero interrupt enable
        enum class fdzceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        namespace fdzceValC{
            constexpr MPL::Value<fdzceVal,fdzceVal::v0> v0{};
            constexpr MPL::Value<fdzceVal,fdzceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,fdzceVal> fdzce{}; 
        ///FPU overflow interrupt enable
        enum class fofceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        namespace fofceValC{
            constexpr MPL::Value<fofceVal,fofceVal::v0> v0{};
            constexpr MPL::Value<fofceVal,fofceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,fofceVal> fofce{}; 
        ///FPU underflow interrupt enable
        enum class fufceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        namespace fufceValC{
            constexpr MPL::Value<fufceVal,fufceVal::v0> v0{};
            constexpr MPL::Value<fufceVal,fufceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,fufceVal> fufce{}; 
        ///FPU inexact interrupt enable
        enum class fixceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        namespace fixceValC{
            constexpr MPL::Value<fixceVal,fixceVal::v0> v0{};
            constexpr MPL::Value<fixceVal,fixceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,fixceVal> fixce{}; 
        ///FPU input denormal interrupt enable
        enum class fidceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        namespace fidceValC{
            constexpr MPL::Value<fidceVal,fidceVal::v0> v0{};
            constexpr MPL::Value<fidceVal,fidceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,fidceVal> fidce{}; 
    }
}
