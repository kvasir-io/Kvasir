#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AIPS-Lite Bridge
    namespace Aips1Mpra{    ///<Master Privilege Register A
        using Addr = Register::Address<0x40080000,0xffffffff,0,unsigned>;
    }
    namespace Aips1Pacra{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40080020,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacrb{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40080024,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacrc{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40080028,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacrd{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4008002c,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacre{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40080040,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacrf{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40080044,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacrg{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40080048,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacrh{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4008004c,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacri{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40080050,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacrj{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40080054,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacrk{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40080058,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacrl{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4008005c,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacrm{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40080060,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacrn{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40080064,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacro{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40080068,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacrp{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4008006c,0x88888888,0,unsigned>;
        ///Trusted Protect
        enum class tp7Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp7ValC{
            constexpr MPL::Value<tp7Val,tp7Val::v0> v0{};
            constexpr MPL::Value<tp7Val,tp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tp7Val> tp7{}; 
        ///Write Protect
        enum class wp7Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp7ValC{
            constexpr MPL::Value<wp7Val,wp7Val::v0> v0{};
            constexpr MPL::Value<wp7Val,wp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wp7Val> wp7{}; 
        ///Supervisor Protect
        enum class sp7Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp7ValC{
            constexpr MPL::Value<sp7Val,sp7Val::v0> v0{};
            constexpr MPL::Value<sp7Val,sp7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sp7Val> sp7{}; 
        ///Trusted Protect
        enum class tp6Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp6ValC{
            constexpr MPL::Value<tp6Val,tp6Val::v0> v0{};
            constexpr MPL::Value<tp6Val,tp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tp6Val> tp6{}; 
        ///Write Protect
        enum class wp6Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp6ValC{
            constexpr MPL::Value<wp6Val,wp6Val::v0> v0{};
            constexpr MPL::Value<wp6Val,wp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wp6Val> wp6{}; 
        ///Supervisor Protect
        enum class sp6Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp6ValC{
            constexpr MPL::Value<sp6Val,sp6Val::v0> v0{};
            constexpr MPL::Value<sp6Val,sp6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sp6Val> sp6{}; 
        ///Trusted Protect
        enum class tp5Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp5ValC{
            constexpr MPL::Value<tp5Val,tp5Val::v0> v0{};
            constexpr MPL::Value<tp5Val,tp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tp5Val> tp5{}; 
        ///Write Protect
        enum class wp5Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp5ValC{
            constexpr MPL::Value<wp5Val,wp5Val::v0> v0{};
            constexpr MPL::Value<wp5Val,wp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wp5Val> wp5{}; 
        ///Supervisor Protect
        enum class sp5Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp5ValC{
            constexpr MPL::Value<sp5Val,sp5Val::v0> v0{};
            constexpr MPL::Value<sp5Val,sp5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sp5Val> sp5{}; 
        ///Trusted Protect
        enum class tp4Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp4ValC{
            constexpr MPL::Value<tp4Val,tp4Val::v0> v0{};
            constexpr MPL::Value<tp4Val,tp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tp4Val> tp4{}; 
        ///Write Protect
        enum class wp4Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp4ValC{
            constexpr MPL::Value<wp4Val,wp4Val::v0> v0{};
            constexpr MPL::Value<wp4Val,wp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wp4Val> wp4{}; 
        ///Supervisor Protect
        enum class sp4Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp4ValC{
            constexpr MPL::Value<sp4Val,sp4Val::v0> v0{};
            constexpr MPL::Value<sp4Val,sp4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sp4Val> sp4{}; 
        ///Trusted Protect
        enum class tp3Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp3ValC{
            constexpr MPL::Value<tp3Val,tp3Val::v0> v0{};
            constexpr MPL::Value<tp3Val,tp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tp3Val> tp3{}; 
        ///Write Protect
        enum class wp3Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp3ValC{
            constexpr MPL::Value<wp3Val,wp3Val::v0> v0{};
            constexpr MPL::Value<wp3Val,wp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wp3Val> wp3{}; 
        ///Supervisor Protect
        enum class sp3Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp3ValC{
            constexpr MPL::Value<sp3Val,sp3Val::v0> v0{};
            constexpr MPL::Value<sp3Val,sp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sp3Val> sp3{}; 
        ///Trusted Protect
        enum class tp2Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp2ValC{
            constexpr MPL::Value<tp2Val,tp2Val::v0> v0{};
            constexpr MPL::Value<tp2Val,tp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tp2Val> tp2{}; 
        ///Write Protect
        enum class wp2Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v0> v0{};
            constexpr MPL::Value<wp2Val,wp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,wp2Val> wp2{}; 
        ///Supervisor Protect
        enum class sp2Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp2ValC{
            constexpr MPL::Value<sp2Val,sp2Val::v0> v0{};
            constexpr MPL::Value<sp2Val,sp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sp2Val> sp2{}; 
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
    namespace Aips1Pacru{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40080080,0x88ffffff,0,unsigned>;
        ///Trusted Protect
        enum class tp1Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp1ValC{
            constexpr MPL::Value<tp1Val,tp1Val::v0> v0{};
            constexpr MPL::Value<tp1Val,tp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tp1Val> tp1{}; 
        ///Write Protect
        enum class wp1Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v0> v0{};
            constexpr MPL::Value<wp1Val,wp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wp1Val> wp1{}; 
        ///Supervisor Protect
        enum class sp1Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp1ValC{
            constexpr MPL::Value<sp1Val,sp1Val::v0> v0{};
            constexpr MPL::Value<sp1Val,sp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,sp1Val> sp1{}; 
        ///Trusted Protect
        enum class tp0Val {
            v0=0x00000000,     ///<Accesses from an untrusted master are allowed.
            v1=0x00000001,     ///<Accesses from an untrusted master are not allowed.
        };
        namespace tp0ValC{
            constexpr MPL::Value<tp0Val,tp0Val::v0> v0{};
            constexpr MPL::Value<tp0Val,tp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tp0Val> tp0{}; 
        ///Write Protect
        enum class wp0Val {
            v0=0x00000000,     ///<This peripheral allows write accesses.
            v1=0x00000001,     ///<This peripheral is write protected.
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v0> v0{};
            constexpr MPL::Value<wp0Val,wp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,wp0Val> wp0{}; 
        ///Supervisor Protect
        enum class sp0Val {
            v0=0x00000000,     ///<This peripheral does not require supervisor privilege level for accesses.
            v1=0x00000001,     ///<This peripheral requires supervisor privilege level for accesses.
        };
        namespace sp0ValC{
            constexpr MPL::Value<sp0Val,sp0Val::v0> v0{};
            constexpr MPL::Value<sp0Val,sp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,sp0Val> sp0{}; 
    }
}
