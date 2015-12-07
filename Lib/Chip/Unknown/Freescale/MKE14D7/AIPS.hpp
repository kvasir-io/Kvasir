#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AIPS-Lite Bridge
    namespace AipsMpra{    ///<Master Privilege Register A
        using Addr = Register::Address<0x40000000,0x888fffff,0,unsigned>;
        ///Master Privilege Level
        enum class Mpl2Val {
            v0=0x00000000,     ///<Accesses from this master are forced to user-mode.
            v1=0x00000001,     ///<Accesses from this master are not forced to user-mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Mpl2Val> mpl2{}; 
        namespace Mpl2ValC{
            constexpr Register::FieldValue<decltype(mpl2),Mpl2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mpl2),Mpl2Val::v1> v1{};
        }
        ///Master Trusted For Writes
        enum class Mtw2Val {
            v0=0x00000000,     ///<This master is not trusted for write accesses.
            v1=0x00000001,     ///<This master is trusted for write accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Mtw2Val> mtw2{}; 
        namespace Mtw2ValC{
            constexpr Register::FieldValue<decltype(mtw2),Mtw2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtw2),Mtw2Val::v1> v1{};
        }
        ///Master Trusted For Read
        enum class Mtr2Val {
            v0=0x00000000,     ///<This master is not trusted for read accesses.
            v1=0x00000001,     ///<This master is trusted for read accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Mtr2Val> mtr2{}; 
        namespace Mtr2ValC{
            constexpr Register::FieldValue<decltype(mtr2),Mtr2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtr2),Mtr2Val::v1> v1{};
        }
        ///Master privilege level
        enum class Mpl1Val {
            v0=0x00000000,     ///<Accesses from this master are forced to user-mode.
            v1=0x00000001,     ///<Accesses from this master are not forced to user-mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Mpl1Val> mpl1{}; 
        namespace Mpl1ValC{
            constexpr Register::FieldValue<decltype(mpl1),Mpl1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mpl1),Mpl1Val::v1> v1{};
        }
        ///Master trusted for writes
        enum class Mtw1Val {
            v0=0x00000000,     ///<This master is not trusted for write accesses.
            v1=0x00000001,     ///<This master is trusted for write accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Mtw1Val> mtw1{}; 
        namespace Mtw1ValC{
            constexpr Register::FieldValue<decltype(mtw1),Mtw1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtw1),Mtw1Val::v1> v1{};
        }
        ///Master trusted for read
        enum class Mtr1Val {
            v0=0x00000000,     ///<This master is not trusted for read accesses.
            v1=0x00000001,     ///<This master is trusted for read accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Mtr1Val> mtr1{}; 
        namespace Mtr1ValC{
            constexpr Register::FieldValue<decltype(mtr1),Mtr1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtr1),Mtr1Val::v1> v1{};
        }
        ///Master Privilege Level
        enum class Mpl0Val {
            v0=0x00000000,     ///<Accesses from this master are forced to user-mode.
            v1=0x00000001,     ///<Accesses from this master are not forced to user-mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Mpl0Val> mpl0{}; 
        namespace Mpl0ValC{
            constexpr Register::FieldValue<decltype(mpl0),Mpl0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mpl0),Mpl0Val::v1> v1{};
        }
        ///Master Trusted For Writes
        enum class Mtw0Val {
            v0=0x00000000,     ///<This master is not trusted for write accesses.
            v1=0x00000001,     ///<This master is trusted for write accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Mtw0Val> mtw0{}; 
        namespace Mtw0ValC{
            constexpr Register::FieldValue<decltype(mtw0),Mtw0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtw0),Mtw0Val::v1> v1{};
        }
        ///Master Trusted For Read
        enum class Mtr0Val {
            v0=0x00000000,     ///<This master is not trusted for read accesses.
            v1=0x00000001,     ///<This master is trusted for read accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Mtr0Val> mtr0{}; 
        namespace Mtr0ValC{
            constexpr Register::FieldValue<decltype(mtr0),Mtr0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtr0),Mtr0Val::v1> v1{};
        }
    }
    namespace AipsPacra{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000020,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacrb{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000024,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacrc{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000028,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacrd{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4000002c,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacre{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000040,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacrf{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000044,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacrg{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000048,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacrh{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4000004c,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacri{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000050,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacrj{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000054,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacrk{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000058,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacrl{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4000005c,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacrm{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000060,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacrn{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000064,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacro{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000068,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacrp{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4000006c,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7),Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7),Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7),Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6),Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6),Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6),Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5),Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5),Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5),Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4),Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4),Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4),Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3),Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3),Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3),Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2),Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2),Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2),Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
    namespace AipsPacru{    ///<Peripheral Access Control Register U
        using Addr = Register::Address<0x40000080,0x88ffffff,0,unsigned>;
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1),Tp1Val::v1> v1{};
        }
        ///Write protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1),Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1),Sp1Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0),Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0),Wp0Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0),Sp0Val::v1> v1{};
        }
    }
}
