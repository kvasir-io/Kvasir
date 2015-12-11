#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Ethernet: Precision time protocol
    namespace Noneptptscr{    ///<Ethernet PTP time stamp control
          register
        using Addr = Register::Address<0x40028700,0xfff800c0,0,unsigned>;
        ///Time stamp enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tse{}; 
        ///Time stamp fine or coarse
              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tsfcu{}; 
        ///Time stamp system time
              initialize
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tssti{}; 
        ///Time stamp system time
              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsstu{}; 
        ///Time stamp interrupt trigger
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tsite{}; 
        ///Time stamp addend register
              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ttsaru{}; 
        ///Time stamp snapshot for all received
              frames enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tssarfe{}; 
        ///Time stamp subsecond rollover: digital
              or binary rollover control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tsssr{}; 
        ///Time stamp PTP packet snooping for
              version2 format enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tsptppsv2e{}; 
        ///Time stamp snapshot for PTP over
              ethernet frames enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tssptpoefe{}; 
        ///Time stamp snapshot for IPv6 frames
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tssipv6fe{}; 
        ///Time stamp snapshot for IPv4 frames
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tssipv4fe{}; 
        ///Time stamp snapshot for event message
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tsseme{}; 
        ///Time stamp snapshot for message relevant
              to master enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tssmrme{}; 
        ///Time stamp clock node type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> tscnt{}; 
        ///Time stamp PTP frame filtering MAC
              address enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tspffmae{}; 
    }
    namespace Noneptpssir{    ///<Ethernet PTP subsecond increment
          register
        using Addr = Register::Address<0x40028704,0xffffff00,0,unsigned>;
        ///System time subsecond
              increment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> stssi{}; 
    }
    namespace Noneptptshr{    ///<Ethernet PTP time stamp high
          register
        using Addr = Register::Address<0x40028708,0x00000000,0,unsigned>;
        ///System time second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sts{}; 
    }
    namespace Noneptptslr{    ///<Ethernet PTP time stamp low
          register
        using Addr = Register::Address<0x4002870c,0x00000000,0,unsigned>;
        ///System time subseconds
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> stss{}; 
        ///System time positive or negative
              sign
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stpns{}; 
    }
    namespace Noneptptshur{    ///<Ethernet PTP time stamp high update
          register
        using Addr = Register::Address<0x40028710,0x00000000,0,unsigned>;
        ///Time stamp update second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsus{}; 
    }
    namespace Noneptptslur{    ///<Ethernet PTP time stamp low update
          register
        using Addr = Register::Address<0x40028714,0x00000000,0,unsigned>;
        ///Time stamp update
              subseconds
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> tsuss{}; 
        ///Time stamp update positive or negative
              sign
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tsupns{}; 
    }
    namespace Noneptptsar{    ///<Ethernet PTP time stamp addend
          register
        using Addr = Register::Address<0x40028718,0x00000000,0,unsigned>;
        ///Time stamp addend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsa{}; 
    }
    namespace Noneptptthr{    ///<Ethernet PTP target time high
          register
        using Addr = Register::Address<0x4002871c,0x00000000,0,unsigned>;
        ///Target time stamp high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ttsh{}; 
    }
    namespace Noneptpttlr{    ///<Ethernet PTP target time low
          register
        using Addr = Register::Address<0x40028720,0x00000000,0,unsigned>;
        ///Target time stamp low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ttsl{}; 
    }
    namespace Noneptptssr{    ///<Ethernet PTP time stamp status
          register
        using Addr = Register::Address<0x40028728,0xfffffffc,0,unsigned>;
        ///Time stamp second overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tsso{}; 
        ///Time stamp target time
              reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tsttr{}; 
    }
    namespace Noneptpppscr{    ///<Ethernet PTP PPS control
          register
        using Addr = Register::Address<0x4002872c,0xfffffff0,0,unsigned>;
        ///PPS frequency selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ppsfreq{}; 
    }
}
