#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//USBPHY Register Reference Index
    namespace UsbphyPwd{    ///<USB PHY Power-Down Register
        using Addr = Register::Address<0x400a2000,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        enum class TxpwdfsVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB full-speed drivers. This turns off the current starvation sources and puts the drivers into high-impedance output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,TxpwdfsVal> txpwdfs{}; 
        namespace TxpwdfsValC{
            constexpr Register::FieldValue<decltype(txpwdfs)::Type,TxpwdfsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdfs)::Type,TxpwdfsVal::v1> v1{};
        }
        ///no description available
        enum class TxpwdibiasVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB PHY current bias block for the transmitter. This bit should be set only when the USB is in suspend mode. This effectively powers down the entire USB transmit path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxpwdibiasVal> txpwdibias{}; 
        namespace TxpwdibiasValC{
            constexpr Register::FieldValue<decltype(txpwdibias)::Type,TxpwdibiasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdibias)::Type,TxpwdibiasVal::v1> v1{};
        }
        ///no description available
        enum class Txpwdv2iVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB PHY transmit V-to-I converter and the current mirror
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Txpwdv2iVal> txpwdv2i{}; 
        namespace Txpwdv2iValC{
            constexpr Register::FieldValue<decltype(txpwdv2i)::Type,Txpwdv2iVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdv2i)::Type,Txpwdv2iVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        enum class RxpwdenvVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed receiver envelope detector (squelch signal)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RxpwdenvVal> rxpwdenv{}; 
        namespace RxpwdenvValC{
            constexpr Register::FieldValue<decltype(rxpwdenv)::Type,RxpwdenvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdenv)::Type,RxpwdenvVal::v1> v1{};
        }
        ///no description available
        enum class Rxpwd1pt1Val {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB full-speed differential receiver.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Rxpwd1pt1Val> rxpwd1pt1{}; 
        namespace Rxpwd1pt1ValC{
            constexpr Register::FieldValue<decltype(rxpwd1pt1)::Type,Rxpwd1pt1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwd1pt1)::Type,Rxpwd1pt1Val::v1> v1{};
        }
        ///no description available
        enum class RxpwddiffVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,RxpwddiffVal> rxpwddiff{}; 
        namespace RxpwddiffValC{
            constexpr Register::FieldValue<decltype(rxpwddiff)::Type,RxpwddiffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwddiff)::Type,RxpwddiffVal::v1> v1{};
        }
        ///no description available
        enum class RxpwdrxVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the entire USB PHY receiver block except for the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,RxpwdrxVal> rxpwdrx{}; 
        namespace RxpwdrxValC{
            constexpr Register::FieldValue<decltype(rxpwdrx)::Type,RxpwdrxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdrx)::Type,RxpwdrxVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyPwdSet{    ///<USB PHY Power-Down Register
        using Addr = Register::Address<0x400a2004,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        enum class TxpwdfsVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB full-speed drivers. This turns off the current starvation sources and puts the drivers into high-impedance output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,TxpwdfsVal> txpwdfs{}; 
        namespace TxpwdfsValC{
            constexpr Register::FieldValue<decltype(txpwdfs)::Type,TxpwdfsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdfs)::Type,TxpwdfsVal::v1> v1{};
        }
        ///no description available
        enum class TxpwdibiasVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB PHY current bias block for the transmitter. This bit should be set only when the USB is in suspend mode. This effectively powers down the entire USB transmit path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxpwdibiasVal> txpwdibias{}; 
        namespace TxpwdibiasValC{
            constexpr Register::FieldValue<decltype(txpwdibias)::Type,TxpwdibiasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdibias)::Type,TxpwdibiasVal::v1> v1{};
        }
        ///no description available
        enum class Txpwdv2iVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB PHY transmit V-to-I converter and the current mirror
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Txpwdv2iVal> txpwdv2i{}; 
        namespace Txpwdv2iValC{
            constexpr Register::FieldValue<decltype(txpwdv2i)::Type,Txpwdv2iVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdv2i)::Type,Txpwdv2iVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        enum class RxpwdenvVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed receiver envelope detector (squelch signal)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RxpwdenvVal> rxpwdenv{}; 
        namespace RxpwdenvValC{
            constexpr Register::FieldValue<decltype(rxpwdenv)::Type,RxpwdenvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdenv)::Type,RxpwdenvVal::v1> v1{};
        }
        ///no description available
        enum class Rxpwd1pt1Val {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB full-speed differential receiver.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Rxpwd1pt1Val> rxpwd1pt1{}; 
        namespace Rxpwd1pt1ValC{
            constexpr Register::FieldValue<decltype(rxpwd1pt1)::Type,Rxpwd1pt1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwd1pt1)::Type,Rxpwd1pt1Val::v1> v1{};
        }
        ///no description available
        enum class RxpwddiffVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,RxpwddiffVal> rxpwddiff{}; 
        namespace RxpwddiffValC{
            constexpr Register::FieldValue<decltype(rxpwddiff)::Type,RxpwddiffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwddiff)::Type,RxpwddiffVal::v1> v1{};
        }
        ///no description available
        enum class RxpwdrxVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the entire USB PHY receiver block except for the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,RxpwdrxVal> rxpwdrx{}; 
        namespace RxpwdrxValC{
            constexpr Register::FieldValue<decltype(rxpwdrx)::Type,RxpwdrxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdrx)::Type,RxpwdrxVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyPwdClr{    ///<USB PHY Power-Down Register
        using Addr = Register::Address<0x400a2008,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        enum class TxpwdfsVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB full-speed drivers. This turns off the current starvation sources and puts the drivers into high-impedance output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,TxpwdfsVal> txpwdfs{}; 
        namespace TxpwdfsValC{
            constexpr Register::FieldValue<decltype(txpwdfs)::Type,TxpwdfsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdfs)::Type,TxpwdfsVal::v1> v1{};
        }
        ///no description available
        enum class TxpwdibiasVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB PHY current bias block for the transmitter. This bit should be set only when the USB is in suspend mode. This effectively powers down the entire USB transmit path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxpwdibiasVal> txpwdibias{}; 
        namespace TxpwdibiasValC{
            constexpr Register::FieldValue<decltype(txpwdibias)::Type,TxpwdibiasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdibias)::Type,TxpwdibiasVal::v1> v1{};
        }
        ///no description available
        enum class Txpwdv2iVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB PHY transmit V-to-I converter and the current mirror
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Txpwdv2iVal> txpwdv2i{}; 
        namespace Txpwdv2iValC{
            constexpr Register::FieldValue<decltype(txpwdv2i)::Type,Txpwdv2iVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdv2i)::Type,Txpwdv2iVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        enum class RxpwdenvVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed receiver envelope detector (squelch signal)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RxpwdenvVal> rxpwdenv{}; 
        namespace RxpwdenvValC{
            constexpr Register::FieldValue<decltype(rxpwdenv)::Type,RxpwdenvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdenv)::Type,RxpwdenvVal::v1> v1{};
        }
        ///no description available
        enum class Rxpwd1pt1Val {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB full-speed differential receiver.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Rxpwd1pt1Val> rxpwd1pt1{}; 
        namespace Rxpwd1pt1ValC{
            constexpr Register::FieldValue<decltype(rxpwd1pt1)::Type,Rxpwd1pt1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwd1pt1)::Type,Rxpwd1pt1Val::v1> v1{};
        }
        ///no description available
        enum class RxpwddiffVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,RxpwddiffVal> rxpwddiff{}; 
        namespace RxpwddiffValC{
            constexpr Register::FieldValue<decltype(rxpwddiff)::Type,RxpwddiffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwddiff)::Type,RxpwddiffVal::v1> v1{};
        }
        ///no description available
        enum class RxpwdrxVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the entire USB PHY receiver block except for the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,RxpwdrxVal> rxpwdrx{}; 
        namespace RxpwdrxValC{
            constexpr Register::FieldValue<decltype(rxpwdrx)::Type,RxpwdrxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdrx)::Type,RxpwdrxVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyPwdTog{    ///<USB PHY Power-Down Register
        using Addr = Register::Address<0x400a200c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        enum class TxpwdfsVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB full-speed drivers. This turns off the current starvation sources and puts the drivers into high-impedance output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,TxpwdfsVal> txpwdfs{}; 
        namespace TxpwdfsValC{
            constexpr Register::FieldValue<decltype(txpwdfs)::Type,TxpwdfsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdfs)::Type,TxpwdfsVal::v1> v1{};
        }
        ///no description available
        enum class TxpwdibiasVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB PHY current bias block for the transmitter. This bit should be set only when the USB is in suspend mode. This effectively powers down the entire USB transmit path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxpwdibiasVal> txpwdibias{}; 
        namespace TxpwdibiasValC{
            constexpr Register::FieldValue<decltype(txpwdibias)::Type,TxpwdibiasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdibias)::Type,TxpwdibiasVal::v1> v1{};
        }
        ///no description available
        enum class Txpwdv2iVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB PHY transmit V-to-I converter and the current mirror
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Txpwdv2iVal> txpwdv2i{}; 
        namespace Txpwdv2iValC{
            constexpr Register::FieldValue<decltype(txpwdv2i)::Type,Txpwdv2iVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdv2i)::Type,Txpwdv2iVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        enum class RxpwdenvVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed receiver envelope detector (squelch signal)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RxpwdenvVal> rxpwdenv{}; 
        namespace RxpwdenvValC{
            constexpr Register::FieldValue<decltype(rxpwdenv)::Type,RxpwdenvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdenv)::Type,RxpwdenvVal::v1> v1{};
        }
        ///no description available
        enum class Rxpwd1pt1Val {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB full-speed differential receiver.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Rxpwd1pt1Val> rxpwd1pt1{}; 
        namespace Rxpwd1pt1ValC{
            constexpr Register::FieldValue<decltype(rxpwd1pt1)::Type,Rxpwd1pt1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwd1pt1)::Type,Rxpwd1pt1Val::v1> v1{};
        }
        ///no description available
        enum class RxpwddiffVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,RxpwddiffVal> rxpwddiff{}; 
        namespace RxpwddiffValC{
            constexpr Register::FieldValue<decltype(rxpwddiff)::Type,RxpwddiffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwddiff)::Type,RxpwddiffVal::v1> v1{};
        }
        ///no description available
        enum class RxpwdrxVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the entire USB PHY receiver block except for the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,RxpwdrxVal> rxpwdrx{}; 
        namespace RxpwdrxValC{
            constexpr Register::FieldValue<decltype(rxpwdrx)::Type,RxpwdrxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdrx)::Type,RxpwdrxVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyTx{    ///<USB PHY Transmitter Control Register
        using Addr = Register::Address<0x400a2010,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dCal{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> txcal45dm{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> txcal45dp{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> usbphyTxEdgectrl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyTxSet{    ///<USB PHY Transmitter Control Register
        using Addr = Register::Address<0x400a2014,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dCal{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> txcal45dm{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> txcal45dp{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> usbphyTxEdgectrl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyTxClr{    ///<USB PHY Transmitter Control Register
        using Addr = Register::Address<0x400a2018,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dCal{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> txcal45dm{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> txcal45dp{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> usbphyTxEdgectrl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyTxTog{    ///<USB PHY Transmitter Control Register
        using Addr = Register::Address<0x400a201c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dCal{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> txcal45dm{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> txcal45dp{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> usbphyTxEdgectrl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyRx{    ///<USB PHY Receiver Control Register
        using Addr = Register::Address<0x400a2020,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> envadj{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> disconadj{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        enum class RxdbypassVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Use the output of the USB_DP single-ended receiver in place of the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,RxdbypassVal> rxdbypass{}; 
        namespace RxdbypassValC{
            constexpr Register::FieldValue<decltype(rxdbypass)::Type,RxdbypassVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxdbypass)::Type,RxdbypassVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyRxSet{    ///<USB PHY Receiver Control Register
        using Addr = Register::Address<0x400a2024,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> envadj{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> disconadj{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        enum class RxdbypassVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Use the output of the USB_DP single-ended receiver in place of the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,RxdbypassVal> rxdbypass{}; 
        namespace RxdbypassValC{
            constexpr Register::FieldValue<decltype(rxdbypass)::Type,RxdbypassVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxdbypass)::Type,RxdbypassVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyRxClr{    ///<USB PHY Receiver Control Register
        using Addr = Register::Address<0x400a2028,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> envadj{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> disconadj{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        enum class RxdbypassVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Use the output of the USB_DP single-ended receiver in place of the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,RxdbypassVal> rxdbypass{}; 
        namespace RxdbypassValC{
            constexpr Register::FieldValue<decltype(rxdbypass)::Type,RxdbypassVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxdbypass)::Type,RxdbypassVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyRxTog{    ///<USB PHY Receiver Control Register
        using Addr = Register::Address<0x400a202c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> envadj{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> disconadj{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        enum class RxdbypassVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Use the output of the USB_DP single-ended receiver in place of the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,RxdbypassVal> rxdbypass{}; 
        namespace RxdbypassValC{
            constexpr Register::FieldValue<decltype(rxdbypass)::Type,RxdbypassVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxdbypass)::Type,RxdbypassVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyCtrl{    ///<USB PHY General Control Register
        using Addr = Register::Address<0x400a2030,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enhostdiscondetect{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> devpluginIrq{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enutmilevel2{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enutmilevel3{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> autoresumeEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> enautoclrClkgate{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> enautoclrPhyPwd{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fsdllRstEn{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> otgIdValue{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> hostForceLsSe0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> utmiSuspendm{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> sftrst{}; 
    }
    namespace UsbphyCtrlSet{    ///<USB PHY General Control Register
        using Addr = Register::Address<0x400a2034,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enhostdiscondetect{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> devpluginIrq{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enutmilevel2{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enutmilevel3{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> autoresumeEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> enautoclrClkgate{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> enautoclrPhyPwd{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fsdllRstEn{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> otgIdValue{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> hostForceLsSe0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> utmiSuspendm{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> sftrst{}; 
    }
    namespace UsbphyCtrlClr{    ///<USB PHY General Control Register
        using Addr = Register::Address<0x400a2038,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enhostdiscondetect{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> devpluginIrq{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enutmilevel2{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enutmilevel3{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> autoresumeEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> enautoclrClkgate{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> enautoclrPhyPwd{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fsdllRstEn{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> otgIdValue{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> hostForceLsSe0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> utmiSuspendm{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> sftrst{}; 
    }
    namespace UsbphyCtrlTog{    ///<USB PHY General Control Register
        using Addr = Register::Address<0x400a203c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enhostdiscondetect{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> devpluginIrq{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enutmilevel2{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enutmilevel3{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> autoresumeEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> enautoclrClkgate{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> enautoclrPhyPwd{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fsdllRstEn{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> otgIdValue{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> hostForceLsSe0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> utmiSuspendm{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> sftrst{}; 
    }
    namespace UsbphyStatus{    ///<USB PHY Status Register
        using Addr = Register::Address<0x400a2040,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hostdiscondetectStatus{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> devpluginStatus{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> otgidStatus{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> resumeStatus{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyDebug{    ///<USB PHY Debug Register
        using Addr = Register::Address<0x400a2050,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otgidpiolock{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> debugInterfaceHold{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> hstpulldown{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> enhstpulldown{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tx2rxcount{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> entx2rxcount{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> squelchresetcount{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ensquelchreset{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> squelchresetlength{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> hostResumeDebug{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyDebugSet{    ///<USB PHY Debug Register
        using Addr = Register::Address<0x400a2054,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otgidpiolock{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> debugInterfaceHold{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> hstpulldown{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> enhstpulldown{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tx2rxcount{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> entx2rxcount{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> squelchresetcount{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ensquelchreset{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> squelchresetlength{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> hostResumeDebug{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyDebugClr{    ///<USB PHY Debug Register
        using Addr = Register::Address<0x400a2058,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otgidpiolock{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> debugInterfaceHold{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> hstpulldown{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> enhstpulldown{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tx2rxcount{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> entx2rxcount{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> squelchresetcount{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ensquelchreset{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> squelchresetlength{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> hostResumeDebug{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyDebugTog{    ///<USB PHY Debug Register
        using Addr = Register::Address<0x400a205c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otgidpiolock{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> debugInterfaceHold{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> hstpulldown{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> enhstpulldown{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tx2rxcount{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> entx2rxcount{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> squelchresetcount{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ensquelchreset{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> squelchresetlength{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> hostResumeDebug{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyDebug0Status{    ///<UTMI Debug Status Register 0
        using Addr = Register::Address<0x400a2060,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> loopBackFailCount{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> utmiRxerrorFailCount{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> squelchCount{}; 
    }
    namespace UsbphyDebug1{    ///<UTMI Debug Status Register 1
        using Addr = Register::Address<0x400a2070,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        enum class EntailadjvdVal {
            v00=0x00000000,     ///<Delay is nominal
            v01=0x00000001,     ///<Delay is +20%
            v10=0x00000002,     ///<Delay is -20%
            v11=0x00000003,     ///<Delay is -40%
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,EntailadjvdVal> entailadjvd{}; 
        namespace EntailadjvdValC{
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v00> v00{};
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v01> v01{};
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v10> v10{};
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyDebug1Set{    ///<UTMI Debug Status Register 1
        using Addr = Register::Address<0x400a2074,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        enum class EntailadjvdVal {
            v00=0x00000000,     ///<Delay is nominal
            v01=0x00000001,     ///<Delay is +20%
            v10=0x00000002,     ///<Delay is -20%
            v11=0x00000003,     ///<Delay is -40%
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,EntailadjvdVal> entailadjvd{}; 
        namespace EntailadjvdValC{
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v00> v00{};
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v01> v01{};
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v10> v10{};
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyDebug1Clr{    ///<UTMI Debug Status Register 1
        using Addr = Register::Address<0x400a2078,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        enum class EntailadjvdVal {
            v00=0x00000000,     ///<Delay is nominal
            v01=0x00000001,     ///<Delay is +20%
            v10=0x00000002,     ///<Delay is -20%
            v11=0x00000003,     ///<Delay is -40%
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,EntailadjvdVal> entailadjvd{}; 
        namespace EntailadjvdValC{
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v00> v00{};
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v01> v01{};
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v10> v10{};
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyDebug1Tog{    ///<UTMI Debug Status Register 1
        using Addr = Register::Address<0x400a207c,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        enum class EntailadjvdVal {
            v00=0x00000000,     ///<Delay is nominal
            v01=0x00000001,     ///<Delay is +20%
            v10=0x00000002,     ///<Delay is -20%
            v11=0x00000003,     ///<Delay is -40%
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,EntailadjvdVal> entailadjvd{}; 
        namespace EntailadjvdValC{
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v00> v00{};
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v01> v01{};
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v10> v10{};
            constexpr Register::FieldValue<decltype(entailadjvd)::Type,EntailadjvdVal::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyVersion{    ///<UTMI RTL Version
        using Addr = Register::Address<0x400a2080,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> step{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> minor{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> major{}; 
    }
    namespace UsbphyPllSic{    ///<USB PHY PLL Control/Status Register
        using Addr = Register::Address<0x400a20a0,0x00000000,0x00000000,unsigned>;
        ///no description available
        enum class PlldivselVal {
            v00=0x00000000,     ///<PLL reference frequency = 24MHz
            v01=0x00000001,     ///<PLL reference frequency = 16MHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PlldivselVal> pllDivSel{}; 
        namespace PlldivselValC{
            constexpr Register::FieldValue<decltype(pllDivSel)::Type,PlldivselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pllDivSel)::Type,PlldivselVal::v01> v01{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pllEnUsbClks{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pllHoldRingOff{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllPower{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pllEnable{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllBypass{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pllLock{}; 
    }
    namespace UsbphyPllSicSet{    ///<USB PHY PLL Control/Status Register
        using Addr = Register::Address<0x400a20a4,0x00000000,0x00000000,unsigned>;
        ///no description available
        enum class PlldivselVal {
            v00=0x00000000,     ///<PLL reference frequency = 24MHz
            v01=0x00000001,     ///<PLL reference frequency = 16MHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PlldivselVal> pllDivSel{}; 
        namespace PlldivselValC{
            constexpr Register::FieldValue<decltype(pllDivSel)::Type,PlldivselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pllDivSel)::Type,PlldivselVal::v01> v01{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pllEnUsbClks{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pllHoldRingOff{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllPower{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pllEnable{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllBypass{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pllLock{}; 
    }
    namespace UsbphyPllSicClr{    ///<USB PHY PLL Control/Status Register
        using Addr = Register::Address<0x400a20a8,0x00000000,0x00000000,unsigned>;
        ///no description available
        enum class PlldivselVal {
            v00=0x00000000,     ///<PLL reference frequency = 24MHz
            v01=0x00000001,     ///<PLL reference frequency = 16MHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PlldivselVal> pllDivSel{}; 
        namespace PlldivselValC{
            constexpr Register::FieldValue<decltype(pllDivSel)::Type,PlldivselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pllDivSel)::Type,PlldivselVal::v01> v01{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pllEnUsbClks{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pllHoldRingOff{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllPower{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pllEnable{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllBypass{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pllLock{}; 
    }
    namespace UsbphyPllSicTog{    ///<USB PHY PLL Control/Status Register
        using Addr = Register::Address<0x400a20ac,0x00000000,0x00000000,unsigned>;
        ///no description available
        enum class PlldivselVal {
            v00=0x00000000,     ///<PLL reference frequency = 24MHz
            v01=0x00000001,     ///<PLL reference frequency = 16MHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PlldivselVal> pllDivSel{}; 
        namespace PlldivselValC{
            constexpr Register::FieldValue<decltype(pllDivSel)::Type,PlldivselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pllDivSel)::Type,PlldivselVal::v01> v01{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pllEnUsbClks{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pllHoldRingOff{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllPower{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pllEnable{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllBypass{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pllLock{}; 
    }
    namespace UsbphyUsb1VbusDetect{    ///<USB PHY VBUS Detect Control Register
        using Addr = Register::Address<0x400a20c0,0x00000000,0x00000000,unsigned>;
        ///no description available
        enum class VbusvalidthreshVal {
            v000=0x00000000,     ///<4.0 V
            v001=0x00000001,     ///<4.1 V
            v010=0x00000002,     ///<4.2 V
            v011=0x00000003,     ///<4.3 V
            v100=0x00000004,     ///<4.4 V (default)
            v101=0x00000005,     ///<4.5 V
            v110=0x00000006,     ///<4.6 V
            v111=0x00000007,     ///<4.7 V
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,VbusvalidthreshVal> vbusvalidThresh{}; 
        namespace VbusvalidthreshValC{
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v000> v000{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v001> v001{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v010> v010{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v011> v011{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v100> v100{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v101> v101{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v110> v110{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v111> v111{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> vbusvalidToSessvalid{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> pwrupCmps{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dischargeVbus{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> chargeVbus{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace UsbphyUsb1VbusDetectSet{    ///<USB PHY VBUS Detect Control Register
        using Addr = Register::Address<0x400a20c4,0x00000000,0x00000000,unsigned>;
        ///no description available
        enum class VbusvalidthreshVal {
            v000=0x00000000,     ///<4.0 V
            v001=0x00000001,     ///<4.1 V
            v010=0x00000002,     ///<4.2 V
            v011=0x00000003,     ///<4.3 V
            v100=0x00000004,     ///<4.4 V (default)
            v101=0x00000005,     ///<4.5 V
            v110=0x00000006,     ///<4.6 V
            v111=0x00000007,     ///<4.7 V
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,VbusvalidthreshVal> vbusvalidThresh{}; 
        namespace VbusvalidthreshValC{
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v000> v000{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v001> v001{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v010> v010{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v011> v011{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v100> v100{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v101> v101{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v110> v110{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v111> v111{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> vbusvalidToSessvalid{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> pwrupCmps{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dischargeVbus{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> chargeVbus{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace UsbphyUsb1VbusDetectClr{    ///<USB PHY VBUS Detect Control Register
        using Addr = Register::Address<0x400a20c8,0x00000000,0x00000000,unsigned>;
        ///no description available
        enum class VbusvalidthreshVal {
            v000=0x00000000,     ///<4.0 V
            v001=0x00000001,     ///<4.1 V
            v010=0x00000002,     ///<4.2 V
            v011=0x00000003,     ///<4.3 V
            v100=0x00000004,     ///<4.4 V (default)
            v101=0x00000005,     ///<4.5 V
            v110=0x00000006,     ///<4.6 V
            v111=0x00000007,     ///<4.7 V
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,VbusvalidthreshVal> vbusvalidThresh{}; 
        namespace VbusvalidthreshValC{
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v000> v000{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v001> v001{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v010> v010{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v011> v011{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v100> v100{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v101> v101{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v110> v110{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v111> v111{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> vbusvalidToSessvalid{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> pwrupCmps{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dischargeVbus{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> chargeVbus{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace UsbphyUsb1VbusDetectTog{    ///<USB PHY VBUS Detect Control Register
        using Addr = Register::Address<0x400a20cc,0x00000000,0x00000000,unsigned>;
        ///no description available
        enum class VbusvalidthreshVal {
            v000=0x00000000,     ///<4.0 V
            v001=0x00000001,     ///<4.1 V
            v010=0x00000002,     ///<4.2 V
            v011=0x00000003,     ///<4.3 V
            v100=0x00000004,     ///<4.4 V (default)
            v101=0x00000005,     ///<4.5 V
            v110=0x00000006,     ///<4.6 V
            v111=0x00000007,     ///<4.7 V
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,VbusvalidthreshVal> vbusvalidThresh{}; 
        namespace VbusvalidthreshValC{
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v000> v000{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v001> v001{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v010> v010{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v011> v011{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v100> v100{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v101> v101{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v110> v110{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh)::Type,VbusvalidthreshVal::v111> v111{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> vbusvalidToSessvalid{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> pwrupCmps{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dischargeVbus{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> chargeVbus{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace UsbphyUsb1VbusDetStat{    ///<USB PHY VBUS Detector Status Register
        using Addr = Register::Address<0x400a20d0,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sessend{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bvalid{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> avalid{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vbusValid{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vbusValid3v{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyAnactrl{    ///<USB PHY Analog Control Register
        using Addr = Register::Address<0x400a2100,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> testclkSel{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pfdClkgate{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pfdClkSel{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,4),Register::ReadWriteAccess,unsigned> pfdFrac{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> devPulldown{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> emphPulseCtrl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> emphEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> emphCurCtrl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfdStable{}; 
    }
    namespace UsbphyAnactrlSet{    ///<USB PHY Analog Control Register
        using Addr = Register::Address<0x400a2104,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> testclkSel{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pfdClkgate{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pfdClkSel{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,4),Register::ReadWriteAccess,unsigned> pfdFrac{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> devPulldown{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> emphPulseCtrl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> emphEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> emphCurCtrl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfdStable{}; 
    }
    namespace UsbphyAnactrlClr{    ///<USB PHY Analog Control Register
        using Addr = Register::Address<0x400a2108,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> testclkSel{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pfdClkgate{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pfdClkSel{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,4),Register::ReadWriteAccess,unsigned> pfdFrac{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> devPulldown{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> emphPulseCtrl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> emphEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> emphCurCtrl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfdStable{}; 
    }
    namespace UsbphyAnactrlTog{    ///<USB PHY Analog Control Register
        using Addr = Register::Address<0x400a210c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> testclkSel{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pfdClkgate{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pfdClkSel{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,4),Register::ReadWriteAccess,unsigned> pfdFrac{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> devPulldown{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> emphPulseCtrl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> emphEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> emphCurCtrl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfdStable{}; 
    }
    namespace UsbphyUsb1Loopback{    ///<USB PHY Loopback Control/Status Register
        using Addr = Register::Address<0x400a2110,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> utmiTeststart{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> utmiDigTst0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> utmiDigTst1{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tstiTxHsMode{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tstiTxLsMode{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tstiTxEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tstiTxHiz{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> utmoDigTst0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> utmoDigTst1{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tstiHsfsModeEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tstpkt{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyUsb1LoopbackSet{    ///<USB PHY Loopback Control/Status Register
        using Addr = Register::Address<0x400a2114,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> utmiTeststart{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> utmiDigTst0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> utmiDigTst1{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tstiTxHsMode{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tstiTxLsMode{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tstiTxEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tstiTxHiz{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> utmoDigTst0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> utmoDigTst1{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tstiHsfsModeEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tstpkt{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyUsb1LoopbackClr{    ///<USB PHY Loopback Control/Status Register
        using Addr = Register::Address<0x400a2118,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> utmiTeststart{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> utmiDigTst0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> utmiDigTst1{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tstiTxHsMode{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tstiTxLsMode{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tstiTxEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tstiTxHiz{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> utmoDigTst0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> utmoDigTst1{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tstiHsfsModeEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tstpkt{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyUsb1LoopbackTog{    ///<USB PHY Loopback Control/Status Register
        using Addr = Register::Address<0x400a211c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> utmiTeststart{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> utmiDigTst0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> utmiDigTst1{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tstiTxHsMode{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tstiTxLsMode{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tstiTxEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tstiTxHiz{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> utmoDigTst0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> utmoDigTst1{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tstiHsfsModeEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tstpkt{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbphyUsb1LoopbackHsfscnt{    ///<USB PHY Loopback Packet Number Select Register
        using Addr = Register::Address<0x400a2120,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tstiHsNumber{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tstiFsNumber{}; 
    }
    namespace UsbphyUsb1LoopbackHsfscntSet{    ///<USB PHY Loopback Packet Number Select Register
        using Addr = Register::Address<0x400a2124,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tstiHsNumber{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tstiFsNumber{}; 
    }
    namespace UsbphyUsb1LoopbackHsfscntClr{    ///<USB PHY Loopback Packet Number Select Register
        using Addr = Register::Address<0x400a2128,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tstiHsNumber{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tstiFsNumber{}; 
    }
    namespace UsbphyUsb1LoopbackHsfscntTog{    ///<USB PHY Loopback Packet Number Select Register
        using Addr = Register::Address<0x400a212c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tstiHsNumber{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tstiFsNumber{}; 
    }
    namespace UsbphyTrimOverrideEn{    ///<USB PHY Trim Override Enable Register
        using Addr = Register::Address<0x400a2130,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trimDivSelOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trimEnvTailAdjVdOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trimTxDCalOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> trimTxCal45dpOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trimTxCal45dmOverride{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimPllCtrl0DivSel{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbRegEnvTailAdjVd{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbphyTxDCal{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbphyTxCal45dp{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbphyTxCal45dm{}; 
    }
    namespace UsbphyTrimOverrideEnSet{    ///<USB PHY Trim Override Enable Register
        using Addr = Register::Address<0x400a2134,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trimDivSelOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trimEnvTailAdjVdOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trimTxDCalOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> trimTxCal45dpOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trimTxCal45dmOverride{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimPllCtrl0DivSel{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbRegEnvTailAdjVd{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbphyTxDCal{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbphyTxCal45dp{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbphyTxCal45dm{}; 
    }
    namespace UsbphyTrimOverrideEnClr{    ///<USB PHY Trim Override Enable Register
        using Addr = Register::Address<0x400a2138,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trimDivSelOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trimEnvTailAdjVdOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trimTxDCalOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> trimTxCal45dpOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trimTxCal45dmOverride{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimPllCtrl0DivSel{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbRegEnvTailAdjVd{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbphyTxDCal{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbphyTxCal45dp{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbphyTxCal45dm{}; 
    }
    namespace UsbphyTrimOverrideEnTog{    ///<USB PHY Trim Override Enable Register
        using Addr = Register::Address<0x400a213c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trimDivSelOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trimEnvTailAdjVdOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trimTxDCalOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> trimTxCal45dpOverride{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trimTxCal45dmOverride{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimPllCtrl0DivSel{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbRegEnvTailAdjVd{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbphyTxDCal{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbphyTxCal45dp{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trimUsbphyTxCal45dm{}; 
    }
}
