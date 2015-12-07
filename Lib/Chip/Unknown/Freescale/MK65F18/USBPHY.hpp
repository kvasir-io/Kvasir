#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USBPHY Register Reference Index
    namespace UsbphyPwd{    ///<USB PHY Power-Down Register
        using Addr = Register::Address<0x400a2000,0xffe1e3ff,0,unsigned>;
        ///no description available
        enum class TxpwdfsVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB full-speed drivers. This turns off the current starvation sources and puts the drivers into high-impedance output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,TxpwdfsVal> txpwdfs{}; 
        namespace TxpwdfsValC{
            constexpr Register::FieldValue<decltype(txpwdfs),TxpwdfsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdfs),TxpwdfsVal::v1> v1{};
        }
        ///no description available
        enum class TxpwdibiasVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB PHY current bias block for the transmitter. This bit should be set only when the USB is in suspend mode. This effectively powers down the entire USB transmit path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxpwdibiasVal> txpwdibias{}; 
        namespace TxpwdibiasValC{
            constexpr Register::FieldValue<decltype(txpwdibias),TxpwdibiasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdibias),TxpwdibiasVal::v1> v1{};
        }
        ///no description available
        enum class Txpwdv2iVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB PHY transmit V-to-I converter and the current mirror
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Txpwdv2iVal> txpwdv2i{}; 
        namespace Txpwdv2iValC{
            constexpr Register::FieldValue<decltype(txpwdv2i),Txpwdv2iVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdv2i),Txpwdv2iVal::v1> v1{};
        }
        ///no description available
        enum class RxpwdenvVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed receiver envelope detector (squelch signal)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RxpwdenvVal> rxpwdenv{}; 
        namespace RxpwdenvValC{
            constexpr Register::FieldValue<decltype(rxpwdenv),RxpwdenvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdenv),RxpwdenvVal::v1> v1{};
        }
        ///no description available
        enum class Rxpwd1pt1Val {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB full-speed differential receiver.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Rxpwd1pt1Val> rxpwd1pt1{}; 
        namespace Rxpwd1pt1ValC{
            constexpr Register::FieldValue<decltype(rxpwd1pt1),Rxpwd1pt1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwd1pt1),Rxpwd1pt1Val::v1> v1{};
        }
        ///no description available
        enum class RxpwddiffVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,RxpwddiffVal> rxpwddiff{}; 
        namespace RxpwddiffValC{
            constexpr Register::FieldValue<decltype(rxpwddiff),RxpwddiffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwddiff),RxpwddiffVal::v1> v1{};
        }
        ///no description available
        enum class RxpwdrxVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the entire USB PHY receiver block except for the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,RxpwdrxVal> rxpwdrx{}; 
        namespace RxpwdrxValC{
            constexpr Register::FieldValue<decltype(rxpwdrx),RxpwdrxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdrx),RxpwdrxVal::v1> v1{};
        }
    }
    namespace UsbphyPwdSet{    ///<USB PHY Power-Down Register
        using Addr = Register::Address<0x400a2004,0xffe1e3ff,0,unsigned>;
        ///no description available
        enum class TxpwdfsVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB full-speed drivers. This turns off the current starvation sources and puts the drivers into high-impedance output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,TxpwdfsVal> txpwdfs{}; 
        namespace TxpwdfsValC{
            constexpr Register::FieldValue<decltype(txpwdfs),TxpwdfsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdfs),TxpwdfsVal::v1> v1{};
        }
        ///no description available
        enum class TxpwdibiasVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB PHY current bias block for the transmitter. This bit should be set only when the USB is in suspend mode. This effectively powers down the entire USB transmit path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxpwdibiasVal> txpwdibias{}; 
        namespace TxpwdibiasValC{
            constexpr Register::FieldValue<decltype(txpwdibias),TxpwdibiasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdibias),TxpwdibiasVal::v1> v1{};
        }
        ///no description available
        enum class Txpwdv2iVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB PHY transmit V-to-I converter and the current mirror
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Txpwdv2iVal> txpwdv2i{}; 
        namespace Txpwdv2iValC{
            constexpr Register::FieldValue<decltype(txpwdv2i),Txpwdv2iVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdv2i),Txpwdv2iVal::v1> v1{};
        }
        ///no description available
        enum class RxpwdenvVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed receiver envelope detector (squelch signal)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RxpwdenvVal> rxpwdenv{}; 
        namespace RxpwdenvValC{
            constexpr Register::FieldValue<decltype(rxpwdenv),RxpwdenvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdenv),RxpwdenvVal::v1> v1{};
        }
        ///no description available
        enum class Rxpwd1pt1Val {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB full-speed differential receiver.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Rxpwd1pt1Val> rxpwd1pt1{}; 
        namespace Rxpwd1pt1ValC{
            constexpr Register::FieldValue<decltype(rxpwd1pt1),Rxpwd1pt1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwd1pt1),Rxpwd1pt1Val::v1> v1{};
        }
        ///no description available
        enum class RxpwddiffVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,RxpwddiffVal> rxpwddiff{}; 
        namespace RxpwddiffValC{
            constexpr Register::FieldValue<decltype(rxpwddiff),RxpwddiffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwddiff),RxpwddiffVal::v1> v1{};
        }
        ///no description available
        enum class RxpwdrxVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the entire USB PHY receiver block except for the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,RxpwdrxVal> rxpwdrx{}; 
        namespace RxpwdrxValC{
            constexpr Register::FieldValue<decltype(rxpwdrx),RxpwdrxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdrx),RxpwdrxVal::v1> v1{};
        }
    }
    namespace UsbphyPwdClr{    ///<USB PHY Power-Down Register
        using Addr = Register::Address<0x400a2008,0xffe1e3ff,0,unsigned>;
        ///no description available
        enum class TxpwdfsVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB full-speed drivers. This turns off the current starvation sources and puts the drivers into high-impedance output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,TxpwdfsVal> txpwdfs{}; 
        namespace TxpwdfsValC{
            constexpr Register::FieldValue<decltype(txpwdfs),TxpwdfsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdfs),TxpwdfsVal::v1> v1{};
        }
        ///no description available
        enum class TxpwdibiasVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB PHY current bias block for the transmitter. This bit should be set only when the USB is in suspend mode. This effectively powers down the entire USB transmit path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxpwdibiasVal> txpwdibias{}; 
        namespace TxpwdibiasValC{
            constexpr Register::FieldValue<decltype(txpwdibias),TxpwdibiasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdibias),TxpwdibiasVal::v1> v1{};
        }
        ///no description available
        enum class Txpwdv2iVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB PHY transmit V-to-I converter and the current mirror
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Txpwdv2iVal> txpwdv2i{}; 
        namespace Txpwdv2iValC{
            constexpr Register::FieldValue<decltype(txpwdv2i),Txpwdv2iVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdv2i),Txpwdv2iVal::v1> v1{};
        }
        ///no description available
        enum class RxpwdenvVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed receiver envelope detector (squelch signal)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RxpwdenvVal> rxpwdenv{}; 
        namespace RxpwdenvValC{
            constexpr Register::FieldValue<decltype(rxpwdenv),RxpwdenvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdenv),RxpwdenvVal::v1> v1{};
        }
        ///no description available
        enum class Rxpwd1pt1Val {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB full-speed differential receiver.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Rxpwd1pt1Val> rxpwd1pt1{}; 
        namespace Rxpwd1pt1ValC{
            constexpr Register::FieldValue<decltype(rxpwd1pt1),Rxpwd1pt1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwd1pt1),Rxpwd1pt1Val::v1> v1{};
        }
        ///no description available
        enum class RxpwddiffVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,RxpwddiffVal> rxpwddiff{}; 
        namespace RxpwddiffValC{
            constexpr Register::FieldValue<decltype(rxpwddiff),RxpwddiffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwddiff),RxpwddiffVal::v1> v1{};
        }
        ///no description available
        enum class RxpwdrxVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the entire USB PHY receiver block except for the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,RxpwdrxVal> rxpwdrx{}; 
        namespace RxpwdrxValC{
            constexpr Register::FieldValue<decltype(rxpwdrx),RxpwdrxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdrx),RxpwdrxVal::v1> v1{};
        }
    }
    namespace UsbphyPwdTog{    ///<USB PHY Power-Down Register
        using Addr = Register::Address<0x400a200c,0xffe1e3ff,0,unsigned>;
        ///no description available
        enum class TxpwdfsVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB full-speed drivers. This turns off the current starvation sources and puts the drivers into high-impedance output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,TxpwdfsVal> txpwdfs{}; 
        namespace TxpwdfsValC{
            constexpr Register::FieldValue<decltype(txpwdfs),TxpwdfsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdfs),TxpwdfsVal::v1> v1{};
        }
        ///no description available
        enum class TxpwdibiasVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB PHY current bias block for the transmitter. This bit should be set only when the USB is in suspend mode. This effectively powers down the entire USB transmit path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxpwdibiasVal> txpwdibias{}; 
        namespace TxpwdibiasValC{
            constexpr Register::FieldValue<decltype(txpwdibias),TxpwdibiasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdibias),TxpwdibiasVal::v1> v1{};
        }
        ///no description available
        enum class Txpwdv2iVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB PHY transmit V-to-I converter and the current mirror
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Txpwdv2iVal> txpwdv2i{}; 
        namespace Txpwdv2iValC{
            constexpr Register::FieldValue<decltype(txpwdv2i),Txpwdv2iVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txpwdv2i),Txpwdv2iVal::v1> v1{};
        }
        ///no description available
        enum class RxpwdenvVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed receiver envelope detector (squelch signal)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RxpwdenvVal> rxpwdenv{}; 
        namespace RxpwdenvValC{
            constexpr Register::FieldValue<decltype(rxpwdenv),RxpwdenvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdenv),RxpwdenvVal::v1> v1{};
        }
        ///no description available
        enum class Rxpwd1pt1Val {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the USB full-speed differential receiver.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Rxpwd1pt1Val> rxpwd1pt1{}; 
        namespace Rxpwd1pt1ValC{
            constexpr Register::FieldValue<decltype(rxpwd1pt1),Rxpwd1pt1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwd1pt1),Rxpwd1pt1Val::v1> v1{};
        }
        ///no description available
        enum class RxpwddiffVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Power-down the USB high-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,RxpwddiffVal> rxpwddiff{}; 
        namespace RxpwddiffValC{
            constexpr Register::FieldValue<decltype(rxpwddiff),RxpwddiffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwddiff),RxpwddiffVal::v1> v1{};
        }
        ///no description available
        enum class RxpwdrxVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Power-down the entire USB PHY receiver block except for the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,RxpwdrxVal> rxpwdrx{}; 
        namespace RxpwdrxValC{
            constexpr Register::FieldValue<decltype(rxpwdrx),RxpwdrxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxpwdrx),RxpwdrxVal::v1> v1{};
        }
    }
    namespace UsbphyTx{    ///<USB PHY Transmitter Control Register
        using Addr = Register::Address<0x400a2010,0xe3f0f0f0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dCal{}; 
        namespace DcalValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> txcal45dm{}; 
        namespace Txcal45dmValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> txcal45dp{}; 
        namespace Txcal45dpValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> usbphyTxEdgectrl{}; 
        namespace UsbphytxedgectrlValC{
        }
    }
    namespace UsbphyTxSet{    ///<USB PHY Transmitter Control Register
        using Addr = Register::Address<0x400a2014,0xe3f0f0f0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dCal{}; 
        namespace DcalValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> txcal45dm{}; 
        namespace Txcal45dmValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> txcal45dp{}; 
        namespace Txcal45dpValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> usbphyTxEdgectrl{}; 
        namespace UsbphytxedgectrlValC{
        }
    }
    namespace UsbphyTxClr{    ///<USB PHY Transmitter Control Register
        using Addr = Register::Address<0x400a2018,0xe3f0f0f0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dCal{}; 
        namespace DcalValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> txcal45dm{}; 
        namespace Txcal45dmValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> txcal45dp{}; 
        namespace Txcal45dpValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> usbphyTxEdgectrl{}; 
        namespace UsbphytxedgectrlValC{
        }
    }
    namespace UsbphyTxTog{    ///<USB PHY Transmitter Control Register
        using Addr = Register::Address<0x400a201c,0xe3f0f0f0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dCal{}; 
        namespace DcalValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> txcal45dm{}; 
        namespace Txcal45dmValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> txcal45dp{}; 
        namespace Txcal45dpValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> usbphyTxEdgectrl{}; 
        namespace UsbphytxedgectrlValC{
        }
    }
    namespace UsbphyRx{    ///<USB PHY Receiver Control Register
        using Addr = Register::Address<0x400a2020,0xffbfff88,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> envadj{}; 
        namespace EnvadjValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> disconadj{}; 
        namespace DisconadjValC{
        }
        ///no description available
        enum class RxdbypassVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Use the output of the USB_DP single-ended receiver in place of the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,RxdbypassVal> rxdbypass{}; 
        namespace RxdbypassValC{
            constexpr Register::FieldValue<decltype(rxdbypass),RxdbypassVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxdbypass),RxdbypassVal::v1> v1{};
        }
    }
    namespace UsbphyRxSet{    ///<USB PHY Receiver Control Register
        using Addr = Register::Address<0x400a2024,0xffbfff88,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> envadj{}; 
        namespace EnvadjValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> disconadj{}; 
        namespace DisconadjValC{
        }
        ///no description available
        enum class RxdbypassVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Use the output of the USB_DP single-ended receiver in place of the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,RxdbypassVal> rxdbypass{}; 
        namespace RxdbypassValC{
            constexpr Register::FieldValue<decltype(rxdbypass),RxdbypassVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxdbypass),RxdbypassVal::v1> v1{};
        }
    }
    namespace UsbphyRxClr{    ///<USB PHY Receiver Control Register
        using Addr = Register::Address<0x400a2028,0xffbfff88,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> envadj{}; 
        namespace EnvadjValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> disconadj{}; 
        namespace DisconadjValC{
        }
        ///no description available
        enum class RxdbypassVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Use the output of the USB_DP single-ended receiver in place of the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,RxdbypassVal> rxdbypass{}; 
        namespace RxdbypassValC{
            constexpr Register::FieldValue<decltype(rxdbypass),RxdbypassVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxdbypass),RxdbypassVal::v1> v1{};
        }
    }
    namespace UsbphyRxTog{    ///<USB PHY Receiver Control Register
        using Addr = Register::Address<0x400a202c,0xffbfff88,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> envadj{}; 
        namespace EnvadjValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> disconadj{}; 
        namespace DisconadjValC{
        }
        ///no description available
        enum class RxdbypassVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Use the output of the USB_DP single-ended receiver in place of the full-speed differential receiver
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,RxdbypassVal> rxdbypass{}; 
        namespace RxdbypassValC{
            constexpr Register::FieldValue<decltype(rxdbypass),RxdbypassVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxdbypass),RxdbypassVal::v1> v1{};
        }
    }
    namespace UsbphyCtrl{    ///<USB PHY General Control Register
        using Addr = Register::Address<0x400a2030,0x06e32ffd,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enhostdiscondetect{}; 
        namespace EnhostdiscondetectValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> devpluginIrq{}; 
        namespace DevpluginirqValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enutmilevel2{}; 
        namespace Enutmilevel2ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enutmilevel3{}; 
        namespace Enutmilevel3ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> autoresumeEn{}; 
        namespace AutoresumeenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> enautoclrClkgate{}; 
        namespace EnautoclrclkgateValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> enautoclrPhyPwd{}; 
        namespace EnautoclrphypwdValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fsdllRstEn{}; 
        namespace FsdllrstenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> otgIdValue{}; 
        namespace OtgidvalueValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> hostForceLsSe0{}; 
        namespace Hostforcelsse0ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> utmiSuspendm{}; 
        namespace UtmisuspendmValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        namespace ClkgateValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> sftrst{}; 
        namespace SftrstValC{
        }
    }
    namespace UsbphyCtrlSet{    ///<USB PHY General Control Register
        using Addr = Register::Address<0x400a2034,0x06e32ffd,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enhostdiscondetect{}; 
        namespace EnhostdiscondetectValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> devpluginIrq{}; 
        namespace DevpluginirqValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enutmilevel2{}; 
        namespace Enutmilevel2ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enutmilevel3{}; 
        namespace Enutmilevel3ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> autoresumeEn{}; 
        namespace AutoresumeenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> enautoclrClkgate{}; 
        namespace EnautoclrclkgateValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> enautoclrPhyPwd{}; 
        namespace EnautoclrphypwdValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fsdllRstEn{}; 
        namespace FsdllrstenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> otgIdValue{}; 
        namespace OtgidvalueValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> hostForceLsSe0{}; 
        namespace Hostforcelsse0ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> utmiSuspendm{}; 
        namespace UtmisuspendmValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        namespace ClkgateValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> sftrst{}; 
        namespace SftrstValC{
        }
    }
    namespace UsbphyCtrlClr{    ///<USB PHY General Control Register
        using Addr = Register::Address<0x400a2038,0x06e32ffd,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enhostdiscondetect{}; 
        namespace EnhostdiscondetectValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> devpluginIrq{}; 
        namespace DevpluginirqValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enutmilevel2{}; 
        namespace Enutmilevel2ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enutmilevel3{}; 
        namespace Enutmilevel3ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> autoresumeEn{}; 
        namespace AutoresumeenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> enautoclrClkgate{}; 
        namespace EnautoclrclkgateValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> enautoclrPhyPwd{}; 
        namespace EnautoclrphypwdValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fsdllRstEn{}; 
        namespace FsdllrstenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> otgIdValue{}; 
        namespace OtgidvalueValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> hostForceLsSe0{}; 
        namespace Hostforcelsse0ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> utmiSuspendm{}; 
        namespace UtmisuspendmValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        namespace ClkgateValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> sftrst{}; 
        namespace SftrstValC{
        }
    }
    namespace UsbphyCtrlTog{    ///<USB PHY General Control Register
        using Addr = Register::Address<0x400a203c,0x06e32ffd,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enhostdiscondetect{}; 
        namespace EnhostdiscondetectValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> devpluginIrq{}; 
        namespace DevpluginirqValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enutmilevel2{}; 
        namespace Enutmilevel2ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enutmilevel3{}; 
        namespace Enutmilevel3ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> autoresumeEn{}; 
        namespace AutoresumeenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> enautoclrClkgate{}; 
        namespace EnautoclrclkgateValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> enautoclrPhyPwd{}; 
        namespace EnautoclrphypwdValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fsdllRstEn{}; 
        namespace FsdllrstenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> otgIdValue{}; 
        namespace OtgidvalueValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> hostForceLsSe0{}; 
        namespace Hostforcelsse0ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> utmiSuspendm{}; 
        namespace UtmisuspendmValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        namespace ClkgateValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> sftrst{}; 
        namespace SftrstValC{
        }
    }
    namespace UsbphyStatus{    ///<USB PHY Status Register
        using Addr = Register::Address<0x400a2040,0xfffffab7,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hostdiscondetectStatus{}; 
        namespace HostdiscondetectstatusValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> devpluginStatus{}; 
        namespace DevpluginstatusValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> otgidStatus{}; 
        namespace OtgidstatusValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> resumeStatus{}; 
        namespace ResumestatusValC{
        }
    }
    namespace UsbphyDebug{    ///<USB PHY Debug Register
        using Addr = Register::Address<0x400a2050,0x80e0e0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otgidpiolock{}; 
        namespace OtgidpiolockValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> debugInterfaceHold{}; 
        namespace DebuginterfaceholdValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> hstpulldown{}; 
        namespace HstpulldownValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> enhstpulldown{}; 
        namespace EnhstpulldownValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tx2rxcount{}; 
        namespace Tx2rxcountValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> entx2rxcount{}; 
        namespace Entx2rxcountValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> squelchresetcount{}; 
        namespace SquelchresetcountValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ensquelchreset{}; 
        namespace EnsquelchresetValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> squelchresetlength{}; 
        namespace SquelchresetlengthValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> hostResumeDebug{}; 
        namespace HostresumedebugValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        namespace ClkgateValC{
        }
    }
    namespace UsbphyDebugSet{    ///<USB PHY Debug Register
        using Addr = Register::Address<0x400a2054,0x80e0e0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otgidpiolock{}; 
        namespace OtgidpiolockValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> debugInterfaceHold{}; 
        namespace DebuginterfaceholdValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> hstpulldown{}; 
        namespace HstpulldownValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> enhstpulldown{}; 
        namespace EnhstpulldownValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tx2rxcount{}; 
        namespace Tx2rxcountValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> entx2rxcount{}; 
        namespace Entx2rxcountValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> squelchresetcount{}; 
        namespace SquelchresetcountValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ensquelchreset{}; 
        namespace EnsquelchresetValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> squelchresetlength{}; 
        namespace SquelchresetlengthValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> hostResumeDebug{}; 
        namespace HostresumedebugValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        namespace ClkgateValC{
        }
    }
    namespace UsbphyDebugClr{    ///<USB PHY Debug Register
        using Addr = Register::Address<0x400a2058,0x80e0e0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otgidpiolock{}; 
        namespace OtgidpiolockValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> debugInterfaceHold{}; 
        namespace DebuginterfaceholdValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> hstpulldown{}; 
        namespace HstpulldownValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> enhstpulldown{}; 
        namespace EnhstpulldownValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tx2rxcount{}; 
        namespace Tx2rxcountValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> entx2rxcount{}; 
        namespace Entx2rxcountValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> squelchresetcount{}; 
        namespace SquelchresetcountValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ensquelchreset{}; 
        namespace EnsquelchresetValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> squelchresetlength{}; 
        namespace SquelchresetlengthValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> hostResumeDebug{}; 
        namespace HostresumedebugValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        namespace ClkgateValC{
        }
    }
    namespace UsbphyDebugTog{    ///<USB PHY Debug Register
        using Addr = Register::Address<0x400a205c,0x80e0e0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otgidpiolock{}; 
        namespace OtgidpiolockValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> debugInterfaceHold{}; 
        namespace DebuginterfaceholdValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> hstpulldown{}; 
        namespace HstpulldownValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> enhstpulldown{}; 
        namespace EnhstpulldownValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tx2rxcount{}; 
        namespace Tx2rxcountValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> entx2rxcount{}; 
        namespace Entx2rxcountValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> squelchresetcount{}; 
        namespace SquelchresetcountValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ensquelchreset{}; 
        namespace EnsquelchresetValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> squelchresetlength{}; 
        namespace SquelchresetlengthValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> hostResumeDebug{}; 
        namespace HostresumedebugValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clkgate{}; 
        namespace ClkgateValC{
        }
    }
    namespace UsbphyDebug0Status{    ///<UTMI Debug Status Register 0
        using Addr = Register::Address<0x400a2060,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> loopBackFailCount{}; 
        namespace LoopbackfailcountValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> utmiRxerrorFailCount{}; 
        namespace UtmirxerrorfailcountValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> squelchCount{}; 
        namespace SquelchcountValC{
        }
    }
    namespace UsbphyDebug1{    ///<UTMI Debug Status Register 1
        using Addr = Register::Address<0x400a2070,0xffff9fff,0,unsigned>;
        ///no description available
        enum class EntailadjvdVal {
            v00=0x00000000,     ///<Delay is nominal
            v01=0x00000001,     ///<Delay is +20%
            v10=0x00000002,     ///<Delay is -20%
            v11=0x00000003,     ///<Delay is -40%
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,EntailadjvdVal> entailadjvd{}; 
        namespace EntailadjvdValC{
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v00> v00{};
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v01> v01{};
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v10> v10{};
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v11> v11{};
        }
    }
    namespace UsbphyDebug1Set{    ///<UTMI Debug Status Register 1
        using Addr = Register::Address<0x400a2074,0xffff9fff,0,unsigned>;
        ///no description available
        enum class EntailadjvdVal {
            v00=0x00000000,     ///<Delay is nominal
            v01=0x00000001,     ///<Delay is +20%
            v10=0x00000002,     ///<Delay is -20%
            v11=0x00000003,     ///<Delay is -40%
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,EntailadjvdVal> entailadjvd{}; 
        namespace EntailadjvdValC{
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v00> v00{};
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v01> v01{};
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v10> v10{};
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v11> v11{};
        }
    }
    namespace UsbphyDebug1Clr{    ///<UTMI Debug Status Register 1
        using Addr = Register::Address<0x400a2078,0xffff9fff,0,unsigned>;
        ///no description available
        enum class EntailadjvdVal {
            v00=0x00000000,     ///<Delay is nominal
            v01=0x00000001,     ///<Delay is +20%
            v10=0x00000002,     ///<Delay is -20%
            v11=0x00000003,     ///<Delay is -40%
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,EntailadjvdVal> entailadjvd{}; 
        namespace EntailadjvdValC{
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v00> v00{};
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v01> v01{};
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v10> v10{};
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v11> v11{};
        }
    }
    namespace UsbphyDebug1Tog{    ///<UTMI Debug Status Register 1
        using Addr = Register::Address<0x400a207c,0xffff9fff,0,unsigned>;
        ///no description available
        enum class EntailadjvdVal {
            v00=0x00000000,     ///<Delay is nominal
            v01=0x00000001,     ///<Delay is +20%
            v10=0x00000002,     ///<Delay is -20%
            v11=0x00000003,     ///<Delay is -40%
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,EntailadjvdVal> entailadjvd{}; 
        namespace EntailadjvdValC{
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v00> v00{};
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v01> v01{};
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v10> v10{};
            constexpr Register::FieldValue<decltype(entailadjvd),EntailadjvdVal::v11> v11{};
        }
    }
    namespace UsbphyVersion{    ///<UTMI RTL Version
        using Addr = Register::Address<0x400a2080,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> step{}; 
        namespace StepValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> minor{}; 
        namespace MinorValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> major{}; 
        namespace MajorValC{
        }
    }
    namespace UsbphyPllSic{    ///<USB PHY PLL Control/Status Register
        using Addr = Register::Address<0x400a20a0,0x7ffec7bc,0,unsigned>;
        ///no description available
        enum class PlldivselVal {
            v00=0x00000000,     ///<PLL reference frequency = 24MHz
            v01=0x00000001,     ///<PLL reference frequency = 16MHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PlldivselVal> pllDivSel{}; 
        namespace PlldivselValC{
            constexpr Register::FieldValue<decltype(pllDivSel),PlldivselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pllDivSel),PlldivselVal::v01> v01{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pllEnUsbClks{}; 
        namespace PllenusbclksValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pllHoldRingOff{}; 
        namespace PllholdringoffValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllPower{}; 
        namespace PllpowerValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pllEnable{}; 
        namespace PllenableValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllBypass{}; 
        namespace PllbypassValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pllLock{}; 
        namespace PlllockValC{
        }
    }
    namespace UsbphyPllSicSet{    ///<USB PHY PLL Control/Status Register
        using Addr = Register::Address<0x400a20a4,0x7ffec7bc,0,unsigned>;
        ///no description available
        enum class PlldivselVal {
            v00=0x00000000,     ///<PLL reference frequency = 24MHz
            v01=0x00000001,     ///<PLL reference frequency = 16MHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PlldivselVal> pllDivSel{}; 
        namespace PlldivselValC{
            constexpr Register::FieldValue<decltype(pllDivSel),PlldivselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pllDivSel),PlldivselVal::v01> v01{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pllEnUsbClks{}; 
        namespace PllenusbclksValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pllHoldRingOff{}; 
        namespace PllholdringoffValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllPower{}; 
        namespace PllpowerValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pllEnable{}; 
        namespace PllenableValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllBypass{}; 
        namespace PllbypassValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pllLock{}; 
        namespace PlllockValC{
        }
    }
    namespace UsbphyPllSicClr{    ///<USB PHY PLL Control/Status Register
        using Addr = Register::Address<0x400a20a8,0x7ffec7bc,0,unsigned>;
        ///no description available
        enum class PlldivselVal {
            v00=0x00000000,     ///<PLL reference frequency = 24MHz
            v01=0x00000001,     ///<PLL reference frequency = 16MHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PlldivselVal> pllDivSel{}; 
        namespace PlldivselValC{
            constexpr Register::FieldValue<decltype(pllDivSel),PlldivselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pllDivSel),PlldivselVal::v01> v01{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pllEnUsbClks{}; 
        namespace PllenusbclksValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pllHoldRingOff{}; 
        namespace PllholdringoffValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllPower{}; 
        namespace PllpowerValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pllEnable{}; 
        namespace PllenableValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllBypass{}; 
        namespace PllbypassValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pllLock{}; 
        namespace PlllockValC{
        }
    }
    namespace UsbphyPllSicTog{    ///<USB PHY PLL Control/Status Register
        using Addr = Register::Address<0x400a20ac,0x7ffec7bc,0,unsigned>;
        ///no description available
        enum class PlldivselVal {
            v00=0x00000000,     ///<PLL reference frequency = 24MHz
            v01=0x00000001,     ///<PLL reference frequency = 16MHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PlldivselVal> pllDivSel{}; 
        namespace PlldivselValC{
            constexpr Register::FieldValue<decltype(pllDivSel),PlldivselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pllDivSel),PlldivselVal::v01> v01{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pllEnUsbClks{}; 
        namespace PllenusbclksValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pllHoldRingOff{}; 
        namespace PllholdringoffValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllPower{}; 
        namespace PllpowerValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pllEnable{}; 
        namespace PllenableValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllBypass{}; 
        namespace PllbypassValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pllLock{}; 
        namespace PlllockValC{
        }
    }
    namespace UsbphyUsb1VbusDetect{    ///<USB PHY VBUS Detect Control Register
        using Addr = Register::Address<0x400a20c0,0xf38bfff8,0,unsigned>;
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
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v000> v000{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v001> v001{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v010> v010{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v011> v011{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v100> v100{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v101> v101{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v110> v110{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v111> v111{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> vbusvalidToSessvalid{}; 
        namespace VbusvalidtosessvalidValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> pwrupCmps{}; 
        namespace PwrupcmpsValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dischargeVbus{}; 
        namespace DischargevbusValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> chargeVbus{}; 
        namespace ChargevbusValC{
        }
    }
    namespace UsbphyUsb1VbusDetectSet{    ///<USB PHY VBUS Detect Control Register
        using Addr = Register::Address<0x400a20c4,0xf38bfff8,0,unsigned>;
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
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v000> v000{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v001> v001{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v010> v010{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v011> v011{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v100> v100{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v101> v101{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v110> v110{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v111> v111{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> vbusvalidToSessvalid{}; 
        namespace VbusvalidtosessvalidValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> pwrupCmps{}; 
        namespace PwrupcmpsValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dischargeVbus{}; 
        namespace DischargevbusValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> chargeVbus{}; 
        namespace ChargevbusValC{
        }
    }
    namespace UsbphyUsb1VbusDetectClr{    ///<USB PHY VBUS Detect Control Register
        using Addr = Register::Address<0x400a20c8,0xf38bfff8,0,unsigned>;
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
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v000> v000{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v001> v001{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v010> v010{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v011> v011{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v100> v100{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v101> v101{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v110> v110{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v111> v111{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> vbusvalidToSessvalid{}; 
        namespace VbusvalidtosessvalidValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> pwrupCmps{}; 
        namespace PwrupcmpsValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dischargeVbus{}; 
        namespace DischargevbusValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> chargeVbus{}; 
        namespace ChargevbusValC{
        }
    }
    namespace UsbphyUsb1VbusDetectTog{    ///<USB PHY VBUS Detect Control Register
        using Addr = Register::Address<0x400a20cc,0xf38bfff8,0,unsigned>;
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
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v000> v000{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v001> v001{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v010> v010{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v011> v011{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v100> v100{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v101> v101{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v110> v110{};
            constexpr Register::FieldValue<decltype(vbusvalidThresh),VbusvalidthreshVal::v111> v111{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> vbusvalidToSessvalid{}; 
        namespace VbusvalidtosessvalidValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> pwrupCmps{}; 
        namespace PwrupcmpsValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dischargeVbus{}; 
        namespace DischargevbusValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> chargeVbus{}; 
        namespace ChargevbusValC{
        }
    }
    namespace UsbphyUsb1VbusDetStat{    ///<USB PHY VBUS Detector Status Register
        using Addr = Register::Address<0x400a20d0,0xffffffe0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sessend{}; 
        namespace SessendValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bvalid{}; 
        namespace BvalidValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> avalid{}; 
        namespace AvalidValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vbusValid{}; 
        namespace VbusvalidValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> vbusValid3v{}; 
        namespace Vbusvalid3vValC{
        }
    }
    namespace UsbphyAnactrl{    ///<USB PHY Analog Control Register
        using Addr = Register::Address<0x400a2100,0x7fff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> testclkSel{}; 
        namespace TestclkselValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pfdClkgate{}; 
        namespace PfdclkgateValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pfdClkSel{}; 
        namespace PfdclkselValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,4),Register::ReadWriteAccess,unsigned> pfdFrac{}; 
        namespace PfdfracValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> devPulldown{}; 
        namespace DevpulldownValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> emphPulseCtrl{}; 
        namespace EmphpulsectrlValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> emphEn{}; 
        namespace EmphenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> emphCurCtrl{}; 
        namespace EmphcurctrlValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pfdStable{}; 
        namespace PfdstableValC{
        }
    }
    namespace UsbphyAnactrlSet{    ///<USB PHY Analog Control Register
        using Addr = Register::Address<0x400a2104,0x7fff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> testclkSel{}; 
        namespace TestclkselValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pfdClkgate{}; 
        namespace PfdclkgateValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pfdClkSel{}; 
        namespace PfdclkselValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,4),Register::ReadWriteAccess,unsigned> pfdFrac{}; 
        namespace PfdfracValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> devPulldown{}; 
        namespace DevpulldownValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> emphPulseCtrl{}; 
        namespace EmphpulsectrlValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> emphEn{}; 
        namespace EmphenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> emphCurCtrl{}; 
        namespace EmphcurctrlValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pfdStable{}; 
        namespace PfdstableValC{
        }
    }
    namespace UsbphyAnactrlClr{    ///<USB PHY Analog Control Register
        using Addr = Register::Address<0x400a2108,0x7fff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> testclkSel{}; 
        namespace TestclkselValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pfdClkgate{}; 
        namespace PfdclkgateValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pfdClkSel{}; 
        namespace PfdclkselValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,4),Register::ReadWriteAccess,unsigned> pfdFrac{}; 
        namespace PfdfracValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> devPulldown{}; 
        namespace DevpulldownValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> emphPulseCtrl{}; 
        namespace EmphpulsectrlValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> emphEn{}; 
        namespace EmphenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> emphCurCtrl{}; 
        namespace EmphcurctrlValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pfdStable{}; 
        namespace PfdstableValC{
        }
    }
    namespace UsbphyAnactrlTog{    ///<USB PHY Analog Control Register
        using Addr = Register::Address<0x400a210c,0x7fff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> testclkSel{}; 
        namespace TestclkselValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pfdClkgate{}; 
        namespace PfdclkgateValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pfdClkSel{}; 
        namespace PfdclkselValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,4),Register::ReadWriteAccess,unsigned> pfdFrac{}; 
        namespace PfdfracValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> devPulldown{}; 
        namespace DevpulldownValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> emphPulseCtrl{}; 
        namespace EmphpulsectrlValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> emphEn{}; 
        namespace EmphenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> emphCurCtrl{}; 
        namespace EmphcurctrlValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pfdStable{}; 
        namespace PfdstableValC{
        }
    }
    namespace UsbphyUsb1Loopback{    ///<USB PHY Loopback Control/Status Register
        using Addr = Register::Address<0x400a2110,0xff007e00,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> utmiTeststart{}; 
        namespace UtmiteststartValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> utmiDigTst0{}; 
        namespace Utmidigtst0ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> utmiDigTst1{}; 
        namespace Utmidigtst1ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tstiTxHsMode{}; 
        namespace TstitxhsmodeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tstiTxLsMode{}; 
        namespace TstitxlsmodeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tstiTxEn{}; 
        namespace TstitxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tstiTxHiz{}; 
        namespace TstitxhizValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> utmoDigTst0{}; 
        namespace Utmodigtst0ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> utmoDigTst1{}; 
        namespace Utmodigtst1ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tstiHsfsModeEn{}; 
        namespace TstihsfsmodeenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tstpkt{}; 
        namespace TstpktValC{
        }
    }
    namespace UsbphyUsb1LoopbackSet{    ///<USB PHY Loopback Control/Status Register
        using Addr = Register::Address<0x400a2114,0xff007e00,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> utmiTeststart{}; 
        namespace UtmiteststartValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> utmiDigTst0{}; 
        namespace Utmidigtst0ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> utmiDigTst1{}; 
        namespace Utmidigtst1ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tstiTxHsMode{}; 
        namespace TstitxhsmodeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tstiTxLsMode{}; 
        namespace TstitxlsmodeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tstiTxEn{}; 
        namespace TstitxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tstiTxHiz{}; 
        namespace TstitxhizValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> utmoDigTst0{}; 
        namespace Utmodigtst0ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> utmoDigTst1{}; 
        namespace Utmodigtst1ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tstiHsfsModeEn{}; 
        namespace TstihsfsmodeenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tstpkt{}; 
        namespace TstpktValC{
        }
    }
    namespace UsbphyUsb1LoopbackClr{    ///<USB PHY Loopback Control/Status Register
        using Addr = Register::Address<0x400a2118,0xff007e00,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> utmiTeststart{}; 
        namespace UtmiteststartValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> utmiDigTst0{}; 
        namespace Utmidigtst0ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> utmiDigTst1{}; 
        namespace Utmidigtst1ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tstiTxHsMode{}; 
        namespace TstitxhsmodeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tstiTxLsMode{}; 
        namespace TstitxlsmodeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tstiTxEn{}; 
        namespace TstitxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tstiTxHiz{}; 
        namespace TstitxhizValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> utmoDigTst0{}; 
        namespace Utmodigtst0ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> utmoDigTst1{}; 
        namespace Utmodigtst1ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tstiHsfsModeEn{}; 
        namespace TstihsfsmodeenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tstpkt{}; 
        namespace TstpktValC{
        }
    }
    namespace UsbphyUsb1LoopbackTog{    ///<USB PHY Loopback Control/Status Register
        using Addr = Register::Address<0x400a211c,0xff007e00,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> utmiTeststart{}; 
        namespace UtmiteststartValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> utmiDigTst0{}; 
        namespace Utmidigtst0ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> utmiDigTst1{}; 
        namespace Utmidigtst1ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tstiTxHsMode{}; 
        namespace TstitxhsmodeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tstiTxLsMode{}; 
        namespace TstitxlsmodeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tstiTxEn{}; 
        namespace TstitxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tstiTxHiz{}; 
        namespace TstitxhizValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> utmoDigTst0{}; 
        namespace Utmodigtst0ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> utmoDigTst1{}; 
        namespace Utmodigtst1ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tstiHsfsModeEn{}; 
        namespace TstihsfsmodeenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tstpkt{}; 
        namespace TstpktValC{
        }
    }
    namespace UsbphyUsb1LoopbackHsfscnt{    ///<USB PHY Loopback Packet Number Select Register
        using Addr = Register::Address<0x400a2120,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tstiHsNumber{}; 
        namespace TstihsnumberValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tstiFsNumber{}; 
        namespace TstifsnumberValC{
        }
    }
    namespace UsbphyUsb1LoopbackHsfscntSet{    ///<USB PHY Loopback Packet Number Select Register
        using Addr = Register::Address<0x400a2124,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tstiHsNumber{}; 
        namespace TstihsnumberValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tstiFsNumber{}; 
        namespace TstifsnumberValC{
        }
    }
    namespace UsbphyUsb1LoopbackHsfscntClr{    ///<USB PHY Loopback Packet Number Select Register
        using Addr = Register::Address<0x400a2128,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tstiHsNumber{}; 
        namespace TstihsnumberValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tstiFsNumber{}; 
        namespace TstifsnumberValC{
        }
    }
    namespace UsbphyUsb1LoopbackHsfscntTog{    ///<USB PHY Loopback Packet Number Select Register
        using Addr = Register::Address<0x400a212c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tstiHsNumber{}; 
        namespace TstihsnumberValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tstiFsNumber{}; 
        namespace TstifsnumberValC{
        }
    }
    namespace UsbphyTrimOverrideEn{    ///<USB PHY Trim Override Enable Register
        using Addr = Register::Address<0x400a2130,0x0000ffe0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trimDivSelOverride{}; 
        namespace TrimdivseloverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trimEnvTailAdjVdOverride{}; 
        namespace TrimenvtailadjvdoverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trimTxDCalOverride{}; 
        namespace TrimtxdcaloverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> trimTxCal45dpOverride{}; 
        namespace Trimtxcal45dpoverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trimTxCal45dmOverride{}; 
        namespace Trimtxcal45dmoverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> trimPllCtrl0DivSel{}; 
        namespace Trimpllctrl0divselValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> trimUsbRegEnvTailAdjVd{}; 
        namespace TrimusbregenvtailadjvdValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> trimUsbphyTxDCal{}; 
        namespace TrimusbphytxdcalValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trimUsbphyTxCal45dp{}; 
        namespace Trimusbphytxcal45dpValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> trimUsbphyTxCal45dm{}; 
        namespace Trimusbphytxcal45dmValC{
        }
    }
    namespace UsbphyTrimOverrideEnSet{    ///<USB PHY Trim Override Enable Register
        using Addr = Register::Address<0x400a2134,0x0000ffe0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trimDivSelOverride{}; 
        namespace TrimdivseloverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trimEnvTailAdjVdOverride{}; 
        namespace TrimenvtailadjvdoverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trimTxDCalOverride{}; 
        namespace TrimtxdcaloverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> trimTxCal45dpOverride{}; 
        namespace Trimtxcal45dpoverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trimTxCal45dmOverride{}; 
        namespace Trimtxcal45dmoverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> trimPllCtrl0DivSel{}; 
        namespace Trimpllctrl0divselValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> trimUsbRegEnvTailAdjVd{}; 
        namespace TrimusbregenvtailadjvdValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> trimUsbphyTxDCal{}; 
        namespace TrimusbphytxdcalValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trimUsbphyTxCal45dp{}; 
        namespace Trimusbphytxcal45dpValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> trimUsbphyTxCal45dm{}; 
        namespace Trimusbphytxcal45dmValC{
        }
    }
    namespace UsbphyTrimOverrideEnClr{    ///<USB PHY Trim Override Enable Register
        using Addr = Register::Address<0x400a2138,0x0000ffe0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trimDivSelOverride{}; 
        namespace TrimdivseloverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trimEnvTailAdjVdOverride{}; 
        namespace TrimenvtailadjvdoverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trimTxDCalOverride{}; 
        namespace TrimtxdcaloverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> trimTxCal45dpOverride{}; 
        namespace Trimtxcal45dpoverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trimTxCal45dmOverride{}; 
        namespace Trimtxcal45dmoverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> trimPllCtrl0DivSel{}; 
        namespace Trimpllctrl0divselValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> trimUsbRegEnvTailAdjVd{}; 
        namespace TrimusbregenvtailadjvdValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> trimUsbphyTxDCal{}; 
        namespace TrimusbphytxdcalValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trimUsbphyTxCal45dp{}; 
        namespace Trimusbphytxcal45dpValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> trimUsbphyTxCal45dm{}; 
        namespace Trimusbphytxcal45dmValC{
        }
    }
    namespace UsbphyTrimOverrideEnTog{    ///<USB PHY Trim Override Enable Register
        using Addr = Register::Address<0x400a213c,0x0000ffe0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trimDivSelOverride{}; 
        namespace TrimdivseloverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trimEnvTailAdjVdOverride{}; 
        namespace TrimenvtailadjvdoverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trimTxDCalOverride{}; 
        namespace TrimtxdcaloverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> trimTxCal45dpOverride{}; 
        namespace Trimtxcal45dpoverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trimTxCal45dmOverride{}; 
        namespace Trimtxcal45dmoverrideValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> trimPllCtrl0DivSel{}; 
        namespace Trimpllctrl0divselValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> trimUsbRegEnvTailAdjVd{}; 
        namespace TrimusbregenvtailadjvdValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> trimUsbphyTxDCal{}; 
        namespace TrimusbphytxdcalValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trimUsbphyTxCal45dp{}; 
        namespace Trimusbphytxcal45dpValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> trimUsbphyTxCal45dm{}; 
        namespace Trimusbphytxcal45dmValC{
        }
    }
}
