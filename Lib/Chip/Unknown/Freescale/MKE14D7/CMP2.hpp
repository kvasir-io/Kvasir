#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//High-Speed Comparator (CMP), Voltage Reference (VREF) Digital-to-Analog Converter (DAC), and Analog Mux (ANMUX)
    namespace Cmp2Cr0{    ///<CMP Control Register 0
        using Addr = Register::Address<0x40052000,0xffffff8e,0,unsigned char>;
        ///Comparator hard block hysteresis control
        enum class hystctrVal {
            v0=0x00000000,     ///<Level 0
            v1=0x00000001,     ///<Level 1
        };
        namespace hystctrValC{
            constexpr MPL::Value<hystctrVal,hystctrVal::v0> v0{};
            constexpr MPL::Value<hystctrVal,hystctrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,hystctrVal> hystctr{}; 
        ///Filter Sample Count
        enum class filterCntVal {
            v000=0x00000000,     ///<Filter is disabled. If SE = 1, then COUT is a logic zero (this is not a legal state, and is not recommended). If SE = 0, COUT = COUTA.
            v001=0x00000001,     ///<1 consecutive sample must agree (comparator output is simply sampled).
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
    namespace Cmp2Cr1{    ///<CMP Control Register 1
        using Addr = Register::Address<0x40052001,0xffffff20,0,unsigned char>;
        ///Comparator Module Enable
        enum class enVal {
            v0=0x00000000,     ///<Analog Comparator disabled.
            v1=0x00000001,     ///<Analog Comparator enabled.
        };
        namespace enValC{
            constexpr MPL::Value<enVal,enVal::v0> v0{};
            constexpr MPL::Value<enVal,enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enVal> en{}; 
        ///Comparator Output Pin Enable
        enum class opeVal {
            v0=0x00000000,     ///<The comparator output (CMPO) is not available on the associated CMPO output pin. The pin is available for use by other on-chip functions.
            v1=0x00000001,     ///<The comparator output (CMPO) is available on the associated CMPO output pin. The comparator output (CMPO) is driven out on the associated CMPO output pin.
        };
        namespace opeValC{
            constexpr MPL::Value<opeVal,opeVal::v0> v0{};
            constexpr MPL::Value<opeVal,opeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,opeVal> ope{}; 
        ///Comparator Output Select
        enum class cosVal {
            v0=0x00000000,     ///<Set CMPO to equal COUT (filtered comparator output).
            v1=0x00000001,     ///<Set CMPO to equal COUTA (unfiltered comparator output).
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
            v0=0x00000000,     ///<Low Speed (LS) comparison mode selected.
            v1=0x00000001,     ///<High Speed (HS) comparison mode selected.
        };
        namespace pmodeValC{
            constexpr MPL::Value<pmodeVal,pmodeVal::v0> v0{};
            constexpr MPL::Value<pmodeVal,pmodeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pmodeVal> pmode{}; 
        ///Windowing Enable
        enum class weVal {
            v0=0x00000000,     ///<Windowing mode not selected.
            v1=0x00000001,     ///<Windowing mode selected.
        };
        namespace weValC{
            constexpr MPL::Value<weVal,weVal::v0> v0{};
            constexpr MPL::Value<weVal,weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,weVal> we{}; 
        ///Sample Enable
        enum class seVal {
            v0=0x00000000,     ///<Sampling mode not selected.
            v1=0x00000001,     ///<Sampling mode selected.
        };
        namespace seValC{
            constexpr MPL::Value<seVal,seVal::v0> v0{};
            constexpr MPL::Value<seVal,seVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,seVal> se{}; 
    }
    namespace Cmp2Fpr{    ///<CMP Filter Period Register
        using Addr = Register::Address<0x40052002,0xffffff00,0,unsigned char>;
        ///Filter Sample Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> filtPer{}; 
    }
    namespace Cmp2Scr{    ///<CMP Status and Control Register
        using Addr = Register::Address<0x40052003,0xffffffa0,0,unsigned char>;
        ///Analog Comparator Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cout{}; 
        ///Analog Comparator Flag Falling
        enum class cffVal {
            v0=0x00000000,     ///<Falling edge on COUT has not been detected.
            v1=0x00000001,     ///<Falling edge on COUT has occurred.
        };
        namespace cffValC{
            constexpr MPL::Value<cffVal,cffVal::v0> v0{};
            constexpr MPL::Value<cffVal,cffVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cffVal> cff{}; 
        ///Analog Comparator Flag Rising
        enum class cfrVal {
            v0=0x00000000,     ///<Rising edge on COUT has not been detected.
            v1=0x00000001,     ///<Rising edge on COUT has occurred.
        };
        namespace cfrValC{
            constexpr MPL::Value<cfrVal,cfrVal::v0> v0{};
            constexpr MPL::Value<cfrVal,cfrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cfrVal> cfr{}; 
        ///Comparator Interrupt Enable Falling
        enum class iefVal {
            v0=0x00000000,     ///<Interrupt disabled.
            v1=0x00000001,     ///<Interrupt enabled.
        };
        namespace iefValC{
            constexpr MPL::Value<iefVal,iefVal::v0> v0{};
            constexpr MPL::Value<iefVal,iefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,iefVal> ief{}; 
        ///Comparator Interrupt Enable Rising
        enum class ierVal {
            v0=0x00000000,     ///<Interrupt disabled.
            v1=0x00000001,     ///<Interrupt enabled.
        };
        namespace ierValC{
            constexpr MPL::Value<ierVal,ierVal::v0> v0{};
            constexpr MPL::Value<ierVal,ierVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ierVal> ier{}; 
        ///DMA Enable Control
        enum class dmaenVal {
            v0=0x00000000,     ///<DMA disabled.
            v1=0x00000001,     ///<DMA enabled.
        };
        namespace dmaenValC{
            constexpr MPL::Value<dmaenVal,dmaenVal::v0> v0{};
            constexpr MPL::Value<dmaenVal,dmaenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dmaenVal> dmaen{}; 
    }
    namespace Cmp2Daccr{    ///<DAC Control Register
        using Addr = Register::Address<0x40052004,0xffffff00,0,unsigned char>;
        ///DAC Output Voltage Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> vosel{}; 
        ///Supply Voltage Reference Source Select
        enum class vrselVal {
            v0=0x00000000,     ///<Vin1 is selected as resistor ladder network supply reference Vin.
            v1=0x00000001,     ///<Vin2 is selected as resistor ladder network supply reference Vin.
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
    namespace Cmp2Muxcr{    ///<MUX Control Register
        using Addr = Register::Address<0x40052005,0xffffffcc,0,unsigned char>;
        ///Minus Input MUX Control
        enum class mselVal {
            v00=0x00000000,     ///<IN0
            v01=0x00000001,     ///<IN1
            v10=0x00000002,     ///<IN2
            v11=0x00000003,     ///<6-bit DAC output is selected
        };
        namespace mselValC{
            constexpr MPL::Value<mselVal,mselVal::v00> v00{};
            constexpr MPL::Value<mselVal,mselVal::v01> v01{};
            constexpr MPL::Value<mselVal,mselVal::v10> v10{};
            constexpr MPL::Value<mselVal,mselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,mselVal> msel{}; 
        ///Plus Input MUX Control
        enum class pselVal {
            v00=0x00000000,     ///<IN0
            v01=0x00000001,     ///<IN1
            v10=0x00000002,     ///<IN2
            v11=0x00000003,     ///<6-bit DAC output is selected
        };
        namespace pselValC{
            constexpr MPL::Value<pselVal,pselVal::v00> v00{};
            constexpr MPL::Value<pselVal,pselVal::v01> v01{};
            constexpr MPL::Value<pselVal,pselVal::v10> v10{};
            constexpr MPL::Value<pselVal,pselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pselVal> psel{}; 
    }
    namespace Cmp2Muxpe{    ///<MUX Pin Enable Register
        using Addr = Register::Address<0x40052006,0xfffffff8,0,unsigned char>;
        ///Positive Input Pin Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> inpe{}; 
    }
}
