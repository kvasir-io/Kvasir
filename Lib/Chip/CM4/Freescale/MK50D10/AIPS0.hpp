#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AIPS-Lite Bridge
    namespace Aips0Mpra{    ///<Master Privilege Register A
        using Addr = Register::Address<0x40000000,0x888888ff,0,unsigned>;
        ///Master Privilege Level
        enum class Mpl5Val {
            v0=0x00000000,     ///<Accesses from this master are forced to user-mode.
            v1=0x00000001,     ///<Accesses from this master are not forced to user-mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Mpl5Val> mpl5{}; 
        namespace Mpl5ValC{
            constexpr Register::FieldValue<decltype(mpl5)::Type,Mpl5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mpl5)::Type,Mpl5Val::v1> v1{};
        }
        ///Master Trusted For Writes
        enum class Mtw5Val {
            v0=0x00000000,     ///<This master is not trusted for write accesses.
            v1=0x00000001,     ///<This master is trusted for write accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Mtw5Val> mtw5{}; 
        namespace Mtw5ValC{
            constexpr Register::FieldValue<decltype(mtw5)::Type,Mtw5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtw5)::Type,Mtw5Val::v1> v1{};
        }
        ///Master Trusted For Read
        enum class Mtr5Val {
            v0=0x00000000,     ///<This master is not trusted for read accesses.
            v1=0x00000001,     ///<This master is trusted for read accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Mtr5Val> mtr5{}; 
        namespace Mtr5ValC{
            constexpr Register::FieldValue<decltype(mtr5)::Type,Mtr5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtr5)::Type,Mtr5Val::v1> v1{};
        }
        ///Master Privilege Level
        enum class Mpl4Val {
            v0=0x00000000,     ///<Accesses from this master are forced to user-mode.
            v1=0x00000001,     ///<Accesses from this master are not forced to user-mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Mpl4Val> mpl4{}; 
        namespace Mpl4ValC{
            constexpr Register::FieldValue<decltype(mpl4)::Type,Mpl4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mpl4)::Type,Mpl4Val::v1> v1{};
        }
        ///Master Trusted For Writes
        enum class Mtw4Val {
            v0=0x00000000,     ///<This master is not trusted for write accesses.
            v1=0x00000001,     ///<This master is trusted for write accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Mtw4Val> mtw4{}; 
        namespace Mtw4ValC{
            constexpr Register::FieldValue<decltype(mtw4)::Type,Mtw4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtw4)::Type,Mtw4Val::v1> v1{};
        }
        ///Master Trusted For Read
        enum class Mtr4Val {
            v0=0x00000000,     ///<This master is not trusted for read accesses.
            v1=0x00000001,     ///<This master is trusted for read accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Mtr4Val> mtr4{}; 
        namespace Mtr4ValC{
            constexpr Register::FieldValue<decltype(mtr4)::Type,Mtr4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtr4)::Type,Mtr4Val::v1> v1{};
        }
        ///Master Privilege Level
        enum class Mpl3Val {
            v0=0x00000000,     ///<Accesses from this master are forced to user-mode.
            v1=0x00000001,     ///<Accesses from this master are not forced to user-mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Mpl3Val> mpl3{}; 
        namespace Mpl3ValC{
            constexpr Register::FieldValue<decltype(mpl3)::Type,Mpl3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mpl3)::Type,Mpl3Val::v1> v1{};
        }
        ///Master Trusted For Writes
        enum class Mtw3Val {
            v0=0x00000000,     ///<This master is not trusted for write accesses.
            v1=0x00000001,     ///<This master is trusted for write accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Mtw3Val> mtw3{}; 
        namespace Mtw3ValC{
            constexpr Register::FieldValue<decltype(mtw3)::Type,Mtw3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtw3)::Type,Mtw3Val::v1> v1{};
        }
        ///Master Trusted For Read
        enum class Mtr3Val {
            v0=0x00000000,     ///<This master is not trusted for read accesses.
            v1=0x00000001,     ///<This master is trusted for read accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Mtr3Val> mtr3{}; 
        namespace Mtr3ValC{
            constexpr Register::FieldValue<decltype(mtr3)::Type,Mtr3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtr3)::Type,Mtr3Val::v1> v1{};
        }
        ///Master Privilege Level
        enum class Mpl2Val {
            v0=0x00000000,     ///<Accesses from this master are forced to user-mode.
            v1=0x00000001,     ///<Accesses from this master are not forced to user-mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Mpl2Val> mpl2{}; 
        namespace Mpl2ValC{
            constexpr Register::FieldValue<decltype(mpl2)::Type,Mpl2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mpl2)::Type,Mpl2Val::v1> v1{};
        }
        ///Master Trusted For Writes
        enum class Mtw2Val {
            v0=0x00000000,     ///<This master is not trusted for write accesses.
            v1=0x00000001,     ///<This master is trusted for write accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Mtw2Val> mtw2{}; 
        namespace Mtw2ValC{
            constexpr Register::FieldValue<decltype(mtw2)::Type,Mtw2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtw2)::Type,Mtw2Val::v1> v1{};
        }
        ///Master Trusted For Read
        enum class Mtr2Val {
            v0=0x00000000,     ///<This master is not trusted for read accesses.
            v1=0x00000001,     ///<This master is trusted for read accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Mtr2Val> mtr2{}; 
        namespace Mtr2ValC{
            constexpr Register::FieldValue<decltype(mtr2)::Type,Mtr2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtr2)::Type,Mtr2Val::v1> v1{};
        }
        ///Master privilege level
        enum class Mpl1Val {
            v0=0x00000000,     ///<Accesses from this master are forced to user-mode.
            v1=0x00000001,     ///<Accesses from this master are not forced to user-mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Mpl1Val> mpl1{}; 
        namespace Mpl1ValC{
            constexpr Register::FieldValue<decltype(mpl1)::Type,Mpl1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mpl1)::Type,Mpl1Val::v1> v1{};
        }
        ///Master trusted for writes
        enum class Mtw1Val {
            v0=0x00000000,     ///<This master is not trusted for write accesses.
            v1=0x00000001,     ///<This master is trusted for write accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Mtw1Val> mtw1{}; 
        namespace Mtw1ValC{
            constexpr Register::FieldValue<decltype(mtw1)::Type,Mtw1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtw1)::Type,Mtw1Val::v1> v1{};
        }
        ///Master trusted for read
        enum class Mtr1Val {
            v0=0x00000000,     ///<This master is not trusted for read accesses.
            v1=0x00000001,     ///<This master is trusted for read accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Mtr1Val> mtr1{}; 
        namespace Mtr1ValC{
            constexpr Register::FieldValue<decltype(mtr1)::Type,Mtr1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtr1)::Type,Mtr1Val::v1> v1{};
        }
        ///Master Privilege Level
        enum class Mpl0Val {
            v0=0x00000000,     ///<Accesses from this master are forced to user-mode.
            v1=0x00000001,     ///<Accesses from this master are not forced to user-mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Mpl0Val> mpl0{}; 
        namespace Mpl0ValC{
            constexpr Register::FieldValue<decltype(mpl0)::Type,Mpl0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mpl0)::Type,Mpl0Val::v1> v1{};
        }
        ///Master Trusted For Writes
        enum class Mtw0Val {
            v0=0x00000000,     ///<This master is not trusted for write accesses.
            v1=0x00000001,     ///<This master is trusted for write accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Mtw0Val> mtw0{}; 
        namespace Mtw0ValC{
            constexpr Register::FieldValue<decltype(mtw0)::Type,Mtw0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtw0)::Type,Mtw0Val::v1> v1{};
        }
        ///Master Trusted For Read
        enum class Mtr0Val {
            v0=0x00000000,     ///<This master is not trusted for read accesses.
            v1=0x00000001,     ///<This master is trusted for read accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Mtr0Val> mtr0{}; 
        namespace Mtr0ValC{
            constexpr Register::FieldValue<decltype(mtr0)::Type,Mtr0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mtr0)::Type,Mtr0Val::v1> v1{};
        }
    }
    namespace Aips0Pacra{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000020,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
    namespace Aips0Pacrb{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000024,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
    namespace Aips0Pacrc{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000028,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
    namespace Aips0Pacrd{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4000002c,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
    namespace Aips0Pacre{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000040,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
    namespace Aips0Pacrf{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000044,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
    namespace Aips0Pacrg{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000048,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
    namespace Aips0Pacrh{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4000004c,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
    namespace Aips0Pacri{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000050,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
    namespace Aips0Pacrj{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000054,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
    namespace Aips0Pacrk{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000058,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
    namespace Aips0Pacrl{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4000005c,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
    namespace Aips0Pacrm{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000060,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
    namespace Aips0Pacrn{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000064,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
    namespace Aips0Pacro{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000068,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
    namespace Aips0Pacrp{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4000006c,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class Tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tp7Val> tp7{}; 
        namespace Tp7ValC{
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp7)::Type,Tp7Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wp7Val> wp7{}; 
        namespace Wp7ValC{
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp7)::Type,Wp7Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sp7Val> sp7{}; 
        namespace Sp7ValC{
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp7)::Type,Sp7Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tp6Val> tp6{}; 
        namespace Tp6ValC{
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp6)::Type,Tp6Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wp6Val> wp6{}; 
        namespace Wp6ValC{
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp6)::Type,Wp6Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sp6Val> sp6{}; 
        namespace Sp6ValC{
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp6)::Type,Sp6Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tp5Val> tp5{}; 
        namespace Tp5ValC{
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp5)::Type,Tp5Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wp5Val> wp5{}; 
        namespace Wp5ValC{
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp5)::Type,Wp5Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sp5Val> sp5{}; 
        namespace Sp5ValC{
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp5)::Type,Sp5Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tp4Val> tp4{}; 
        namespace Tp4ValC{
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp4)::Type,Tp4Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wp4Val> wp4{}; 
        namespace Wp4ValC{
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp4)::Type,Wp4Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sp4Val> sp4{}; 
        namespace Sp4ValC{
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp4)::Type,Sp4Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tp3Val> tp3{}; 
        namespace Tp3ValC{
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp3)::Type,Tp3Val::v1> v1{};
        }
        ///Write protect
        enum class Wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wp3Val> wp3{}; 
        namespace Wp3ValC{
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp3)::Type,Wp3Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sp3Val> sp3{}; 
        namespace Sp3ValC{
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp3)::Type,Sp3Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tp2Val> tp2{}; 
        namespace Tp2ValC{
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp2)::Type,Tp2Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v1> v1{};
        }
        ///Supervisor protect
        enum class Sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Sp2Val> sp2{}; 
        namespace Sp2ValC{
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp2)::Type,Sp2Val::v1> v1{};
        }
        ///Trusted Protect
        enum class Tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tp1Val> tp1{}; 
        namespace Tp1ValC{
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp1)::Type,Tp1Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Sp1Val> sp1{}; 
        namespace Sp1ValC{
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp1)::Type,Sp1Val::v1> v1{};
        }
        ///Trusted protect
        enum class Tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tp0Val> tp0{}; 
        namespace Tp0ValC{
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tp0)::Type,Tp0Val::v1> v1{};
        }
        ///Write Protect
        enum class Wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v1> v1{};
        }
        ///Supervisor Protect
        enum class Sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Sp0Val> sp0{}; 
        namespace Sp0ValC{
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sp0)::Type,Sp0Val::v1> v1{};
        }
    }
}
