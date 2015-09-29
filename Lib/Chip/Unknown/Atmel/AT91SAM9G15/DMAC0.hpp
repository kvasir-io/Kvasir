#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA Controller 0
    namespace Dmac0Gcfg{    ///<DMAC Global Configuration Register
        using Addr = Register::Address<0xffffec00,0xffffffef,0,unsigned>;
        ///Arbiter Configuration
        enum class arbCfgVal {
            fixed=0x00000000,     ///<Fixed priority arbiter.
            roundRobin=0x00000001,     ///<Modified round robin arbiter.
        };
        namespace arbCfgValC{
            constexpr MPL::Value<arbCfgVal,arbCfgVal::fixed> fixed{};
            constexpr MPL::Value<arbCfgVal,arbCfgVal::roundRobin> roundRobin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,arbCfgVal> arbCfg{}; 
    }
    namespace Dmac0En{    ///<DMAC Enable Register
        using Addr = Register::Address<0xffffec04,0xfffffffe,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Dmac0Sreq{    ///<DMAC Software Single Request Register
        using Addr = Register::Address<0xffffec08,0xffff0000,0,unsigned>;
        ///Source Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ssreq0{}; 
        ///Destination Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsreq0{}; 
        ///Source Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ssreq1{}; 
        ///Destination Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsreq1{}; 
        ///Source Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssreq2{}; 
        ///Destination Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dsreq2{}; 
        ///Source Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ssreq3{}; 
        ///Destination Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dsreq3{}; 
        ///Source Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ssreq4{}; 
        ///Destination Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dsreq4{}; 
        ///Source Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ssreq5{}; 
        ///Destination Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dsreq5{}; 
        ///Source Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ssreq6{}; 
        ///Destination Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dsreq6{}; 
        ///Source Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ssreq7{}; 
        ///Destination Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dsreq7{}; 
    }
    namespace Dmac0Creq{    ///<DMAC Software Chunk Transfer Request Register
        using Addr = Register::Address<0xffffec0c,0xffff0000,0,unsigned>;
        ///Source Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> screq0{}; 
        ///Destination Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcreq0{}; 
        ///Source Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> screq1{}; 
        ///Destination Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dcreq1{}; 
        ///Source Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> screq2{}; 
        ///Destination Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dcreq2{}; 
        ///Source Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> screq3{}; 
        ///Destination Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcreq3{}; 
        ///Source Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> screq4{}; 
        ///Destination Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dcreq4{}; 
        ///Source Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> screq5{}; 
        ///Destination Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dcreq5{}; 
        ///Source Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> screq6{}; 
        ///Destination Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dcreq6{}; 
        ///Source Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> screq7{}; 
        ///Destination Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dcreq7{}; 
    }
    namespace Dmac0Last{    ///<DMAC Software Last Transfer Flag Register
        using Addr = Register::Address<0xffffec10,0xffff0000,0,unsigned>;
        ///Source Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> slast0{}; 
        ///Destination Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dlast0{}; 
        ///Source Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> slast1{}; 
        ///Destination Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dlast1{}; 
        ///Source Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> slast2{}; 
        ///Destination Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dlast2{}; 
        ///Source Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> slast3{}; 
        ///Destination Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dlast3{}; 
        ///Source Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slast4{}; 
        ///Destination Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dlast4{}; 
        ///Source Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> slast5{}; 
        ///Destination Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dlast5{}; 
        ///Source Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> slast6{}; 
        ///Destination Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dlast6{}; 
        ///Source Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> slast7{}; 
        ///Destination Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dlast7{}; 
    }
    namespace Dmac0Ebcier{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Enable register.
        using Addr = Register::Address<0xffffec18,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
    }
    namespace Dmac0Ebcidr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Disable register.
        using Addr = Register::Address<0xffffec1c,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
    }
    namespace Dmac0Ebcimr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Mask Register.
        using Addr = Register::Address<0xffffec20,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
    }
    namespace Dmac0Ebcisr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Status Register.
        using Addr = Register::Address<0xffffec24,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
    }
    namespace Dmac0Cher{    ///<DMAC Channel Handler Enable Register
        using Addr = Register::Address<0xffffec28,0x00ff0000,0,unsigned>;
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> susp0{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp1{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp2{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp3{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> susp4{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> susp5{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> susp6{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> susp7{}; 
        ///Keep on [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> keep0{}; 
        ///Keep on [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> keep1{}; 
        ///Keep on [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> keep2{}; 
        ///Keep on [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> keep3{}; 
        ///Keep on [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> keep4{}; 
        ///Keep on [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> keep5{}; 
        ///Keep on [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> keep6{}; 
        ///Keep on [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> keep7{}; 
    }
    namespace Dmac0Chdr{    ///<DMAC Channel Handler Disable Register
        using Addr = Register::Address<0xffffec2c,0xffff0000,0,unsigned>;
        ///Disable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dis0{}; 
        ///Disable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis1{}; 
        ///Disable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dis2{}; 
        ///Disable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dis3{}; 
        ///Disable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dis4{}; 
        ///Disable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dis5{}; 
        ///Disable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dis6{}; 
        ///Disable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dis7{}; 
        ///Resume [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> res0{}; 
        ///Resume [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> res1{}; 
        ///Resume [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> res2{}; 
        ///Resume [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> res3{}; 
        ///Resume [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> res4{}; 
        ///Resume [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> res5{}; 
        ///Resume [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> res6{}; 
        ///Resume [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> res7{}; 
    }
    namespace Dmac0Chsr{    ///<DMAC Channel Handler Status Register
        using Addr = Register::Address<0xffffec30,0x00000000,0,unsigned>;
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        ///Enable [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> susp0{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp1{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp2{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp3{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> susp4{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> susp5{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> susp6{}; 
        ///Suspend [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> susp7{}; 
        ///Empty [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> empt0{}; 
        ///Empty [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> empt1{}; 
        ///Empty [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> empt2{}; 
        ///Empty [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> empt3{}; 
        ///Empty [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> empt4{}; 
        ///Empty [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> empt5{}; 
        ///Empty [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> empt6{}; 
        ///Empty [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> empt7{}; 
        ///Stalled [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> stal0{}; 
        ///Stalled [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> stal1{}; 
        ///Stalled [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> stal2{}; 
        ///Stalled [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> stal3{}; 
        ///Stalled [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> stal4{}; 
        ///Stalled [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> stal5{}; 
        ///Stalled [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> stal6{}; 
        ///Stalled [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stal7{}; 
    }
    namespace Dmac0Saddr0{    ///<DMAC Channel Source Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffec3c,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr0{    ///<DMAC Channel Destination Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffec40,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr0{    ///<DMAC Channel Descriptor Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffec44,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///Buffer Transfer Descriptor Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla0{    ///<DMAC Channel Control A Register (ch_num = 0)
        using Addr = Register::Address<0xffffec48,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///Transfer Width for the Destination
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb0{    ///<DMAC Channel Control B Register (ch_num = 0)
        using Addr = Register::Address<0xffffec4c,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///Source Picture-in-Picture Mode
        enum class srcPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        namespace srcPipValC{
            constexpr MPL::Value<srcPipVal,srcPipVal::disable> disable{};
            constexpr MPL::Value<srcPipVal,srcPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcPipVal> srcPip{}; 
        ///Destination Picture-in-Picture Mode
        enum class dstPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        namespace dstPipValC{
            constexpr MPL::Value<dstPipVal,dstPipVal::disable> disable{};
            constexpr MPL::Value<dstPipVal,dstPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstPipVal> dstPip{}; 
        ///Source Address Descriptor
        enum class srcDscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        namespace srcDscrValC{
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,srcDscrVal> srcDscr{}; 
        ///Destination Address Descriptor
        enum class dstDscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        namespace dstDscrValC{
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dstDscrVal> dstDscr{}; 
        ///Flow Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::disable> disable{};
            constexpr MPL::Value<auto_Val,auto_Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,auto_Val> auto_{}; 
    }
    namespace Dmac0Cfg0{    ///<DMAC Channel Configuration Register (ch_num = 0)
        using Addr = Register::Address<0xffffec50,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class srcRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        namespace srcRepValC{
            constexpr MPL::Value<srcRepVal,srcRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<srcRepVal,srcRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcRepVal> srcRep{}; 
        ///Software or Hardware Selection for the Source
        enum class srcH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace srcH2selValC{
            constexpr MPL::Value<srcH2selVal,srcH2selVal::sw> sw{};
            constexpr MPL::Value<srcH2selVal,srcH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,srcH2selVal> srcH2sel{}; 
        ///Destination Reloaded from Previous
        enum class dstRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        namespace dstRepValC{
            constexpr MPL::Value<dstRepVal,dstRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<dstRepVal,dstRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstRepVal> dstRep{}; 
        ///Software or Hardware Selection for the Destination
        enum class dstH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace dstH2selValC{
            constexpr MPL::Value<dstH2selVal,dstH2selVal::sw> sw{};
            constexpr MPL::Value<dstH2selVal,dstH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dstH2selVal> dstH2sel{}; 
        ///Stop On Done
        enum class sodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        namespace sodValC{
            constexpr MPL::Value<sodVal,sodVal::disable> disable{};
            constexpr MPL::Value<sodVal,sodVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sodVal> sod{}; 
        ///Interface Lock
        enum class lockIfVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        namespace lockIfValC{
            constexpr MPL::Value<lockIfVal,lockIfVal::disable> disable{};
            constexpr MPL::Value<lockIfVal,lockIfVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,lockIfVal> lockIf{}; 
        ///Bus Lock
        enum class lockBVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        namespace lockBValC{
            constexpr MPL::Value<lockBVal,lockBVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,lockBVal> lockB{}; 
        ///Master Interface Arbiter Lock
        enum class lockIfLVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        namespace lockIfLValC{
            constexpr MPL::Value<lockIfLVal,lockIfLVal::chunk> chunk{};
            constexpr MPL::Value<lockIfLVal,lockIfLVal::buffer> buffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,lockIfLVal> lockIfL{}; 
        ///AHB Protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace Dmac0Spip0{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 0)
        using Addr = Register::Address<0xffffec54,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip0{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 0)
        using Addr = Register::Address<0xffffec58,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Saddr1{    ///<DMAC Channel Source Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffec64,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr1{    ///<DMAC Channel Destination Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffec68,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr1{    ///<DMAC Channel Descriptor Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffec6c,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///Buffer Transfer Descriptor Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla1{    ///<DMAC Channel Control A Register (ch_num = 1)
        using Addr = Register::Address<0xffffec70,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///Transfer Width for the Destination
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb1{    ///<DMAC Channel Control B Register (ch_num = 1)
        using Addr = Register::Address<0xffffec74,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///Source Picture-in-Picture Mode
        enum class srcPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        namespace srcPipValC{
            constexpr MPL::Value<srcPipVal,srcPipVal::disable> disable{};
            constexpr MPL::Value<srcPipVal,srcPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcPipVal> srcPip{}; 
        ///Destination Picture-in-Picture Mode
        enum class dstPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        namespace dstPipValC{
            constexpr MPL::Value<dstPipVal,dstPipVal::disable> disable{};
            constexpr MPL::Value<dstPipVal,dstPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstPipVal> dstPip{}; 
        ///Source Address Descriptor
        enum class srcDscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        namespace srcDscrValC{
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,srcDscrVal> srcDscr{}; 
        ///Destination Address Descriptor
        enum class dstDscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        namespace dstDscrValC{
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dstDscrVal> dstDscr{}; 
        ///Flow Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::disable> disable{};
            constexpr MPL::Value<auto_Val,auto_Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,auto_Val> auto_{}; 
    }
    namespace Dmac0Cfg1{    ///<DMAC Channel Configuration Register (ch_num = 1)
        using Addr = Register::Address<0xffffec78,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class srcRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        namespace srcRepValC{
            constexpr MPL::Value<srcRepVal,srcRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<srcRepVal,srcRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcRepVal> srcRep{}; 
        ///Software or Hardware Selection for the Source
        enum class srcH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace srcH2selValC{
            constexpr MPL::Value<srcH2selVal,srcH2selVal::sw> sw{};
            constexpr MPL::Value<srcH2selVal,srcH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,srcH2selVal> srcH2sel{}; 
        ///Destination Reloaded from Previous
        enum class dstRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        namespace dstRepValC{
            constexpr MPL::Value<dstRepVal,dstRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<dstRepVal,dstRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstRepVal> dstRep{}; 
        ///Software or Hardware Selection for the Destination
        enum class dstH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace dstH2selValC{
            constexpr MPL::Value<dstH2selVal,dstH2selVal::sw> sw{};
            constexpr MPL::Value<dstH2selVal,dstH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dstH2selVal> dstH2sel{}; 
        ///Stop On Done
        enum class sodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        namespace sodValC{
            constexpr MPL::Value<sodVal,sodVal::disable> disable{};
            constexpr MPL::Value<sodVal,sodVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sodVal> sod{}; 
        ///Interface Lock
        enum class lockIfVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        namespace lockIfValC{
            constexpr MPL::Value<lockIfVal,lockIfVal::disable> disable{};
            constexpr MPL::Value<lockIfVal,lockIfVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,lockIfVal> lockIf{}; 
        ///Bus Lock
        enum class lockBVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        namespace lockBValC{
            constexpr MPL::Value<lockBVal,lockBVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,lockBVal> lockB{}; 
        ///Master Interface Arbiter Lock
        enum class lockIfLVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        namespace lockIfLValC{
            constexpr MPL::Value<lockIfLVal,lockIfLVal::chunk> chunk{};
            constexpr MPL::Value<lockIfLVal,lockIfLVal::buffer> buffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,lockIfLVal> lockIfL{}; 
        ///AHB Protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace Dmac0Spip1{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 1)
        using Addr = Register::Address<0xffffec7c,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip1{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 1)
        using Addr = Register::Address<0xffffec80,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Saddr2{    ///<DMAC Channel Source Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffec8c,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr2{    ///<DMAC Channel Destination Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffec90,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr2{    ///<DMAC Channel Descriptor Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffec94,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///Buffer Transfer Descriptor Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla2{    ///<DMAC Channel Control A Register (ch_num = 2)
        using Addr = Register::Address<0xffffec98,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///Transfer Width for the Destination
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb2{    ///<DMAC Channel Control B Register (ch_num = 2)
        using Addr = Register::Address<0xffffec9c,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///Source Picture-in-Picture Mode
        enum class srcPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        namespace srcPipValC{
            constexpr MPL::Value<srcPipVal,srcPipVal::disable> disable{};
            constexpr MPL::Value<srcPipVal,srcPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcPipVal> srcPip{}; 
        ///Destination Picture-in-Picture Mode
        enum class dstPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        namespace dstPipValC{
            constexpr MPL::Value<dstPipVal,dstPipVal::disable> disable{};
            constexpr MPL::Value<dstPipVal,dstPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstPipVal> dstPip{}; 
        ///Source Address Descriptor
        enum class srcDscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        namespace srcDscrValC{
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,srcDscrVal> srcDscr{}; 
        ///Destination Address Descriptor
        enum class dstDscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        namespace dstDscrValC{
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dstDscrVal> dstDscr{}; 
        ///Flow Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::disable> disable{};
            constexpr MPL::Value<auto_Val,auto_Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,auto_Val> auto_{}; 
    }
    namespace Dmac0Cfg2{    ///<DMAC Channel Configuration Register (ch_num = 2)
        using Addr = Register::Address<0xffffeca0,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class srcRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        namespace srcRepValC{
            constexpr MPL::Value<srcRepVal,srcRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<srcRepVal,srcRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcRepVal> srcRep{}; 
        ///Software or Hardware Selection for the Source
        enum class srcH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace srcH2selValC{
            constexpr MPL::Value<srcH2selVal,srcH2selVal::sw> sw{};
            constexpr MPL::Value<srcH2selVal,srcH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,srcH2selVal> srcH2sel{}; 
        ///Destination Reloaded from Previous
        enum class dstRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        namespace dstRepValC{
            constexpr MPL::Value<dstRepVal,dstRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<dstRepVal,dstRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstRepVal> dstRep{}; 
        ///Software or Hardware Selection for the Destination
        enum class dstH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace dstH2selValC{
            constexpr MPL::Value<dstH2selVal,dstH2selVal::sw> sw{};
            constexpr MPL::Value<dstH2selVal,dstH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dstH2selVal> dstH2sel{}; 
        ///Stop On Done
        enum class sodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        namespace sodValC{
            constexpr MPL::Value<sodVal,sodVal::disable> disable{};
            constexpr MPL::Value<sodVal,sodVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sodVal> sod{}; 
        ///Interface Lock
        enum class lockIfVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        namespace lockIfValC{
            constexpr MPL::Value<lockIfVal,lockIfVal::disable> disable{};
            constexpr MPL::Value<lockIfVal,lockIfVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,lockIfVal> lockIf{}; 
        ///Bus Lock
        enum class lockBVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        namespace lockBValC{
            constexpr MPL::Value<lockBVal,lockBVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,lockBVal> lockB{}; 
        ///Master Interface Arbiter Lock
        enum class lockIfLVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        namespace lockIfLValC{
            constexpr MPL::Value<lockIfLVal,lockIfLVal::chunk> chunk{};
            constexpr MPL::Value<lockIfLVal,lockIfLVal::buffer> buffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,lockIfLVal> lockIfL{}; 
        ///AHB Protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace Dmac0Spip2{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 2)
        using Addr = Register::Address<0xffffeca4,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip2{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 2)
        using Addr = Register::Address<0xffffeca8,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Saddr3{    ///<DMAC Channel Source Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffecb4,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr3{    ///<DMAC Channel Destination Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffecb8,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr3{    ///<DMAC Channel Descriptor Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffecbc,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///Buffer Transfer Descriptor Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla3{    ///<DMAC Channel Control A Register (ch_num = 3)
        using Addr = Register::Address<0xffffecc0,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///Transfer Width for the Destination
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb3{    ///<DMAC Channel Control B Register (ch_num = 3)
        using Addr = Register::Address<0xffffecc4,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///Source Picture-in-Picture Mode
        enum class srcPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        namespace srcPipValC{
            constexpr MPL::Value<srcPipVal,srcPipVal::disable> disable{};
            constexpr MPL::Value<srcPipVal,srcPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcPipVal> srcPip{}; 
        ///Destination Picture-in-Picture Mode
        enum class dstPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        namespace dstPipValC{
            constexpr MPL::Value<dstPipVal,dstPipVal::disable> disable{};
            constexpr MPL::Value<dstPipVal,dstPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstPipVal> dstPip{}; 
        ///Source Address Descriptor
        enum class srcDscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        namespace srcDscrValC{
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,srcDscrVal> srcDscr{}; 
        ///Destination Address Descriptor
        enum class dstDscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        namespace dstDscrValC{
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dstDscrVal> dstDscr{}; 
        ///Flow Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::disable> disable{};
            constexpr MPL::Value<auto_Val,auto_Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,auto_Val> auto_{}; 
    }
    namespace Dmac0Cfg3{    ///<DMAC Channel Configuration Register (ch_num = 3)
        using Addr = Register::Address<0xffffecc8,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class srcRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        namespace srcRepValC{
            constexpr MPL::Value<srcRepVal,srcRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<srcRepVal,srcRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcRepVal> srcRep{}; 
        ///Software or Hardware Selection for the Source
        enum class srcH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace srcH2selValC{
            constexpr MPL::Value<srcH2selVal,srcH2selVal::sw> sw{};
            constexpr MPL::Value<srcH2selVal,srcH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,srcH2selVal> srcH2sel{}; 
        ///Destination Reloaded from Previous
        enum class dstRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        namespace dstRepValC{
            constexpr MPL::Value<dstRepVal,dstRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<dstRepVal,dstRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstRepVal> dstRep{}; 
        ///Software or Hardware Selection for the Destination
        enum class dstH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace dstH2selValC{
            constexpr MPL::Value<dstH2selVal,dstH2selVal::sw> sw{};
            constexpr MPL::Value<dstH2selVal,dstH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dstH2selVal> dstH2sel{}; 
        ///Stop On Done
        enum class sodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        namespace sodValC{
            constexpr MPL::Value<sodVal,sodVal::disable> disable{};
            constexpr MPL::Value<sodVal,sodVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sodVal> sod{}; 
        ///Interface Lock
        enum class lockIfVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        namespace lockIfValC{
            constexpr MPL::Value<lockIfVal,lockIfVal::disable> disable{};
            constexpr MPL::Value<lockIfVal,lockIfVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,lockIfVal> lockIf{}; 
        ///Bus Lock
        enum class lockBVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        namespace lockBValC{
            constexpr MPL::Value<lockBVal,lockBVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,lockBVal> lockB{}; 
        ///Master Interface Arbiter Lock
        enum class lockIfLVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        namespace lockIfLValC{
            constexpr MPL::Value<lockIfLVal,lockIfLVal::chunk> chunk{};
            constexpr MPL::Value<lockIfLVal,lockIfLVal::buffer> buffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,lockIfLVal> lockIfL{}; 
        ///AHB Protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace Dmac0Spip3{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 3)
        using Addr = Register::Address<0xffffeccc,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip3{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 3)
        using Addr = Register::Address<0xffffecd0,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Saddr4{    ///<DMAC Channel Source Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffecdc,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr4{    ///<DMAC Channel Destination Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffece0,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr4{    ///<DMAC Channel Descriptor Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffece4,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///Buffer Transfer Descriptor Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla4{    ///<DMAC Channel Control A Register (ch_num = 4)
        using Addr = Register::Address<0xffffece8,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///Transfer Width for the Destination
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb4{    ///<DMAC Channel Control B Register (ch_num = 4)
        using Addr = Register::Address<0xffffecec,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///Source Picture-in-Picture Mode
        enum class srcPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        namespace srcPipValC{
            constexpr MPL::Value<srcPipVal,srcPipVal::disable> disable{};
            constexpr MPL::Value<srcPipVal,srcPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcPipVal> srcPip{}; 
        ///Destination Picture-in-Picture Mode
        enum class dstPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        namespace dstPipValC{
            constexpr MPL::Value<dstPipVal,dstPipVal::disable> disable{};
            constexpr MPL::Value<dstPipVal,dstPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstPipVal> dstPip{}; 
        ///Source Address Descriptor
        enum class srcDscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        namespace srcDscrValC{
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,srcDscrVal> srcDscr{}; 
        ///Destination Address Descriptor
        enum class dstDscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        namespace dstDscrValC{
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dstDscrVal> dstDscr{}; 
        ///Flow Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::disable> disable{};
            constexpr MPL::Value<auto_Val,auto_Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,auto_Val> auto_{}; 
    }
    namespace Dmac0Cfg4{    ///<DMAC Channel Configuration Register (ch_num = 4)
        using Addr = Register::Address<0xffffecf0,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class srcRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        namespace srcRepValC{
            constexpr MPL::Value<srcRepVal,srcRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<srcRepVal,srcRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcRepVal> srcRep{}; 
        ///Software or Hardware Selection for the Source
        enum class srcH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace srcH2selValC{
            constexpr MPL::Value<srcH2selVal,srcH2selVal::sw> sw{};
            constexpr MPL::Value<srcH2selVal,srcH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,srcH2selVal> srcH2sel{}; 
        ///Destination Reloaded from Previous
        enum class dstRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        namespace dstRepValC{
            constexpr MPL::Value<dstRepVal,dstRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<dstRepVal,dstRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstRepVal> dstRep{}; 
        ///Software or Hardware Selection for the Destination
        enum class dstH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace dstH2selValC{
            constexpr MPL::Value<dstH2selVal,dstH2selVal::sw> sw{};
            constexpr MPL::Value<dstH2selVal,dstH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dstH2selVal> dstH2sel{}; 
        ///Stop On Done
        enum class sodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        namespace sodValC{
            constexpr MPL::Value<sodVal,sodVal::disable> disable{};
            constexpr MPL::Value<sodVal,sodVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sodVal> sod{}; 
        ///Interface Lock
        enum class lockIfVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        namespace lockIfValC{
            constexpr MPL::Value<lockIfVal,lockIfVal::disable> disable{};
            constexpr MPL::Value<lockIfVal,lockIfVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,lockIfVal> lockIf{}; 
        ///Bus Lock
        enum class lockBVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        namespace lockBValC{
            constexpr MPL::Value<lockBVal,lockBVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,lockBVal> lockB{}; 
        ///Master Interface Arbiter Lock
        enum class lockIfLVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        namespace lockIfLValC{
            constexpr MPL::Value<lockIfLVal,lockIfLVal::chunk> chunk{};
            constexpr MPL::Value<lockIfLVal,lockIfLVal::buffer> buffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,lockIfLVal> lockIfL{}; 
        ///AHB Protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace Dmac0Spip4{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 4)
        using Addr = Register::Address<0xffffecf4,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip4{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 4)
        using Addr = Register::Address<0xffffecf8,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Saddr5{    ///<DMAC Channel Source Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffed04,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr5{    ///<DMAC Channel Destination Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffed08,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr5{    ///<DMAC Channel Descriptor Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffed0c,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///Buffer Transfer Descriptor Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla5{    ///<DMAC Channel Control A Register (ch_num = 5)
        using Addr = Register::Address<0xffffed10,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///Transfer Width for the Destination
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb5{    ///<DMAC Channel Control B Register (ch_num = 5)
        using Addr = Register::Address<0xffffed14,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///Source Picture-in-Picture Mode
        enum class srcPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        namespace srcPipValC{
            constexpr MPL::Value<srcPipVal,srcPipVal::disable> disable{};
            constexpr MPL::Value<srcPipVal,srcPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcPipVal> srcPip{}; 
        ///Destination Picture-in-Picture Mode
        enum class dstPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        namespace dstPipValC{
            constexpr MPL::Value<dstPipVal,dstPipVal::disable> disable{};
            constexpr MPL::Value<dstPipVal,dstPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstPipVal> dstPip{}; 
        ///Source Address Descriptor
        enum class srcDscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        namespace srcDscrValC{
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,srcDscrVal> srcDscr{}; 
        ///Destination Address Descriptor
        enum class dstDscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        namespace dstDscrValC{
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dstDscrVal> dstDscr{}; 
        ///Flow Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::disable> disable{};
            constexpr MPL::Value<auto_Val,auto_Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,auto_Val> auto_{}; 
    }
    namespace Dmac0Cfg5{    ///<DMAC Channel Configuration Register (ch_num = 5)
        using Addr = Register::Address<0xffffed18,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class srcRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        namespace srcRepValC{
            constexpr MPL::Value<srcRepVal,srcRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<srcRepVal,srcRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcRepVal> srcRep{}; 
        ///Software or Hardware Selection for the Source
        enum class srcH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace srcH2selValC{
            constexpr MPL::Value<srcH2selVal,srcH2selVal::sw> sw{};
            constexpr MPL::Value<srcH2selVal,srcH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,srcH2selVal> srcH2sel{}; 
        ///Destination Reloaded from Previous
        enum class dstRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        namespace dstRepValC{
            constexpr MPL::Value<dstRepVal,dstRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<dstRepVal,dstRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstRepVal> dstRep{}; 
        ///Software or Hardware Selection for the Destination
        enum class dstH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace dstH2selValC{
            constexpr MPL::Value<dstH2selVal,dstH2selVal::sw> sw{};
            constexpr MPL::Value<dstH2selVal,dstH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dstH2selVal> dstH2sel{}; 
        ///Stop On Done
        enum class sodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        namespace sodValC{
            constexpr MPL::Value<sodVal,sodVal::disable> disable{};
            constexpr MPL::Value<sodVal,sodVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sodVal> sod{}; 
        ///Interface Lock
        enum class lockIfVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        namespace lockIfValC{
            constexpr MPL::Value<lockIfVal,lockIfVal::disable> disable{};
            constexpr MPL::Value<lockIfVal,lockIfVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,lockIfVal> lockIf{}; 
        ///Bus Lock
        enum class lockBVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        namespace lockBValC{
            constexpr MPL::Value<lockBVal,lockBVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,lockBVal> lockB{}; 
        ///Master Interface Arbiter Lock
        enum class lockIfLVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        namespace lockIfLValC{
            constexpr MPL::Value<lockIfLVal,lockIfLVal::chunk> chunk{};
            constexpr MPL::Value<lockIfLVal,lockIfLVal::buffer> buffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,lockIfLVal> lockIfL{}; 
        ///AHB Protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace Dmac0Spip5{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 5)
        using Addr = Register::Address<0xffffed1c,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip5{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 5)
        using Addr = Register::Address<0xffffed20,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Saddr6{    ///<DMAC Channel Source Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffed2c,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr6{    ///<DMAC Channel Destination Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffed30,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr6{    ///<DMAC Channel Descriptor Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffed34,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///Buffer Transfer Descriptor Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla6{    ///<DMAC Channel Control A Register (ch_num = 6)
        using Addr = Register::Address<0xffffed38,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///Transfer Width for the Destination
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb6{    ///<DMAC Channel Control B Register (ch_num = 6)
        using Addr = Register::Address<0xffffed3c,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///Source Picture-in-Picture Mode
        enum class srcPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        namespace srcPipValC{
            constexpr MPL::Value<srcPipVal,srcPipVal::disable> disable{};
            constexpr MPL::Value<srcPipVal,srcPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcPipVal> srcPip{}; 
        ///Destination Picture-in-Picture Mode
        enum class dstPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        namespace dstPipValC{
            constexpr MPL::Value<dstPipVal,dstPipVal::disable> disable{};
            constexpr MPL::Value<dstPipVal,dstPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstPipVal> dstPip{}; 
        ///Source Address Descriptor
        enum class srcDscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        namespace srcDscrValC{
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,srcDscrVal> srcDscr{}; 
        ///Destination Address Descriptor
        enum class dstDscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        namespace dstDscrValC{
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dstDscrVal> dstDscr{}; 
        ///Flow Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::disable> disable{};
            constexpr MPL::Value<auto_Val,auto_Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,auto_Val> auto_{}; 
    }
    namespace Dmac0Cfg6{    ///<DMAC Channel Configuration Register (ch_num = 6)
        using Addr = Register::Address<0xffffed40,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class srcRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        namespace srcRepValC{
            constexpr MPL::Value<srcRepVal,srcRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<srcRepVal,srcRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcRepVal> srcRep{}; 
        ///Software or Hardware Selection for the Source
        enum class srcH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace srcH2selValC{
            constexpr MPL::Value<srcH2selVal,srcH2selVal::sw> sw{};
            constexpr MPL::Value<srcH2selVal,srcH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,srcH2selVal> srcH2sel{}; 
        ///Destination Reloaded from Previous
        enum class dstRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        namespace dstRepValC{
            constexpr MPL::Value<dstRepVal,dstRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<dstRepVal,dstRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstRepVal> dstRep{}; 
        ///Software or Hardware Selection for the Destination
        enum class dstH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace dstH2selValC{
            constexpr MPL::Value<dstH2selVal,dstH2selVal::sw> sw{};
            constexpr MPL::Value<dstH2selVal,dstH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dstH2selVal> dstH2sel{}; 
        ///Stop On Done
        enum class sodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        namespace sodValC{
            constexpr MPL::Value<sodVal,sodVal::disable> disable{};
            constexpr MPL::Value<sodVal,sodVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sodVal> sod{}; 
        ///Interface Lock
        enum class lockIfVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        namespace lockIfValC{
            constexpr MPL::Value<lockIfVal,lockIfVal::disable> disable{};
            constexpr MPL::Value<lockIfVal,lockIfVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,lockIfVal> lockIf{}; 
        ///Bus Lock
        enum class lockBVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        namespace lockBValC{
            constexpr MPL::Value<lockBVal,lockBVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,lockBVal> lockB{}; 
        ///Master Interface Arbiter Lock
        enum class lockIfLVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        namespace lockIfLValC{
            constexpr MPL::Value<lockIfLVal,lockIfLVal::chunk> chunk{};
            constexpr MPL::Value<lockIfLVal,lockIfLVal::buffer> buffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,lockIfLVal> lockIfL{}; 
        ///AHB Protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace Dmac0Spip6{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 6)
        using Addr = Register::Address<0xffffed44,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip6{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 6)
        using Addr = Register::Address<0xffffed48,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Saddr7{    ///<DMAC Channel Source Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffed54,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr7{    ///<DMAC Channel Destination Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffed58,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr7{    ///<DMAC Channel Descriptor Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffed5c,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///Buffer Transfer Descriptor Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla7{    ///<DMAC Channel Control A Register (ch_num = 7)
        using Addr = Register::Address<0xffffed60,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///Transfer Width for the Destination
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb7{    ///<DMAC Channel Control B Register (ch_num = 7)
        using Addr = Register::Address<0xffffed64,0x0c0eeecc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIf0> ahbIf0{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///Source Picture-in-Picture Mode
        enum class srcPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        namespace srcPipValC{
            constexpr MPL::Value<srcPipVal,srcPipVal::disable> disable{};
            constexpr MPL::Value<srcPipVal,srcPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcPipVal> srcPip{}; 
        ///Destination Picture-in-Picture Mode
        enum class dstPipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        namespace dstPipValC{
            constexpr MPL::Value<dstPipVal,dstPipVal::disable> disable{};
            constexpr MPL::Value<dstPipVal,dstPipVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstPipVal> dstPip{}; 
        ///Source Address Descriptor
        enum class srcDscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        namespace srcDscrValC{
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,srcDscrVal> srcDscr{}; 
        ///Destination Address Descriptor
        enum class dstDscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        namespace dstDscrValC{
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dstDscrVal> dstDscr{}; 
        ///Flow Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::disable> disable{};
            constexpr MPL::Value<auto_Val,auto_Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,auto_Val> auto_{}; 
    }
    namespace Dmac0Cfg7{    ///<DMAC Channel Configuration Register (ch_num = 7)
        using Addr = Register::Address<0xffffed68,0xc88ecc00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class srcRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        namespace srcRepValC{
            constexpr MPL::Value<srcRepVal,srcRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<srcRepVal,srcRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srcRepVal> srcRep{}; 
        ///Software or Hardware Selection for the Source
        enum class srcH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace srcH2selValC{
            constexpr MPL::Value<srcH2selVal,srcH2selVal::sw> sw{};
            constexpr MPL::Value<srcH2selVal,srcH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,srcH2selVal> srcH2sel{}; 
        ///Destination Reloaded from Previous
        enum class dstRepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        namespace dstRepValC{
            constexpr MPL::Value<dstRepVal,dstRepVal::contiguousAddr> contiguousAddr{};
            constexpr MPL::Value<dstRepVal,dstRepVal::reloadAddr> reloadAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dstRepVal> dstRep{}; 
        ///Software or Hardware Selection for the Destination
        enum class dstH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace dstH2selValC{
            constexpr MPL::Value<dstH2selVal,dstH2selVal::sw> sw{};
            constexpr MPL::Value<dstH2selVal,dstH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dstH2selVal> dstH2sel{}; 
        ///Stop On Done
        enum class sodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        namespace sodValC{
            constexpr MPL::Value<sodVal,sodVal::disable> disable{};
            constexpr MPL::Value<sodVal,sodVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sodVal> sod{}; 
        ///Interface Lock
        enum class lockIfVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        namespace lockIfValC{
            constexpr MPL::Value<lockIfVal,lockIfVal::disable> disable{};
            constexpr MPL::Value<lockIfVal,lockIfVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,lockIfVal> lockIf{}; 
        ///Bus Lock
        enum class lockBVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        namespace lockBValC{
            constexpr MPL::Value<lockBVal,lockBVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,lockBVal> lockB{}; 
        ///Master Interface Arbiter Lock
        enum class lockIfLVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        namespace lockIfLValC{
            constexpr MPL::Value<lockIfLVal,lockIfLVal::chunk> chunk{};
            constexpr MPL::Value<lockIfLVal,lockIfLVal::buffer> buffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,lockIfLVal> lockIfL{}; 
        ///AHB Protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace Dmac0Spip7{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 7)
        using Addr = Register::Address<0xffffed6c,0xfc000000,0,unsigned>;
        ///Source Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip7{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 7)
        using Addr = Register::Address<0xffffed70,0xfc000000,0,unsigned>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Wpmr{    ///<DMAC Write Protect Mode Register
        using Addr = Register::Address<0xffffede4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace Dmac0Wpsr{    ///<DMAC Write Protect Status Register
        using Addr = Register::Address<0xffffede8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
}
