#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40009000,0x14000000,0,unsigned>;
        ///Busy Flag. 
        enum class busyfVal {
            notSet=0x00000000,     ///<A transaction is not currently taking place.
            set=0x00000001,     ///<A transaction is currently taking place.
        };
        namespace busyfValC{
            constexpr MPL::Value<busyfVal,busyfVal::notSet> notSet{};
            constexpr MPL::Value<busyfVal,busyfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,busyfVal> busyf{}; 
        ///Acknowledge. 
        enum class ackVal {
            notSet=0x00000000,     ///<Read: ACK has not been received. Write: Do not send an ACK.
            set=0x00000001,     ///<Read: ACK received. Write: Send an ACK.
        };
        namespace ackValC{
            constexpr MPL::Value<ackVal,ackVal::notSet> notSet{};
            constexpr MPL::Value<ackVal,ackVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ackVal> ack{}; 
        ///Arbitration Lost Flag. 
        enum class arblfVal {
            notSet=0x00000000,     ///<Arbitration lost error has not occurred.
            set=0x00000001,     ///<Arbitration lost error occurred.
        };
        namespace arblfValC{
            constexpr MPL::Value<arblfVal,arblfVal::notSet> notSet{};
            constexpr MPL::Value<arblfVal,arblfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,arblfVal> arblf{}; 
        ///Acknowledge Request Flag. 
        enum class ackrqfVal {
            notSet=0x00000000,     ///<ACK has not been requested.
            set=0x00000001,     ///<ACK requested.
        };
        namespace ackrqfValC{
            constexpr MPL::Value<ackrqfVal,ackrqfVal::notSet> notSet{};
            constexpr MPL::Value<ackrqfVal,ackrqfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ackrqfVal> ackrqf{}; 
        ///Stop. 
        enum class stoVal {
            notSet=0x00000000,     ///<Read: A stop is not pending and a stop / repeat start has not been detected. Write: Clear the STO bit.
            set=0x00000001,     ///<Read: Stop or stop / repeat start detected. This bit must be cleared by firmware. Write: Generate a stop.
        };
        namespace stoValC{
            constexpr MPL::Value<stoVal,stoVal::notSet> notSet{};
            constexpr MPL::Value<stoVal,stoVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,stoVal> sto{}; 
        ///Start. 
        enum class staVal {
            notSet=0x00000000,     ///<Read: A start is not pending and a repeat start has not been detected. Write: Clear the STA bit. 
            set=0x00000001,     ///<Read: Start or repeat start detected. This bit must be cleared by firmware. Write: Generate a start or repeat start. 
        };
        namespace staValC{
            constexpr MPL::Value<staVal,staVal::notSet> notSet{};
            constexpr MPL::Value<staVal,staVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,staVal> sta{}; 
        ///Transmit Mode Flag. 
        enum class txmdfVal {
            receive=0x00000000,     ///<Module is in receiver mode.
            transmit=0x00000001,     ///<Module is in transmitter mode.
        };
        namespace txmdfValC{
            constexpr MPL::Value<txmdfVal,txmdfVal::receive> receive{};
            constexpr MPL::Value<txmdfVal,txmdfVal::transmit> transmit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,txmdfVal> txmdf{}; 
        ///Master/Slave Mode Flag. 
        enum class msmdfVal {
            slave=0x00000000,     ///<Module is operating in Slave mode.
            master=0x00000001,     ///<Module is operating in Master mode.
        };
        namespace msmdfValC{
            constexpr MPL::Value<msmdfVal,msmdfVal::slave> slave{};
            constexpr MPL::Value<msmdfVal,msmdfVal::master> master{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,msmdfVal> msmdf{}; 
        ///Stop Interrupt Flag. 
        enum class stoiVal {
            notSet=0x00000000,     ///<Read: A stop interrupt has not occurred. Write: Clear the stop interrupt flag (STOI).
            set=0x00000001,     ///<Read: Stop interrupt detected. In Slave mode, a stop has been detected on the bus.  In Master mode, a stop has been generated. Write: Force a stop interrupt.
        };
        namespace stoiValC{
            constexpr MPL::Value<stoiVal,stoiVal::notSet> notSet{};
            constexpr MPL::Value<stoiVal,stoiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,stoiVal> stoi{}; 
        ///Acknowledge Interrupt Flag. 
        enum class ackiVal {
            notSet=0x00000000,     ///<Read: An acknowledge interrupt has not occurred. Write: Clear the acknowledge interrupt (ACKI).
            set=0x00000001,     ///<Read: An acknowledge interrupt occurred. Write: Force an acknowledge interrupt.
        };
        namespace ackiValC{
            constexpr MPL::Value<ackiVal,ackiVal::notSet> notSet{};
            constexpr MPL::Value<ackiVal,ackiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ackiVal> acki{}; 
        ///Receive Done Interrupt Flag. 
        enum class rxiVal {
            notSet=0x00000000,     ///<Read: A receive done interrupt has not occurred. Write: Clear the receive done interrupt (RXI). 
            set=0x00000001,     ///<Read: Receive done interrupt occurred. Write: Force a receive done interrupt.
        };
        namespace rxiValC{
            constexpr MPL::Value<rxiVal,rxiVal::notSet> notSet{};
            constexpr MPL::Value<rxiVal,rxiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rxiVal> rxi{}; 
        ///Transmit Done Interrupt Flag. 
        enum class txiVal {
            notSet=0x00000000,     ///<Read: A transmit done interrupt has not occurred. Write: Clear the transmit done interrupt (TXI).
            set=0x00000001,     ///<Read: Transmit done interrupt detected. If the transmit is forced to abort by a NACK response, the acknowledge interrupt (ACKI) will also be set. Write: Force a transmit done interrupt. 
        };
        namespace txiValC{
            constexpr MPL::Value<txiVal,txiVal::notSet> notSet{};
            constexpr MPL::Value<txiVal,txiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,txiVal> txi{}; 
        ///Start Interrupt Flag. 
        enum class staiVal {
            notSet=0x00000000,     ///<Read: Start interrupt has not occurred. Write: Clear the start interrupt (STAI). 
            set=0x00000001,     ///<Read: Start or repeat start interrupt occurred.  In Slave mode, a start or repeat start is detected.  In Master mode, a start or repeat start has been generated.
        };
        namespace staiValC{
            constexpr MPL::Value<staiVal,staiVal::notSet> notSet{};
            constexpr MPL::Value<staiVal,staiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,staiVal> stai{}; 
        ///Arbitration Lost Interrupt Flag. 
        enum class arbliVal {
            notSet=0x00000000,     ///<Read: An arbitration lost interrupt has not occurred. Write: Clear the arbitration lost interrupt (ARBLI).
            set=0x00000001,     ///<Read: Arbitration lost interrupt detected. Write: Force an arbitration lost interrupt.
        };
        namespace arbliValC{
            constexpr MPL::Value<arbliVal,arbliVal::notSet> notSet{};
            constexpr MPL::Value<arbliVal,arbliVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,arbliVal> arbli{}; 
        ///I2C Timer Byte 0 Interrupt Flag. 
        enum class t0iVal {
            notSet=0x00000000,     ///<Read: A I2C Timer Byte 0 interrupt has not occurred. Write: Clear the I2C Timer Byte 0 interrupt (T0I).
            set=0x00000001,     ///<Read: I2C Timer Byte 0 overflow interrupt detected. Write: Force a I2C Timer Byte 0 interrupt.
        };
        namespace t0iValC{
            constexpr MPL::Value<t0iVal,t0iVal::notSet> notSet{};
            constexpr MPL::Value<t0iVal,t0iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,t0iVal> t0i{}; 
        ///I2C Timer Byte 1 Interrupt Flag. 
        enum class t1iVal {
            notSet=0x00000000,     ///<Read: No interrupt occurred. Write: Clear the I2C Timer Byte 1 interrupt (T1I).
            set=0x00000001,     ///<Read: I2C Timer Byte 1 overflow interrupt is detected. Write: Force a I2C Timer Byte 1 interrupt.
        };
        namespace t1iValC{
            constexpr MPL::Value<t1iVal,t1iVal::notSet> notSet{};
            constexpr MPL::Value<t1iVal,t1iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,t1iVal> t1i{}; 
        ///I2C Timer Byte 2 Interrupt Flag. 
        enum class t2iVal {
            notSet=0x00000000,     ///<Read: A I2C Timer Byte 2 interrupt has not occurred. Write: Clear the I2C Timer Byte 2 interrupt (T2I).
            set=0x00000001,     ///<Read: I2C Timer Byte 2 overflow interrupt detected. Write: Force a I2C Timer Byte 2 interrupt. 
        };
        namespace t2iValC{
            constexpr MPL::Value<t2iVal,t2iVal::notSet> notSet{};
            constexpr MPL::Value<t2iVal,t2iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,t2iVal> t2i{}; 
        ///I2C Timer Byte 3 Interrupt Flag. 
        enum class t3iVal {
            notSet=0x00000000,     ///<Read: A I2C Timer Byte 3 interrupt or SCL low timeout has not occurred. Write: Clear the I2C Timer Byte 3 interrupt (T3I).
            set=0x00000001,     ///<Read: I2C Timer Byte 3 overflow or SCL low timeout interrupt detected. Write: Force a I2C Timer Byte 3 interrupt. 
        };
        namespace t3iValC{
            constexpr MPL::Value<t3iVal,t3iVal::notSet> notSet{};
            constexpr MPL::Value<t3iVal,t3iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,t3iVal> t3i{}; 
        ///Receive Arm. 
        enum class rxarmVal {
            disabled=0x00000000,     ///<Disable data and address reception.
            enabled=0x00000001,     ///<Enable the module to perform a receive operation.
        };
        namespace rxarmValC{
            constexpr MPL::Value<rxarmVal,rxarmVal::disabled> disabled{};
            constexpr MPL::Value<rxarmVal,rxarmVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,rxarmVal> rxarm{}; 
        ///Transmit Arm. 
        enum class txarmVal {
            disabled=0x00000000,     ///<Disable data and address transmission.
            enabled=0x00000001,     ///<Enable the module to perform a transmit operation.
        };
        namespace txarmValC{
            constexpr MPL::Value<txarmVal,txarmVal::disabled> disabled{};
            constexpr MPL::Value<txarmVal,txarmVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,txarmVal> txarm{}; 
        ///Slave Address Type Flag. 
        enum class slvafVal {
            slaveAddress=0x00000000,     ///<Slave address detected.
            generalCall=0x00000001,     ///<General Call address detected.
        };
        namespace slvafValC{
            constexpr MPL::Value<slvafVal,slvafVal::slaveAddress> slaveAddress{};
            constexpr MPL::Value<slvafVal,slvafVal::generalCall> generalCall{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,slvafVal> slvaf{}; 
        ///Auto Transmit or Receive Enable. 
        enum class atxrxenVal {
            disabled=0x00000000,     ///<Do not automatically switch to transmit or receive mode after a Start.
            enabled=0x00000001,     ///<If automatic hardware acknowledge mode is enabled (HACKEN = 1), automatically switch to transmit or receive mode after a Start.
        };
        namespace atxrxenValC{
            constexpr MPL::Value<atxrxenVal,atxrxenVal::disabled> disabled{};
            constexpr MPL::Value<atxrxenVal,atxrxenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,atxrxenVal> atxrxen{}; 
        ///Filter Mode. 
        enum class fmdVal {
            disabled=0x00000000,     ///<Disable the input filter.
            enabled=0x00000001,     ///<Enable the input filter.
        };
        namespace fmdValC{
            constexpr MPL::Value<fmdVal,fmdVal::disabled> disabled{};
            constexpr MPL::Value<fmdVal,fmdVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,fmdVal> fmd{}; 
        ///I2C Debug Mode. 
        enum class dbgmdVal {
            run=0x00000000,     ///<The I2C module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the I2C module to halt.
        };
        namespace dbgmdValC{
            constexpr MPL::Value<dbgmdVal,dbgmdVal::run> run{};
            constexpr MPL::Value<dbgmdVal,dbgmdVal::halt> halt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,dbgmdVal> dbgmd{}; 
        ///Slave Mode Inhibit. 
        enum class sminhVal {
            inactive=0x00000000,     ///<Enable Slave modes.
            active=0x00000001,     ///<Inhibit Slave modes. The module will not respond to a Master on the bus.
        };
        namespace sminhValC{
            constexpr MPL::Value<sminhVal,sminhVal::inactive> inactive{};
            constexpr MPL::Value<sminhVal,sminhVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,sminhVal> sminh{}; 
        ///Auto Acknowledge Enable . 
        enum class hackenVal {
            disabled=0x00000000,     ///<Disable automatic hardware acknowledge.
            enabled=0x00000001,     ///<Enable automatic hardware acknowledge.
        };
        namespace hackenValC{
            constexpr MPL::Value<hackenVal,hackenVal::disabled> disabled{};
            constexpr MPL::Value<hackenVal,hackenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,hackenVal> hacken{}; 
        ///Last Byte Acknowledge Enable. 
        enum class lbackenVal {
            disabled=0x00000000,     ///<NACK after the last byte is received.
            enabled=0x00000001,     ///<ACK after the last byte is received.
        };
        namespace lbackenValC{
            constexpr MPL::Value<lbackenVal,lbackenVal::disabled> disabled{};
            constexpr MPL::Value<lbackenVal,lbackenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,lbackenVal> lbacken{}; 
        ///General Call Address Enable. 
        enum class gcenVal {
            disabled=0x00000000,     ///<Disable General Call address decoding.
            enabled=0x00000001,     ///<Enable General Call address decoding.
        };
        namespace gcenValC{
            constexpr MPL::Value<gcenVal,gcenVal::disabled> disabled{};
            constexpr MPL::Value<gcenVal,gcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,gcenVal> gcen{}; 
        ///Module Soft Reset. 
        enum class resetVal {
            inactive=0x00000000,     ///<I2C module is not in soft reset.
            active=0x00000001,     ///<I2C module is in soft reset and firmware cannot access all bits in the module.
        };
        namespace resetValC{
            constexpr MPL::Value<resetVal,resetVal::inactive> inactive{};
            constexpr MPL::Value<resetVal,resetVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,resetVal> reset{}; 
        ///I2C Enable. 
        enum class i2cenVal {
            disabled=0x00000000,     ///<Disable the I2C module.
            enabled=0x00000001,     ///<Enable the I2C module.
        };
        namespace i2cenValC{
            constexpr MPL::Value<i2cenVal,i2cenVal::disabled> disabled{};
            constexpr MPL::Value<i2cenVal,i2cenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,i2cenVal> i2cen{}; 
    }
    namespace Noneconfig{    ///<Module Configuration
        using Addr = Register::Address<0x40009010,0x400c00c0,0,unsigned>;
        ///I2C Clock Scaler. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> scaler{}; 
        ///Stop Interrupt Enable. 
        enum class stoienVal {
            disabled=0x00000000,     ///<Disable the stop interrupt.
            enabled=0x00000001,     ///<Enable the stop interrupt (STOI).
        };
        namespace stoienValC{
            constexpr MPL::Value<stoienVal,stoienVal::disabled> disabled{};
            constexpr MPL::Value<stoienVal,stoienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,stoienVal> stoien{}; 
        ///Acknowledge Interrupt Enable. 
        enum class ackienVal {
            disabled=0x00000000,     ///<Disable the acknowledge interrupt.
            enabled=0x00000001,     ///<Enable the acknowledge interrupt (ACKI).
        };
        namespace ackienValC{
            constexpr MPL::Value<ackienVal,ackienVal::disabled> disabled{};
            constexpr MPL::Value<ackienVal,ackienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ackienVal> ackien{}; 
        ///Receive Done Interrupt Enable. 
        enum class rxienVal {
            disabled=0x00000000,     ///<Disable the receive done interrupt.
            enabled=0x00000001,     ///<Enable the receive done interrupt (RXI).
        };
        namespace rxienValC{
            constexpr MPL::Value<rxienVal,rxienVal::disabled> disabled{};
            constexpr MPL::Value<rxienVal,rxienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rxienVal> rxien{}; 
        ///Transmit Done Interrupt Enable. 
        enum class txienVal {
            disabled=0x00000000,     ///<Disable the transmit done interrupt.
            enabled=0x00000001,     ///<Enable the transmit done interrupt (TXI).
        };
        namespace txienValC{
            constexpr MPL::Value<txienVal,txienVal::disabled> disabled{};
            constexpr MPL::Value<txienVal,txienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,txienVal> txien{}; 
        ///Start Interrupt Enable. 
        enum class staienVal {
            disabled=0x00000000,     ///<Disable the start interrupt.
            enabled=0x00000001,     ///<Enable the start interrupt (STAI).
        };
        namespace staienValC{
            constexpr MPL::Value<staienVal,staienVal::disabled> disabled{};
            constexpr MPL::Value<staienVal,staienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,staienVal> staien{}; 
        ///Arbitration Lost Interrupt Enable. 
        enum class arblienVal {
            disabled=0x00000000,     ///<Disable the arbitration lost interrupt.
            enabled=0x00000001,     ///<Enable the arbitration lost interrupt (ARBLI).
        };
        namespace arblienValC{
            constexpr MPL::Value<arblienVal,arblienVal::disabled> disabled{};
            constexpr MPL::Value<arblienVal,arblienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,arblienVal> arblien{}; 
        ///I2C Timer Byte 0 Interrupt Enable. 
        enum class t0ienVal {
            disabled=0x00000000,     ///<Disable the I2C Timer Byte 0 interrupt.
            enabled=0x00000001,     ///<Enable the I2C Timer Byte 0 interrupt (T0I).
        };
        namespace t0ienValC{
            constexpr MPL::Value<t0ienVal,t0ienVal::disabled> disabled{};
            constexpr MPL::Value<t0ienVal,t0ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,t0ienVal> t0ien{}; 
        ///I2C Timer Byte 1 Interrupt Enable. 
        enum class t1ienVal {
            disabled=0x00000000,     ///<Disable the I2C Timer Byte 1 interrupt.
            enabled=0x00000001,     ///<Enable the I2C Timer Byte 1 interrupt (T1I).
        };
        namespace t1ienValC{
            constexpr MPL::Value<t1ienVal,t1ienVal::disabled> disabled{};
            constexpr MPL::Value<t1ienVal,t1ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,t1ienVal> t1ien{}; 
        ///I2C Timer Byte 2 Interrupt Enable. 
        enum class t2ienVal {
            disabled=0x00000000,     ///<Disable the I2C Timer Byte 2 interrupt.
            enabled=0x00000001,     ///<Enable the I2C Timer Byte 2 interrupt (T2I).
        };
        namespace t2ienValC{
            constexpr MPL::Value<t2ienVal,t2ienVal::disabled> disabled{};
            constexpr MPL::Value<t2ienVal,t2ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,t2ienVal> t2ien{}; 
        ///I2C Timer Byte 3 Interrupt Enable. 
        enum class t3ienVal {
            disabled=0x00000000,     ///<Disable the I2C Timer Byte 3 and SCL low timeout interrupt.
            enabled=0x00000001,     ///<Enable the I2C Timer Byte 3 and SCL low timeout interrupt (T3I).
        };
        namespace t3ienValC{
            constexpr MPL::Value<t3ienVal,t3ienVal::disabled> disabled{};
            constexpr MPL::Value<t3ienVal,t3ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,t3ienVal> t3ien{}; 
        ///Transfer Byte Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> bc{}; 
        ///Transfer Byte Pointer. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> bp{}; 
        ///I2C Timer Byte 0 Run. 
        enum class t0runVal {
            stop=0x00000000,     ///<Stop Timer Byte 0.
            start=0x00000001,     ///<Start Timer Byte 0 running.
        };
        namespace t0runValC{
            constexpr MPL::Value<t0runVal,t0runVal::stop> stop{};
            constexpr MPL::Value<t0runVal,t0runVal::start> start{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,t0runVal> t0run{}; 
        ///I2C Timer Byte 1 Run. 
        enum class t1runVal {
            stop=0x00000000,     ///<Stop Timer Byte 1.
            start=0x00000001,     ///<Start Timer Byte 1 running.
        };
        namespace t1runValC{
            constexpr MPL::Value<t1runVal,t1runVal::stop> stop{};
            constexpr MPL::Value<t1runVal,t1runVal::start> start{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,t1runVal> t1run{}; 
        ///I2C Timer Byte 2 Run. 
        enum class t2runVal {
            stop=0x00000000,     ///<Stop Timer Byte 2.
            start=0x00000001,     ///<Start Timer Byte 2 running.
        };
        namespace t2runValC{
            constexpr MPL::Value<t2runVal,t2runVal::stop> stop{};
            constexpr MPL::Value<t2runVal,t2runVal::start> start{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,t2runVal> t2run{}; 
        ///I2C Timer Byte 3 Run. 
        enum class t3runVal {
            stop=0x00000000,     ///<Stop Timer Byte 3.
            start=0x00000001,     ///<Start Timer Byte 3 running.
        };
        namespace t3runValC{
            constexpr MPL::Value<t3runVal,t3runVal::stop> stop{};
            constexpr MPL::Value<t3runVal,t3runVal::start> start{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,t3runVal> t3run{}; 
        ///I2C Timer Mode. 
        enum class tmdVal {
            mode0=0x00000000,     ///<I2C Timer Mode 0: Operate the I2C timer as a single 32-bit timer : Timer Bytes [3 : 2 : 1 : 0].
            mode1=0x00000001,     ///<I2C Timer Mode 1: Operate the I2C timer as two 16-bit timers : Timer Bytes [3 : 2] and Timer Bytes [1 : 0].
            mode2=0x00000002,     ///<I2C Timer Mode 2: Operate the I2C timer as four independent 8-bit timers :  Timer Byte 3, Timer Byte 2, Timer Byte 1, and Timer Byte 0.
            mode3=0x00000003,     ///<I2C Timer Mode 3: Operate the I2C timer as one 16-bit and two 8-bit timers : Timer Bytes [3 : 2], Timer Byte 1, and Timer Byte 0.
        };
        namespace tmdValC{
            constexpr MPL::Value<tmdVal,tmdVal::mode0> mode0{};
            constexpr MPL::Value<tmdVal,tmdVal::mode1> mode1{};
            constexpr MPL::Value<tmdVal,tmdVal::mode2> mode2{};
            constexpr MPL::Value<tmdVal,tmdVal::mode3> mode3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,tmdVal> tmd{}; 
        ///I2C Timer Enable. 
        enum class timerenVal {
            disabled=0x00000000,     ///<Disable I2C Timer.
            enabled=0x00000001,     ///<Enable I2C Timer for general purpose use. This setting should not be used when the I2C module is enabled (I2CEN = 1).
        };
        namespace timerenValC{
            constexpr MPL::Value<timerenVal,timerenVal::disabled> disabled{};
            constexpr MPL::Value<timerenVal,timerenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,timerenVal> timeren{}; 
    }
    namespace Nonesaddress{    ///<Slave Address
        using Addr = Register::Address<0x40009020,0xffffff01,0,unsigned>;
        ///Slave Address. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Nonesmask{    ///<Slave Address Mask
        using Addr = Register::Address<0x40009030,0xffffff01,0,unsigned>;
        ///Slave Address Mask. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonedata{    ///<Data Buffer Access
        using Addr = Register::Address<0x40009040,0x00000000,0,unsigned>;
        ///Data. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonetimer{    ///<Timer Data
        using Addr = Register::Address<0x40009050,0x00000000,0,unsigned>;
        ///Timer Byte 0. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> t0{}; 
        ///Timer Byte 1. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> t1{}; 
        ///Timer Byte 2. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> t2{}; 
        ///Timer Byte 3. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> t3{}; 
    }
    namespace Nonetimerrl{    ///<Timer Reload Values
        using Addr = Register::Address<0x40009060,0x00000000,0,unsigned>;
        ///Timer Byte 0 Reload Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> t0rl{}; 
        ///Timer Byte 1 Reload Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> t1rl{}; 
        ///Timer Byte 2 Reload Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> t2rl{}; 
        ///Timer Byte 3 Reload Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> t3rl{}; 
    }
    namespace Nonesconfig{    ///<SCL Signal Configuration
        using Addr = Register::Address<0x40009070,0xfff00000,0,unsigned>;
        ///Data Setup Time Extension. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Data Hold Time Extension. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hold{}; 
        ///SCL Low Time Extension. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> scll{}; 
        ///SCL Low Timer Bits [3:0]. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> sclltimer{}; 
    }
    namespace Nonei2cdma{    ///<DMA Configuration
        using Addr = Register::Address<0x40009080,0x7fffff00,0,unsigned>;
        ///DMA Transfer Length. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dmalen{}; 
        ///DMA Mode Enable. 
        enum class dmaenVal {
            disabled=0x00000000,     ///<Disable I2C DMA data requests.
            enabled=0x00000001,     ///<Enable I2C DMA data requests.
        };
        namespace dmaenValC{
            constexpr MPL::Value<dmaenVal,dmaenVal::disabled> disabled{};
            constexpr MPL::Value<dmaenVal,dmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,dmaenVal> dmaen{}; 
    }
}
