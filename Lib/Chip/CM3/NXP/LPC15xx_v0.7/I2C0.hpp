#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I2C-bus interface 
    namespace Nonecfg{    ///<Configuration for shared functions.
        using Addr = Register::Address<0x40050000,0xffffffe0,0,unsigned>;
        ///Master Enable. When disabled, configurations settings for the Master function are not changed, but the Master function is internally reset.
        enum class mstenVal {
            disabled=0x00000000,     ///<Disabled. The I2C Master function is disabled.
            enabled=0x00000001,     ///<Enabled. The I2C Master function is enabled.
        };
        namespace mstenValC{
            constexpr MPL::Value<mstenVal,mstenVal::disabled> disabled{};
            constexpr MPL::Value<mstenVal,mstenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,mstenVal> msten{}; 
        ///Slave Enable. When disabled, configurations settings for the Slave function are not changed, but the Slave function is internally reset.
        enum class slvenVal {
            disabled=0x00000000,     ///<Disabled. The I2C slave function is disabled.
            enabled=0x00000001,     ///<Enabled. The I2C slave function is enabled.
        };
        namespace slvenValC{
            constexpr MPL::Value<slvenVal,slvenVal::disabled> disabled{};
            constexpr MPL::Value<slvenVal,slvenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,slvenVal> slven{}; 
        ///Monitor Enable. When disabled, configurations settings for the Monitor function are not changed, but the Monitor function is internally reset.
        enum class monenVal {
            disabled=0x00000000,     ///<Disabled. The I2C monitor function is disabled.
            enabled=0x00000001,     ///<Enabled. The I2C monitor function is enabled.
        };
        namespace monenValC{
            constexpr MPL::Value<monenVal,monenVal::disabled> disabled{};
            constexpr MPL::Value<monenVal,monenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,monenVal> monen{}; 
        ///I2C bus Time-out Enable. When disabled, the time-out function is internally reset.
        enum class timeoutenVal {
            disabled=0x00000000,     ///<Disabled. Time-out function is disabled.
            enabled=0x00000001,     ///<Enabled. Time-out function is enabled. Both types of time-out flags will be generated and will cause interrupts if they are enabled. Typically, only one time-out will be used in a system.
        };
        namespace timeoutenValC{
            constexpr MPL::Value<timeoutenVal,timeoutenVal::disabled> disabled{};
            constexpr MPL::Value<timeoutenVal,timeoutenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,timeoutenVal> timeouten{}; 
        ///Monitor function Clock Stretching.
        enum class monclkstrVal {
            disabled=0x00000000,     ///<Disabled. The monitor function will not perform clock stretching. Software or DMA may not always be able to read data provided by the monitor function before it is overwritten. This mode may be used when non-invasive monitoring is critical.
            enabled=0x00000001,     ///<Enabled. The monitor function will perform clock stretching in order to ensure that software or DMA can read all incoming data supplied by the monitor function.
        };
        namespace monclkstrValC{
            constexpr MPL::Value<monclkstrVal,monclkstrVal::disabled> disabled{};
            constexpr MPL::Value<monclkstrVal,monclkstrVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,monclkstrVal> monclkstr{}; 
    }
    namespace Nonestat{    ///<Status register for Master, Slave, and Monitor functions.
        using Addr = Register::Address<0x40050004,0xfcf000a0,0,unsigned>;
        ///Master Pending. Indicates that the Master is waiting to continue communication on the I2C-bus (pending) or is idle. When the master is pending, the MSTSTATE bits indicate what type of software service if any the master expects. This flag will cause an interrupt when set if, enabled via the INTENSET register. The MSTPENDING flag is not set when the DMA is handling an event (if the MSTDMA bit in the MSTCTL register is set). If the master is in the idle state, and no communication is needed, mask this interrupt.
        enum class mstpendingVal {
            inProgress=0x00000000,     ///<In progress. Communication is in progress and the Master function is busy and cannot currently accept a command.
            pending=0x00000001,     ///<Pending. The Master function needs software service or is in the idle state. If the master is not in the idle state, it is waiting to receive or transmit data or the NACK bit.
        };
        namespace mstpendingValC{
            constexpr MPL::Value<mstpendingVal,mstpendingVal::inProgress> inProgress{};
            constexpr MPL::Value<mstpendingVal,mstpendingVal::pending> pending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,mstpendingVal> mstpending{}; 
        ///Master State code. The master state code reflects the master state when the MSTPENDING bit is set, that is the master is pending or in the idle state. Each value of this field indicates a specific required service for the Master function.  All other values are reserved.
        enum class mststateVal {
            idle=0x00000000,     ///<Idle. The Master function is available to be used for a new transaction.
            receiveReady=0x00000001,     ///<Receive ready. Received data  available (Master Receiver mode). Address plus Read was previously sent and Acknowledged by slave.
            transmitReady=0x00000002,     ///<Transmit ready. Data can be transmitted (Master Transmitter mode). Address plus Write was previously sent and Acknowledged by slave.
            nackAddress=0x00000003,     ///<NACK Address. Slave NACKed address.
            nackData=0x00000004,     ///<NACK Data. Slave NACKed transmitted data.
        };
        namespace mststateValC{
            constexpr MPL::Value<mststateVal,mststateVal::idle> idle{};
            constexpr MPL::Value<mststateVal,mststateVal::receiveReady> receiveReady{};
            constexpr MPL::Value<mststateVal,mststateVal::transmitReady> transmitReady{};
            constexpr MPL::Value<mststateVal,mststateVal::nackAddress> nackAddress{};
            constexpr MPL::Value<mststateVal,mststateVal::nackData> nackData{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,mststateVal> mststate{}; 
        ///Master Arbitration Loss flag. This flag can be cleared by software writing a 1 to this bit. It is also cleared automatically a 1 is written to MSTCONTINUE.
        enum class mstarblossVal {
            noLoss=0x00000000,     ///<No loss. No Arbitration Loss has occurred.
            arbitrationLoss=0x00000001,     ///<Arbitration loss. The Master function has experienced an Arbitration Loss. At this point, the Master function has already stopped driving the bus and gone to an idle state. Software can respond by doing nothing, or by sending a Start in order to attempt to gain control of the bus when it next becomes idle.
        };
        namespace mstarblossValC{
            constexpr MPL::Value<mstarblossVal,mstarblossVal::noLoss> noLoss{};
            constexpr MPL::Value<mstarblossVal,mstarblossVal::arbitrationLoss> arbitrationLoss{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mstarblossVal> mstarbloss{}; 
        ///Master Start/Stop Error flag. This flag can be cleared by software writing a 1 to this bit. It is also cleared automatically a 1 is written to MSTCONTINUE.
        enum class mstststperrVal {
            noStartstopError=0x00000000,     ///<No Start/Stop Error has occurred.
            startstopErrorHas=0x00000001,     ///<Start/stop error has occurred. The Master function has experienced a Start/Stop Error. A Start or Stop was detected at a time when it is not allowed by the I2C specification. The Master interface has stopped driving the bus and gone to an idle state, no action is required. A request for a Start could be made, or software could attempt to insure that the bus has not stalled.
        };
        namespace mstststperrValC{
            constexpr MPL::Value<mstststperrVal,mstststperrVal::noStartstopError> noStartstopError{};
            constexpr MPL::Value<mstststperrVal,mstststperrVal::startstopErrorHas> startstopErrorHas{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,mstststperrVal> mstststperr{}; 
        ///Slave Pending. Indicates that the Slave function is waiting to continue communication on the I2C-bus and needs software service. This flag will cause an interrupt when set if enabled via INTENSET. The SLVPENDING flag is not set when the DMA is handling an event (if the SLVDMA bit in the SLVCTL register is set). The SLVPENDING flag is read-only and is automatically cleared when a 1 is written to the SLVCONTINUE bit in the MSTCTL register.
        enum class slvpendingVal {
            inProgress=0x00000000,     ///<In progress. The Slave function does not currently need service.
            pending=0x00000001,     ///<Pending. The Slave function needs service. Information on what is needed can be found in the adjacent SLVSTATE field.
        };
        namespace slvpendingValC{
            constexpr MPL::Value<slvpendingVal,slvpendingVal::inProgress> inProgress{};
            constexpr MPL::Value<slvpendingVal,slvpendingVal::pending> pending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,slvpendingVal> slvpending{}; 
        ///Slave State code. Each value of this field indicates a specific required service for the Slave function. All other values are reserved.
        enum class slvstateVal {
            slaveAddress=0x00000000,     ///<Slave address. Address plus R/W received. At least one of the four slave addresses has been matched by hardware.
            slaveReceive=0x00000001,     ///<Slave receive. Received data is available (Slave Receiver mode).
            slaveTransmit=0x00000002,     ///<Slave transmit. Data can be transmitted (Slave Transmitter mode).
            reserved=0x00000003,     ///<Reserved.
        };
        namespace slvstateValC{
            constexpr MPL::Value<slvstateVal,slvstateVal::slaveAddress> slaveAddress{};
            constexpr MPL::Value<slvstateVal,slvstateVal::slaveReceive> slaveReceive{};
            constexpr MPL::Value<slvstateVal,slvstateVal::slaveTransmit> slaveTransmit{};
            constexpr MPL::Value<slvstateVal,slvstateVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,slvstateVal> slvstate{}; 
        ///Slave Not Stretching. Indicates when the slave function is stretching the I2C clock. This is needed in order to gracefully invoke Deep Sleep or Power-down modes during slave operation. This read-only flag reflects the slave function status in real time.
        enum class slvnotstrVal {
            stretching=0x00000000,     ///<Stretching. The slave function is currently stretching the I2C bus clock. Deep-Sleep or Power-down mode cannot be entered at this time.
            notStretching=0x00000001,     ///<Not stretching. The slave function is not currently stretching the I2C bus clock. Deep-sleep or Power-down mode could be entered at this time.
        };
        namespace slvnotstrValC{
            constexpr MPL::Value<slvnotstrVal,slvnotstrVal::stretching> stretching{};
            constexpr MPL::Value<slvnotstrVal,slvnotstrVal::notStretching> notStretching{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,slvnotstrVal> slvnotstr{}; 
        ///Slave address match Index. This field is valid when the I2C slave function has been selected by receiving an address that matches one of the slave addresses defined by any enabled slave address registers, and provides an identification of the address that was matched. It is possible that more than one address could be matched, but only one match can be reported here.
        enum class slvidxVal {
            slaveAddress0Was=0x00000000,     ///<Slave address 0 was matched.
            slaveAddress1Was=0x00000001,     ///<Slave address 1 was matched.
            slaveAddress2Was=0x00000002,     ///<Slave address 2 was matched.
            slaveAddress3Was=0x00000003,     ///<Slave address 3 was matched.
        };
        namespace slvidxValC{
            constexpr MPL::Value<slvidxVal,slvidxVal::slaveAddress0Was> slaveAddress0Was{};
            constexpr MPL::Value<slvidxVal,slvidxVal::slaveAddress1Was> slaveAddress1Was{};
            constexpr MPL::Value<slvidxVal,slvidxVal::slaveAddress2Was> slaveAddress2Was{};
            constexpr MPL::Value<slvidxVal,slvidxVal::slaveAddress3Was> slaveAddress3Was{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,slvidxVal> slvidx{}; 
        ///Slave selected flag. SLVSEL is set after an address match when software tells the Slave function to acknowledge the address. It is cleared when another address cycle presents an address that does not match an enabled address on the Slave function, when slave software decides to NACK a matched address, or when there is a Stop detected on the bus. SLVSEL is not cleared if software Nacks data.
        enum class slvselVal {
            notSelected=0x00000000,     ///<Not selected. The Slave function is not currently selected.
            selected=0x00000001,     ///<Selected. The Slave function is currently selected.
        };
        namespace slvselValC{
            constexpr MPL::Value<slvselVal,slvselVal::notSelected> notSelected{};
            constexpr MPL::Value<slvselVal,slvselVal::selected> selected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,slvselVal> slvsel{}; 
        ///Slave Deselected flag. This flag will cause an interrupt when set if enabled via INTENSET. This flag can be cleared by writing a 1 to this bit.
        enum class slvdeselVal {
            notDeselected=0x00000000,     ///<Not deselected. The Slave function has not become deselected. This does not mean that it is currently selected. That information can be found in the SLVSEL flag.
            deselected=0x00000001,     ///<Deselected. The Slave function has become deselected. This is specifically caused by the SLVSEL flag changing from 1 to 0. See the description of SLVSEL for details on when that event occurs.
        };
        namespace slvdeselValC{
            constexpr MPL::Value<slvdeselVal,slvdeselVal::notDeselected> notDeselected{};
            constexpr MPL::Value<slvdeselVal,slvdeselVal::deselected> deselected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,slvdeselVal> slvdesel{}; 
        ///Monitor Ready. This flag is cleared when the MONRXDAT register is read.
        enum class monrdyVal {
            noData=0x00000000,     ///<No data. The Monitor function does not currently have data available.
            dataWaiting=0x00000001,     ///<Data waiting. The Monitor function has data waiting to be read.
        };
        namespace monrdyValC{
            constexpr MPL::Value<monrdyVal,monrdyVal::noData> noData{};
            constexpr MPL::Value<monrdyVal,monrdyVal::dataWaiting> dataWaiting{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,monrdyVal> monrdy{}; 
        ///Monitor Overflow flag.
        enum class monovVal {
            noOverrun=0x00000000,     ///<No overrun. Monitor data has not overrun.
            overrun=0x00000001,     ///<Overrun. A Monitor data overrun has occurred. This can only happen when Monitor clock stretching not enabled via the MONCLKSTR bit in the CFG register. Writing 1 to this bit clears the flag.
        };
        namespace monovValC{
            constexpr MPL::Value<monovVal,monovVal::noOverrun> noOverrun{};
            constexpr MPL::Value<monovVal,monovVal::overrun> overrun{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,monovVal> monov{}; 
        ///Monitor Active flag. This flag indicates when the Monitor function considers the I2C bus to be active. Active is defined here as when some Master is on the bus: a bus Start has occurred more recently than a bus Stop.
        enum class monactiveVal {
            inactive=0x00000000,     ///<Inactive. The Monitor function considers the I2C bus to be inactive.
            active=0x00000001,     ///<Active. The Monitor function considers the I2C bus to be active.
        };
        namespace monactiveValC{
            constexpr MPL::Value<monactiveVal,monactiveVal::inactive> inactive{};
            constexpr MPL::Value<monactiveVal,monactiveVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,monactiveVal> monactive{}; 
        ///Monitor Idle flag. This flag is set when the Monitor function sees the I2C bus change from active to inactive. This can be used by software to decide when to process data accumulated by the Monitor function. This flag will cause an interrupt when set if enabled via the INTENSET register . The flag can be cleared by writing a 1 to this bit.
        enum class monidleVal {
            notIdle=0x00000000,     ///<Not idle. The I2C bus is not idle, or this flag has been cleared by software.
            idle=0x00000001,     ///<Idle. The I2C bus has gone idle at least once since the last time this flag was cleared by software.
        };
        namespace monidleValC{
            constexpr MPL::Value<monidleVal,monidleVal::notIdle> notIdle{};
            constexpr MPL::Value<monidleVal,monidleVal::idle> idle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,monidleVal> monidle{}; 
        ///Event Time-out Interrupt flag. Indicates when the time between events has been longer than the time specified by the TIMEOUT register. Events include Start, Stop, and clock edges. The flag is cleared by writing a 1 to this bit. No time-out is created when the I2C-bus is idle.
        enum class eventtimeoutVal {
            noTimeOut=0x00000000,     ///<No time-out. I2C bus events have not caused a time-out.
            eventTimeOut=0x00000001,     ///<Event time-out. The time between I2C bus events has been longer than the time specified by the I2C TIMEOUT register.
        };
        namespace eventtimeoutValC{
            constexpr MPL::Value<eventtimeoutVal,eventtimeoutVal::noTimeOut> noTimeOut{};
            constexpr MPL::Value<eventtimeoutVal,eventtimeoutVal::eventTimeOut> eventTimeOut{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,eventtimeoutVal> eventtimeout{}; 
        ///SCL Time-out Interrupt flag. Indicates when SCL has remained low longer than the time specific by the TIMEOUT register. The flag is cleared by writing a 1 to this bit.
        enum class scltimeoutVal {
            noTimeOut=0x00000000,     ///<No time-out. SCL low time has not caused a time-out.
            timeOut=0x00000001,     ///<Time-out. SCL low time has caused a time-out.
        };
        namespace scltimeoutValC{
            constexpr MPL::Value<scltimeoutVal,scltimeoutVal::noTimeOut> noTimeOut{};
            constexpr MPL::Value<scltimeoutVal,scltimeoutVal::timeOut> timeOut{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,scltimeoutVal> scltimeout{}; 
    }
    namespace Noneintenset{    ///<Interrupt Enable Set and read register.
        using Addr = Register::Address<0x40050008,0xfcf476ae,0,unsigned>;
        ///Master Pending interrupt Enable.
        enum class mstpendingenVal {
            theMstpendingInter=0x00000000,     ///<The MstPending interrupt is disabled.
            theMstpendingInter=0x00000001,     ///<The MstPending interrupt is enabled.
        };
        namespace mstpendingenValC{
            constexpr MPL::Value<mstpendingenVal,mstpendingenVal::theMstpendingInter> theMstpendingInter{};
            constexpr MPL::Value<mstpendingenVal,mstpendingenVal::theMstpendingInter> theMstpendingInter{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,mstpendingenVal> mstpendingen{}; 
        ///Master Arbitration Loss interrupt Enable.
        enum class mstarblossenVal {
            theMstarblossInter=0x00000000,     ///<The MstArbLoss interrupt is disabled.
            theMstarblossInter=0x00000001,     ///<The MstArbLoss interrupt is enabled.
        };
        namespace mstarblossenValC{
            constexpr MPL::Value<mstarblossenVal,mstarblossenVal::theMstarblossInter> theMstarblossInter{};
            constexpr MPL::Value<mstarblossenVal,mstarblossenVal::theMstarblossInter> theMstarblossInter{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mstarblossenVal> mstarblossen{}; 
        ///Master Start/Stop Error interrupt Enable.
        enum class mstststperrenVal {
            theMstststperrInte=0x00000000,     ///<The MstStStpErr interrupt is disabled.
            theMstststperrInte=0x00000001,     ///<The MstStStpErr interrupt is enabled.
        };
        namespace mstststperrenValC{
            constexpr MPL::Value<mstststperrenVal,mstststperrenVal::theMstststperrInte> theMstststperrInte{};
            constexpr MPL::Value<mstststperrenVal,mstststperrenVal::theMstststperrInte> theMstststperrInte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,mstststperrenVal> mstststperren{}; 
        ///Slave Pending interrupt Enable.
        enum class slvpendingenVal {
            theSlvpendingInter=0x00000000,     ///<The SlvPending interrupt is disabled.
            theSlvpendingInter=0x00000001,     ///<The SlvPending interrupt is enabled.
        };
        namespace slvpendingenValC{
            constexpr MPL::Value<slvpendingenVal,slvpendingenVal::theSlvpendingInter> theSlvpendingInter{};
            constexpr MPL::Value<slvpendingenVal,slvpendingenVal::theSlvpendingInter> theSlvpendingInter{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,slvpendingenVal> slvpendingen{}; 
        ///Slave Not Stretching interrupt Enable.
        enum class slvnotstrenVal {
            theSlvnotstrInterr=0x00000000,     ///<The SlvNotStr interrupt is disabled.
            theSlvnotstrInterr=0x00000001,     ///<The SlvNotStr interrupt is enabled.
        };
        namespace slvnotstrenValC{
            constexpr MPL::Value<slvnotstrenVal,slvnotstrenVal::theSlvnotstrInterr> theSlvnotstrInterr{};
            constexpr MPL::Value<slvnotstrenVal,slvnotstrenVal::theSlvnotstrInterr> theSlvnotstrInterr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,slvnotstrenVal> slvnotstren{}; 
        ///Slave Deselect interrupt Enable.
        enum class slvdeselenVal {
            theSlvdeselInterru=0x00000000,     ///<The SlvDeSel interrupt is disabled.
            theSlvdeselInterru=0x00000001,     ///<The SlvDeSel interrupt is enabled.
        };
        namespace slvdeselenValC{
            constexpr MPL::Value<slvdeselenVal,slvdeselenVal::theSlvdeselInterru> theSlvdeselInterru{};
            constexpr MPL::Value<slvdeselenVal,slvdeselenVal::theSlvdeselInterru> theSlvdeselInterru{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,slvdeselenVal> slvdeselen{}; 
        ///Monitor data Ready interrupt Enable.
        enum class monrdyenVal {
            theMonrdyInterrupt=0x00000000,     ///<The MonRdy interrupt is disabled.
            theMonrdyInterrupt=0x00000001,     ///<The MonRdy interrupt is enabled.
        };
        namespace monrdyenValC{
            constexpr MPL::Value<monrdyenVal,monrdyenVal::theMonrdyInterrupt> theMonrdyInterrupt{};
            constexpr MPL::Value<monrdyenVal,monrdyenVal::theMonrdyInterrupt> theMonrdyInterrupt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,monrdyenVal> monrdyen{}; 
        ///Monitor Overrun interrupt Enable.
        enum class monovenVal {
            theMonovInterrupt=0x00000000,     ///<The MonOv interrupt is disabled.
            theMonovInterrupt=0x00000001,     ///<The MonOv interrupt is enabled.
        };
        namespace monovenValC{
            constexpr MPL::Value<monovenVal,monovenVal::theMonovInterrupt> theMonovInterrupt{};
            constexpr MPL::Value<monovenVal,monovenVal::theMonovInterrupt> theMonovInterrupt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,monovenVal> monoven{}; 
        ///Monitor Idle interrupt Enable.
        enum class monidleenVal {
            theMonidleInterrup=0x00000000,     ///<The MonIdle interrupt is disabled.
            theMonidleInterrup=0x00000001,     ///<The MonIdle interrupt is enabled.
        };
        namespace monidleenValC{
            constexpr MPL::Value<monidleenVal,monidleenVal::theMonidleInterrup> theMonidleInterrup{};
            constexpr MPL::Value<monidleenVal,monidleenVal::theMonidleInterrup> theMonidleInterrup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,monidleenVal> monidleen{}; 
        ///Event time-out interrupt Enable.
        enum class eventtimeoutenVal {
            theEventTimeOutI=0x00000000,     ///<The Event time-out interrupt is disabled.
            theEventTimeOutI=0x00000001,     ///<The Event time-out interrupt is enabled.
        };
        namespace eventtimeoutenValC{
            constexpr MPL::Value<eventtimeoutenVal,eventtimeoutenVal::theEventTimeOutI> theEventTimeOutI{};
            constexpr MPL::Value<eventtimeoutenVal,eventtimeoutenVal::theEventTimeOutI> theEventTimeOutI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,eventtimeoutenVal> eventtimeouten{}; 
        ///SCL time-out interrupt Enable.
        enum class scltimeoutenVal {
            theSclTimeOutInt=0x00000000,     ///<The SCL time-out interrupt is disabled.
            theSclTimeOutInt=0x00000001,     ///<The SCL time-out interrupt is enabled.
        };
        namespace scltimeoutenValC{
            constexpr MPL::Value<scltimeoutenVal,scltimeoutenVal::theSclTimeOutInt> theSclTimeOutInt{};
            constexpr MPL::Value<scltimeoutenVal,scltimeoutenVal::theSclTimeOutInt> theSclTimeOutInt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,scltimeoutenVal> scltimeouten{}; 
    }
    namespace Noneintenclr{    ///<Interrupt Enable Clear register.
        using Addr = Register::Address<0x4005000c,0xfcf476ae,0,unsigned>;
        ///Master Pending interrupt clear. Writing 1 to this bit clears the corresponding bit in the INTENSET register if implemented.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mstpendingclr{}; 
        ///Master Arbitration Loss interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mstarblossclr{}; 
        ///Master Start/Stop Error interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mstststperrclr{}; 
        ///Slave Pending interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slvpendingclr{}; 
        ///Slave Not Stretching interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> slvnotstrclr{}; 
        ///Slave Deselect interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> slvdeselclr{}; 
        ///Monitor data Ready interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> monrdyclr{}; 
        ///Monitor Overrun interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> monovclr{}; 
        ///Monitor Idle interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> monidleclr{}; 
        ///Event time-out interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eventtimeoutclr{}; 
        ///SCL time-out interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> scltimeoutclr{}; 
    }
    namespace Nonetimeout{    ///<Time-out value register.
        using Addr = Register::Address<0x40050010,0xffff0000,0,unsigned>;
        ///Time-out time value, bottom four bits. These are hard-wired to 0xF. This gives a minimum time-out of 16 I2C function clocks and also a time-out resolution of 16 I2C function clocks.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tomin{}; 
        ///Time-out time value. Specifies the time-out interval value in increments of 16 I 2C function clocks, as defined by the CLKDIV register. To change this value while I2C is in operation, disable all time-outs, write a new value to TIMEOUT, then re-enable time-outs. 0x000 = A time-out will occur after 16 counts of the I2C function clock. 0x001 = A time-out will occur after 32 counts of the I2C function clock. ... 0xFFF = A time-out will occur after 65,536 counts of the I2C function clock.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> to{}; 
    }
    namespace Noneclkdiv{    ///<Clock pre-divider for the entire I2C block. This determines what time increments are used for the MSTTIME and SLVTIME registers.
        using Addr = Register::Address<0x40050014,0xffff0000,0,unsigned>;
        ///This field controls how the clock (PCLK) is used by the I2C functions that need an internal clock in order to operate. 0x0000 = PCLK is used directly by the I2C function. 0x0001 = PCLK is divided by 2 before use by the I 2C function. 0x0002 = PCLK is divided by 3 before use by the I 2C function. ... 0xFFFF = PCLK is divided by 65,536 before use by the I2C function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> divval{}; 
    }
    namespace Noneintstat{    ///<Interrupt Status register for Master, Slave, and Monitor functions.
        using Addr = Register::Address<0x40050018,0xfcf476ae,0,unsigned>;
        ///Master Pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mstpending{}; 
        ///Master Arbitration Loss flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mstarbloss{}; 
        ///Master Start/Stop Error flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mstststperr{}; 
        ///Slave Pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slvpending{}; 
        ///Slave Not Stretching status.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> slvnotstr{}; 
        ///Slave Deselected flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> slvdesel{}; 
        ///Monitor Ready.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> monrdy{}; 
        ///Monitor Overflow flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> monov{}; 
        ///Monitor Idle flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> monidle{}; 
        ///Event time-out Interrupt flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eventtimeout{}; 
        ///SCL time-out Interrupt flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> scltimeout{}; 
    }
    namespace Nonemstctl{    ///<Master control register.
        using Addr = Register::Address<0x40050020,0xfffffff0,0,unsigned>;
        ///Master Continue. This bit is write-only.
        enum class mstcontinueVal {
            noEffect=0x00000000,     ///<No effect.
            continue_=0x00000001,     ///<Continue. Informs the Master function to continue to the next operation. This must done after writing transmit data, reading received data, or any other housekeeping related to the next bus operation.
        };
        namespace mstcontinueValC{
            constexpr MPL::Value<mstcontinueVal,mstcontinueVal::noEffect> noEffect{};
            constexpr MPL::Value<mstcontinueVal,mstcontinueVal::continue_> continue_{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,mstcontinueVal> mstcontinue{}; 
        ///Master Start control. This bit is write-only.
        enum class mststartVal {
            noEffect=0x00000000,     ///<No effect.
            start=0x00000001,     ///<Start. A Start will be generated on the I2C bus at the next allowed time.
        };
        namespace mststartValC{
            constexpr MPL::Value<mststartVal,mststartVal::noEffect> noEffect{};
            constexpr MPL::Value<mststartVal,mststartVal::start> start{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,mststartVal> mststart{}; 
        ///Master Stop control. This bit is write-only.
        enum class mststopVal {
            noEffect=0x00000000,     ///<No effect.
            stop=0x00000001,     ///<Stop. A Stop will be generated on the I2C bus at the next allowed time, preceded by a NACK to the slave if the master is receiving data from the slave (Master Receiver mode).
        };
        namespace mststopValC{
            constexpr MPL::Value<mststopVal,mststopVal::noEffect> noEffect{};
            constexpr MPL::Value<mststopVal,mststopVal::stop> stop{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,mststopVal> mststop{}; 
        ///Master DMA enable. Data operations of the I2C can be performed with DMA. Protocol type operations such as Start, address, Stop, and address match must always be done with software, typically via an interrupt. When a DMA data transfer is complete, MSTDMA must be cleared prior to beginning the next operation, typically a  Start or Stop.This bit is read/write.
        enum class mstdmaVal {
            disable=0x00000000,     ///<Disable. No DMA requests are generated for master operation.
            enable=0x00000001,     ///<Enable. A DMA request is generated for I2C master data operations. When this I2C master is generating Acknowledge bits in Master Receiver mode, the acknowledge is generated automatically.
        };
        namespace mstdmaValC{
            constexpr MPL::Value<mstdmaVal,mstdmaVal::disable> disable{};
            constexpr MPL::Value<mstdmaVal,mstdmaVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,mstdmaVal> mstdma{}; 
    }
    namespace Nonemsttime{    ///<Master timing configuration.
        using Addr = Register::Address<0x40050024,0xffffff88,0,unsigned>;
        ///Master SCL Low time. Specifies the minimum low time that will be asserted by this master on SCL. Other devices on the bus (masters or slaves) could lengthen this time. This corresponds to the parameter tLOW in the I2C bus specification. I2C bus specification parameters tBUF and t SU;STA have the same values and are also controlled by MSTSCLLOW.
        enum class mstscllowVal {
            v2Clocks=0x00000000,     ///<2 clocks. Minimum SCL low time is 2 clocks of the I2C clock pre-divider.
            v3Clocks=0x00000001,     ///<3 clocks. Minimum SCL low time is 3 clocks of the I2C clock pre-divider.
            v4Clocks=0x00000002,     ///<4 clocks. Minimum SCL low time is 4 clocks of the I2C clock pre-divider.
            v5Clocks=0x00000003,     ///<5 clocks. Minimum SCL low time is 5 clocks of the I2C clock pre-divider.
            v6Clocks=0x00000004,     ///<6 clocks. Minimum SCL low time is 6 clocks of the I2C clock pre-divider.
            v7Clocks=0x00000005,     ///<7 clocks. Minimum SCL low time is 7 clocks of the I2C clock pre-divider.
            v8Clocks=0x00000006,     ///<8 clocks. Minimum SCL low time is 8 clocks of the I2C clock pre-divider.
            v9Clocks=0x00000007,     ///<9 clocks. Minimum SCL low time is 9 clocks of the I2C clock pre-divider.
        };
        namespace mstscllowValC{
            constexpr MPL::Value<mstscllowVal,mstscllowVal::v2Clocks> v2Clocks{};
            constexpr MPL::Value<mstscllowVal,mstscllowVal::v3Clocks> v3Clocks{};
            constexpr MPL::Value<mstscllowVal,mstscllowVal::v4Clocks> v4Clocks{};
            constexpr MPL::Value<mstscllowVal,mstscllowVal::v5Clocks> v5Clocks{};
            constexpr MPL::Value<mstscllowVal,mstscllowVal::v6Clocks> v6Clocks{};
            constexpr MPL::Value<mstscllowVal,mstscllowVal::v7Clocks> v7Clocks{};
            constexpr MPL::Value<mstscllowVal,mstscllowVal::v8Clocks> v8Clocks{};
            constexpr MPL::Value<mstscllowVal,mstscllowVal::v9Clocks> v9Clocks{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,mstscllowVal> mstscllow{}; 
        ///Master SCL High time. Specifies the minimum high time that will be asserted by this master on SCL. Other masters in a multi-master system could shorten this time. This corresponds to the parameter tHIGH in the I2C bus specification. I2C bus specification parameters tSU;STO and tHD;STA have the same values and are also controlled by MSTSCLHIGH.
        enum class mstsclhighVal {
            v2Clocks=0x00000000,     ///<2 clocks. Minimum SCL high time is 2 clock of the I2C clock pre-divider.
            v3Clocks=0x00000001,     ///<3 clocks. Minimum SCL high time is 3 clocks of the I2C clock pre-divider .
            v4Clocks=0x00000002,     ///<4 clocks. Minimum SCL high time is 4 clock of the I2C clock pre-divider.
            v5Clocks=0x00000003,     ///<5 clocks. Minimum SCL high time is 5 clock of the I2C clock pre-divider.
            v6Clocks=0x00000004,     ///<6 clocks. Minimum SCL high time is 6 clock of the I2C clock pre-divider.
            v7Clocks=0x00000005,     ///<7 clocks. Minimum SCL high time is 7 clock of the I2C clock pre-divider.
            v8Clocks=0x00000006,     ///<8 clocks. Minimum SCL high time is 8 clock of the I2C clock pre-divider.
            v9Clocks=0x00000007,     ///<9 clocks. Minimum SCL high time is 9 clocks of the I2C clock pre-divider.
        };
        namespace mstsclhighValC{
            constexpr MPL::Value<mstsclhighVal,mstsclhighVal::v2Clocks> v2Clocks{};
            constexpr MPL::Value<mstsclhighVal,mstsclhighVal::v3Clocks> v3Clocks{};
            constexpr MPL::Value<mstsclhighVal,mstsclhighVal::v4Clocks> v4Clocks{};
            constexpr MPL::Value<mstsclhighVal,mstsclhighVal::v5Clocks> v5Clocks{};
            constexpr MPL::Value<mstsclhighVal,mstsclhighVal::v6Clocks> v6Clocks{};
            constexpr MPL::Value<mstsclhighVal,mstsclhighVal::v7Clocks> v7Clocks{};
            constexpr MPL::Value<mstsclhighVal,mstsclhighVal::v8Clocks> v8Clocks{};
            constexpr MPL::Value<mstsclhighVal,mstsclhighVal::v9Clocks> v9Clocks{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,mstsclhighVal> mstsclhigh{}; 
    }
    namespace Nonemstdat{    ///<Combined Master receiver and transmitter data register.
        using Addr = Register::Address<0x40050028,0xffffff00,0,unsigned>;
        ///Master function data register. Read: read the most recently received data for the Master function. Write: transmit data using the Master function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Noneslvctl{    ///<Slave control register.
        using Addr = Register::Address<0x40050040,0xfffffff4,0,unsigned>;
        ///Slave Continue.
        enum class slvcontinueVal {
            noEffect=0x00000000,     ///<No effect.
            continue_=0x00000001,     ///<Continue. Informs the Slave function to continue to the next operation. This must done after writing transmit data, reading received data, or any other housekeeping related to the next bus operation.
        };
        namespace slvcontinueValC{
            constexpr MPL::Value<slvcontinueVal,slvcontinueVal::noEffect> noEffect{};
            constexpr MPL::Value<slvcontinueVal,slvcontinueVal::continue_> continue_{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,slvcontinueVal> slvcontinue{}; 
        ///Slave NACK.
        enum class slvnackVal {
            noEffect=0x00000000,     ///<No effect.
            nack=0x00000001,     ///<NACK. Causes the Slave function to NACK the master when the slave is receiving data from the master (Slave Receiver mode).
        };
        namespace slvnackValC{
            constexpr MPL::Value<slvnackVal,slvnackVal::noEffect> noEffect{};
            constexpr MPL::Value<slvnackVal,slvnackVal::nack> nack{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,slvnackVal> slvnack{}; 
        ///Slave DMA enable.
        enum class slvdmaVal {
            disabled=0x00000000,     ///<Disabled. No DMA requests are issued for Slave mode operation.
            enabled=0x00000001,     ///<Enabled. DMA requests are issued for I2C slave data transmission and reception.
        };
        namespace slvdmaValC{
            constexpr MPL::Value<slvdmaVal,slvdmaVal::disabled> disabled{};
            constexpr MPL::Value<slvdmaVal,slvdmaVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,slvdmaVal> slvdma{}; 
    }
    namespace Noneslvdat{    ///<Combined Slave receiver and transmitter data register.
        using Addr = Register::Address<0x40050044,0xffffff00,0,unsigned>;
        ///Slave function data register. Read: read the most recently received data for the Slave function. Write: transmit data using the Slave function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Noneslvadr0{    ///<Slave address 0.
        using Addr = Register::Address<0x40050048,0xffffff00,0,unsigned>;
        ///Slave Address n Disable.
        enum class sadisableVal {
            enabled=0x00000000,     ///<Enabled. Slave Address n is enabled and will be recognized with any changes specified by the SLVQUAL0 register.
            ignoredSlaveAddres=0x00000001,     ///<Ignored Slave Address n is ignored.
        };
        namespace sadisableValC{
            constexpr MPL::Value<sadisableVal,sadisableVal::enabled> enabled{};
            constexpr MPL::Value<sadisableVal,sadisableVal::ignoredSlaveAddres> ignoredSlaveAddres{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sadisableVal> sadisable{}; 
        ///Seven bit slave address that is compared to received addresses if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> slvadr{}; 
    }
    namespace Noneslvadr1{    ///<Slave address 0.
        using Addr = Register::Address<0x4005004c,0xffffff00,0,unsigned>;
        ///Slave Address n Disable.
        enum class sadisableVal {
            enabled=0x00000000,     ///<Enabled. Slave Address n is enabled and will be recognized with any changes specified by the SLVQUAL0 register.
            ignoredSlaveAddres=0x00000001,     ///<Ignored Slave Address n is ignored.
        };
        namespace sadisableValC{
            constexpr MPL::Value<sadisableVal,sadisableVal::enabled> enabled{};
            constexpr MPL::Value<sadisableVal,sadisableVal::ignoredSlaveAddres> ignoredSlaveAddres{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sadisableVal> sadisable{}; 
        ///Seven bit slave address that is compared to received addresses if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> slvadr{}; 
    }
    namespace Noneslvadr2{    ///<Slave address 0.
        using Addr = Register::Address<0x40050050,0xffffff00,0,unsigned>;
        ///Slave Address n Disable.
        enum class sadisableVal {
            enabled=0x00000000,     ///<Enabled. Slave Address n is enabled and will be recognized with any changes specified by the SLVQUAL0 register.
            ignoredSlaveAddres=0x00000001,     ///<Ignored Slave Address n is ignored.
        };
        namespace sadisableValC{
            constexpr MPL::Value<sadisableVal,sadisableVal::enabled> enabled{};
            constexpr MPL::Value<sadisableVal,sadisableVal::ignoredSlaveAddres> ignoredSlaveAddres{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sadisableVal> sadisable{}; 
        ///Seven bit slave address that is compared to received addresses if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> slvadr{}; 
    }
    namespace Noneslvadr3{    ///<Slave address 0.
        using Addr = Register::Address<0x40050054,0xffffff00,0,unsigned>;
        ///Slave Address n Disable.
        enum class sadisableVal {
            enabled=0x00000000,     ///<Enabled. Slave Address n is enabled and will be recognized with any changes specified by the SLVQUAL0 register.
            ignoredSlaveAddres=0x00000001,     ///<Ignored Slave Address n is ignored.
        };
        namespace sadisableValC{
            constexpr MPL::Value<sadisableVal,sadisableVal::enabled> enabled{};
            constexpr MPL::Value<sadisableVal,sadisableVal::ignoredSlaveAddres> ignoredSlaveAddres{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sadisableVal> sadisable{}; 
        ///Seven bit slave address that is compared to received addresses if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> slvadr{}; 
    }
    namespace Noneslvqual0{    ///<Slave Qualification for address 0.
        using Addr = Register::Address<0x40050058,0xffffff00,0,unsigned>;
        ///Reserved. Read value is undefined, only zero should be written.
        enum class qualmode0Val {
            theSlvqual0FieldI=0x00000000,     ///<The SLVQUAL0 field is used as a logical mask for matching address 0.
            theSlvqual0FieldI=0x00000001,     ///<The SLVQUAL0 field is used to extend address 0 matching in a range of addresses.
        };
        namespace qualmode0ValC{
            constexpr MPL::Value<qualmode0Val,qualmode0Val::theSlvqual0FieldI> theSlvqual0FieldI{};
            constexpr MPL::Value<qualmode0Val,qualmode0Val::theSlvqual0FieldI> theSlvqual0FieldI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,qualmode0Val> qualmode0{}; 
        ///Slave address Qualifier for address 0. A value of 0 causes the address in SLVADR0 to be used as-is, assuming that it is enabled. If QUALMODE0 = 0, any bit in this field which is set to 1 will cause an automatic match of the corresponding bit of the received address when it is compared to the SLVADR0 register. If QUALMODE0 = 1, an address range is matched for address 0. This range extends from the value defined by SLVADR0 to the address defined by SLVQUAL0 (address matches when SLVADR0[7:1] <
				= received address <= SLVQUAL0[7:1]).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> slvqual0{}; 
    }
    namespace Nonemonrxdat{    ///<Monitor receiver data register.
        using Addr = Register::Address<0x40050080,0xfffff800,0,unsigned>;
        ///Monitor function Receiver Data. This reflects every data byte that passes on the I2C pins, and adds indication of Start, Repeated Start, and data NACK.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> monrxdat{}; 
        ///Monitor Received Start.
        enum class monstartVal {
            noDetect=0x00000000,     ///<No detect. The monitor function has not detected a Start event on the I2C bus.
            startDetect=0x00000001,     ///<Start detect. The monitor function has detected a Start event on the I2C bus.
        };
        namespace monstartValC{
            constexpr MPL::Value<monstartVal,monstartVal::noDetect> noDetect{};
            constexpr MPL::Value<monstartVal,monstartVal::startDetect> startDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,monstartVal> monstart{}; 
        ///Monitor Received Repeated Start.
        enum class monrestartVal {
            noStartDetect=0x00000000,     ///<No start detect. The monitor function has not detected a Repeated Start event on the I2C bus.
            repeatedStartDetec=0x00000001,     ///<Repeated start detect. The monitor function has detected a Repeated Start event on the I 2C bus.
        };
        namespace monrestartValC{
            constexpr MPL::Value<monrestartVal,monrestartVal::noStartDetect> noStartDetect{};
            constexpr MPL::Value<monrestartVal,monrestartVal::repeatedStartDetec> repeatedStartDetec{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,monrestartVal> monrestart{}; 
        ///Monitor Received NACK.
        enum class monnackVal {
            acknowledged=0x00000000,     ///<Acknowledged. The data currently being provided by the monitor function was acknowledged by at least one master or slave receiver.
            notAcknowledged=0x00000001,     ///<Not acknowledged. The data currently being provided by the monitor function was not acknowledged by any receiver.
        };
        namespace monnackValC{
            constexpr MPL::Value<monnackVal,monnackVal::acknowledged> acknowledged{};
            constexpr MPL::Value<monnackVal,monnackVal::notAcknowledged> notAcknowledged{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,monnackVal> monnack{}; 
    }
}
