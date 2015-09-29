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
    namespace McmCr{    ///<Control Register
        using Addr = Register::Address<0xe008000c,0x88cfffff,0,unsigned>;
        ///DDR address size translation
        enum class ddrsizeVal {
            v00=0x00000000,     ///<DDR address translation is disabled
            v01=0x00000001,     ///<DDR size is 128 Mbytes
            v10=0x00000002,     ///<DDR size is 256 Mbytes
            v11=0x00000003,     ///<DDR size is 512 Mbytes
        };
        namespace ddrsizeValC{
            constexpr MPL::Value<ddrsizeVal,ddrsizeVal::v00> v00{};
            constexpr MPL::Value<ddrsizeVal,ddrsizeVal::v01> v01{};
            constexpr MPL::Value<ddrsizeVal,ddrsizeVal::v10> v10{};
            constexpr MPL::Value<ddrsizeVal,ddrsizeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,ddrsizeVal> ddrsize{}; 
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
        ///SRAM_L Write Protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sramlwp{}; 
    }
    namespace McmIscr{    ///<Interrupt Status and control Register
        using Addr = Register::Address<0xe0080010,0x60ef60e1,0,unsigned>;
        ///Normal Interrupt Pending
        enum class irqVal {
            v0=0x00000000,     ///<No pending interrupt
            v1=0x00000001,     ///<Due to the ETB counter expiring, a normal interrupt is pending
        };
        namespace irqValC{
            constexpr MPL::Value<irqVal,irqVal::v0> v0{};
            constexpr MPL::Value<irqVal,irqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,irqVal> irq{}; 
        ///Nonmaskable Interrupt Pending
        enum class nmiVal {
            v0=0x00000000,     ///<No pending NMI
            v1=0x00000001,     ///<Due to the ETB counter expiring, an NMI is pending
        };
        namespace nmiValC{
            constexpr MPL::Value<nmiVal,nmiVal::v0> v0{};
            constexpr MPL::Value<nmiVal,nmiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,nmiVal> nmi{}; 
        ///Debug Halt Request Indicator
        enum class dhreqVal {
            v0=0x00000000,     ///<No debug halt request
            v1=0x00000001,     ///<Debug halt request initiated
        };
        namespace dhreqValC{
            constexpr MPL::Value<dhreqVal,dhreqVal::v0> v0{};
            constexpr MPL::Value<dhreqVal,dhreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dhreqVal> dhreq{}; 
        ///Cache write buffer error status
        enum class cwberVal {
            v0=0x00000000,     ///<No error
            v1=0x00000001,     ///<Error occurred
        };
        namespace cwberValC{
            constexpr MPL::Value<cwberVal,cwberVal::v0> v0{};
            constexpr MPL::Value<cwberVal,cwberVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,cwberVal> cwber{}; 
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
        ///Cache write buffer error enable
        enum class cwbeeVal {
            v0=0x00000000,     ///<Disable error interrupt
            v1=0x00000001,     ///<Enable error interrupt
        };
        namespace cwbeeValC{
            constexpr MPL::Value<cwbeeVal,cwbeeVal::v0> v0{};
            constexpr MPL::Value<cwbeeVal,cwbeeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,cwbeeVal> cwbee{}; 
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
    namespace McmEtbcc{    ///<ETB Counter Control register
        using Addr = Register::Address<0xe0080014,0xffffffc0,0,unsigned>;
        ///Counter Enable
        enum class cntenVal {
            v0=0x00000000,     ///<ETB counter disabled
            v1=0x00000001,     ///<ETB counter enabled
        };
        namespace cntenValC{
            constexpr MPL::Value<cntenVal,cntenVal::v0> v0{};
            constexpr MPL::Value<cntenVal,cntenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cntenVal> cnten{}; 
        ///Response Type
        enum class rsptVal {
            v00=0x00000000,     ///<No response when the ETB count expires
            v01=0x00000001,     ///<Generate a normal interrupt when the ETB count expires
            v10=0x00000002,     ///<Generate an NMI when the ETB count expires
            v11=0x00000003,     ///<Generate a debug halt when the ETB count expires
        };
        namespace rsptValC{
            constexpr MPL::Value<rsptVal,rsptVal::v00> v00{};
            constexpr MPL::Value<rsptVal,rsptVal::v01> v01{};
            constexpr MPL::Value<rsptVal,rsptVal::v10> v10{};
            constexpr MPL::Value<rsptVal,rsptVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,rsptVal> rspt{}; 
        ///Reload Request
        enum class rlrqVal {
            v0=0x00000000,     ///<No effect
            v1=0x00000001,     ///<Clears pending debug halt, NMI, or IRQ interrupt requests
        };
        namespace rlrqValC{
            constexpr MPL::Value<rlrqVal,rlrqVal::v0> v0{};
            constexpr MPL::Value<rlrqVal,rlrqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rlrqVal> rlrq{}; 
        ///ETM-To-TPIU Disable
        enum class etdisVal {
            v0=0x00000000,     ///<ETM-to-TPIU trace path enabled
            v1=0x00000001,     ///<ETM-to-TPIU trace path disabled
        };
        namespace etdisValC{
            constexpr MPL::Value<etdisVal,etdisVal::v0> v0{};
            constexpr MPL::Value<etdisVal,etdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,etdisVal> etdis{}; 
        ///ITM-To-TPIU Disable
        enum class itdisVal {
            v0=0x00000000,     ///<ITM-to-TPIU trace path enabled
            v1=0x00000001,     ///<ITM-to-TPIU trace path disabled
        };
        namespace itdisValC{
            constexpr MPL::Value<itdisVal,itdisVal::v0> v0{};
            constexpr MPL::Value<itdisVal,itdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,itdisVal> itdis{}; 
    }
    namespace McmEtbrl{    ///<ETB Reload register
        using Addr = Register::Address<0xe0080018,0xfffff800,0,unsigned>;
        ///Byte Count Reload Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> reload{}; 
    }
    namespace McmEtbcnt{    ///<ETB Counter Value register
        using Addr = Register::Address<0xe008001c,0xfffff800,0,unsigned>;
        ///Byte Count Counter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace McmFadr{    ///<Fault address register
        using Addr = Register::Address<0xe0080020,0x00000000,0,unsigned>;
        ///Fault address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace McmFatr{    ///<Fault attributes register
        using Addr = Register::Address<0xe0080024,0x7ffff04c,0,unsigned>;
        ///Bus error access type
        enum class bedaVal {
            v0=0x00000000,     ///<Instruction
            v1=0x00000001,     ///<Data
        };
        namespace bedaValC{
            constexpr MPL::Value<bedaVal,bedaVal::v0> v0{};
            constexpr MPL::Value<bedaVal,bedaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bedaVal> beda{}; 
        ///Bus error privilege level
        enum class bemdVal {
            v0=0x00000000,     ///<User mode
            v1=0x00000001,     ///<Supervisor/privileged mode
        };
        namespace bemdValC{
            constexpr MPL::Value<bemdVal,bemdVal::v0> v0{};
            constexpr MPL::Value<bemdVal,bemdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bemdVal> bemd{}; 
        ///Bus error size
        enum class beszVal {
            v00=0x00000000,     ///<8-bit access
            v01=0x00000001,     ///<16-bit access
            v10=0x00000002,     ///<32-bit access
        };
        namespace beszValC{
            constexpr MPL::Value<beszVal,beszVal::v00> v00{};
            constexpr MPL::Value<beszVal,beszVal::v01> v01{};
            constexpr MPL::Value<beszVal,beszVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,beszVal> besz{}; 
        ///Bus error write
        enum class bewtVal {
            v0=0x00000000,     ///<Read access
            v1=0x00000001,     ///<Write access
        };
        namespace bewtValC{
            constexpr MPL::Value<bewtVal,bewtVal::v0> v0{};
            constexpr MPL::Value<bewtVal,bewtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bewtVal> bewt{}; 
        ///Bus error master number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> bemn{}; 
        ///Bus error overrun
        enum class beovrVal {
            v0=0x00000000,     ///<No bus error overrun
            v1=0x00000001,     ///<Bus error overrun occurred. The FADR and FDR registers and the other FATR bits are not updated to reflect this new bus error.
        };
        namespace beovrValC{
            constexpr MPL::Value<beovrVal,beovrVal::v0> v0{};
            constexpr MPL::Value<beovrVal,beovrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,beovrVal> beovr{}; 
    }
    namespace McmFdr{    ///<Fault data register
        using Addr = Register::Address<0xe0080028,0x00000000,0,unsigned>;
        ///Fault data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace McmPid{    ///<Process ID register
        using Addr = Register::Address<0xe0080030,0xffffff00,0,unsigned>;
        ///M0_PID and M1_PID for MPU
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pid{}; 
    }
}
