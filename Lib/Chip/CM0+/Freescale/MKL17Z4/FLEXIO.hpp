#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FLEXIO_verid{
        using Addr = Register::Address<0x4005f000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FEATURE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> MINOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> MAJOR; 
    }
    namespace FLEXIO_param{
        using Addr = Register::Address<0x4005f004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SHIFTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TIMER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TRIGGER; 
    }
    namespace FLEXIO_ctrl{
        using Addr = Register::Address<0x4005f008,0x3ffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLEXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FASTACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DBGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DOZEN; 
    }
    namespace FLEXIO_shiftstat{
        using Addr = Register::Address<0x4005f010,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SSF; 
    }
    namespace FLEXIO_shifterr{
        using Addr = Register::Address<0x4005f014,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEF; 
    }
    namespace FLEXIO_timstat{
        using Addr = Register::Address<0x4005f018,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TSF; 
    }
    namespace FLEXIO_shiftsien{
        using Addr = Register::Address<0x4005f020,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SSIE; 
    }
    namespace FLEXIO_shifteien{
        using Addr = Register::Address<0x4005f024,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEIE; 
    }
    namespace FLEXIO_timien{
        using Addr = Register::Address<0x4005f028,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TEIE; 
    }
    namespace FLEXIO_shiftsden{
        using Addr = Register::Address<0x4005f030,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SSDE; 
    }
    namespace FLEXIO_shiftctl0{
        using Addr = Register::Address<0x4005f080,0xfc7cf878>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PINPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PINCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TIMPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TIMSEL; 
    }
    namespace FLEXIO_shiftctl1{
        using Addr = Register::Address<0x4005f084,0xfc7cf878>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PINPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PINCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TIMPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TIMSEL; 
    }
    namespace FLEXIO_shiftctl2{
        using Addr = Register::Address<0x4005f088,0xfc7cf878>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PINPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PINCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TIMPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TIMSEL; 
    }
    namespace FLEXIO_shiftctl3{
        using Addr = Register::Address<0x4005f08c,0xfc7cf878>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PINPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PINCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TIMPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TIMSEL; 
    }
    namespace FLEXIO_shiftcfg0{
        using Addr = Register::Address<0x4005f100,0xfffffecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INSRC; 
    }
    namespace FLEXIO_shiftcfg1{
        using Addr = Register::Address<0x4005f104,0xfffffecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INSRC; 
    }
    namespace FLEXIO_shiftcfg2{
        using Addr = Register::Address<0x4005f108,0xfffffecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INSRC; 
    }
    namespace FLEXIO_shiftcfg3{
        using Addr = Register::Address<0x4005f10c,0xfffffecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INSRC; 
    }
    namespace FLEXIO_shiftbuf0{
        using Addr = Register::Address<0x4005f200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUF; 
    }
    namespace FLEXIO_shiftbuf1{
        using Addr = Register::Address<0x4005f204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUF; 
    }
    namespace FLEXIO_shiftbuf2{
        using Addr = Register::Address<0x4005f208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUF; 
    }
    namespace FLEXIO_shiftbuf3{
        using Addr = Register::Address<0x4005f20c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUF; 
    }
    namespace FLEXIO_shiftbufbbs0{
        using Addr = Register::Address<0x4005f280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUFBBS; 
    }
    namespace FLEXIO_shiftbufbbs1{
        using Addr = Register::Address<0x4005f284,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUFBBS; 
    }
    namespace FLEXIO_shiftbufbbs2{
        using Addr = Register::Address<0x4005f288,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUFBBS; 
    }
    namespace FLEXIO_shiftbufbbs3{
        using Addr = Register::Address<0x4005f28c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUFBBS; 
    }
    namespace FLEXIO_shiftbufbys0{
        using Addr = Register::Address<0x4005f300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUFBYS; 
    }
    namespace FLEXIO_shiftbufbys1{
        using Addr = Register::Address<0x4005f304,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUFBYS; 
    }
    namespace FLEXIO_shiftbufbys2{
        using Addr = Register::Address<0x4005f308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUFBYS; 
    }
    namespace FLEXIO_shiftbufbys3{
        using Addr = Register::Address<0x4005f30c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUFBYS; 
    }
    namespace FLEXIO_shiftbufbis0{
        using Addr = Register::Address<0x4005f380,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUFBIS; 
    }
    namespace FLEXIO_shiftbufbis1{
        using Addr = Register::Address<0x4005f384,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUFBIS; 
    }
    namespace FLEXIO_shiftbufbis2{
        using Addr = Register::Address<0x4005f388,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUFBIS; 
    }
    namespace FLEXIO_shiftbufbis3{
        using Addr = Register::Address<0x4005f38c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SHIFTBUFBIS; 
    }
    namespace FLEXIO_timctl0{
        using Addr = Register::Address<0x4005f400,0xf03cf87c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TIMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PINPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PINCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TRGSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TRGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRGSEL; 
    }
    namespace FLEXIO_timctl1{
        using Addr = Register::Address<0x4005f404,0xf03cf87c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TIMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PINPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PINCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TRGSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TRGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRGSEL; 
    }
    namespace FLEXIO_timctl2{
        using Addr = Register::Address<0x4005f408,0xf03cf87c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TIMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PINPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PINCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TRGSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TRGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRGSEL; 
    }
    namespace FLEXIO_timctl3{
        using Addr = Register::Address<0x4005f40c,0xf03cf87c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TIMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PINPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PINCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TRGSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TRGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRGSEL; 
    }
    namespace FLEXIO_timcfg0{
        using Addr = Register::Address<0x4005f480,0xfcc888cd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> TIMENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TIMDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> TIMRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> TIMDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TIMOUT; 
    }
    namespace FLEXIO_timcfg1{
        using Addr = Register::Address<0x4005f484,0xfcc888cd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> TIMENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TIMDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> TIMRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> TIMDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TIMOUT; 
    }
    namespace FLEXIO_timcfg2{
        using Addr = Register::Address<0x4005f488,0xfcc888cd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> TIMENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TIMDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> TIMRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> TIMDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TIMOUT; 
    }
    namespace FLEXIO_timcfg3{
        using Addr = Register::Address<0x4005f48c,0xfcc888cd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> TIMENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TIMDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> TIMRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> TIMDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TIMOUT; 
    }
    namespace FLEXIO_timcmp0{
        using Addr = Register::Address<0x4005f500,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMP; 
    }
    namespace FLEXIO_timcmp1{
        using Addr = Register::Address<0x4005f504,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMP; 
    }
    namespace FLEXIO_timcmp2{
        using Addr = Register::Address<0x4005f508,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMP; 
    }
    namespace FLEXIO_timcmp3{
        using Addr = Register::Address<0x4005f50c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMP; 
    }
}
