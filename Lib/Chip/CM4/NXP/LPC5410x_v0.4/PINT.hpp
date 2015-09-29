#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pin interrupt and pattern match engine
    namespace Noneisel{    ///<Pin Interrupt Mode register
        using Addr = Register::Address<0x40018000,0xffffff00,0,unsigned>;
        ///Selects the interrupt mode for each pin interrupt. Bit n
								configures the pin interrupt selected in PINTSELn. 0 = Edge
								sensitive 1 = Level sensitive
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pmode{}; 
    }
    namespace Noneienr{    ///<Pin interrupt level or rising edge interrupt enable
						register
        using Addr = Register::Address<0x40018004,0xffffff00,0,unsigned>;
        ///Enables the rising edge or level interrupt for each pin
								interrupt. Bit n configures the pin interrupt selected in PINTSELn.
								0 = Disable rising edge or level interrupt. 1 = Enable rising edge
								or level interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> enrl{}; 
    }
    namespace Nonesienr{    ///<Pin interrupt level or rising edge interrupt set
						register
        using Addr = Register::Address<0x40018008,0xffffff00,0,unsigned>;
        ///Ones written to this address set bits in the IENR, thus
								enabling interrupts. Bit n sets bit n in the IENR register. 0 = No
								operation. 1 = Enable rising edge or level interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> setenrl{}; 
    }
    namespace Nonecienr{    ///<Pin interrupt level (rising edge interrupt) clear
						register
        using Addr = Register::Address<0x4001800c,0xffffff00,0,unsigned>;
        ///Ones written to this address clear bits in the IENR, thus
								disabling the interrupts. Bit n clears bit n in the IENR register. 0
								= No operation. 1 = Disable rising edge or level
								interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cenrl{}; 
    }
    namespace Noneienf{    ///<Pin interrupt active level or falling edge interrupt enable
						register
        using Addr = Register::Address<0x40018010,0xffffff00,0,unsigned>;
        ///Enables the falling edge or configures the active level
								interrupt for each pin interrupt. Bit n configures the pin interrupt
								selected in PINTSELn. 0 = Disable falling edge interrupt or set
								active interrupt level LOW. 1 = Enable falling edge interrupt
								enabled or set active interrupt level HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> enaf{}; 
    }
    namespace Nonesienf{    ///<Pin interrupt active level or falling edge interrupt set
						register
        using Addr = Register::Address<0x40018014,0xffffff00,0,unsigned>;
        ///Ones written to this address set bits in the IENF, thus
								enabling interrupts. Bit n sets bit n in the IENF register. 0 = No
								operation. 1 = Select HIGH-active interrupt or enable falling edge
								interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> setenaf{}; 
    }
    namespace Nonecienf{    ///<Pin interrupt active level or falling edge interrupt clear
						register
        using Addr = Register::Address<0x40018018,0xffffff00,0,unsigned>;
        ///Ones written to this address clears bits in the IENF, thus
								disabling interrupts. Bit n clears bit n in the IENF register. 0 =
								No operation. 1 = LOW-active interrupt selected or falling edge
								interrupt disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cenaf{}; 
    }
    namespace Nonerise{    ///<Pin interrupt rising edge register
        using Addr = Register::Address<0x4001801c,0xffffff00,0,unsigned>;
        ///Rising edge detect. Bit n detects the rising edge of the
								pin selected in PINTSELn. Read 0: No rising edge has been detected
								on this pin since Reset or the last time a one was written to this
								bit. Write 0: no operation. Read 1: a rising edge has been detected
								since Reset or the last time a one was written to this bit. Write 1:
								clear rising edge detection for this pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdet{}; 
    }
    namespace Nonefall{    ///<Pin interrupt falling edge register
        using Addr = Register::Address<0x40018020,0xffffff00,0,unsigned>;
        ///Falling edge detect. Bit n detects the falling edge of the
								pin selected in PINTSELn. Read 0: No falling edge has been detected
								on this pin since Reset or the last time a one was written to this
								bit. Write 0: no operation. Read 1: a falling edge has been detected
								since Reset or the last time a one was written to this bit. Write 1:
								clear falling edge detection for this pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fdet{}; 
    }
    namespace Noneist{    ///<Pin interrupt status register
        using Addr = Register::Address<0x40018024,0xffffff00,0,unsigned>;
        ///Pin interrupt status. Bit n returns the status, clears the
								edge interrupt, or inverts the active level of the pin selected in
								PINTSELn. Read 0: interrupt is not being requested for this
								interrupt pin. Write 0: no operation. Read 1: interrupt is being
								requested for this interrupt pin. Write 1 (edge-sensitive): clear
								rising- and falling-edge detection for this pin. Write 1
								(level-sensitive): switch the active level for this pin (in the IENF
								register).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pstat{}; 
    }
    namespace Nonepmctrl{    ///<Pattern match interrupt control register
        using Addr = Register::Address<0x40018028,0x00fffffc,0,unsigned>;
        ///Specifies whether the 8 pin interrupts are controlled by
								the pin interrupt function or by the pattern match
								function.
        enum class selPmatchVal {
            pinInterrupt=0x00000000,     ///<Pin interrupt. Interrupts are driven in response to
										the standard pin interrupt function.
            patternMatch=0x00000001,     ///<Pattern match. Interrupts are driven in response to
										pattern matches.
        };
        namespace selPmatchValC{
            constexpr MPL::Value<selPmatchVal,selPmatchVal::pinInterrupt> pinInterrupt{};
            constexpr MPL::Value<selPmatchVal,selPmatchVal::patternMatch> patternMatch{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,selPmatchVal> selPmatch{}; 
        ///Enables the RXEV output to the CPU and/or to a GPIO output
								when the specified boolean expression evaluates to
								true.
        enum class enaRxevVal {
            disabled=0x00000000,     ///<Disabled. RXEV output to the CPU is
										disabled.
            enabled=0x00000001,     ///<Enabled. RXEV output to the CPU is
										enabled.
        };
        namespace enaRxevValC{
            constexpr MPL::Value<enaRxevVal,enaRxevVal::disabled> disabled{};
            constexpr MPL::Value<enaRxevVal,enaRxevVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,enaRxevVal> enaRxev{}; 
        ///This field displays the current state of pattern matches. A
								1 in any bit of this field indicates that the corresponding product
								term is matched by the current state of the appropriate
								inputs.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pmat{}; 
    }
    namespace Nonepmsrc{    ///<Pattern match interrupt bit-slice source register
        using Addr = Register::Address<0x4001802c,0x000000ff,0,unsigned>;
        ///Selects the input source for bit slice 0
        enum class src0Val {
            input0=0x00000000,     ///<Input 0. Selects the pin selected in the PINTSEL0
										register as the source to bit slice 0.
            input1=0x00000001,     ///<Input 1. Selects the pin selected in the PINTSEL1
										register as the source to bit slice 0.
            input2=0x00000002,     ///<Input 2. Selects the pin selected in the PINTSEL2
										register as the source to bit slice 0.
            input3=0x00000003,     ///<Input 3. Selects the pin selected in the PINTSEL3
										register as the source to bit slice 0.
            input4=0x00000004,     ///<Input 4. Selects the pin selected in the PINTSEL4
										register as the source to bit slice 0.
            input5=0x00000005,     ///<Input 5. Selects the pin selected in the PINTSEL5
										register as the source to bit slice 0.
            input6=0x00000006,     ///<Input 6. Selects the pin selected in the PINTSEL6
										register as the source to bit slice 0.
            input7=0x00000007,     ///<Input 7. Selects the pin selected in the PINTSEL7
										register as the source to bit slice 0.
        };
        namespace src0ValC{
            constexpr MPL::Value<src0Val,src0Val::input0> input0{};
            constexpr MPL::Value<src0Val,src0Val::input1> input1{};
            constexpr MPL::Value<src0Val,src0Val::input2> input2{};
            constexpr MPL::Value<src0Val,src0Val::input3> input3{};
            constexpr MPL::Value<src0Val,src0Val::input4> input4{};
            constexpr MPL::Value<src0Val,src0Val::input5> input5{};
            constexpr MPL::Value<src0Val,src0Val::input6> input6{};
            constexpr MPL::Value<src0Val,src0Val::input7> input7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,src0Val> src0{}; 
        ///Selects the input source for bit slice 1
        enum class src1Val {
            input0=0x00000000,     ///<Input 0. Selects the pin selected in the PINTSEL0
										register as the source to bit slice 1.
            input1=0x00000001,     ///<Input 1. Selects the pin selected in the PINTSEL1
										register as the source to bit slice 1.
            input2=0x00000002,     ///<Input 2. Selects the pin selected in the PINTSEL2
										register as the source to bit slice 1.
            input3=0x00000003,     ///<Input 3. Selects the pin selected in the PINTSEL3
										register as the source to bit slice 1.
            input4=0x00000004,     ///<Input 4. Selects the pin selected in the PINTSEL4
										register as the source to bit slice 1.
            input5=0x00000005,     ///<Input 5. Selects the pin selected in the PINTSEL5
										register as the source to bit slice 1.
            input6=0x00000006,     ///<Input 6. Selects the pin selected in the PINTSEL6
										register as the source to bit slice 1.
            input7=0x00000007,     ///<Input 7. Selects the pin selected in the PINTSEL7
										register as the source to bit slice 1.
        };
        namespace src1ValC{
            constexpr MPL::Value<src1Val,src1Val::input0> input0{};
            constexpr MPL::Value<src1Val,src1Val::input1> input1{};
            constexpr MPL::Value<src1Val,src1Val::input2> input2{};
            constexpr MPL::Value<src1Val,src1Val::input3> input3{};
            constexpr MPL::Value<src1Val,src1Val::input4> input4{};
            constexpr MPL::Value<src1Val,src1Val::input5> input5{};
            constexpr MPL::Value<src1Val,src1Val::input6> input6{};
            constexpr MPL::Value<src1Val,src1Val::input7> input7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,src1Val> src1{}; 
        ///Selects the input source for bit slice 2
        enum class src2Val {
            input0=0x00000000,     ///<Input 0. Selects the pin selected in the PINTSEL0
										register as the source to bit slice 2.
            input1=0x00000001,     ///<Input 1. Selects the pin selected in the PINTSEL1
										register as the source to bit slice 2.
            input2=0x00000002,     ///<Input 2. Selects the pin selected in the PINTSEL2
										register as the source to bit slice 2.
            input3=0x00000003,     ///<Input 3. Selects the pin selected in the PINTSEL3
										register as the source to bit slice 2.
            input4=0x00000004,     ///<Input 4. Selects the pin selected in the PINTSEL4
										register as the source to bit slice 2.
            input5=0x00000005,     ///<Input 5. Selects the pin selected in the PINTSEL5
										register as the source to bit slice 2.
            input6=0x00000006,     ///<Input 6. Selects the pin selected in the PINTSEL6
										register as the source to bit slice 2.
            input7=0x00000007,     ///<Input 7. Selects the pin selected in the PINTSEL7
										register as the source to bit slice 2.
        };
        namespace src2ValC{
            constexpr MPL::Value<src2Val,src2Val::input0> input0{};
            constexpr MPL::Value<src2Val,src2Val::input1> input1{};
            constexpr MPL::Value<src2Val,src2Val::input2> input2{};
            constexpr MPL::Value<src2Val,src2Val::input3> input3{};
            constexpr MPL::Value<src2Val,src2Val::input4> input4{};
            constexpr MPL::Value<src2Val,src2Val::input5> input5{};
            constexpr MPL::Value<src2Val,src2Val::input6> input6{};
            constexpr MPL::Value<src2Val,src2Val::input7> input7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,src2Val> src2{}; 
        ///Selects the input source for bit slice 3
        enum class src3Val {
            input0=0x00000000,     ///<Input 0. Selects the pin selected in the PINTSEL0
										register as the source to bit slice 3.
            input1=0x00000001,     ///<Input 1. Selects the pin selected in the PINTSEL1
										register as the source to bit slice 3.
            input2=0x00000002,     ///<Input 2. Selects the pin selected in the PINTSEL2
										register as the source to bit slice 3.
            input3=0x00000003,     ///<Input 3. Selects the pin selected in the PINTSEL3
										register as the source to bit slice 3.
            input4=0x00000004,     ///<Input 4. Selects the pin selected in the PINTSEL4
										register as the source to bit slice 3.
            input5=0x00000005,     ///<Input 5. Selects the pin selected in the PINTSEL5
										register as the source to bit slice 3.
            input6=0x00000006,     ///<Input 6. Selects the pin selected in the PINTSEL6
										register as the source to bit slice 3.
            input7=0x00000007,     ///<Input 7. Selects the pin selected in the PINTSEL7
										register as the source to bit slice 3.
        };
        namespace src3ValC{
            constexpr MPL::Value<src3Val,src3Val::input0> input0{};
            constexpr MPL::Value<src3Val,src3Val::input1> input1{};
            constexpr MPL::Value<src3Val,src3Val::input2> input2{};
            constexpr MPL::Value<src3Val,src3Val::input3> input3{};
            constexpr MPL::Value<src3Val,src3Val::input4> input4{};
            constexpr MPL::Value<src3Val,src3Val::input5> input5{};
            constexpr MPL::Value<src3Val,src3Val::input6> input6{};
            constexpr MPL::Value<src3Val,src3Val::input7> input7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,src3Val> src3{}; 
        ///Selects the input source for bit slice 4
        enum class src4Val {
            input0=0x00000000,     ///<Input 0. Selects the pin selected in the PINTSEL0
										register as the source to bit slice 4.
            input1=0x00000001,     ///<Input 1. Selects the pin selected in the PINTSEL1
										register as the source to bit slice 4.
            input2=0x00000002,     ///<Input 2. Selects the pin selected in the PINTSEL2
										register as the source to bit slice 4.
            input3=0x00000003,     ///<Input 3. Selects the pin selected in the PINTSEL3
										register as the source to bit slice 4.
            input4=0x00000004,     ///<Input 4. Selects the pin selected in the PINTSEL4
										register as the source to bit slice 4.
            input5=0x00000005,     ///<Input 5. Selects the pin selected in the PINTSEL5
										register as the source to bit slice 4.
            input6=0x00000006,     ///<Input 6. Selects the pin selected in the PINTSEL6
										register as the source to bit slice 4.
            input7=0x00000007,     ///<Input 7. Selects the pin selected in the PINTSEL7
										register as the source to bit slice 4.
        };
        namespace src4ValC{
            constexpr MPL::Value<src4Val,src4Val::input0> input0{};
            constexpr MPL::Value<src4Val,src4Val::input1> input1{};
            constexpr MPL::Value<src4Val,src4Val::input2> input2{};
            constexpr MPL::Value<src4Val,src4Val::input3> input3{};
            constexpr MPL::Value<src4Val,src4Val::input4> input4{};
            constexpr MPL::Value<src4Val,src4Val::input5> input5{};
            constexpr MPL::Value<src4Val,src4Val::input6> input6{};
            constexpr MPL::Value<src4Val,src4Val::input7> input7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,src4Val> src4{}; 
        ///Selects the input source for bit slice 5
        enum class src5Val {
            input0=0x00000000,     ///<Input 0. Selects the pin selected in the PINTSEL0
										register as the source to bit slice 5.
            input1=0x00000001,     ///<Input 1. Selects the pin selected in the PINTSEL1
										register as the source to bit slice 5.
            input2=0x00000002,     ///<Input 2. Selects the pin selected in the PINTSEL2
										register as the source to bit slice 5.
            input3=0x00000003,     ///<Input 3. Selects the pin selected in the PINTSEL3
										register as the source to bit slice 5.
            input4=0x00000004,     ///<Input 4. Selects the pin selected in the PINTSEL4
										register as the source to bit slice 5.
            input5=0x00000005,     ///<Input 5. Selects the pin selected in the PINTSEL5
										register as the source to bit slice 5.
            input6=0x00000006,     ///<Input 6. Selects the pin selected in the PINTSEL6
										register as the source to bit slice 5.
            input7=0x00000007,     ///<Input 7. Selects the pin selected in the PINTSEL7
										register as the source to bit slice 5.
        };
        namespace src5ValC{
            constexpr MPL::Value<src5Val,src5Val::input0> input0{};
            constexpr MPL::Value<src5Val,src5Val::input1> input1{};
            constexpr MPL::Value<src5Val,src5Val::input2> input2{};
            constexpr MPL::Value<src5Val,src5Val::input3> input3{};
            constexpr MPL::Value<src5Val,src5Val::input4> input4{};
            constexpr MPL::Value<src5Val,src5Val::input5> input5{};
            constexpr MPL::Value<src5Val,src5Val::input6> input6{};
            constexpr MPL::Value<src5Val,src5Val::input7> input7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,src5Val> src5{}; 
        ///Selects the input source for bit slice 6
        enum class src6Val {
            input0=0x00000000,     ///<Input 0. Selects the pin selected in the PINTSEL0
										register as the source to bit slice 6.
            input1=0x00000001,     ///<Input 1. Selects the pin selected in the PINTSEL1
										register as the source to bit slice 6.
            input2=0x00000002,     ///<Input 2. Selects the pin selected in the PINTSEL2
										register as the source to bit slice 6.
            input3=0x00000003,     ///<Input 3. Selects the pin selected in the PINTSEL3
										register as the source to bit slice 6.
            input4=0x00000004,     ///<Input 4. Selects the pin selected in the PINTSEL4
										register as the source to bit slice 6.
            input5=0x00000005,     ///<Input 5. Selects the pin selected in the PINTSEL5
										register as the source to bit slice 6.
            input6=0x00000006,     ///<Input 6. Selects the pin selected in the PINTSEL6
										register as the source to bit slice 6.
            input7=0x00000007,     ///<Input 7. Selects the pin selected in the PINTSEL7
										register as the source to bit slice 6.
        };
        namespace src6ValC{
            constexpr MPL::Value<src6Val,src6Val::input0> input0{};
            constexpr MPL::Value<src6Val,src6Val::input1> input1{};
            constexpr MPL::Value<src6Val,src6Val::input2> input2{};
            constexpr MPL::Value<src6Val,src6Val::input3> input3{};
            constexpr MPL::Value<src6Val,src6Val::input4> input4{};
            constexpr MPL::Value<src6Val,src6Val::input5> input5{};
            constexpr MPL::Value<src6Val,src6Val::input6> input6{};
            constexpr MPL::Value<src6Val,src6Val::input7> input7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,src6Val> src6{}; 
        ///Selects the input source for bit slice 7
        enum class src7Val {
            input0=0x00000000,     ///<Input 0. Selects the pin selected in the PINTSEL0
										register as the source to bit slice 7.
            input1=0x00000001,     ///<Input 1. Selects the pin selected in the PINTSEL1
										register as the source to bit slice 7.
            input2=0x00000002,     ///<Input 2. Selects the pin selected in the PINTSEL2
										register as the source to bit slice 7.
            input3=0x00000003,     ///<Input 3. Selects the pin selected in the PINTSEL3
										register as the source to bit slice 7.
            input4=0x00000004,     ///<Input 4. Selects the pin selected in the PINTSEL4
										register as the source to bit slice 7.
            input5=0x00000005,     ///<Input 5. Selects the pin selected in the PINTSEL5
										register as the source to bit slice 7.
            input6=0x00000006,     ///<Input 6. Selects the pin selected in the PINTSEL6
										register as the source to bit slice 7.
            input7=0x00000007,     ///<Input 7. Selects the pin selected in the PINTSEL7
										register as the source to bit slice 7.
        };
        namespace src7ValC{
            constexpr MPL::Value<src7Val,src7Val::input0> input0{};
            constexpr MPL::Value<src7Val,src7Val::input1> input1{};
            constexpr MPL::Value<src7Val,src7Val::input2> input2{};
            constexpr MPL::Value<src7Val,src7Val::input3> input3{};
            constexpr MPL::Value<src7Val,src7Val::input4> input4{};
            constexpr MPL::Value<src7Val,src7Val::input5> input5{};
            constexpr MPL::Value<src7Val,src7Val::input6> input6{};
            constexpr MPL::Value<src7Val,src7Val::input7> input7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,src7Val> src7{}; 
    }
    namespace Nonepmcfg{    ///<Pattern match interrupt bit slice configuration
						register
        using Addr = Register::Address<0x40018030,0x00000080,0,unsigned>;
        ///Determines whether slice 0 is an endpoint.
        enum class prodEndpts0Val {
            noEffect=0x00000000,     ///<No effect. Slice 0 is not an
										endpoint.
            endpoint=0x00000001,     ///<endpoint. Slice 0 is the endpoint of a product term
										(minterm). Pin interrupt 0 in the NVIC is raised if the
										minterm evaluates as true.
        };
        namespace prodEndpts0ValC{
            constexpr MPL::Value<prodEndpts0Val,prodEndpts0Val::noEffect> noEffect{};
            constexpr MPL::Value<prodEndpts0Val,prodEndpts0Val::endpoint> endpoint{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,prodEndpts0Val> prodEndpts0{}; 
        ///Determines whether slice 1 is an endpoint.
        enum class prodEndpts1Val {
            noEffect=0x00000000,     ///<No effect. Slice 1 is not an
										endpoint.
            endpoint=0x00000001,     ///<endpoint. Slice 1 is the endpoint of a product term
										(minterm). Pin interrupt 1 in the NVIC is raised if the
										minterm evaluates as true.
        };
        namespace prodEndpts1ValC{
            constexpr MPL::Value<prodEndpts1Val,prodEndpts1Val::noEffect> noEffect{};
            constexpr MPL::Value<prodEndpts1Val,prodEndpts1Val::endpoint> endpoint{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,prodEndpts1Val> prodEndpts1{}; 
        ///Determines whether slice 2 is an endpoint.
        enum class prodEndpts2Val {
            noEffect=0x00000000,     ///<No effect. Slice 2 is not an
										endpoint.
            endpoint=0x00000001,     ///<endpoint. Slice 2 is the endpoint of a product term
										(minterm). Pin interrupt 2 in the NVIC is raised if the
										minterm evaluates as true.
        };
        namespace prodEndpts2ValC{
            constexpr MPL::Value<prodEndpts2Val,prodEndpts2Val::noEffect> noEffect{};
            constexpr MPL::Value<prodEndpts2Val,prodEndpts2Val::endpoint> endpoint{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,prodEndpts2Val> prodEndpts2{}; 
        ///Determines whether slice 3 is an endpoint.
        enum class prodEndpts3Val {
            noEffect=0x00000000,     ///<No effect. Slice 3 is not an
										endpoint.
            endpoint=0x00000001,     ///<endpoint. Slice 3 is the endpoint of a product term
										(minterm). Pin interrupt 3 in the NVIC is raised if the
										minterm evaluates as true.
        };
        namespace prodEndpts3ValC{
            constexpr MPL::Value<prodEndpts3Val,prodEndpts3Val::noEffect> noEffect{};
            constexpr MPL::Value<prodEndpts3Val,prodEndpts3Val::endpoint> endpoint{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,prodEndpts3Val> prodEndpts3{}; 
        ///Determines whether slice 4 is an endpoint.
        enum class prodEndpts4Val {
            noEffect=0x00000000,     ///<No effect. Slice 4 is not an
										endpoint.
            endpoint=0x00000001,     ///<endpoint. Slice 4 is the endpoint of a product term
										(minterm). Pin interrupt 4 in the NVIC is raised if the
										minterm evaluates as true.
        };
        namespace prodEndpts4ValC{
            constexpr MPL::Value<prodEndpts4Val,prodEndpts4Val::noEffect> noEffect{};
            constexpr MPL::Value<prodEndpts4Val,prodEndpts4Val::endpoint> endpoint{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,prodEndpts4Val> prodEndpts4{}; 
        ///Determines whether slice 5 is an endpoint.
        enum class prodEndpts5Val {
            noEffect=0x00000000,     ///<No effect. Slice 5 is not an
										endpoint.
            endpoint=0x00000001,     ///<endpoint. Slice 5 is the endpoint of a product term
										(minterm). Pin interrupt 5 in the NVIC is raised if the
										minterm evaluates as true.
        };
        namespace prodEndpts5ValC{
            constexpr MPL::Value<prodEndpts5Val,prodEndpts5Val::noEffect> noEffect{};
            constexpr MPL::Value<prodEndpts5Val,prodEndpts5Val::endpoint> endpoint{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,prodEndpts5Val> prodEndpts5{}; 
        ///Determines whether slice 6 is an endpoint.
        enum class prodEndpts6Val {
            noEffect=0x00000000,     ///<No effect. Slice 6 is not an
										endpoint.
            endpoint=0x00000001,     ///<endpoint. Slice 6 is the endpoint of a product term
										(minterm). Pin interrupt 6 in the NVIC is raised if the
										minterm evaluates as true.
        };
        namespace prodEndpts6ValC{
            constexpr MPL::Value<prodEndpts6Val,prodEndpts6Val::noEffect> noEffect{};
            constexpr MPL::Value<prodEndpts6Val,prodEndpts6Val::endpoint> endpoint{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,prodEndpts6Val> prodEndpts6{}; 
        ///Specifies the match contribution condition for bit slice
								0.
        enum class cfg0Val {
            constantHigh=0x00000000,     ///<Constant HIGH. This bit slice always contributes to
										a product term match.
            stickyRisingEdge=0x00000001,     ///<Sticky rising edge. Match occurs if a rising edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if
										either a rising or falling edge on the specified input has
										occurred since the last time the edge detection for this bit
										slice was cleared. This bit is only cleared when the PMCFG
										or the PMSRC registers are written to.
            highLevel=0x00000004,     ///<High level. Match (for this bit slice) occurs when
										there is a high level on the input specified for this bit
										slice in the PMSRC register.
            lowLevel=0x00000005,     ///<Low level. Match occurs when there is a low level
										on the specified input.
            constant0=0x00000006,     ///<Constant 0. This bit slice never contributes to a
										match (should be used to disable any unused bit
										slices).
            event=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match
										occurs on an event - i.e. when either a rising or falling
										edge is first detected on the specified input (this is a
										non-sticky version of value 0x3) . This bit is cleared after
										one clock cycle.
        };
        namespace cfg0ValC{
            constexpr MPL::Value<cfg0Val,cfg0Val::constantHigh> constantHigh{};
            constexpr MPL::Value<cfg0Val,cfg0Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr MPL::Value<cfg0Val,cfg0Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr MPL::Value<cfg0Val,cfg0Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr MPL::Value<cfg0Val,cfg0Val::highLevel> highLevel{};
            constexpr MPL::Value<cfg0Val,cfg0Val::lowLevel> lowLevel{};
            constexpr MPL::Value<cfg0Val,cfg0Val::constant0> constant0{};
            constexpr MPL::Value<cfg0Val,cfg0Val::event> event{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,cfg0Val> cfg0{}; 
        ///Specifies the match contribution condition for bit slice
								1.
        enum class cfg1Val {
            constantHigh=0x00000000,     ///<Constant HIGH. This bit slice always contributes to
										a product term match.
            stickyRisingEdge=0x00000001,     ///<Sticky rising edge. Match occurs if a rising edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if
										either a rising or falling edge on the specified input has
										occurred since the last time the edge detection for this bit
										slice was cleared. This bit is only cleared when the PMCFG
										or the PMSRC registers are written to.
            highLevel=0x00000004,     ///<High level. Match (for this bit slice) occurs when
										there is a high level on the input specified for this bit
										slice in the PMSRC register.
            lowLevel=0x00000005,     ///<Low level. Match occurs when there is a low level
										on the specified input.
            constant0=0x00000006,     ///<Constant 0. This bit slice never contributes to a
										match (should be used to disable any unused bit
										slices).
            event=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match
										occurs on an event - i.e. when either a rising or falling
										edge is first detected on the specified input (this is a
										non-sticky version of value 0x3) . This bit is cleared after
										one clock cycle.
        };
        namespace cfg1ValC{
            constexpr MPL::Value<cfg1Val,cfg1Val::constantHigh> constantHigh{};
            constexpr MPL::Value<cfg1Val,cfg1Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr MPL::Value<cfg1Val,cfg1Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr MPL::Value<cfg1Val,cfg1Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr MPL::Value<cfg1Val,cfg1Val::highLevel> highLevel{};
            constexpr MPL::Value<cfg1Val,cfg1Val::lowLevel> lowLevel{};
            constexpr MPL::Value<cfg1Val,cfg1Val::constant0> constant0{};
            constexpr MPL::Value<cfg1Val,cfg1Val::event> event{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,cfg1Val> cfg1{}; 
        ///Specifies the match contribution condition for bit slice
								2.
        enum class cfg2Val {
            constantHigh=0x00000000,     ///<Constant HIGH. This bit slice always contributes to
										a product term match.
            stickyRisingEdge=0x00000001,     ///<Sticky rising edge. Match occurs if a rising edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if
										either a rising or falling edge on the specified input has
										occurred since the last time the edge detection for this bit
										slice was cleared. This bit is only cleared when the PMCFG
										or the PMSRC registers are written to.
            highLevel=0x00000004,     ///<High level. Match (for this bit slice) occurs when
										there is a high level on the input specified for this bit
										slice in the PMSRC register.
            lowLevel=0x00000005,     ///<Low level. Match occurs when there is a low level
										on the specified input.
            constant0=0x00000006,     ///<Constant 0. This bit slice never contributes to a
										match (should be used to disable any unused bit
										slices).
            event=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match
										occurs on an event - i.e. when either a rising or falling
										edge is first detected on the specified input (this is a
										non-sticky version of value 0x3) . This bit is cleared after
										one clock cycle.
        };
        namespace cfg2ValC{
            constexpr MPL::Value<cfg2Val,cfg2Val::constantHigh> constantHigh{};
            constexpr MPL::Value<cfg2Val,cfg2Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr MPL::Value<cfg2Val,cfg2Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr MPL::Value<cfg2Val,cfg2Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr MPL::Value<cfg2Val,cfg2Val::highLevel> highLevel{};
            constexpr MPL::Value<cfg2Val,cfg2Val::lowLevel> lowLevel{};
            constexpr MPL::Value<cfg2Val,cfg2Val::constant0> constant0{};
            constexpr MPL::Value<cfg2Val,cfg2Val::event> event{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,cfg2Val> cfg2{}; 
        ///Specifies the match contribution condition for bit slice
								3.
        enum class cfg3Val {
            constantHigh=0x00000000,     ///<Constant HIGH. This bit slice always contributes to
										a product term match.
            stickyRisingEdge=0x00000001,     ///<Sticky rising edge. Match occurs if a rising edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if
										either a rising or falling edge on the specified input has
										occurred since the last time the edge detection for this bit
										slice was cleared. This bit is only cleared when the PMCFG
										or the PMSRC registers are written to.
            highLevel=0x00000004,     ///<High level. Match (for this bit slice) occurs when
										there is a high level on the input specified for this bit
										slice in the PMSRC register.
            lowLevel=0x00000005,     ///<Low level. Match occurs when there is a low level
										on the specified input.
            constant0=0x00000006,     ///<Constant 0. This bit slice never contributes to a
										match (should be used to disable any unused bit
										slices).
            event=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match
										occurs on an event - i.e. when either a rising or falling
										edge is first detected on the specified input (this is a
										non-sticky version of value 0x3) . This bit is cleared after
										one clock cycle.
        };
        namespace cfg3ValC{
            constexpr MPL::Value<cfg3Val,cfg3Val::constantHigh> constantHigh{};
            constexpr MPL::Value<cfg3Val,cfg3Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr MPL::Value<cfg3Val,cfg3Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr MPL::Value<cfg3Val,cfg3Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr MPL::Value<cfg3Val,cfg3Val::highLevel> highLevel{};
            constexpr MPL::Value<cfg3Val,cfg3Val::lowLevel> lowLevel{};
            constexpr MPL::Value<cfg3Val,cfg3Val::constant0> constant0{};
            constexpr MPL::Value<cfg3Val,cfg3Val::event> event{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,cfg3Val> cfg3{}; 
        ///Specifies the match contribution condition for bit slice
								4.
        enum class cfg4Val {
            constantHigh=0x00000000,     ///<Constant HIGH. This bit slice always contributes to
										a product term match.
            stickyRisingEdge=0x00000001,     ///<Sticky rising edge. Match occurs if a rising edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if
										either a rising or falling edge on the specified input has
										occurred since the last time the edge detection for this bit
										slice was cleared. This bit is only cleared when the PMCFG
										or the PMSRC registers are written to.
            highLevel=0x00000004,     ///<High level. Match (for this bit slice) occurs when
										there is a high level on the input specified for this bit
										slice in the PMSRC register.
            lowLevel=0x00000005,     ///<Low level. Match occurs when there is a low level
										on the specified input.
            constant0=0x00000006,     ///<Constant 0. This bit slice never contributes to a
										match (should be used to disable any unused bit
										slices).
            event=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match
										occurs on an event - i.e. when either a rising or falling
										edge is first detected on the specified input (this is a
										non-sticky version of value 0x3) . This bit is cleared after
										one clock cycle.
        };
        namespace cfg4ValC{
            constexpr MPL::Value<cfg4Val,cfg4Val::constantHigh> constantHigh{};
            constexpr MPL::Value<cfg4Val,cfg4Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr MPL::Value<cfg4Val,cfg4Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr MPL::Value<cfg4Val,cfg4Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr MPL::Value<cfg4Val,cfg4Val::highLevel> highLevel{};
            constexpr MPL::Value<cfg4Val,cfg4Val::lowLevel> lowLevel{};
            constexpr MPL::Value<cfg4Val,cfg4Val::constant0> constant0{};
            constexpr MPL::Value<cfg4Val,cfg4Val::event> event{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,cfg4Val> cfg4{}; 
        ///Specifies the match contribution condition for bit slice
								5.
        enum class cfg5Val {
            constantHigh=0x00000000,     ///<Constant HIGH. This bit slice always contributes to
										a product term match.
            stickyRisingEdge=0x00000001,     ///<Sticky rising edge. Match occurs if a rising edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if
										either a rising or falling edge on the specified input has
										occurred since the last time the edge detection for this bit
										slice was cleared. This bit is only cleared when the PMCFG
										or the PMSRC registers are written to.
            highLevel=0x00000004,     ///<High level. Match (for this bit slice) occurs when
										there is a high level on the input specified for this bit
										slice in the PMSRC register.
            lowLevel=0x00000005,     ///<Low level. Match occurs when there is a low level
										on the specified input.
            constant0=0x00000006,     ///<Constant 0. This bit slice never contributes to a
										match (should be used to disable any unused bit
										slices).
            event=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match
										occurs on an event - i.e. when either a rising or falling
										edge is first detected on the specified input (this is a
										non-sticky version of value 0x3) . This bit is cleared after
										one clock cycle.
        };
        namespace cfg5ValC{
            constexpr MPL::Value<cfg5Val,cfg5Val::constantHigh> constantHigh{};
            constexpr MPL::Value<cfg5Val,cfg5Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr MPL::Value<cfg5Val,cfg5Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr MPL::Value<cfg5Val,cfg5Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr MPL::Value<cfg5Val,cfg5Val::highLevel> highLevel{};
            constexpr MPL::Value<cfg5Val,cfg5Val::lowLevel> lowLevel{};
            constexpr MPL::Value<cfg5Val,cfg5Val::constant0> constant0{};
            constexpr MPL::Value<cfg5Val,cfg5Val::event> event{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,cfg5Val> cfg5{}; 
        ///Specifies the match contribution condition for bit slice
								6.
        enum class cfg6Val {
            constantHigh=0x00000000,     ///<Constant HIGH. This bit slice always contributes to
										a product term match.
            stickyRisingEdge=0x00000001,     ///<Sticky rising edge. Match occurs if a rising edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if
										either a rising or falling edge on the specified input has
										occurred since the last time the edge detection for this bit
										slice was cleared. This bit is only cleared when the PMCFG
										or the PMSRC registers are written to.
            highLevel=0x00000004,     ///<High level. Match (for this bit slice) occurs when
										there is a high level on the input specified for this bit
										slice in the PMSRC register.
            lowLevel=0x00000005,     ///<Low level. Match occurs when there is a low level
										on the specified input.
            constant0=0x00000006,     ///<Constant 0. This bit slice never contributes to a
										match (should be used to disable any unused bit
										slices).
            event=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match
										occurs on an event - i.e. when either a rising or falling
										edge is first detected on the specified input (this is a
										non-sticky version of value 0x3) . This bit is cleared after
										one clock cycle.
        };
        namespace cfg6ValC{
            constexpr MPL::Value<cfg6Val,cfg6Val::constantHigh> constantHigh{};
            constexpr MPL::Value<cfg6Val,cfg6Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr MPL::Value<cfg6Val,cfg6Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr MPL::Value<cfg6Val,cfg6Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr MPL::Value<cfg6Val,cfg6Val::highLevel> highLevel{};
            constexpr MPL::Value<cfg6Val,cfg6Val::lowLevel> lowLevel{};
            constexpr MPL::Value<cfg6Val,cfg6Val::constant0> constant0{};
            constexpr MPL::Value<cfg6Val,cfg6Val::event> event{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,cfg6Val> cfg6{}; 
        ///Specifies the match contribution condition for bit slice
								7.
        enum class cfg7Val {
            constantHigh=0x00000000,     ///<Constant HIGH. This bit slice always contributes to
										a product term match.
            stickyRisingEdge=0x00000001,     ///<Sticky rising edge. Match occurs if a rising edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge
										on the specified input has occurred since the last time the
										edge detection for this bit slice was cleared. This bit is
										only cleared when the PMCFG or the PMSRC registers are
										written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if
										either a rising or falling edge on the specified input has
										occurred since the last time the edge detection for this bit
										slice was cleared. This bit is only cleared when the PMCFG
										or the PMSRC registers are written to.
            highLevel=0x00000004,     ///<High level. Match (for this bit slice) occurs when
										there is a high level on the input specified for this bit
										slice in the PMSRC register.
            lowLevel=0x00000005,     ///<Low level. Match occurs when there is a low level
										on the specified input.
            constant0=0x00000006,     ///<Constant 0. This bit slice never contributes to a
										match (should be used to disable any unused bit
										slices).
            event=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match
										occurs on an event - i.e. when either a rising or falling
										edge is first detected on the specified input (this is a
										non-sticky version of value 0x3) . This bit is cleared after
										one clock cycle.
        };
        namespace cfg7ValC{
            constexpr MPL::Value<cfg7Val,cfg7Val::constantHigh> constantHigh{};
            constexpr MPL::Value<cfg7Val,cfg7Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr MPL::Value<cfg7Val,cfg7Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr MPL::Value<cfg7Val,cfg7Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr MPL::Value<cfg7Val,cfg7Val::highLevel> highLevel{};
            constexpr MPL::Value<cfg7Val,cfg7Val::lowLevel> lowLevel{};
            constexpr MPL::Value<cfg7Val,cfg7Val::constant0> constant0{};
            constexpr MPL::Value<cfg7Val,cfg7Val::event> event{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,cfg7Val> cfg7{}; 
    }
}
