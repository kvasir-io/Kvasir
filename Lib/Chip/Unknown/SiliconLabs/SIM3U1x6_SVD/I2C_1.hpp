#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace I2c1Control{    ///<Module Control
        using Addr = Register::Address<0x4000a000,0x10000000,0x00000000,unsigned>;
        ///Busy Flag. 
        enum class BusyfVal {
            notSet=0x00000000,     ///<A transaction is not currently taking place.
            set=0x00000001,     ///<A transaction is currently taking place.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusyfVal> busyf{}; 
        namespace BusyfValC{
            constexpr Register::FieldValue<decltype(busyf)::Type,BusyfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(busyf)::Type,BusyfVal::set> set{};
        }
        ///Acknowledge. 
        enum class AckVal {
            notSet=0x00000000,     ///<Read: ACK has not been received. Write: Do not send an ACK.
            set=0x00000001,     ///<Read: ACK received. Write: Send an ACK.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AckVal> ack{}; 
        namespace AckValC{
            constexpr Register::FieldValue<decltype(ack)::Type,AckVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ack)::Type,AckVal::set> set{};
        }
        ///Arbitration Lost Flag. 
        enum class ArblfVal {
            notSet=0x00000000,     ///<Arbitration lost error has not occurred.
            set=0x00000001,     ///<Arbitration lost error occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ArblfVal> arblf{}; 
        namespace ArblfValC{
            constexpr Register::FieldValue<decltype(arblf)::Type,ArblfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(arblf)::Type,ArblfVal::set> set{};
        }
        ///Acknowledge Request Flag. 
        enum class AckrqfVal {
            notSet=0x00000000,     ///<ACK has not been requested.
            set=0x00000001,     ///<ACK requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,AckrqfVal> ackrqf{}; 
        namespace AckrqfValC{
            constexpr Register::FieldValue<decltype(ackrqf)::Type,AckrqfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ackrqf)::Type,AckrqfVal::set> set{};
        }
        ///Stop. 
        enum class StoVal {
            notSet=0x00000000,     ///<Read: A stop is not pending and a stop / repeat start has not been detected. Write: Clear the STO bit.
            set=0x00000001,     ///<Read: Stop or stop / repeat start detected. This bit must be cleared by firmware. Write: Generate a stop.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,StoVal> sto{}; 
        namespace StoValC{
            constexpr Register::FieldValue<decltype(sto)::Type,StoVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(sto)::Type,StoVal::set> set{};
        }
        ///Start. 
        enum class StaVal {
            notSet=0x00000000,     ///<Read: A start is not pending and a repeat start has not been detected. Write: Clear the STA bit. 
            set=0x00000001,     ///<Read: Start or repeat start detected. This bit must be cleared by firmware. Write: Generate a start or repeat start. 
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,StaVal> sta{}; 
        namespace StaValC{
            constexpr Register::FieldValue<decltype(sta)::Type,StaVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(sta)::Type,StaVal::set> set{};
        }
        ///Transmit Mode Flag. 
        enum class TxmdfVal {
            receive=0x00000000,     ///<Module is in receiver mode.
            transmit=0x00000001,     ///<Module is in transmitter mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TxmdfVal> txmdf{}; 
        namespace TxmdfValC{
            constexpr Register::FieldValue<decltype(txmdf)::Type,TxmdfVal::receive> receive{};
            constexpr Register::FieldValue<decltype(txmdf)::Type,TxmdfVal::transmit> transmit{};
        }
        ///Master/Slave Mode Flag. 
        enum class MsmdfVal {
            slave=0x00000000,     ///<Module is operating in Slave mode.
            master=0x00000001,     ///<Module is operating in Master mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,MsmdfVal> msmdf{}; 
        namespace MsmdfValC{
            constexpr Register::FieldValue<decltype(msmdf)::Type,MsmdfVal::slave> slave{};
            constexpr Register::FieldValue<decltype(msmdf)::Type,MsmdfVal::master> master{};
        }
        ///Stop Interrupt Flag. 
        enum class StoiVal {
            notSet=0x00000000,     ///<Read: A stop interrupt has not occurred. Write: Clear the stop interrupt flag (STOI).
            set=0x00000001,     ///<Read: Stop interrupt detected. In Slave mode, a stop has been detected on the bus.  In Master mode, a stop has been generated. Write: Force a stop interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,StoiVal> stoi{}; 
        namespace StoiValC{
            constexpr Register::FieldValue<decltype(stoi)::Type,StoiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(stoi)::Type,StoiVal::set> set{};
        }
        ///Acknowledge Interrupt Flag. 
        enum class AckiVal {
            notSet=0x00000000,     ///<Read: An acknowledge interrupt has not occurred. Write: Clear the acknowledge interrupt (ACKI).
            set=0x00000001,     ///<Read: An acknowledge interrupt occurred. Write: Force an acknowledge interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AckiVal> acki{}; 
        namespace AckiValC{
            constexpr Register::FieldValue<decltype(acki)::Type,AckiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(acki)::Type,AckiVal::set> set{};
        }
        ///Receive Done Interrupt Flag. 
        enum class RxiVal {
            notSet=0x00000000,     ///<Read: A receive done interrupt has not occurred. Write: Clear the receive done interrupt (RXI). 
            set=0x00000001,     ///<Read: Receive done interrupt occurred. Write: Force a receive done interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RxiVal> rxi{}; 
        namespace RxiValC{
            constexpr Register::FieldValue<decltype(rxi)::Type,RxiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rxi)::Type,RxiVal::set> set{};
        }
        ///Transmit Done Interrupt Flag. 
        enum class TxiVal {
            notSet=0x00000000,     ///<Read: A transmit done interrupt has not occurred. Write: Clear the transmit done interrupt (TXI).
            set=0x00000001,     ///<Read: Transmit done interrupt detected. If the transmit is forced to abort by a NACK response, the acknowledge interrupt (ACKI) will also be set. Write: Force a transmit done interrupt. 
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxiVal> txi{}; 
        namespace TxiValC{
            constexpr Register::FieldValue<decltype(txi)::Type,TxiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(txi)::Type,TxiVal::set> set{};
        }
        ///Start Interrupt Flag. 
        enum class StaiVal {
            notSet=0x00000000,     ///<Read: Start interrupt has not occurred. Write: Clear the start interrupt (STAI). 
            set=0x00000001,     ///<Read: Start or repeat start interrupt occurred.  In Slave mode, a start or repeat start is detected.  In Master mode, a start or repeat start has been generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,StaiVal> stai{}; 
        namespace StaiValC{
            constexpr Register::FieldValue<decltype(stai)::Type,StaiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(stai)::Type,StaiVal::set> set{};
        }
        ///Arbitration Lost Interrupt Flag. 
        enum class ArbliVal {
            notSet=0x00000000,     ///<Read: An arbitration lost interrupt has not occurred. Write: Clear the arbitration lost interrupt (ARBLI).
            set=0x00000001,     ///<Read: Arbitration lost interrupt detected. Write: Force an arbitration lost interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ArbliVal> arbli{}; 
        namespace ArbliValC{
            constexpr Register::FieldValue<decltype(arbli)::Type,ArbliVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(arbli)::Type,ArbliVal::set> set{};
        }
        ///I2C Timer Byte 0 Interrupt Flag. 
        enum class T0iVal {
            notSet=0x00000000,     ///<Read: A I2C Timer Byte 0 interrupt has not occurred. Write: Clear the I2C Timer Byte 0 interrupt (T0I).
            set=0x00000001,     ///<Read: I2C Timer Byte 0 overflow interrupt detected. Write: Force a I2C Timer Byte 0 interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,T0iVal> t0i{}; 
        namespace T0iValC{
            constexpr Register::FieldValue<decltype(t0i)::Type,T0iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(t0i)::Type,T0iVal::set> set{};
        }
        ///I2C Timer Byte 1 Interrupt Flag. 
        enum class T1iVal {
            notSet=0x00000000,     ///<Read: No interrupt occurred. Write: Clear the I2C Timer Byte 1 interrupt (T1I).
            set=0x00000001,     ///<Read: I2C Timer Byte 1 overflow interrupt is detected. Write: Force a I2C Timer Byte 1 interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,T1iVal> t1i{}; 
        namespace T1iValC{
            constexpr Register::FieldValue<decltype(t1i)::Type,T1iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(t1i)::Type,T1iVal::set> set{};
        }
        ///I2C Timer Byte 2 Interrupt Flag. 
        enum class T2iVal {
            notSet=0x00000000,     ///<Read: A I2C Timer Byte 2 interrupt has not occurred. Write: Clear the I2C Timer Byte 2 interrupt (T2I).
            set=0x00000001,     ///<Read: I2C Timer Byte 2 overflow interrupt detected. Write: Force a I2C Timer Byte 2 interrupt. 
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,T2iVal> t2i{}; 
        namespace T2iValC{
            constexpr Register::FieldValue<decltype(t2i)::Type,T2iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(t2i)::Type,T2iVal::set> set{};
        }
        ///I2C Timer Byte 3 Interrupt Flag. 
        enum class T3iVal {
            notSet=0x00000000,     ///<Read: A I2C Timer Byte 3 interrupt or SCL low timeout has not occurred. Write: Clear the I2C Timer Byte 3 interrupt (T3I).
            set=0x00000001,     ///<Read: I2C Timer Byte 3 overflow or SCL low timeout interrupt detected. Write: Force a I2C Timer Byte 3 interrupt. 
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,T3iVal> t3i{}; 
        namespace T3iValC{
            constexpr Register::FieldValue<decltype(t3i)::Type,T3iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(t3i)::Type,T3iVal::set> set{};
        }
        ///Receive Arm. 
        enum class RxarmVal {
            disabled=0x00000000,     ///<Disable data and address reception.
            enabled=0x00000001,     ///<Enable the module to perform a receive operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,RxarmVal> rxarm{}; 
        namespace RxarmValC{
            constexpr Register::FieldValue<decltype(rxarm)::Type,RxarmVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxarm)::Type,RxarmVal::enabled> enabled{};
        }
        ///Transmit Arm. 
        enum class TxarmVal {
            disabled=0x00000000,     ///<Disable data and address transmission.
            enabled=0x00000001,     ///<Enable the module to perform a transmit operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,TxarmVal> txarm{}; 
        namespace TxarmValC{
            constexpr Register::FieldValue<decltype(txarm)::Type,TxarmVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txarm)::Type,TxarmVal::enabled> enabled{};
        }
        ///Slave Address Type Flag. 
        enum class SlvafVal {
            slaveAddress=0x00000000,     ///<Slave address detected.
            generalCall=0x00000001,     ///<General Call address detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SlvafVal> slvaf{}; 
        namespace SlvafValC{
            constexpr Register::FieldValue<decltype(slvaf)::Type,SlvafVal::slaveAddress> slaveAddress{};
            constexpr Register::FieldValue<decltype(slvaf)::Type,SlvafVal::generalCall> generalCall{};
        }
        ///Auto Transmit or Receive Enable. 
        enum class AtxrxenVal {
            disabled=0x00000000,     ///<Do not automatically switch to transmit or receive mode after a Start.
            enabled=0x00000001,     ///<If automatic hardware acknowledge mode is enabled (HACKEN = 1), automatically switch to transmit or receive mode after a Start.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,AtxrxenVal> atxrxen{}; 
        namespace AtxrxenValC{
            constexpr Register::FieldValue<decltype(atxrxen)::Type,AtxrxenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(atxrxen)::Type,AtxrxenVal::enabled> enabled{};
        }
        ///Filter Mode. 
        enum class FmdVal {
            disabled=0x00000000,     ///<Disable the input filter.
            enabled=0x00000001,     ///<Enable the input filter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,FmdVal> fmd{}; 
        namespace FmdValC{
            constexpr Register::FieldValue<decltype(fmd)::Type,FmdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fmd)::Type,FmdVal::enabled> enabled{};
        }
        ///I2C Debug Mode. 
        enum class DbgmdVal {
            run=0x00000000,     ///<The I2C module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the I2C module to halt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,DbgmdVal> dbgmd{}; 
        namespace DbgmdValC{
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::run> run{};
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::halt> halt{};
        }
        ///Slave Mode Inhibit. 
        enum class SminhVal {
            inactive=0x00000000,     ///<Enable Slave modes.
            active=0x00000001,     ///<Inhibit Slave modes. The module will not respond to a Master on the bus.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,SminhVal> sminh{}; 
        namespace SminhValC{
            constexpr Register::FieldValue<decltype(sminh)::Type,SminhVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(sminh)::Type,SminhVal::active> active{};
        }
        ///Auto Acknowledge Enable . 
        enum class HackenVal {
            disabled=0x00000000,     ///<Disable automatic hardware acknowledge.
            enabled=0x00000001,     ///<Enable automatic hardware acknowledge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,HackenVal> hacken{}; 
        namespace HackenValC{
            constexpr Register::FieldValue<decltype(hacken)::Type,HackenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hacken)::Type,HackenVal::enabled> enabled{};
        }
        ///Slave Address Mode. 
        enum class SlvamdVal {
            v7bit=0x00000000,     ///<Slave addresses are 7 bits.
            v10bit=0x00000001,     ///<Slave addresses are 10 bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,SlvamdVal> slvamd{}; 
        namespace SlvamdValC{
            constexpr Register::FieldValue<decltype(slvamd)::Type,SlvamdVal::v7bit> v7bit{};
            constexpr Register::FieldValue<decltype(slvamd)::Type,SlvamdVal::v10bit> v10bit{};
        }
        ///Last Byte Acknowledge Enable. 
        enum class LbackenVal {
            disabled=0x00000000,     ///<NACK after the last byte is received.
            enabled=0x00000001,     ///<ACK after the last byte is received.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,LbackenVal> lbacken{}; 
        namespace LbackenValC{
            constexpr Register::FieldValue<decltype(lbacken)::Type,LbackenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lbacken)::Type,LbackenVal::enabled> enabled{};
        }
        ///General Call Address Enable. 
        enum class GcenVal {
            disabled=0x00000000,     ///<Disable General Call address decoding.
            enabled=0x00000001,     ///<Enable General Call address decoding.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,GcenVal> gcen{}; 
        namespace GcenValC{
            constexpr Register::FieldValue<decltype(gcen)::Type,GcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(gcen)::Type,GcenVal::enabled> enabled{};
        }
        ///Module Soft Reset. 
        enum class ResetVal {
            inactive=0x00000000,     ///<I2C module is not in soft reset.
            active=0x00000001,     ///<I2C module is in soft reset and firmware cannot access all bits in the module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ResetVal> reset{}; 
        namespace ResetValC{
            constexpr Register::FieldValue<decltype(reset)::Type,ResetVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(reset)::Type,ResetVal::active> active{};
        }
        ///I2C Enable. 
        enum class I2cenVal {
            disabled=0x00000000,     ///<Disable the I2C module.
            enabled=0x00000001,     ///<Enable the I2C module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,I2cenVal> i2cen{}; 
        namespace I2cenValC{
            constexpr Register::FieldValue<decltype(i2cen)::Type,I2cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(i2cen)::Type,I2cenVal::enabled> enabled{};
        }
    }
    namespace I2c1Config{    ///<Module Configuration
        using Addr = Register::Address<0x4000a010,0x400c00c0,0x00000000,unsigned>;
        ///I2C Clock Scaler. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> scaler{}; 
        ///Stop Interrupt Enable. 
        enum class StoienVal {
            disabled=0x00000000,     ///<Disable the stop interrupt.
            enabled=0x00000001,     ///<Enable the stop interrupt (STOI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,StoienVal> stoien{}; 
        namespace StoienValC{
            constexpr Register::FieldValue<decltype(stoien)::Type,StoienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stoien)::Type,StoienVal::enabled> enabled{};
        }
        ///Acknowledge Interrupt Enable. 
        enum class AckienVal {
            disabled=0x00000000,     ///<Disable the acknowledge interrupt.
            enabled=0x00000001,     ///<Enable the acknowledge interrupt (ACKI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AckienVal> ackien{}; 
        namespace AckienValC{
            constexpr Register::FieldValue<decltype(ackien)::Type,AckienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ackien)::Type,AckienVal::enabled> enabled{};
        }
        ///Receive Done Interrupt Enable. 
        enum class RxienVal {
            disabled=0x00000000,     ///<Disable the receive done interrupt.
            enabled=0x00000001,     ///<Enable the receive done interrupt (RXI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RxienVal> rxien{}; 
        namespace RxienValC{
            constexpr Register::FieldValue<decltype(rxien)::Type,RxienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxien)::Type,RxienVal::enabled> enabled{};
        }
        ///Transmit Done Interrupt Enable. 
        enum class TxienVal {
            disabled=0x00000000,     ///<Disable the transmit done interrupt.
            enabled=0x00000001,     ///<Enable the transmit done interrupt (TXI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxienVal> txien{}; 
        namespace TxienValC{
            constexpr Register::FieldValue<decltype(txien)::Type,TxienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txien)::Type,TxienVal::enabled> enabled{};
        }
        ///Start Interrupt Enable. 
        enum class StaienVal {
            disabled=0x00000000,     ///<Disable the start interrupt.
            enabled=0x00000001,     ///<Enable the start interrupt (STAI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,StaienVal> staien{}; 
        namespace StaienValC{
            constexpr Register::FieldValue<decltype(staien)::Type,StaienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(staien)::Type,StaienVal::enabled> enabled{};
        }
        ///Arbitration Lost Interrupt Enable. 
        enum class ArblienVal {
            disabled=0x00000000,     ///<Disable the arbitration lost interrupt.
            enabled=0x00000001,     ///<Enable the arbitration lost interrupt (ARBLI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ArblienVal> arblien{}; 
        namespace ArblienValC{
            constexpr Register::FieldValue<decltype(arblien)::Type,ArblienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(arblien)::Type,ArblienVal::enabled> enabled{};
        }
        ///I2C Timer Byte 0 Interrupt Enable. 
        enum class T0ienVal {
            disabled=0x00000000,     ///<Disable the I2C Timer Byte 0 interrupt.
            enabled=0x00000001,     ///<Enable the I2C Timer Byte 0 interrupt (T0I).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,T0ienVal> t0ien{}; 
        namespace T0ienValC{
            constexpr Register::FieldValue<decltype(t0ien)::Type,T0ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(t0ien)::Type,T0ienVal::enabled> enabled{};
        }
        ///I2C Timer Byte 1 Interrupt Enable. 
        enum class T1ienVal {
            disabled=0x00000000,     ///<Disable the I2C Timer Byte 1 interrupt.
            enabled=0x00000001,     ///<Enable the I2C Timer Byte 1 interrupt (T1I).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,T1ienVal> t1ien{}; 
        namespace T1ienValC{
            constexpr Register::FieldValue<decltype(t1ien)::Type,T1ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(t1ien)::Type,T1ienVal::enabled> enabled{};
        }
        ///I2C Timer Byte 2 Interrupt Enable. 
        enum class T2ienVal {
            disabled=0x00000000,     ///<Disable the I2C Timer Byte 2 interrupt.
            enabled=0x00000001,     ///<Enable the I2C Timer Byte 2 interrupt (T2I).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,T2ienVal> t2ien{}; 
        namespace T2ienValC{
            constexpr Register::FieldValue<decltype(t2ien)::Type,T2ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(t2ien)::Type,T2ienVal::enabled> enabled{};
        }
        ///I2C Timer Byte 3 Interrupt Enable. 
        enum class T3ienVal {
            disabled=0x00000000,     ///<Disable the I2C Timer Byte 3 and SCL low timeout interrupt.
            enabled=0x00000001,     ///<Enable the I2C Timer Byte 3 and SCL low timeout interrupt (T3I).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,T3ienVal> t3ien{}; 
        namespace T3ienValC{
            constexpr Register::FieldValue<decltype(t3ien)::Type,T3ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(t3ien)::Type,T3ienVal::enabled> enabled{};
        }
        ///Transfer Byte Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> bc{}; 
        ///Transfer Byte Pointer. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bp{}; 
        ///I2C Timer Byte 0 Run. 
        enum class T0runVal {
            stop=0x00000000,     ///<Stop Timer Byte 0.
            start=0x00000001,     ///<Start Timer Byte 0 running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,T0runVal> t0run{}; 
        namespace T0runValC{
            constexpr Register::FieldValue<decltype(t0run)::Type,T0runVal::stop> stop{};
            constexpr Register::FieldValue<decltype(t0run)::Type,T0runVal::start> start{};
        }
        ///I2C Timer Byte 1 Run. 
        enum class T1runVal {
            stop=0x00000000,     ///<Stop Timer Byte 1.
            start=0x00000001,     ///<Start Timer Byte 1 running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,T1runVal> t1run{}; 
        namespace T1runValC{
            constexpr Register::FieldValue<decltype(t1run)::Type,T1runVal::stop> stop{};
            constexpr Register::FieldValue<decltype(t1run)::Type,T1runVal::start> start{};
        }
        ///I2C Timer Byte 2 Run. 
        enum class T2runVal {
            stop=0x00000000,     ///<Stop Timer Byte 2.
            start=0x00000001,     ///<Start Timer Byte 2 running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,T2runVal> t2run{}; 
        namespace T2runValC{
            constexpr Register::FieldValue<decltype(t2run)::Type,T2runVal::stop> stop{};
            constexpr Register::FieldValue<decltype(t2run)::Type,T2runVal::start> start{};
        }
        ///I2C Timer Byte 3 Run. 
        enum class T3runVal {
            stop=0x00000000,     ///<Stop Timer Byte 3.
            start=0x00000001,     ///<Start Timer Byte 3 running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,T3runVal> t3run{}; 
        namespace T3runValC{
            constexpr Register::FieldValue<decltype(t3run)::Type,T3runVal::stop> stop{};
            constexpr Register::FieldValue<decltype(t3run)::Type,T3runVal::start> start{};
        }
        ///I2C Timer Mode. 
        enum class TmdVal {
            mode0=0x00000000,     ///<I2C Timer Mode 0: Operate the I2C timer as a single 32-bit timer : Timer Bytes [3 : 2 : 1 : 0].
            mode1=0x00000001,     ///<I2C Timer Mode 1: Operate the I2C timer as two 16-bit timers : Timer Bytes [3 : 2] and Timer Bytes [1 : 0].
            mode2=0x00000002,     ///<I2C Timer Mode 2: Operate the I2C timer as four independent 8-bit timers :  Timer Byte 3, Timer Byte 2, Timer Byte 1, and Timer Byte 0.
            mode3=0x00000003,     ///<I2C Timer Mode 3: Operate the I2C timer as one 16-bit and two 8-bit timers : Timer Bytes [3 : 2], Timer Byte 1, and Timer Byte 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,TmdVal> tmd{}; 
        namespace TmdValC{
            constexpr Register::FieldValue<decltype(tmd)::Type,TmdVal::mode0> mode0{};
            constexpr Register::FieldValue<decltype(tmd)::Type,TmdVal::mode1> mode1{};
            constexpr Register::FieldValue<decltype(tmd)::Type,TmdVal::mode2> mode2{};
            constexpr Register::FieldValue<decltype(tmd)::Type,TmdVal::mode3> mode3{};
        }
        ///I2C Timer Enable. 
        enum class TimerenVal {
            disabled=0x00000000,     ///<Disable I2C Timer.
            enabled=0x00000001,     ///<Enable I2C Timer for general purpose use. This setting should not be used when the I2C module is enabled (I2CEN = 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,TimerenVal> timeren{}; 
        namespace TimerenValC{
            constexpr Register::FieldValue<decltype(timeren)::Type,TimerenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(timeren)::Type,TimerenVal::enabled> enabled{};
        }
    }
    namespace I2c1Saddress{    ///<Slave Address
        using Addr = Register::Address<0x4000a020,0xfffff801,0x00000000,unsigned>;
        ///Slave Address. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace I2c1Smask{    ///<Slave Address Mask
        using Addr = Register::Address<0x4000a030,0xfffff801,0x00000000,unsigned>;
        ///Slave Address Mask. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace I2c1Data{    ///<Data Buffer Access
        using Addr = Register::Address<0x4000a040,0x00000000,0x00000000,unsigned>;
        ///Data. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace I2c1Timer{    ///<Timer Data
        using Addr = Register::Address<0x4000a050,0x00000000,0x00000000,unsigned>;
        ///Timer Byte 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> t0{}; 
        ///Timer Byte 1. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> t1{}; 
        ///Timer Byte 2. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> t2{}; 
        ///Timer Byte 3. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> t3{}; 
    }
    namespace I2c1Timerrl{    ///<Timer Reload Values
        using Addr = Register::Address<0x4000a060,0x00000000,0x00000000,unsigned>;
        ///Timer Byte 0 Reload Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> t0rl{}; 
        ///Timer Byte 1 Reload Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> t1rl{}; 
        ///Timer Byte 2 Reload Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> t2rl{}; 
        ///Timer Byte 3 Reload Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> t3rl{}; 
    }
    namespace I2c1Sconfig{    ///<SCL Signal Configuration
        using Addr = Register::Address<0x4000a070,0xfff00000,0x00000000,unsigned>;
        ///Data Setup Time Extension. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Data Hold Time Extension. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hold{}; 
        ///SCL Low Time Extension. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> scll{}; 
        ///SCL Low Timer Bits [3:0]. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclltimer{}; 
    }
}
