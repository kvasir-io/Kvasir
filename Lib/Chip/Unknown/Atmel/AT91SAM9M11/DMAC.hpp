#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DMA Controller
    namespace DmacGcfg{    ///<DMAC Global Configuration Register
        using Addr = Register::Address<0xffffec00,0xffffffef,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> arbCfg{}; 
    }
    namespace DmacEn{    ///<DMAC Enable Register
        using Addr = Register::Address<0xffffec04,0xfffffffe,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace DmacSreq{    ///<DMAC Software Single Request Register
        using Addr = Register::Address<0xffffec08,0xffff0000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ssreq0{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsreq0{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ssreq1{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsreq1{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssreq2{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dsreq2{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ssreq3{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dsreq3{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ssreq4{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dsreq4{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ssreq5{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dsreq5{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ssreq6{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dsreq6{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ssreq7{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dsreq7{}; 
    }
    namespace DmacCreq{    ///<DMAC Software Chunk Transfer Request Register
        using Addr = Register::Address<0xffffec0c,0xffff0000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> screq0{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcreq0{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> screq1{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dcreq1{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> screq2{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dcreq2{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> screq3{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcreq3{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> screq4{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dcreq4{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> screq5{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dcreq5{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> screq6{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dcreq6{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> screq7{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dcreq7{}; 
    }
    namespace DmacLast{    ///<DMAC Software Last Transfer Flag Register
        using Addr = Register::Address<0xffffec10,0xffff0000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> slast0{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dlast0{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> slast1{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dlast1{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> slast2{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dlast2{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> slast3{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dlast3{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slast4{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dlast4{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> slast5{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dlast5{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> slast6{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dlast6{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> slast7{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dlast7{}; 
    }
    namespace DmacEbcier{    ///<DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Enable register.
        using Addr = Register::Address<0xffffec18,0xff000000,0x00000000,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err7{}; 
    }
    namespace DmacEbcidr{    ///<DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Disable register.
        using Addr = Register::Address<0xffffec1c,0xff000000,0x00000000,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err7{}; 
    }
    namespace DmacEbcimr{    ///<DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Mask Register.
        using Addr = Register::Address<0xffffec20,0xff000000,0x00000000,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err7{}; 
    }
    namespace DmacEbcisr{    ///<DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Status Register.
        using Addr = Register::Address<0xffffec24,0xff000000,0x00000000,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err7{}; 
    }
    namespace DmacCher{    ///<DMAC Channel Handler Enable Register
        using Addr = Register::Address<0xffffec28,0x00ff0000,0x00000000,unsigned>;
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena0{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena1{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena2{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena3{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena4{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena5{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena6{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena7{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp0{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp1{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp2{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp3{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp4{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp5{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp6{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp7{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep0{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep1{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep2{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep3{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep4{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep5{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep6{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep7{}; 
    }
    namespace DmacChdr{    ///<DMAC Channel Handler Disable Register
        using Addr = Register::Address<0xffffec2c,0xffff0000,0x00000000,unsigned>;
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis0{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis1{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis2{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis3{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis4{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis5{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis6{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis7{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res0{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res1{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res2{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res3{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res4{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res5{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res6{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res7{}; 
    }
    namespace DmacChsr{    ///<DMAC Channel Handler Status Register
        using Addr = Register::Address<0xffffec30,0x00000000,0x00000000,unsigned>;
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena0{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena1{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena2{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena3{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena4{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena5{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena6{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena7{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp0{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp1{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp2{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp3{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp4{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp5{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp6{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp7{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt0{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt1{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt2{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt3{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt4{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt5{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt6{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt7{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal0{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal1{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal2{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal3{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal4{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal5{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal6{}; 
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal7{}; 
    }
    namespace DmacSaddr0{    ///<DMAC Channel Source Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffec3c,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr0{    ///<DMAC Channel Destination Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffec40,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr0{    ///<DMAC Channel Descriptor Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffec44,0x00000000,0x00000000,unsigned>;
        ///
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla0{    ///<DMAC Channel Control A Register (ch_num = 0)
        using Addr = Register::Address<0xffffec48,0x4c880000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk256> chk256{};
        }
        ///
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk256> chk256{};
        }
        ///
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
        }
        ///
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb0{    ///<DMAC Channel Control B Register (ch_num = 0)
        using Addr = Register::Address<0xffffec4c,0x0c0effcc,0x00000000,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDperFc> per2perDperFc{};
        }
        ///
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg0{    ///<DMAC Channel Configuration Register (ch_num = 0)
        using Addr = Register::Address<0xffffec50,0xc88ecc00,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr1{    ///<DMAC Channel Source Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffec64,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr1{    ///<DMAC Channel Destination Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffec68,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr1{    ///<DMAC Channel Descriptor Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffec6c,0x00000000,0x00000000,unsigned>;
        ///
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla1{    ///<DMAC Channel Control A Register (ch_num = 1)
        using Addr = Register::Address<0xffffec70,0x4c880000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk256> chk256{};
        }
        ///
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk256> chk256{};
        }
        ///
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
        }
        ///
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb1{    ///<DMAC Channel Control B Register (ch_num = 1)
        using Addr = Register::Address<0xffffec74,0x0c0effcc,0x00000000,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDperFc> per2perDperFc{};
        }
        ///
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg1{    ///<DMAC Channel Configuration Register (ch_num = 1)
        using Addr = Register::Address<0xffffec78,0xc88ecc00,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr2{    ///<DMAC Channel Source Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffec8c,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr2{    ///<DMAC Channel Destination Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffec90,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr2{    ///<DMAC Channel Descriptor Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffec94,0x00000000,0x00000000,unsigned>;
        ///
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla2{    ///<DMAC Channel Control A Register (ch_num = 2)
        using Addr = Register::Address<0xffffec98,0x4c880000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk256> chk256{};
        }
        ///
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk256> chk256{};
        }
        ///
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
        }
        ///
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb2{    ///<DMAC Channel Control B Register (ch_num = 2)
        using Addr = Register::Address<0xffffec9c,0x0c0effcc,0x00000000,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDperFc> per2perDperFc{};
        }
        ///
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg2{    ///<DMAC Channel Configuration Register (ch_num = 2)
        using Addr = Register::Address<0xffffeca0,0xc88ecc00,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr3{    ///<DMAC Channel Source Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffecb4,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr3{    ///<DMAC Channel Destination Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffecb8,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr3{    ///<DMAC Channel Descriptor Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffecbc,0x00000000,0x00000000,unsigned>;
        ///
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla3{    ///<DMAC Channel Control A Register (ch_num = 3)
        using Addr = Register::Address<0xffffecc0,0x4c880000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk256> chk256{};
        }
        ///
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk256> chk256{};
        }
        ///
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
        }
        ///
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb3{    ///<DMAC Channel Control B Register (ch_num = 3)
        using Addr = Register::Address<0xffffecc4,0x0c0effcc,0x00000000,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDperFc> per2perDperFc{};
        }
        ///
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg3{    ///<DMAC Channel Configuration Register (ch_num = 3)
        using Addr = Register::Address<0xffffecc8,0xc88ecc00,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr4{    ///<DMAC Channel Source Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffecdc,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr4{    ///<DMAC Channel Destination Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffece0,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr4{    ///<DMAC Channel Descriptor Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffece4,0x00000000,0x00000000,unsigned>;
        ///
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla4{    ///<DMAC Channel Control A Register (ch_num = 4)
        using Addr = Register::Address<0xffffece8,0x4c880000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk256> chk256{};
        }
        ///
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk256> chk256{};
        }
        ///
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
        }
        ///
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb4{    ///<DMAC Channel Control B Register (ch_num = 4)
        using Addr = Register::Address<0xffffecec,0x0c0effcc,0x00000000,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDperFc> per2perDperFc{};
        }
        ///
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg4{    ///<DMAC Channel Configuration Register (ch_num = 4)
        using Addr = Register::Address<0xffffecf0,0xc88ecc00,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr5{    ///<DMAC Channel Source Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffed04,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr5{    ///<DMAC Channel Destination Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffed08,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr5{    ///<DMAC Channel Descriptor Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffed0c,0x00000000,0x00000000,unsigned>;
        ///
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla5{    ///<DMAC Channel Control A Register (ch_num = 5)
        using Addr = Register::Address<0xffffed10,0x4c880000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk256> chk256{};
        }
        ///
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk256> chk256{};
        }
        ///
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
        }
        ///
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb5{    ///<DMAC Channel Control B Register (ch_num = 5)
        using Addr = Register::Address<0xffffed14,0x0c0effcc,0x00000000,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDperFc> per2perDperFc{};
        }
        ///
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg5{    ///<DMAC Channel Configuration Register (ch_num = 5)
        using Addr = Register::Address<0xffffed18,0xc88ecc00,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr6{    ///<DMAC Channel Source Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffed2c,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr6{    ///<DMAC Channel Destination Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffed30,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr6{    ///<DMAC Channel Descriptor Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffed34,0x00000000,0x00000000,unsigned>;
        ///
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla6{    ///<DMAC Channel Control A Register (ch_num = 6)
        using Addr = Register::Address<0xffffed38,0x4c880000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk256> chk256{};
        }
        ///
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk256> chk256{};
        }
        ///
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
        }
        ///
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb6{    ///<DMAC Channel Control B Register (ch_num = 6)
        using Addr = Register::Address<0xffffed3c,0x0c0effcc,0x00000000,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDperFc> per2perDperFc{};
        }
        ///
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg6{    ///<DMAC Channel Configuration Register (ch_num = 6)
        using Addr = Register::Address<0xffffed40,0xc88ecc00,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr7{    ///<DMAC Channel Source Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffed54,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr7{    ///<DMAC Channel Destination Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffed58,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr7{    ///<DMAC Channel Descriptor Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffed5c,0x00000000,0x00000000,unsigned>;
        ///
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla7{    ///<DMAC Channel Control A Register (ch_num = 7)
        using Addr = Register::Address<0xffffed60,0x4c880000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk256> chk256{};
        }
        ///
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk256> chk256{};
        }
        ///
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
        }
        ///
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb7{    ///<DMAC Channel Control B Register (ch_num = 7)
        using Addr = Register::Address<0xffffed64,0x0c0effcc,0x00000000,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDperFc> per2perDperFc{};
        }
        ///
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg7{    ///<DMAC Channel Configuration Register (ch_num = 7)
        using Addr = Register::Address<0xffffed68,0xc88ecc00,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xffffede4,0x000000fe,0x00000000,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace DmacWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xffffede8,0xff0000fe,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvsrc{}; 
    }
}
