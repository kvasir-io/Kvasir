#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Random Number Generator
    namespace RngVer{    ///<RNGB Version ID Register
        using Addr = Register::Address<0x400a0000,0x0fff0000,0,unsigned>;
        ///Minor version number.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> minor{}; 
        ///Major version number.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> major{}; 
        ///Random number generator type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> type{}; 
    }
    namespace RngCmd{    ///<RNGB Command Register
        using Addr = Register::Address<0x400a0004,0xffffff8c,0,unsigned>;
        ///Self test.
        enum class stVal {
            v0=0x00000000,     ///<Not in self test mode.
            v1=0x00000001,     ///<Self test mode.
        };
        namespace stValC{
            constexpr MPL::Value<stVal,stVal::v0> v0{};
            constexpr MPL::Value<stVal,stVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,stVal> st{}; 
        ///Generate seed.
        enum class gsVal {
            v0=0x00000000,     ///<Not in seed generation mode.
            v1=0x00000001,     ///<Generate seed mode.
        };
        namespace gsValC{
            constexpr MPL::Value<gsVal,gsVal::v0> v0{};
            constexpr MPL::Value<gsVal,gsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,gsVal> gs{}; 
        ///Clear interrupt.
        enum class ciVal {
            v0=0x00000000,     ///<Do not clear interrupt.
            v1=0x00000001,     ///<Clear interrupt.
        };
        namespace ciValC{
            constexpr MPL::Value<ciVal,ciVal::v0> v0{};
            constexpr MPL::Value<ciVal,ciVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ciVal> ci{}; 
        ///Clear error.
        enum class ceVal {
            v0=0x00000000,     ///<Do not clear errors and interrupt.
            v1=0x00000001,     ///<Clear errors and interrupt.
        };
        namespace ceValC{
            constexpr MPL::Value<ceVal,ceVal::v0> v0{};
            constexpr MPL::Value<ceVal,ceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ceVal> ce{}; 
        ///Software reset.
        enum class srVal {
            v0=0x00000000,     ///<Do not perform a software reset.
            v1=0x00000001,     ///<Software reset.
        };
        namespace srValC{
            constexpr MPL::Value<srVal,srVal::v0> v0{};
            constexpr MPL::Value<srVal,srVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,srVal> sr{}; 
    }
    namespace RngCr{    ///<RNGB Control Register
        using Addr = Register::Address<0x400a0008,0xffffff8c,0,unsigned>;
        ///FIFO underflow response mode.
        enum class fufmodVal {
            v00=0x00000000,     ///<Return all zeros and set RNG_ESR[FUFE]
            v01=0x00000001,     ///<Return all zeros and set RNG_ESR[FUFE]
            v10=0x00000002,     ///<Generate bus transfer error
            v11=0x00000003,     ///<Generate interrupt and return all zeros (Overrides RNG_CR[MASKERR])
        };
        namespace fufmodValC{
            constexpr MPL::Value<fufmodVal,fufmodVal::v00> v00{};
            constexpr MPL::Value<fufmodVal,fufmodVal::v01> v01{};
            constexpr MPL::Value<fufmodVal,fufmodVal::v10> v10{};
            constexpr MPL::Value<fufmodVal,fufmodVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,fufmodVal> fufmod{}; 
        ///Auto-reseed.
        enum class arVal {
            v0=0x00000000,     ///<Do not enable automatic reseeding.
            v1=0x00000001,     ///<Enable automatic reseeding.
        };
        namespace arValC{
            constexpr MPL::Value<arVal,arVal::v0> v0{};
            constexpr MPL::Value<arVal,arVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,arVal> ar{}; 
        ///Mask done interrupt.
        enum class maskdoneVal {
            v0=0x00000000,     ///<No mask applied.
            v1=0x00000001,     ///<Mask applied.
        };
        namespace maskdoneValC{
            constexpr MPL::Value<maskdoneVal,maskdoneVal::v0> v0{};
            constexpr MPL::Value<maskdoneVal,maskdoneVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,maskdoneVal> maskdone{}; 
        ///Mask error interrupt.
        enum class maskerrVal {
            v0=0x00000000,     ///<No mask applied.
            v1=0x00000001,     ///<Mask applied to the error interrupt.
        };
        namespace maskerrValC{
            constexpr MPL::Value<maskerrVal,maskerrVal::v0> v0{};
            constexpr MPL::Value<maskerrVal,maskerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,maskerrVal> maskerr{}; 
    }
    namespace RngSr{    ///<RNGB Status Register
        using Addr = Register::Address<0x400a000c,0x001e0081,0,unsigned>;
        ///Busy.
        enum class busyVal {
            v0=0x00000000,     ///<Not busy.
            v1=0x00000001,     ///<Busy.
        };
        namespace busyValC{
            constexpr MPL::Value<busyVal,busyVal::v0> v0{};
            constexpr MPL::Value<busyVal,busyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,busyVal> busy{}; 
        ///Sleep.
        enum class slpVal {
            v0=0x00000000,     ///<RNGB is not in sleep mode.
            v1=0x00000001,     ///<RNGB is in sleep mode.
        };
        namespace slpValC{
            constexpr MPL::Value<slpVal,slpVal::v0> v0{};
            constexpr MPL::Value<slpVal,slpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,slpVal> slp{}; 
        ///Reseed needed.
        enum class rsVal {
            v0=0x00000000,     ///<RNGB does not need to be reseeded.
            v1=0x00000001,     ///<RNGB needs to be reseeded.
        };
        namespace rsValC{
            constexpr MPL::Value<rsVal,rsVal::v0> v0{};
            constexpr MPL::Value<rsVal,rsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rsVal> rs{}; 
        ///Self test done.
        enum class stdnVal {
            v0=0x00000000,     ///<Self test not complete.
            v1=0x00000001,     ///<Completed a self test since the last reset.
        };
        namespace stdnValC{
            constexpr MPL::Value<stdnVal,stdnVal::v0> v0{};
            constexpr MPL::Value<stdnVal,stdnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,stdnVal> stdn{}; 
        ///Seed done.
        enum class sdnVal {
            v0=0x00000000,     ///<Seed generation process not complete.
            v1=0x00000001,     ///<Completed seed generation since the last reset.
        };
        namespace sdnValC{
            constexpr MPL::Value<sdnVal,sdnVal::v0> v0{};
            constexpr MPL::Value<sdnVal,sdnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sdnVal> sdn{}; 
        ///New seed done.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nsdn{}; 
        ///FIFO level.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> fifoLvl{}; 
        ///FIFO size.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> fifoSize{}; 
        ///Error.
        enum class errVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<Error detected.
        };
        namespace errValC{
            constexpr MPL::Value<errVal,errVal::v0> v0{};
            constexpr MPL::Value<errVal,errVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,errVal> err{}; 
        ///Self Test Pass Fail.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> stPf{}; 
        ///Statistics test pass fail.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> statpf{}; 
    }
    namespace RngEsr{    ///<RNGB Error Status Register
        using Addr = Register::Address<0x400a0010,0xffffffe0,0,unsigned>;
        ///Linear feedback shift register (LFSR) error.
        enum class lfeVal {
            v0=0x00000000,     ///<LFSRs are working properly.
            v1=0x00000001,     ///<LFSR failure has occurred.
        };
        namespace lfeValC{
            constexpr MPL::Value<lfeVal,lfeVal::v0> v0{};
            constexpr MPL::Value<lfeVal,lfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lfeVal> lfe{}; 
        ///Oscillator error.
        enum class osceVal {
            v0=0x00000000,     ///<RNG oscillator is working properly.
            v1=0x00000001,     ///<Problem detected with the RNG oscillator.
        };
        namespace osceValC{
            constexpr MPL::Value<osceVal,osceVal::v0> v0{};
            constexpr MPL::Value<osceVal,osceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,osceVal> osce{}; 
        ///Self test error.
        enum class steVal {
            v0=0x00000000,     ///<RNGB has not failed self test.
            v1=0x00000001,     ///<RNGB has failed self test.
        };
        namespace steValC{
            constexpr MPL::Value<steVal,steVal::v0> v0{};
            constexpr MPL::Value<steVal,steVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,steVal> ste{}; 
        ///Statistical test error.
        enum class sateVal {
            v0=0x00000000,     ///<RNGB has not failed the statistical tests.
            v1=0x00000001,     ///<RNGB has failed the statistical tests during initialization.
        };
        namespace sateValC{
            constexpr MPL::Value<sateVal,sateVal::v0> v0{};
            constexpr MPL::Value<sateVal,sateVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,sateVal> sate{}; 
        ///FIFO underflow error
        enum class fufeVal {
            v0=0x00000000,     ///<FIFO underflow has not occurred.
            v1=0x00000001,     ///<FIFO underflow has occurred
        };
        namespace fufeValC{
            constexpr MPL::Value<fufeVal,fufeVal::v0> v0{};
            constexpr MPL::Value<fufeVal,fufeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,fufeVal> fufe{}; 
    }
    namespace RngOut{    ///<RNGB Output FIFO
        using Addr = Register::Address<0x400a0014,0x00000000,0,unsigned>;
        ///Random Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> randout{}; 
    }
}
