#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DSTC registers
    namespace DstcDestp{    ///<Descriptor top address Register
        using Addr = Register::Address<0x40061000,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwdesp{    ///<Hardware DES pointer Register
        using Addr = Register::Address<0x40061004,0xc000ff00,0x00000000,unsigned>;
        ///HWDESP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> hwdesp{}; 
        ///CHANNEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace DstcCmd{    ///<Command Register
        using Addr = Register::Address<0x40061008,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DstcCfg{    ///<Configuration Register
        using Addr = Register::Address<0x40061009,0xffffff80,0x00000000,unsigned char>;
        ///Software transfer priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> swpr{}; 
        ///Error stop enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> este{}; 
        ///Read skip buffer disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rbdis{}; 
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> erinte{}; 
        ///Software interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swinte{}; 
    }
    namespace DstcSwtr{    ///<Software trigger Register
        using Addr = Register::Address<0x4006100a,0xffff0000,0x00000000,unsigned>;
        ///Software status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swst{}; 
        ///Software request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swreq{}; 
        ///Software DES pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> swdesp{}; 
    }
    namespace DstcMoners{    ///<MONERS Register
        using Addr = Register::Address<0x4006100c,0xc00000a0,0x00000000,unsigned>;
        ///Error DES pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> edesp{}; 
        ///Error hardware channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ech{}; 
        ///Error hardware software
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ehs{}; 
        ///Error stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> estop{}; 
        ///Double error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> der{}; 
        ///Error status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> est{}; 
    }
    namespace DstcDreqenb0{    ///<DMA request enable Register 0
        using Addr = Register::Address<0x40061010,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDreqenb1{    ///<DMA request enable Register 1
        using Addr = Register::Address<0x40061014,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDreqenb2{    ///<DMA request enable Register 2
        using Addr = Register::Address<0x40061018,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDreqenb3{    ///<DMA request enable Register 3
        using Addr = Register::Address<0x4006101c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDreqenb4{    ///<DMA request enable Register 4
        using Addr = Register::Address<0x40061020,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDreqenb5{    ///<DMA request enable Register 5
        using Addr = Register::Address<0x40061024,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDreqenb6{    ///<DMA request enable Register 6
        using Addr = Register::Address<0x40061028,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDreqenb7{    ///<DMA request enable Register 7
        using Addr = Register::Address<0x4006102c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwint0{    ///<Hardware transfer interrupt Register 0
        using Addr = Register::Address<0x40061030,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwint1{    ///<Hardware transfer interrupt Register 1
        using Addr = Register::Address<0x40061034,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwint2{    ///<Hardware transfer interrupt Register 2
        using Addr = Register::Address<0x40061038,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwint3{    ///<Hardware transfer interrupt Register 3
        using Addr = Register::Address<0x4006103c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwint4{    ///<Hardware transfer interrupt Register 4
        using Addr = Register::Address<0x40061040,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwint5{    ///<Hardware transfer interrupt Register 5
        using Addr = Register::Address<0x40061044,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwint6{    ///<Hardware transfer interrupt Register 6
        using Addr = Register::Address<0x40061048,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwint7{    ///<Hardware transfer interrupt Register 7
        using Addr = Register::Address<0x4006104c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwintclr0{    ///<Hardware transfer interrupt clear Register 0
        using Addr = Register::Address<0x40061050,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwintclr1{    ///<Hardware transfer interrupt clear Register 1
        using Addr = Register::Address<0x40061054,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwintclr2{    ///<Hardware transfer interrupt clear Register 2
        using Addr = Register::Address<0x40061058,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwintclr3{    ///<Hardware transfer interrupt clear Register 3
        using Addr = Register::Address<0x4006105c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwintclr4{    ///<Hardware transfer interrupt clear Register 4
        using Addr = Register::Address<0x40061060,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwintclr5{    ///<Hardware transfer interrupt clear Register 5
        using Addr = Register::Address<0x40061064,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwintclr6{    ///<Hardware transfer interrupt clear Register 6
        using Addr = Register::Address<0x40061068,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcHwintclr7{    ///<Hardware transfer interrupt clear Register 7
        using Addr = Register::Address<0x4006106c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmsk0{    ///<DMA request mask Register 0
        using Addr = Register::Address<0x40061070,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmsk1{    ///<DMA request mask Register 1
        using Addr = Register::Address<0x40061074,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmsk2{    ///<DMA request mask Register 2
        using Addr = Register::Address<0x40061078,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmsk3{    ///<DMA request mask Register 3
        using Addr = Register::Address<0x4006107c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmsk4{    ///<DMA request mask Register 4
        using Addr = Register::Address<0x40061080,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmsk5{    ///<DMA request mask Register 5
        using Addr = Register::Address<0x40061084,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmsk6{    ///<DMA request mask Register 6
        using Addr = Register::Address<0x40061088,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmsk7{    ///<DMA request mask Register 7
        using Addr = Register::Address<0x4006108c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmskclr0{    ///<DMA request mask clear Register 0
        using Addr = Register::Address<0x40061090,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmskclr1{    ///<DMA request mask clear Register 1
        using Addr = Register::Address<0x40061094,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmskclr2{    ///<DMA request mask clear Register 2
        using Addr = Register::Address<0x40061098,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmskclr3{    ///<DMA request mask clear Register 3
        using Addr = Register::Address<0x4006109c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmskclr4{    ///<DMA request mask clear Register 4
        using Addr = Register::Address<0x400610a0,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmskclr5{    ///<DMA request mask clear Register 5
        using Addr = Register::Address<0x400610a4,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmskclr6{    ///<DMA request mask clear Register 6
        using Addr = Register::Address<0x400610a8,0xffffffff,0x00000000,unsigned>;
    }
    namespace DstcDqmskclr7{    ///<DMA request mask clear Register 7
        using Addr = Register::Address<0x400610ac,0xffffffff,0x00000000,unsigned>;
    }
}
