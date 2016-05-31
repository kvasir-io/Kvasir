#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Inter-Integrated Circuit
    namespace I2c1A1{    ///<I2C Address Register 1
        using Addr = Register::Address<0x40067000,0xffffff01,0x00000000,unsigned char>;
        ///Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> ad{}; 
    }
    namespace I2c1F{    ///<I2C Frequency Divider register
        using Addr = Register::Address<0x40067001,0xffffff00,0x00000000,unsigned char>;
        ///Clock rate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> icr{}; 
        ///no description available
        enum class MultVal {
            v00=0x00000000,     ///<mul = 1
            v01=0x00000001,     ///<mul = 2
            v10=0x00000002,     ///<mul = 4
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,MultVal> mult{}; 
        namespace MultValC{
            constexpr Register::FieldValue<decltype(mult)::Type,MultVal::v00> v00{};
            constexpr Register::FieldValue<decltype(mult)::Type,MultVal::v01> v01{};
            constexpr Register::FieldValue<decltype(mult)::Type,MultVal::v10> v10{};
        }
    }
    namespace I2c1C1{    ///<I2C Control Register 1
        using Addr = Register::Address<0x40067002,0xffffff00,0x00000000,unsigned char>;
        ///DMA enable
        enum class DmaenVal {
            v0=0x00000000,     ///<All DMA signalling disabled.
            v1=0x00000001,     ///<DMA transfer is enabled and the following conditions trigger the DMA request: While FACK = 0, a data byte is received, either address or data is transmitted. (ACK/NACK automatic) While FACK = 0, the first byte received matches the A1 register or is general call address. If any address matching occurs, IAAS and TCF are set. If the direction of transfer is known from master to slave, then it is not required to check the SRW. With this assumption, DMA can also be used in this case. In other cases, if the master reads data from the slave, then it is required to rewrite the C1 register operation. With this assumption, DMA cannot be used. When FACK = 1, an address or a data byte is transmitted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DmaenVal> dmaen{}; 
        namespace DmaenValC{
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::v1> v1{};
        }
        ///Wakeup enable
        enum class WuenVal {
            v0=0x00000000,     ///<Normal operation. No interrupt generated when address matching in low power mode.
            v1=0x00000001,     ///<Enables the wakeup function in low power mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WuenVal> wuen{}; 
        namespace WuenValC{
            constexpr Register::FieldValue<decltype(wuen)::Type,WuenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wuen)::Type,WuenVal::v1> v1{};
        }
        ///Repeat START
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsta{}; 
        ///Transmit acknowledge enable
        enum class TxakVal {
            v0=0x00000000,     ///<An acknowledge signal is sent to the bus on the following (if FACK is cleared) or current (if FACK is set) receiving byte.
            v1=0x00000001,     ///<No acknowledge signal is sent to the bus on the following (if FACK is cleared) or current (if FACK is set) receiving data byte.SCL is held low until TXAK is written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TxakVal> txak{}; 
        namespace TxakValC{
            constexpr Register::FieldValue<decltype(txak)::Type,TxakVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txak)::Type,TxakVal::v1> v1{};
        }
        ///Transmit mode select
        enum class TxVal {
            v0=0x00000000,     ///<Receive
            v1=0x00000001,     ///<Transmit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TxVal> tx{}; 
        namespace TxValC{
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::v1> v1{};
        }
        ///Master mode select
        enum class MstVal {
            v0=0x00000000,     ///<Slave mode
            v1=0x00000001,     ///<Master mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MstVal> mst{}; 
        namespace MstValC{
            constexpr Register::FieldValue<decltype(mst)::Type,MstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mst)::Type,MstVal::v1> v1{};
        }
        ///I2C interrupt enable
        enum class IicieVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,IicieVal> iicie{}; 
        namespace IicieValC{
            constexpr Register::FieldValue<decltype(iicie)::Type,IicieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iicie)::Type,IicieVal::v1> v1{};
        }
        ///I2C enable
        enum class IicenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IicenVal> iicen{}; 
        namespace IicenValC{
            constexpr Register::FieldValue<decltype(iicen)::Type,IicenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iicen)::Type,IicenVal::v1> v1{};
        }
    }
    namespace I2c1S{    ///<I2C Status Register
        using Addr = Register::Address<0x40067003,0xffffff00,0x00000000,unsigned char>;
        ///Receive acknowledge
        enum class RxakVal {
            v0=0x00000000,     ///<Acknowledge signal was received after the completion of one byte of data transmission on the bus
            v1=0x00000001,     ///<No acknowledge signal detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RxakVal> rxak{}; 
        namespace RxakValC{
            constexpr Register::FieldValue<decltype(rxak)::Type,RxakVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxak)::Type,RxakVal::v1> v1{};
        }
        ///Interrupt flag
        enum class IicifVal {
            v0=0x00000000,     ///<No interrupt pending
            v1=0x00000001,     ///<Interrupt pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IicifVal> iicif{}; 
        namespace IicifValC{
            constexpr Register::FieldValue<decltype(iicif)::Type,IicifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iicif)::Type,IicifVal::v1> v1{};
        }
        ///Slave read/write
        enum class SrwVal {
            v0=0x00000000,     ///<Slave receive, master writing to slave
            v1=0x00000001,     ///<Slave transmit, master reading from slave
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SrwVal> srw{}; 
        namespace SrwValC{
            constexpr Register::FieldValue<decltype(srw)::Type,SrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srw)::Type,SrwVal::v1> v1{};
        }
        ///Range address match
        enum class RamVal {
            v0=0x00000000,     ///<Not addressed
            v1=0x00000001,     ///<Addressed as a slave
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RamVal> ram{}; 
        namespace RamValC{
            constexpr Register::FieldValue<decltype(ram)::Type,RamVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ram)::Type,RamVal::v1> v1{};
        }
        ///Arbitration lost
        enum class ArblVal {
            v0=0x00000000,     ///<Standard bus operation.
            v1=0x00000001,     ///<Loss of arbitration.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ArblVal> arbl{}; 
        namespace ArblValC{
            constexpr Register::FieldValue<decltype(arbl)::Type,ArblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(arbl)::Type,ArblVal::v1> v1{};
        }
        ///Bus busy
        enum class BusyVal {
            v0=0x00000000,     ///<Bus is idle
            v1=0x00000001,     ///<Bus is busy
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusyVal> busy{}; 
        namespace BusyValC{
            constexpr Register::FieldValue<decltype(busy)::Type,BusyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(busy)::Type,BusyVal::v1> v1{};
        }
        ///Addressed as a slave
        enum class IaasVal {
            v0=0x00000000,     ///<Not addressed
            v1=0x00000001,     ///<Addressed as a slave
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,IaasVal> iaas{}; 
        namespace IaasValC{
            constexpr Register::FieldValue<decltype(iaas)::Type,IaasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iaas)::Type,IaasVal::v1> v1{};
        }
        ///Transfer complete flag
        enum class TcfVal {
            v0=0x00000000,     ///<Transfer in progress
            v1=0x00000001,     ///<Transfer complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TcfVal> tcf{}; 
        namespace TcfValC{
            constexpr Register::FieldValue<decltype(tcf)::Type,TcfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcf)::Type,TcfVal::v1> v1{};
        }
    }
    namespace I2c1D{    ///<I2C Data I/O register
        using Addr = Register::Address<0x40067004,0xffffff00,0x00000000,unsigned char>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace I2c1C2{    ///<I2C Control Register 2
        using Addr = Register::Address<0x40067005,0xffffff00,0x00000000,unsigned char>;
        ///Slave address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ad{}; 
        ///Range address matching enable
        enum class RmenVal {
            v0=0x00000000,     ///<Range mode disabled. No address match occurs for an address within the range of values of the A1 and RA registers.
            v1=0x00000001,     ///<Range mode enabled. Address matching occurs when a slave receives an address within the range of values of the A1 and RA registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RmenVal> rmen{}; 
        namespace RmenValC{
            constexpr Register::FieldValue<decltype(rmen)::Type,RmenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rmen)::Type,RmenVal::v1> v1{};
        }
        ///Slave baud rate control
        enum class SbrcVal {
            v0=0x00000000,     ///<The slave baud rate follows the master baud rate and clock stretching may occur
            v1=0x00000001,     ///<Slave baud rate is independent of the master baud rate
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SbrcVal> sbrc{}; 
        namespace SbrcValC{
            constexpr Register::FieldValue<decltype(sbrc)::Type,SbrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sbrc)::Type,SbrcVal::v1> v1{};
        }
        ///High drive select
        enum class HdrsVal {
            v0=0x00000000,     ///<Normal drive mode
            v1=0x00000001,     ///<High drive mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HdrsVal> hdrs{}; 
        namespace HdrsValC{
            constexpr Register::FieldValue<decltype(hdrs)::Type,HdrsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hdrs)::Type,HdrsVal::v1> v1{};
        }
        ///Address extension
        enum class AdextVal {
            v0=0x00000000,     ///<7-bit address scheme
            v1=0x00000001,     ///<10-bit address scheme
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AdextVal> adext{}; 
        namespace AdextValC{
            constexpr Register::FieldValue<decltype(adext)::Type,AdextVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adext)::Type,AdextVal::v1> v1{};
        }
        ///General call address enable
        enum class GcaenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,GcaenVal> gcaen{}; 
        namespace GcaenValC{
            constexpr Register::FieldValue<decltype(gcaen)::Type,GcaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gcaen)::Type,GcaenVal::v1> v1{};
        }
    }
    namespace I2c1Flt{    ///<I2C Programmable Input Glitch Filter register
        using Addr = Register::Address<0x40067006,0xffffffe0,0x00000000,unsigned char>;
        ///I2C programmable filter factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> flt{}; 
    }
    namespace I2c1Ra{    ///<I2C Range Address register
        using Addr = Register::Address<0x40067007,0xffffff01,0x00000000,unsigned char>;
        ///Range slave address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> rad{}; 
    }
    namespace I2c1Smb{    ///<I2C SMBus Control and Status register
        using Addr = Register::Address<0x40067008,0xffffff00,0x00000000,unsigned char>;
        ///SHTF2 interrupt enable
        enum class Shtf2ieVal {
            v0=0x00000000,     ///<SHTF2 interrupt is disabled
            v1=0x00000001,     ///<SHTF2 interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Shtf2ieVal> shtf2ie{}; 
        namespace Shtf2ieValC{
            constexpr Register::FieldValue<decltype(shtf2ie)::Type,Shtf2ieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(shtf2ie)::Type,Shtf2ieVal::v1> v1{};
        }
        ///SCL high timeout flag 2
        enum class Shtf2Val {
            v0=0x00000000,     ///<No SCL high and SDA low timeout occurs
            v1=0x00000001,     ///<SCL high and SDA low timeout occurs
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Shtf2Val> shtf2{}; 
        namespace Shtf2ValC{
            constexpr Register::FieldValue<decltype(shtf2)::Type,Shtf2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(shtf2)::Type,Shtf2Val::v1> v1{};
        }
        ///SCL high timeout flag 1
        enum class Shtf1Val {
            v0=0x00000000,     ///<No SCL high and SDA high timeout occurs
            v1=0x00000001,     ///<SCL high and SDA high timeout occurs
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Shtf1Val> shtf1{}; 
        namespace Shtf1ValC{
            constexpr Register::FieldValue<decltype(shtf1)::Type,Shtf1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(shtf1)::Type,Shtf1Val::v1> v1{};
        }
        ///SCL low timeout flag
        enum class SltfVal {
            v0=0x00000000,     ///<No low timeout occurs
            v1=0x00000001,     ///<Low timeout occurs
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SltfVal> sltf{}; 
        namespace SltfValC{
            constexpr Register::FieldValue<decltype(sltf)::Type,SltfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sltf)::Type,SltfVal::v1> v1{};
        }
        ///Timeout counter clock select
        enum class TckselVal {
            v0=0x00000000,     ///<Timeout counter counts at the frequency of the bus clock / 64
            v1=0x00000001,     ///<Timeout counter counts at the frequency of the bus clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TckselVal> tcksel{}; 
        namespace TckselValC{
            constexpr Register::FieldValue<decltype(tcksel)::Type,TckselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcksel)::Type,TckselVal::v1> v1{};
        }
        ///Second I2C address enable
        enum class SiicaenVal {
            v0=0x00000000,     ///<I2C address register 2 matching is disabled
            v1=0x00000001,     ///<I2C address register 2 matching is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SiicaenVal> siicaen{}; 
        namespace SiicaenValC{
            constexpr Register::FieldValue<decltype(siicaen)::Type,SiicaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(siicaen)::Type,SiicaenVal::v1> v1{};
        }
        ///SMBus alert response address enable
        enum class AlertenVal {
            v0=0x00000000,     ///<SMBus alert response address matching is disabled
            v1=0x00000001,     ///<SMBus alert response address matching is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AlertenVal> alerten{}; 
        namespace AlertenValC{
            constexpr Register::FieldValue<decltype(alerten)::Type,AlertenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(alerten)::Type,AlertenVal::v1> v1{};
        }
        ///Fast NACK/ACK enable
        enum class FackVal {
            v0=0x00000000,     ///<An ACK or NACK is sent on the following receiving data byte
            v1=0x00000001,     ///<Writing 0 to TXAK after receiving a data byte generates an ACK. Writing 1 to TXAK after receiving a data byte generates a NACK.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,FackVal> fack{}; 
        namespace FackValC{
            constexpr Register::FieldValue<decltype(fack)::Type,FackVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fack)::Type,FackVal::v1> v1{};
        }
    }
    namespace I2c1A2{    ///<I2C Address Register 2
        using Addr = Register::Address<0x40067009,0xffffff01,0x00000000,unsigned char>;
        ///SMBus address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> sad{}; 
    }
    namespace I2c1Slth{    ///<I2C SCL Low Timeout Register High
        using Addr = Register::Address<0x4006700a,0xffffff00,0x00000000,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sslt{}; 
    }
    namespace I2c1Sltl{    ///<I2C SCL Low Timeout Register Low
        using Addr = Register::Address<0x4006700b,0xffffff00,0x00000000,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sslt{}; 
    }
}
