#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Quadrature Position/Revolution Counter 0
    namespace Noneqpcr{    ///<QPRC Position Count Register
        using Addr = Register::Address<0x40026000,0xffffffff,0,unsigned>;
    }
    namespace Noneqrcr{    ///<QPRC Revolution Count Register
        using Addr = Register::Address<0x40026004,0xffffffff,0,unsigned>;
    }
    namespace Noneqpccr{    ///<QPRC Position Counter Compare Register
        using Addr = Register::Address<0x40026008,0xffffffff,0,unsigned>;
    }
    namespace Noneqprcr{    ///<QPRC Position and Revolution Counter Compare Register
        using Addr = Register::Address<0x4002600c,0xffffffff,0,unsigned>;
    }
    namespace Noneqcr{    ///<QPRC Control Register
        using Addr = Register::Address<0x40026018,0xffff0000,0,unsigned>;
        ///Detection edge selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> cge{}; 
        namespace CgeValC{
        }
        ///BIN detection edge selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> bes{}; 
        namespace BesValC{
        }
        ///AIN detection edge selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> aes{}; 
        namespace AesValC{
        }
        ///Position counter reset mask bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pcrm{}; 
        namespace PcrmValC{
        }
        ///Swap bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swap{}; 
        namespace SwapValC{
        }
        ///Register function selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rsel{}; 
        namespace RselValC{
        }
        ///Count clear or gate selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cgsc{}; 
        namespace CgscValC{
        }
        ///Position counter stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pstp{}; 
        namespace PstpValC{
        }
        ///Revolution counter mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rcm{}; 
        namespace RcmValC{
        }
        ///Position counter mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pcm{}; 
        namespace PcmValC{
        }
    }
    namespace Noneqecr{    ///<QPRC Extension Control Register
        using Addr = Register::Address<0x4002601c,0xfffffff8,0,unsigned>;
        ///Outrange interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> orngie{}; 
        namespace OrngieValC{
        }
        ///Outrange interrupt request flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> orngf{}; 
        namespace OrngfValC{
        }
        ///Outrange mode selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> orngmd{}; 
        namespace OrngmdValC{
        }
    }
    namespace Noneqicrl{    ///<Low-Order Bytes of QPRC Interrupt Control Register
        using Addr = Register::Address<0x40026014,0xffffff00,0,unsigned char>;
        ///Zero index interrupt request flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ziif{}; 
        namespace ZiifValC{
        }
        ///Overflow interrupt request flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ofdf{}; 
        namespace OfdfValC{
        }
        ///Underflow interrupt request flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ufdf{}; 
        namespace UfdfValC{
        }
        ///"Overflow@ underflow@ or zero index interrupt enable bit"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ouzie{}; 
        namespace OuzieValC{
        }
        ///PC and RC match interrupt request flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qprcmf{}; 
        namespace QprcmfValC{
        }
        ///PC and RC match interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qprcmie{}; 
        namespace QprcmieValC{
        }
        ///PC match interrupt request flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qpcmf{}; 
        namespace QpcmfValC{
        }
        ///PC match interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qpcmie{}; 
        namespace QpcmieValC{
        }
    }
    namespace Noneqicrh{    ///<High-Order Bytes of QPRC Interrupt Control Register
        using Addr = Register::Address<0x40026015,0xffffffc0,0,unsigned char>;
        ///PC match and RC match interrupt request flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qpcnrcmf{}; 
        namespace QpcnrcmfValC{
        }
        ///PC match and RC match interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qpcnrcmie{}; 
        namespace QpcnrcmieValC{
        }
        ///Last position counter flow direction bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirou{}; 
        namespace DirouValC{
        }
        ///Last position counter direction bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirpc{}; 
        namespace DirpcValC{
        }
        ///Count inversion interrupt request flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cdcf{}; 
        namespace CdcfValC{
        }
        ///Count inversion interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cdcie{}; 
        namespace CdcieValC{
        }
    }
    namespace Noneqmpr{    ///<QPRC Maximum Position Register
        using Addr = Register::Address<0x40026010,0xffffffff,0,unsigned>;
    }
    namespace Noneqprcrr{    ///<Quad Counter Position Rotation Count Register
        using Addr = Register::Address<0x4002603c,0x00000000,0,unsigned>;
        ///Quad counter rotation count display bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> qrcrr{}; 
        namespace QrcrrValC{
        }
        ///Quad counter position count display bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> qpcrr{}; 
        namespace QpcrrValC{
        }
    }
}
