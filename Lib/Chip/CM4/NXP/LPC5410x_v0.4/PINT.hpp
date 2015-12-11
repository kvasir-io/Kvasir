#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pin interrupt and pattern match engine
    namespace Noneisel{    ///<Pin Interrupt Mode register
        using Addr = Register::Address<0x40018000,0xffffff00,0,unsigned>;
        ///Selects the interrupt mode for each pin interrupt. Bit n
								configures the pin interrupt selected in PINTSELn. 0 = Edge
								sensitive 1 = Level sensitive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pmode{}; 
    }
    namespace Noneienr{    ///<Pin interrupt level or rising edge interrupt enable
						register
        using Addr = Register::Address<0x40018004,0xffffff00,0,unsigned>;
        ///Enables the rising edge or level interrupt for each pin
								interrupt. Bit n configures the pin interrupt selected in PINTSELn.
								0 = Disable rising edge or level interrupt. 1 = Enable rising edge
								or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> enrl{}; 
    }
    namespace Nonesienr{    ///<Pin interrupt level or rising edge interrupt set
						register
        using Addr = Register::Address<0x40018008,0xffffff00,0,unsigned>;
        ///Ones written to this address set bits in the IENR, thus
								enabling interrupts. Bit n sets bit n in the IENR register. 0 = No
								operation. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> setenrl{}; 
    }
    namespace Nonecienr{    ///<Pin interrupt level (rising edge interrupt) clear
						register
        using Addr = Register::Address<0x4001800c,0xffffff00,0,unsigned>;
        ///Ones written to this address clear bits in the IENR, thus
								disabling the interrupts. Bit n clears bit n in the IENR register. 0
								= No operation. 1 = Disable rising edge or level
								interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cenrl{}; 
    }
    namespace Noneienf{    ///<Pin interrupt active level or falling edge interrupt enable
						register
        using Addr = Register::Address<0x40018010,0xffffff00,0,unsigned>;
        ///Enables the falling edge or configures the active level
								interrupt for each pin interrupt. Bit n configures the pin interrupt
								selected in PINTSELn. 0 = Disable falling edge interrupt or set
								active interrupt level LOW. 1 = Enable falling edge interrupt
								enabled or set active interrupt level HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> enaf{}; 
    }
    namespace Nonesienf{    ///<Pin interrupt active level or falling edge interrupt set
						register
        using Addr = Register::Address<0x40018014,0xffffff00,0,unsigned>;
        ///Ones written to this address set bits in the IENF, thus
								enabling interrupts. Bit n sets bit n in the IENF register. 0 = No
								operation. 1 = Select HIGH-active interrupt or enable falling edge
								interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> setenaf{}; 
    }
    namespace Nonecienf{    ///<Pin interrupt active level or falling edge interrupt clear
						register
        using Addr = Register::Address<0x40018018,0xffffff00,0,unsigned>;
        ///Ones written to this address clears bits in the IENF, thus
								disabling interrupts. Bit n clears bit n in the IENF register. 0 =
								No operation. 1 = LOW-active interrupt selected or falling edge
								interrupt disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cenaf{}; 
    }
    namespace Nonerise{    ///<Pin interrupt rising edge register
        using Addr = Register::Address<0x4001801c,0xffffff00,0,unsigned>;
        ///Rising edge detect. Bit n detects the rising edge of the
								pin selected in PINTSELn. Read 0: No rising edge has been detected
								on this pin since Reset or the last time a one was written to this
								bit. Write 0: no operation. Read 1: a rising edge has been detected
								since Reset or the last time a one was written to this bit. Write 1:
								clear rising edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdet{}; 
    }
    namespace Nonefall{    ///<Pin interrupt falling edge register
        using Addr = Register::Address<0x40018020,0xffffff00,0,unsigned>;
        ///Falling edge detect. Bit n detects the falling edge of the
								pin selected in PINTSELn. Read 0: No falling edge has been detected
								on this pin since Reset or the last time a one was written to this
								bit. Write 0: no operation. Read 1: a falling edge has been detected
								since Reset or the last time a one was written to this bit. Write 1:
								clear falling edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fdet{}; 
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pstat{}; 
    }
    namespace Nonepmctrl{    ///<Pattern match interrupt control register
        using Addr = Register::Address<0x40018028,0x00fffffc,0,unsigned>;
        ///Specifies whether the 8 pin interrupts are controlled by
								the pin interrupt function or by the pattern match
								function.
        enum class SelpmatchVal {
            pinInterrupt=0x00000000,     ///<Pin interrupt. Interrupts are driven in response to
										the standard pin interrupt function.
            patternMatch=0x00000001,     ///<Pattern match. Interrupts are driven in response to
										pattern matches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SelpmatchVal> selPmatch{}; 
        namespace SelpmatchValC{
            constexpr Register::FieldValue<decltype(selPmatch)::Type,SelpmatchVal::pinInterrupt> pinInterrupt{};
            constexpr Register::FieldValue<decltype(selPmatch)::Type,SelpmatchVal::patternMatch> patternMatch{};
        }
        }
        ///Enables the RXEV output to the CPU and/or to a GPIO output
								when the specified boolean expression evaluates to
								true.
        enum class EnarxevVal {
            disabled=0x00000000,     ///<Disabled. RXEV output to the CPU is
										disabled.
            enabled=0x00000001,     ///<Enabled. RXEV output to the CPU is
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EnarxevVal> enaRxev{}; 
        namespace EnarxevValC{
            constexpr Register::FieldValue<decltype(enaRxev)::Type,EnarxevVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enaRxev)::Type,EnarxevVal::enabled> enabled{};
        }
        }
        ///This field displays the current state of pattern matches. A
								1 in any bit of this field indicates that the corresponding product
								term is matched by the current state of the appropriate
								inputs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pmat{}; 
    }
    namespace Nonepmsrc{    ///<Pattern match interrupt bit-slice source register
        using Addr = Register::Address<0x4001802c,0x000000ff,0,unsigned>;
        ///Selects the input source for bit slice 0
        enum class Src0Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,Src0Val> src0{}; 
        namespace Src0ValC{
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input0> input0{};
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input1> input1{};
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input2> input2{};
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input3> input3{};
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input4> input4{};
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input5> input5{};
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input6> input6{};
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input7> input7{};
        }
        }
        ///Selects the input source for bit slice 1
        enum class Src1Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,Src1Val> src1{}; 
        namespace Src1ValC{
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input0> input0{};
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input1> input1{};
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input2> input2{};
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input3> input3{};
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input4> input4{};
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input5> input5{};
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input6> input6{};
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input7> input7{};
        }
        }
        ///Selects the input source for bit slice 2
        enum class Src2Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,Src2Val> src2{}; 
        namespace Src2ValC{
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input0> input0{};
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input1> input1{};
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input2> input2{};
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input3> input3{};
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input4> input4{};
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input5> input5{};
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input6> input6{};
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input7> input7{};
        }
        }
        ///Selects the input source for bit slice 3
        enum class Src3Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,Src3Val> src3{}; 
        namespace Src3ValC{
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input0> input0{};
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input1> input1{};
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input2> input2{};
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input3> input3{};
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input4> input4{};
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input5> input5{};
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input6> input6{};
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input7> input7{};
        }
        }
        ///Selects the input source for bit slice 4
        enum class Src4Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,Src4Val> src4{}; 
        namespace Src4ValC{
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input0> input0{};
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input1> input1{};
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input2> input2{};
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input3> input3{};
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input4> input4{};
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input5> input5{};
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input6> input6{};
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input7> input7{};
        }
        }
        ///Selects the input source for bit slice 5
        enum class Src5Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,Src5Val> src5{}; 
        namespace Src5ValC{
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input0> input0{};
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input1> input1{};
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input2> input2{};
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input3> input3{};
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input4> input4{};
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input5> input5{};
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input6> input6{};
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input7> input7{};
        }
        }
        ///Selects the input source for bit slice 6
        enum class Src6Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,Src6Val> src6{}; 
        namespace Src6ValC{
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input0> input0{};
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input1> input1{};
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input2> input2{};
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input3> input3{};
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input4> input4{};
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input5> input5{};
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input6> input6{};
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input7> input7{};
        }
        }
        ///Selects the input source for bit slice 7
        enum class Src7Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,Src7Val> src7{}; 
        namespace Src7ValC{
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input0> input0{};
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input1> input1{};
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input2> input2{};
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input3> input3{};
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input4> input4{};
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input5> input5{};
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input6> input6{};
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input7> input7{};
        }
        }
    }
    namespace Nonepmcfg{    ///<Pattern match interrupt bit slice configuration
						register
        using Addr = Register::Address<0x40018030,0x00000080,0,unsigned>;
        ///Determines whether slice 0 is an endpoint.
        enum class Prodendpts0Val {
            noEffect=0x00000000,     ///<No effect. Slice 0 is not an
										endpoint.
            endpoint=0x00000001,     ///<endpoint. Slice 0 is the endpoint of a product term
										(minterm). Pin interrupt 0 in the NVIC is raised if the
										minterm evaluates as true.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Prodendpts0Val> prodEndpts0{}; 
        namespace Prodendpts0ValC{
            constexpr Register::FieldValue<decltype(prodEndpts0)::Type,Prodendpts0Val::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(prodEndpts0)::Type,Prodendpts0Val::endpoint> endpoint{};
        }
        }
        ///Determines whether slice 1 is an endpoint.
        enum class Prodendpts1Val {
            noEffect=0x00000000,     ///<No effect. Slice 1 is not an
										endpoint.
            endpoint=0x00000001,     ///<endpoint. Slice 1 is the endpoint of a product term
										(minterm). Pin interrupt 1 in the NVIC is raised if the
										minterm evaluates as true.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Prodendpts1Val> prodEndpts1{}; 
        namespace Prodendpts1ValC{
            constexpr Register::FieldValue<decltype(prodEndpts1)::Type,Prodendpts1Val::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(prodEndpts1)::Type,Prodendpts1Val::endpoint> endpoint{};
        }
        }
        ///Determines whether slice 2 is an endpoint.
        enum class Prodendpts2Val {
            noEffect=0x00000000,     ///<No effect. Slice 2 is not an
										endpoint.
            endpoint=0x00000001,     ///<endpoint. Slice 2 is the endpoint of a product term
										(minterm). Pin interrupt 2 in the NVIC is raised if the
										minterm evaluates as true.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Prodendpts2Val> prodEndpts2{}; 
        namespace Prodendpts2ValC{
            constexpr Register::FieldValue<decltype(prodEndpts2)::Type,Prodendpts2Val::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(prodEndpts2)::Type,Prodendpts2Val::endpoint> endpoint{};
        }
        }
        ///Determines whether slice 3 is an endpoint.
        enum class Prodendpts3Val {
            noEffect=0x00000000,     ///<No effect. Slice 3 is not an
										endpoint.
            endpoint=0x00000001,     ///<endpoint. Slice 3 is the endpoint of a product term
										(minterm). Pin interrupt 3 in the NVIC is raised if the
										minterm evaluates as true.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Prodendpts3Val> prodEndpts3{}; 
        namespace Prodendpts3ValC{
            constexpr Register::FieldValue<decltype(prodEndpts3)::Type,Prodendpts3Val::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(prodEndpts3)::Type,Prodendpts3Val::endpoint> endpoint{};
        }
        }
        ///Determines whether slice 4 is an endpoint.
        enum class Prodendpts4Val {
            noEffect=0x00000000,     ///<No effect. Slice 4 is not an
										endpoint.
            endpoint=0x00000001,     ///<endpoint. Slice 4 is the endpoint of a product term
										(minterm). Pin interrupt 4 in the NVIC is raised if the
										minterm evaluates as true.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Prodendpts4Val> prodEndpts4{}; 
        namespace Prodendpts4ValC{
            constexpr Register::FieldValue<decltype(prodEndpts4)::Type,Prodendpts4Val::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(prodEndpts4)::Type,Prodendpts4Val::endpoint> endpoint{};
        }
        }
        ///Determines whether slice 5 is an endpoint.
        enum class Prodendpts5Val {
            noEffect=0x00000000,     ///<No effect. Slice 5 is not an
										endpoint.
            endpoint=0x00000001,     ///<endpoint. Slice 5 is the endpoint of a product term
										(minterm). Pin interrupt 5 in the NVIC is raised if the
										minterm evaluates as true.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Prodendpts5Val> prodEndpts5{}; 
        namespace Prodendpts5ValC{
            constexpr Register::FieldValue<decltype(prodEndpts5)::Type,Prodendpts5Val::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(prodEndpts5)::Type,Prodendpts5Val::endpoint> endpoint{};
        }
        }
        ///Determines whether slice 6 is an endpoint.
        enum class Prodendpts6Val {
            noEffect=0x00000000,     ///<No effect. Slice 6 is not an
										endpoint.
            endpoint=0x00000001,     ///<endpoint. Slice 6 is the endpoint of a product term
										(minterm). Pin interrupt 6 in the NVIC is raised if the
										minterm evaluates as true.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Prodendpts6Val> prodEndpts6{}; 
        namespace Prodendpts6ValC{
            constexpr Register::FieldValue<decltype(prodEndpts6)::Type,Prodendpts6Val::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(prodEndpts6)::Type,Prodendpts6Val::endpoint> endpoint{};
        }
        }
        ///Specifies the match contribution condition for bit slice
								0.
        enum class Cfg0Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,Cfg0Val> cfg0{}; 
        namespace Cfg0ValC{
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::constantHigh> constantHigh{};
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::highLevel> highLevel{};
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::lowLevel> lowLevel{};
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::constant0> constant0{};
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::event> event{};
        }
        }
        ///Specifies the match contribution condition for bit slice
								1.
        enum class Cfg1Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,Cfg1Val> cfg1{}; 
        namespace Cfg1ValC{
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::constantHigh> constantHigh{};
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::highLevel> highLevel{};
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::lowLevel> lowLevel{};
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::constant0> constant0{};
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::event> event{};
        }
        }
        ///Specifies the match contribution condition for bit slice
								2.
        enum class Cfg2Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,Cfg2Val> cfg2{}; 
        namespace Cfg2ValC{
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::constantHigh> constantHigh{};
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::highLevel> highLevel{};
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::lowLevel> lowLevel{};
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::constant0> constant0{};
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::event> event{};
        }
        }
        ///Specifies the match contribution condition for bit slice
								3.
        enum class Cfg3Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,Cfg3Val> cfg3{}; 
        namespace Cfg3ValC{
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::constantHigh> constantHigh{};
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::highLevel> highLevel{};
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::lowLevel> lowLevel{};
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::constant0> constant0{};
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::event> event{};
        }
        }
        ///Specifies the match contribution condition for bit slice
								4.
        enum class Cfg4Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,Cfg4Val> cfg4{}; 
        namespace Cfg4ValC{
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::constantHigh> constantHigh{};
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::highLevel> highLevel{};
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::lowLevel> lowLevel{};
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::constant0> constant0{};
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::event> event{};
        }
        }
        ///Specifies the match contribution condition for bit slice
								5.
        enum class Cfg5Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,Cfg5Val> cfg5{}; 
        namespace Cfg5ValC{
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::constantHigh> constantHigh{};
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::highLevel> highLevel{};
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::lowLevel> lowLevel{};
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::constant0> constant0{};
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::event> event{};
        }
        }
        ///Specifies the match contribution condition for bit slice
								6.
        enum class Cfg6Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,Cfg6Val> cfg6{}; 
        namespace Cfg6ValC{
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::constantHigh> constantHigh{};
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::highLevel> highLevel{};
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::lowLevel> lowLevel{};
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::constant0> constant0{};
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::event> event{};
        }
        }
        ///Specifies the match contribution condition for bit slice
								7.
        enum class Cfg7Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,Cfg7Val> cfg7{}; 
        namespace Cfg7ValC{
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::constantHigh> constantHigh{};
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::stickyRisingEdge> stickyRisingEdge{};
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::highLevel> highLevel{};
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::lowLevel> lowLevel{};
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::constant0> constant0{};
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::event> event{};
        }
        }
    }
}
