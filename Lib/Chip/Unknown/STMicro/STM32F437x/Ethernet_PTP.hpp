#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Ethernet: Precision time protocol
    namespace Noneptptscr{    ///<Ethernet PTP time stamp control
          register
        using Addr = Register::Address<0x40028700,0xfff800c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tse{}; 
        namespace TseValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tsfcu{}; 
        namespace TsfcuValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tsptppsv2e{}; 
        namespace Tsptppsv2eValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tssptpoefe{}; 
        namespace TssptpoefeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tssipv6fe{}; 
        namespace Tssipv6feValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tssipv4fe{}; 
        namespace Tssipv4feValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tsseme{}; 
        namespace TssemeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tssmrme{}; 
        namespace TssmrmeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> tscnt{}; 
        namespace TscntValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tspffmae{}; 
        namespace TspffmaeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tssti{}; 
        namespace TsstiValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsstu{}; 
        namespace TsstuValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tsite{}; 
        namespace TsiteValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ttsaru{}; 
        namespace TtsaruValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tssarfe{}; 
        namespace TssarfeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tsssr{}; 
        namespace TsssrValC{
        }
    }
    namespace Noneptpssir{    ///<Ethernet PTP subsecond increment
          register
        using Addr = Register::Address<0x40028704,0xffffff00,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> stssi{}; 
        namespace StssiValC{
        }
    }
    namespace Noneptptshr{    ///<Ethernet PTP time stamp high
          register
        using Addr = Register::Address<0x40028708,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sts{}; 
        namespace StsValC{
        }
    }
    namespace Noneptptslr{    ///<Ethernet PTP time stamp low
          register
        using Addr = Register::Address<0x4002870c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> stss{}; 
        namespace StssValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stpns{}; 
        namespace StpnsValC{
        }
    }
    namespace Noneptptshur{    ///<Ethernet PTP time stamp high update
          register
        using Addr = Register::Address<0x40028710,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsus{}; 
        namespace TsusValC{
        }
    }
    namespace Noneptptslur{    ///<Ethernet PTP time stamp low update
          register
        using Addr = Register::Address<0x40028714,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> tsuss{}; 
        namespace TsussValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tsupns{}; 
        namespace TsupnsValC{
        }
    }
    namespace Noneptptsar{    ///<Ethernet PTP time stamp addend
          register
        using Addr = Register::Address<0x40028718,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsa{}; 
        namespace TsaValC{
        }
    }
    namespace Noneptptthr{    ///<Ethernet PTP target time high
          register
        using Addr = Register::Address<0x4002871c,0x00000000,0,unsigned>;
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ttsh{}; 
        namespace TtshValC{
        }
    }
    namespace Noneptpttlr{    ///<Ethernet PTP target time low
          register
        using Addr = Register::Address<0x40028720,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ttsl{}; 
        namespace TtslValC{
        }
    }
    namespace Noneptptssr{    ///<Ethernet PTP time stamp status
          register
        using Addr = Register::Address<0x40028728,0xfffffffc,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tsso{}; 
        namespace TssoValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tsttr{}; 
        namespace TsttrValC{
        }
    }
    namespace Noneptpppscr{    ///<Ethernet PTP PPS control
          register
        using Addr = Register::Address<0x4002872c,0xfffffffc,0,unsigned>;
        ///TSSO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tsso{}; 
        namespace TssoValC{
        }
        ///TSTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tsttr{}; 
        namespace TsttrValC{
        }
    }
}
