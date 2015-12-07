#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA Controller 0
    namespace Dmac0Gcfg{    ///<DMAC Global Configuration Register
        using Addr = Register::Address<0xffffec00,0xffffffef,0,unsigned>;
        ///Arbiter Configuration
        enum class ArbcfgVal {
            fixed=0x00000000,     ///<Fixed priority arbiter.
            roundRobin=0x00000001,     ///<Modified round robin arbiter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ArbcfgVal> arbCfg{}; 
        namespace ArbcfgValC{
            constexpr Register::FieldValue<decltype(arbCfg),ArbcfgVal::fixed> fixed{};
            constexpr Register::FieldValue<decltype(arbCfg),ArbcfgVal::roundRobin> roundRobin{};
        }
    }
    namespace Dmac0En{    ///<DMAC Enable Register
        using Addr = Register::Address<0xffffec04,0xfffffffe,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
    }
    namespace Dmac0Sreq{    ///<DMAC Software Single Request Register
        using Addr = Register::Address<0xffffec08,0xffff0000,0,unsigned>;
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ssreq0{}; 
        namespace Ssreq0ValC{
        }
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsreq0{}; 
        namespace Dsreq0ValC{
        }
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ssreq1{}; 
        namespace Ssreq1ValC{
        }
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsreq1{}; 
        namespace Dsreq1ValC{
        }
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssreq2{}; 
        namespace Ssreq2ValC{
        }
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dsreq2{}; 
        namespace Dsreq2ValC{
        }
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ssreq3{}; 
        namespace Ssreq3ValC{
        }
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dsreq3{}; 
        namespace Dsreq3ValC{
        }
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ssreq4{}; 
        namespace Ssreq4ValC{
        }
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dsreq4{}; 
        namespace Dsreq4ValC{
        }
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ssreq5{}; 
        namespace Ssreq5ValC{
        }
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dsreq5{}; 
        namespace Dsreq5ValC{
        }
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ssreq6{}; 
        namespace Ssreq6ValC{
        }
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dsreq6{}; 
        namespace Dsreq6ValC{
        }
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ssreq7{}; 
        namespace Ssreq7ValC{
        }
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dsreq7{}; 
        namespace Dsreq7ValC{
        }
    }
    namespace Dmac0Creq{    ///<DMAC Software Chunk Transfer Request Register
        using Addr = Register::Address<0xffffec0c,0xffff0000,0,unsigned>;
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> screq0{}; 
        namespace Screq0ValC{
        }
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcreq0{}; 
        namespace Dcreq0ValC{
        }
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> screq1{}; 
        namespace Screq1ValC{
        }
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dcreq1{}; 
        namespace Dcreq1ValC{
        }
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> screq2{}; 
        namespace Screq2ValC{
        }
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dcreq2{}; 
        namespace Dcreq2ValC{
        }
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> screq3{}; 
        namespace Screq3ValC{
        }
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcreq3{}; 
        namespace Dcreq3ValC{
        }
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> screq4{}; 
        namespace Screq4ValC{
        }
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dcreq4{}; 
        namespace Dcreq4ValC{
        }
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> screq5{}; 
        namespace Screq5ValC{
        }
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dcreq5{}; 
        namespace Dcreq5ValC{
        }
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> screq6{}; 
        namespace Screq6ValC{
        }
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dcreq6{}; 
        namespace Dcreq6ValC{
        }
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> screq7{}; 
        namespace Screq7ValC{
        }
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dcreq7{}; 
        namespace Dcreq7ValC{
        }
    }
    namespace Dmac0Last{    ///<DMAC Software Last Transfer Flag Register
        using Addr = Register::Address<0xffffec10,0xffff0000,0,unsigned>;
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> slast0{}; 
        namespace Slast0ValC{
        }
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dlast0{}; 
        namespace Dlast0ValC{
        }
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> slast1{}; 
        namespace Slast1ValC{
        }
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dlast1{}; 
        namespace Dlast1ValC{
        }
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> slast2{}; 
        namespace Slast2ValC{
        }
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dlast2{}; 
        namespace Dlast2ValC{
        }
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> slast3{}; 
        namespace Slast3ValC{
        }
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dlast3{}; 
        namespace Dlast3ValC{
        }
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slast4{}; 
        namespace Slast4ValC{
        }
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dlast4{}; 
        namespace Dlast4ValC{
        }
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> slast5{}; 
        namespace Slast5ValC{
        }
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dlast5{}; 
        namespace Dlast5ValC{
        }
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> slast6{}; 
        namespace Slast6ValC{
        }
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dlast6{}; 
        namespace Dlast6ValC{
        }
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> slast7{}; 
        namespace Slast7ValC{
        }
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dlast7{}; 
        namespace Dlast7ValC{
        }
    }
    namespace Dmac0Ebcier{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Enable register.
        using Addr = Register::Address<0xffffec18,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        namespace Btc0ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        namespace Btc1ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        namespace Btc2ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        namespace Btc3ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        namespace Btc4ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        namespace Btc5ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        namespace Btc6ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        namespace Btc7ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        namespace Cbtc0ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        namespace Cbtc1ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        namespace Cbtc2ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        namespace Cbtc3ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        namespace Cbtc4ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        namespace Cbtc5ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        namespace Cbtc6ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        namespace Cbtc7ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        namespace Err0ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        namespace Err1ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        namespace Err2ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        namespace Err3ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        namespace Err4ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        namespace Err5ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        namespace Err6ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
        namespace Err7ValC{
        }
    }
    namespace Dmac0Ebcidr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Disable register.
        using Addr = Register::Address<0xffffec1c,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        namespace Btc0ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        namespace Btc1ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        namespace Btc2ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        namespace Btc3ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        namespace Btc4ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        namespace Btc5ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        namespace Btc6ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        namespace Btc7ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        namespace Cbtc0ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        namespace Cbtc1ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        namespace Cbtc2ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        namespace Cbtc3ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        namespace Cbtc4ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        namespace Cbtc5ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        namespace Cbtc6ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        namespace Cbtc7ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        namespace Err0ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        namespace Err1ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        namespace Err2ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        namespace Err3ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        namespace Err4ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        namespace Err5ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        namespace Err6ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
        namespace Err7ValC{
        }
    }
    namespace Dmac0Ebcimr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Mask Register.
        using Addr = Register::Address<0xffffec20,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        namespace Btc0ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        namespace Btc1ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        namespace Btc2ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        namespace Btc3ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        namespace Btc4ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        namespace Btc5ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        namespace Btc6ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        namespace Btc7ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        namespace Cbtc0ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        namespace Cbtc1ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        namespace Cbtc2ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        namespace Cbtc3ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        namespace Cbtc4ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        namespace Cbtc5ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        namespace Cbtc6ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        namespace Cbtc7ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        namespace Err0ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        namespace Err1ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        namespace Err2ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        namespace Err3ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        namespace Err4ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        namespace Err5ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        namespace Err6ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
        namespace Err7ValC{
        }
    }
    namespace Dmac0Ebcisr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Status Register.
        using Addr = Register::Address<0xffffec24,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        namespace Btc0ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        namespace Btc1ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        namespace Btc2ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        namespace Btc3ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        namespace Btc4ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        namespace Btc5ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        namespace Btc6ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        namespace Btc7ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        namespace Cbtc0ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        namespace Cbtc1ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        namespace Cbtc2ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        namespace Cbtc3ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        namespace Cbtc4ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        namespace Cbtc5ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        namespace Cbtc6ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        namespace Cbtc7ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        namespace Err0ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        namespace Err1ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        namespace Err2ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        namespace Err3ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        namespace Err4ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        namespace Err5ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        namespace Err6ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
        namespace Err7ValC{
        }
    }
    namespace Dmac0Cher{    ///<DMAC Channel Handler Enable Register
        using Addr = Register::Address<0xffffec28,0x00ff0000,0,unsigned>;
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        namespace Ena0ValC{
        }
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        namespace Ena1ValC{
        }
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        namespace Ena2ValC{
        }
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        namespace Ena3ValC{
        }
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        namespace Ena4ValC{
        }
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        namespace Ena5ValC{
        }
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        namespace Ena6ValC{
        }
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        namespace Ena7ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> susp0{}; 
        namespace Susp0ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp1{}; 
        namespace Susp1ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp2{}; 
        namespace Susp2ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp3{}; 
        namespace Susp3ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> susp4{}; 
        namespace Susp4ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> susp5{}; 
        namespace Susp5ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> susp6{}; 
        namespace Susp6ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> susp7{}; 
        namespace Susp7ValC{
        }
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> keep0{}; 
        namespace Keep0ValC{
        }
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> keep1{}; 
        namespace Keep1ValC{
        }
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> keep2{}; 
        namespace Keep2ValC{
        }
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> keep3{}; 
        namespace Keep3ValC{
        }
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> keep4{}; 
        namespace Keep4ValC{
        }
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> keep5{}; 
        namespace Keep5ValC{
        }
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> keep6{}; 
        namespace Keep6ValC{
        }
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> keep7{}; 
        namespace Keep7ValC{
        }
    }
    namespace Dmac0Chdr{    ///<DMAC Channel Handler Disable Register
        using Addr = Register::Address<0xffffec2c,0xffff0000,0,unsigned>;
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dis0{}; 
        namespace Dis0ValC{
        }
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis1{}; 
        namespace Dis1ValC{
        }
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dis2{}; 
        namespace Dis2ValC{
        }
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dis3{}; 
        namespace Dis3ValC{
        }
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dis4{}; 
        namespace Dis4ValC{
        }
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dis5{}; 
        namespace Dis5ValC{
        }
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dis6{}; 
        namespace Dis6ValC{
        }
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dis7{}; 
        namespace Dis7ValC{
        }
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> res0{}; 
        namespace Res0ValC{
        }
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> res1{}; 
        namespace Res1ValC{
        }
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> res2{}; 
        namespace Res2ValC{
        }
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> res3{}; 
        namespace Res3ValC{
        }
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> res4{}; 
        namespace Res4ValC{
        }
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> res5{}; 
        namespace Res5ValC{
        }
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> res6{}; 
        namespace Res6ValC{
        }
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> res7{}; 
        namespace Res7ValC{
        }
    }
    namespace Dmac0Chsr{    ///<DMAC Channel Handler Status Register
        using Addr = Register::Address<0xffffec30,0x00000000,0,unsigned>;
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        namespace Ena0ValC{
        }
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        namespace Ena1ValC{
        }
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        namespace Ena2ValC{
        }
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        namespace Ena3ValC{
        }
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        namespace Ena4ValC{
        }
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        namespace Ena5ValC{
        }
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        namespace Ena6ValC{
        }
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        namespace Ena7ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> susp0{}; 
        namespace Susp0ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp1{}; 
        namespace Susp1ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp2{}; 
        namespace Susp2ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp3{}; 
        namespace Susp3ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> susp4{}; 
        namespace Susp4ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> susp5{}; 
        namespace Susp5ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> susp6{}; 
        namespace Susp6ValC{
        }
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> susp7{}; 
        namespace Susp7ValC{
        }
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> empt0{}; 
        namespace Empt0ValC{
        }
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> empt1{}; 
        namespace Empt1ValC{
        }
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> empt2{}; 
        namespace Empt2ValC{
        }
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> empt3{}; 
        namespace Empt3ValC{
        }
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> empt4{}; 
        namespace Empt4ValC{
        }
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> empt5{}; 
        namespace Empt5ValC{
        }
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> empt6{}; 
        namespace Empt6ValC{
        }
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> empt7{}; 
        namespace Empt7ValC{
        }
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> stal0{}; 
        namespace Stal0ValC{
        }
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> stal1{}; 
        namespace Stal1ValC{
        }
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> stal2{}; 
        namespace Stal2ValC{
        }
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> stal3{}; 
        namespace Stal3ValC{
        }
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> stal4{}; 
        namespace Stal4ValC{
        }
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> stal5{}; 
        namespace Stal5ValC{
        }
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> stal6{}; 
        namespace Stal6ValC{
        }
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stal7{}; 
        namespace Stal7ValC{
        }
    }
    namespace Dmac0Saddr0{    ///<DMAC Channel Source Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffec3c,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace Dmac0Daddr0{    ///<DMAC Channel Destination Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffec40,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace Dmac0Dscr0{    ///<DMAC Channel Descriptor Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffec44,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace Dmac0Ctrla0{    ///<DMAC Channel Control A Register (ch_num = 0)
        using Addr = Register::Address<0xffffec48,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        namespace ScsizeValC{
        }
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        namespace DcsizeValC{
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Dmac0Ctrlb0{    ///<DMAC Channel Control B Register (ch_num = 0)
        using Addr = Register::Address<0xffffec4c,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        namespace FcValC{
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg0{    ///<DMAC Channel Configuration Register (ch_num = 0)
        using Addr = Register::Address<0xffffec50,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::hw> hw{};
        }
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::hw> hw{};
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod),SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod),SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB),LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip0{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 0)
        using Addr = Register::Address<0xffffec54,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        namespace SpipholeValC{
        }
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
        namespace SpipboundaryValC{
        }
    }
    namespace Dmac0Dpip0{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 0)
        using Addr = Register::Address<0xffffec58,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        namespace DpipholeValC{
        }
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
        namespace DpipboundaryValC{
        }
    }
    namespace Dmac0Saddr1{    ///<DMAC Channel Source Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffec64,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace Dmac0Daddr1{    ///<DMAC Channel Destination Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffec68,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace Dmac0Dscr1{    ///<DMAC Channel Descriptor Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffec6c,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace Dmac0Ctrla1{    ///<DMAC Channel Control A Register (ch_num = 1)
        using Addr = Register::Address<0xffffec70,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        namespace ScsizeValC{
        }
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        namespace DcsizeValC{
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Dmac0Ctrlb1{    ///<DMAC Channel Control B Register (ch_num = 1)
        using Addr = Register::Address<0xffffec74,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        namespace FcValC{
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg1{    ///<DMAC Channel Configuration Register (ch_num = 1)
        using Addr = Register::Address<0xffffec78,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::hw> hw{};
        }
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::hw> hw{};
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod),SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod),SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB),LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip1{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 1)
        using Addr = Register::Address<0xffffec7c,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        namespace SpipholeValC{
        }
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
        namespace SpipboundaryValC{
        }
    }
    namespace Dmac0Dpip1{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 1)
        using Addr = Register::Address<0xffffec80,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        namespace DpipholeValC{
        }
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
        namespace DpipboundaryValC{
        }
    }
    namespace Dmac0Saddr2{    ///<DMAC Channel Source Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffec8c,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace Dmac0Daddr2{    ///<DMAC Channel Destination Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffec90,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace Dmac0Dscr2{    ///<DMAC Channel Descriptor Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffec94,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace Dmac0Ctrla2{    ///<DMAC Channel Control A Register (ch_num = 2)
        using Addr = Register::Address<0xffffec98,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        namespace ScsizeValC{
        }
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        namespace DcsizeValC{
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Dmac0Ctrlb2{    ///<DMAC Channel Control B Register (ch_num = 2)
        using Addr = Register::Address<0xffffec9c,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        namespace FcValC{
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg2{    ///<DMAC Channel Configuration Register (ch_num = 2)
        using Addr = Register::Address<0xffffeca0,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::hw> hw{};
        }
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::hw> hw{};
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod),SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod),SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB),LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip2{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 2)
        using Addr = Register::Address<0xffffeca4,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        namespace SpipholeValC{
        }
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
        namespace SpipboundaryValC{
        }
    }
    namespace Dmac0Dpip2{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 2)
        using Addr = Register::Address<0xffffeca8,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        namespace DpipholeValC{
        }
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
        namespace DpipboundaryValC{
        }
    }
    namespace Dmac0Saddr3{    ///<DMAC Channel Source Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffecb4,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace Dmac0Daddr3{    ///<DMAC Channel Destination Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffecb8,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace Dmac0Dscr3{    ///<DMAC Channel Descriptor Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffecbc,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace Dmac0Ctrla3{    ///<DMAC Channel Control A Register (ch_num = 3)
        using Addr = Register::Address<0xffffecc0,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        namespace ScsizeValC{
        }
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        namespace DcsizeValC{
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Dmac0Ctrlb3{    ///<DMAC Channel Control B Register (ch_num = 3)
        using Addr = Register::Address<0xffffecc4,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        namespace FcValC{
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg3{    ///<DMAC Channel Configuration Register (ch_num = 3)
        using Addr = Register::Address<0xffffecc8,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::hw> hw{};
        }
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::hw> hw{};
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod),SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod),SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB),LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip3{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 3)
        using Addr = Register::Address<0xffffeccc,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        namespace SpipholeValC{
        }
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
        namespace SpipboundaryValC{
        }
    }
    namespace Dmac0Dpip3{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 3)
        using Addr = Register::Address<0xffffecd0,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        namespace DpipholeValC{
        }
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
        namespace DpipboundaryValC{
        }
    }
    namespace Dmac0Saddr4{    ///<DMAC Channel Source Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffecdc,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace Dmac0Daddr4{    ///<DMAC Channel Destination Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffece0,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace Dmac0Dscr4{    ///<DMAC Channel Descriptor Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffece4,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace Dmac0Ctrla4{    ///<DMAC Channel Control A Register (ch_num = 4)
        using Addr = Register::Address<0xffffece8,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        namespace ScsizeValC{
        }
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        namespace DcsizeValC{
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Dmac0Ctrlb4{    ///<DMAC Channel Control B Register (ch_num = 4)
        using Addr = Register::Address<0xffffecec,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        namespace FcValC{
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg4{    ///<DMAC Channel Configuration Register (ch_num = 4)
        using Addr = Register::Address<0xffffecf0,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::hw> hw{};
        }
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::hw> hw{};
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod),SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod),SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB),LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip4{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 4)
        using Addr = Register::Address<0xffffecf4,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        namespace SpipholeValC{
        }
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
        namespace SpipboundaryValC{
        }
    }
    namespace Dmac0Dpip4{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 4)
        using Addr = Register::Address<0xffffecf8,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        namespace DpipholeValC{
        }
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
        namespace DpipboundaryValC{
        }
    }
    namespace Dmac0Saddr5{    ///<DMAC Channel Source Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffed04,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace Dmac0Daddr5{    ///<DMAC Channel Destination Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffed08,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace Dmac0Dscr5{    ///<DMAC Channel Descriptor Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffed0c,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace Dmac0Ctrla5{    ///<DMAC Channel Control A Register (ch_num = 5)
        using Addr = Register::Address<0xffffed10,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        namespace ScsizeValC{
        }
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        namespace DcsizeValC{
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Dmac0Ctrlb5{    ///<DMAC Channel Control B Register (ch_num = 5)
        using Addr = Register::Address<0xffffed14,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        namespace FcValC{
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg5{    ///<DMAC Channel Configuration Register (ch_num = 5)
        using Addr = Register::Address<0xffffed18,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::hw> hw{};
        }
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::hw> hw{};
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod),SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod),SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB),LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip5{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 5)
        using Addr = Register::Address<0xffffed1c,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        namespace SpipholeValC{
        }
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
        namespace SpipboundaryValC{
        }
    }
    namespace Dmac0Dpip5{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 5)
        using Addr = Register::Address<0xffffed20,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        namespace DpipholeValC{
        }
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
        namespace DpipboundaryValC{
        }
    }
    namespace Dmac0Saddr6{    ///<DMAC Channel Source Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffed2c,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace Dmac0Daddr6{    ///<DMAC Channel Destination Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffed30,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace Dmac0Dscr6{    ///<DMAC Channel Descriptor Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffed34,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace Dmac0Ctrla6{    ///<DMAC Channel Control A Register (ch_num = 6)
        using Addr = Register::Address<0xffffed38,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        namespace ScsizeValC{
        }
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        namespace DcsizeValC{
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Dmac0Ctrlb6{    ///<DMAC Channel Control B Register (ch_num = 6)
        using Addr = Register::Address<0xffffed3c,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        namespace FcValC{
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg6{    ///<DMAC Channel Configuration Register (ch_num = 6)
        using Addr = Register::Address<0xffffed40,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::hw> hw{};
        }
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::hw> hw{};
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod),SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod),SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB),LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip6{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 6)
        using Addr = Register::Address<0xffffed44,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        namespace SpipholeValC{
        }
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
        namespace SpipboundaryValC{
        }
    }
    namespace Dmac0Dpip6{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 6)
        using Addr = Register::Address<0xffffed48,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        namespace DpipholeValC{
        }
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
        namespace DpipboundaryValC{
        }
    }
    namespace Dmac0Saddr7{    ///<DMAC Channel Source Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffed54,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace Dmac0Daddr7{    ///<DMAC Channel Destination Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffed58,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace Dmac0Dscr7{    ///<DMAC Channel Descriptor Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffed5c,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace Dmac0Ctrla7{    ///<DMAC Channel Control A Register (ch_num = 7)
        using Addr = Register::Address<0xffffed60,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        namespace ScsizeValC{
        }
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        namespace DcsizeValC{
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Dmac0Ctrlb7{    ///<DMAC Channel Control B Register (ch_num = 7)
        using Addr = Register::Address<0xffffed64,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip),SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip),DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        namespace FcValC{
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg7{    ///<DMAC Channel Configuration Register (ch_num = 7)
        using Addr = Register::Address<0xffffed68,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep),SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::hw> hw{};
        }
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep),DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::hw> hw{};
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod),SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod),SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB),LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip7{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 7)
        using Addr = Register::Address<0xffffed6c,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        namespace SpipholeValC{
        }
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
        namespace SpipboundaryValC{
        }
    }
    namespace Dmac0Dpip7{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 7)
        using Addr = Register::Address<0xffffed70,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        namespace DpipholeValC{
        }
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
        namespace DpipboundaryValC{
        }
    }
    namespace Dmac0Wpmr{    ///<DMAC Write Protect Mode Register
        using Addr = Register::Address<0xffffede4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        namespace WpenValC{
        }
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
        namespace WpkeyValC{
        }
    }
    namespace Dmac0Wpsr{    ///<DMAC Write Protect Status Register
        using Addr = Register::Address<0xffffede8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        namespace WpvsValC{
        }
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
        namespace WpvsrcValC{
        }
    }
}
