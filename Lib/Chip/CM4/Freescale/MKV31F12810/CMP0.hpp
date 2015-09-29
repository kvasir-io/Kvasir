#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//High-Speed Comparator (CMP), Voltage Reference (VREF) Digital-to-Analog Converter (DAC), and Analog Mux (ANMUX)
    namespace Cmp0Cr0{    ///<CMP Control Register 0
        using Addr = Register::Address<0x40073000,0xffffff8c,0,unsigned char>;
        ///Comparator hard block hysteresis control
        enum class hystctrVal {
            v00=0x00000000,     ///<Level 0
            v01=0x00000001,     ///<Level 1
            v10=0x00000002,     ///<Level 2
            v11=0x00000003,     ///<Level 3
        };
        namespace hystctrValC{
            constexpr MPL::Value<hystctrVal,hystctrVal::v00> v00{};
            constexpr MPL::Value<hystctrVal,hystctrVal::v01> v01{};
            constexpr MPL::Value<hystctrVal,hystctrVal::v10> v10{};
            constexpr MPL::Value<hystctrVal,hystctrVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,hystctrVal> hystctr{}; 
        ///Filter Sample Count
        enum class filterCntVal {
            v000=0x00000000,     ///<Filter is disabled. If SE = 1, then COUT is a logic 0. This is not a legal state, and is not recommended. If SE = 0, COUT = COUTA.
            v001=0x00000001,     ///<One sample must agree. The comparator output is simply sampled.
            v010=0x00000002,     ///<2 consecutive samples must agree.
            v011=0x00000003,     ///<3 consecutive samples must agree.
            v100=0x00000004,     ///<4 consecutive samples must agree.
            v101=0x00000005,     ///<5 consecutive samples must agree.
            v110=0x00000006,     ///<6 consecutive samples must agree.
            v111=0x00000007,     ///<7 consecutive samples must agree.
        };
        namespace filterCntValC{
            constexpr MPL::Value<filterCntVal,filterCntVal::v000> v000{};
            constexpr MPL::Value<filterCntVal,filterCntVal::v001> v001{};
            constexpr MPL::Value<filterCntVal,filterCntVal::v010> v010{};
            constexpr MPL::Value<filterCntVal,filterCntVal::v011> v011{};
            constexpr MPL::Value<filterCntVal,filterCntVal::v100> v100{};
            constexpr MPL::Value<filterCntVal,filterCntVal::v101> v101{};
            constexpr MPL::Value<filterCntVal,filterCntVal::v110> v110{};
            constexpr MPL::Value<filterCntVal,filterCntVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,filterCntVal> filterCnt{}; 
    }
    namespace Cmp0Cr1{    ///<CMP Control Register 1
        using Addr = Register::Address<0x40073001,0xffffff00,0,unsigned char>;
        ///Comparator Module Enable
        enum class enVal {
            v0=0x00000000,     ///<Analog Comparator is disabled.
            v1=0x00000001,     ///<Analog Comparator is enabled.
        };
        namespace enValC{
            constexpr MPL::Value<enVal,enVal::v0> v0{};
            constexpr MPL::Value<enVal,enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enVal> en{}; 
        ///Comparator Output Pin Enable
        enum class opeVal {
            v0=0x00000000,     ///<CMPO is not available on the associated CMPO output pin. If the comparator does not own the pin, this field has no effect.
            v1=0x00000001,     ///<CMPO is available on the associated CMPO output pin. The comparator output (CMPO) is driven out on the associated CMPO output pin if the comparator owns the pin. If the comparator does not own the field, this bit has no effect.
        };
        namespace opeValC{
            constexpr MPL::Value<opeVal,opeVal::v0> v0{};
            constexpr MPL::Value<opeVal,opeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,opeVal> ope{}; 
        ///Comparator Output Select
        enum class cosVal {
            v0=0x00000000,     ///<Set the filtered comparator output (CMPO) to equal COUT.
            v1=0x00000001,     ///<Set the unfiltered comparator output (CMPO) to equal COUTA.
        };
        namespace cosValC{
            constexpr MPL::Value<cosVal,cosVal::v0> v0{};
            constexpr MPL::Value<cosVal,cosVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cosVal> cos{}; 
        ///Comparator INVERT
        enum class invVal {
            v0=0x00000000,     ///<Does not invert the comparator output.
            v1=0x00000001,     ///<Inverts the comparator output.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::v0> v0{};
            constexpr MPL::Value<invVal,invVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,invVal> inv{}; 
        ///Power Mode Select
        enum class pmodeVal {
            v0=0x00000000,     ///<Low-Speed (LS) Comparison mode selected. In this mode, CMP has slower output propagation delay and lower current consumption.
            v1=0x00000001,     ///<High-Speed (HS) Comparison mode selected. In this mode, CMP has faster output propagation delay and higher current consumption.
        };
        namespace pmodeValC{
            constexpr MPL::Value<pmodeVal,pmodeVal::v0> v0{};
            constexpr MPL::Value<pmodeVal,pmodeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pmodeVal> pmode{}; 
        ///Trigger Mode Enable
        enum class trigmVal {
            v0=0x00000000,     ///<Trigger mode is disabled.
            v1=0x00000001,     ///<Trigger mode is enabled.
        };
        namespace trigmValC{
            constexpr MPL::Value<trigmVal,trigmVal::v0> v0{};
            constexpr MPL::Value<trigmVal,trigmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigmVal> trigm{}; 
        ///Windowing Enable
        enum class weVal {
            v0=0x00000000,     ///<Windowing mode is not selected.
            v1=0x00000001,     ///<Windowing mode is selected.
        };
        namespace weValC{
            constexpr MPL::Value<weVal,weVal::v0> v0{};
            constexpr MPL::Value<weVal,weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,weVal> we{}; 
        ///Sample Enable
        enum class seVal {
            v0=0x00000000,     ///<Sampling mode is not selected.
            v1=0x00000001,     ///<Sampling mode is selected.
        };
        namespace seValC{
            constexpr MPL::Value<seVal,seVal::v0> v0{};
            constexpr MPL::Value<seVal,seVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,seVal> se{}; 
    }
    namespace Cmp0Fpr{    ///<CMP Filter Period Register
        using Addr = Register::Address<0x40073002,0xffffff00,0,unsigned char>;
        ///Filter Sample Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> filtPer{}; 
    }
    namespace Cmp0Scr{    ///<CMP Status and Control Register
        using Addr = Register::Address<0x40073003,0xffffffa0,0,unsigned char>;
        ///Analog Comparator Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cout{}; 
        ///Analog Comparator Flag Falling
        enum class cffVal {
            v0=0x00000000,     ///<Falling-edge on COUT has not been detected.
            v1=0x00000001,     ///<Falling-edge on COUT has occurred.
        };
        namespace cffValC{
            constexpr MPL::Value<cffVal,cffVal::v0> v0{};
            constexpr MPL::Value<cffVal,cffVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cffVal> cff{}; 
        ///Analog Comparator Flag Rising
        enum class cfrVal {
            v0=0x00000000,     ///<Rising-edge on COUT has not been detected.
            v1=0x00000001,     ///<Rising-edge on COUT has occurred.
        };
        namespace cfrValC{
            constexpr MPL::Value<cfrVal,cfrVal::v0> v0{};
            constexpr MPL::Value<cfrVal,cfrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cfrVal> cfr{}; 
        ///Comparator Interrupt Enable Falling
        enum class iefVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace iefValC{
            constexpr MPL::Value<iefVal,iefVal::v0> v0{};
            constexpr MPL::Value<iefVal,iefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,iefVal> ief{}; 
        ///Comparator Interrupt Enable Rising
        enum class ierVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace ierValC{
            constexpr MPL::Value<ierVal,ierVal::v0> v0{};
            constexpr MPL::Value<ierVal,ierVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ierVal> ier{}; 
        ///DMA Enable Control
        enum class dmaenVal {
            v0=0x00000000,     ///<DMA is disabled.
            v1=0x00000001,     ///<DMA is enabled.
        };
        namespace dmaenValC{
            constexpr MPL::Value<dmaenVal,dmaenVal::v0> v0{};
            constexpr MPL::Value<dmaenVal,dmaenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dmaenVal> dmaen{}; 
    }
    namespace Cmp0Daccr{    ///<DAC Control Register
        using Addr = Register::Address<0x40073004,0xffffff00,0,unsigned char>;
        ///DAC Output Voltage Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> vosel{}; 
        ///Supply Voltage Reference Source Select
        enum class vrselVal {
            v0=0x00000000,     ///<Vin1 is selected as resistor ladder network supply reference.
            v1=0x00000001,     ///<Vin2 is selected as resistor ladder network supply reference.
        };
        namespace vrselValC{
            constexpr MPL::Value<vrselVal,vrselVal::v0> v0{};
            constexpr MPL::Value<vrselVal,vrselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,vrselVal> vrsel{}; 
        ///DAC Enable
        enum class dacenVal {
            v0=0x00000000,     ///<DAC is disabled.
            v1=0x00000001,     ///<DAC is enabled.
        };
        namespace dacenValC{
            constexpr MPL::Value<dacenVal,dacenVal::v0> v0{};
            constexpr MPL::Value<dacenVal,dacenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dacenVal> dacen{}; 
    }
    namespace Cmp0Muxcr{    ///<MUX Control Register
        using Addr = Register::Address<0x40073005,0xffffffc0,0,unsigned char>;
        ///Minus Input Mux Control
        enum class mselVal {
            v000=0x00000000,     ///<IN0
            v001=0x00000001,     ///<IN1
            v010=0x00000002,     ///<IN2
            v011=0x00000003,     ///<IN3
            v100=0x00000004,     ///<IN4
            v101=0x00000005,     ///<IN5
            v110=0x00000006,     ///<IN6
            v111=0x00000007,     ///<IN7
        };
        namespace mselValC{
            constexpr MPL::Value<mselVal,mselVal::v000> v000{};
            constexpr MPL::Value<mselVal,mselVal::v001> v001{};
            constexpr MPL::Value<mselVal,mselVal::v010> v010{};
            constexpr MPL::Value<mselVal,mselVal::v011> v011{};
            constexpr MPL::Value<mselVal,mselVal::v100> v100{};
            constexpr MPL::Value<mselVal,mselVal::v101> v101{};
            constexpr MPL::Value<mselVal,mselVal::v110> v110{};
            constexpr MPL::Value<mselVal,mselVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,mselVal> msel{}; 
        ///Plus Input Mux Control
        enum class pselVal {
            v000=0x00000000,     ///<IN0
            v001=0x00000001,     ///<IN1
            v010=0x00000002,     ///<IN2
            v011=0x00000003,     ///<IN3
            v100=0x00000004,     ///<IN4
            v101=0x00000005,     ///<IN5
            v110=0x00000006,     ///<IN6
            v111=0x00000007,     ///<IN7
        };
        namespace pselValC{
            constexpr MPL::Value<pselVal,pselVal::v000> v000{};
            constexpr MPL::Value<pselVal,pselVal::v001> v001{};
            constexpr MPL::Value<pselVal,pselVal::v010> v010{};
            constexpr MPL::Value<pselVal,pselVal::v011> v011{};
            constexpr MPL::Value<pselVal,pselVal::v100> v100{};
            constexpr MPL::Value<pselVal,pselVal::v101> v101{};
            constexpr MPL::Value<pselVal,pselVal::v110> v110{};
            constexpr MPL::Value<pselVal,pselVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,pselVal> psel{}; 
    }
}
