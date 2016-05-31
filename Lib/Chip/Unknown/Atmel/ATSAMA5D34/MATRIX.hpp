#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//AHB Bus Matrix
    namespace MatrixPras0{    ///<Priority Register A for Slave 0
        using Addr = Register::Address<0xffffec80,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs0{    ///<Priority Register B for Slave 0
        using Addr = Register::Address<0xffffec84,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixPras1{    ///<Priority Register A for Slave 1
        using Addr = Register::Address<0xffffec88,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs1{    ///<Priority Register B for Slave 1
        using Addr = Register::Address<0xffffec8c,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixPras2{    ///<Priority Register A for Slave 2
        using Addr = Register::Address<0xffffec90,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs2{    ///<Priority Register B for Slave 2
        using Addr = Register::Address<0xffffec94,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixPras3{    ///<Priority Register A for Slave 3
        using Addr = Register::Address<0xffffec98,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs3{    ///<Priority Register B for Slave 3
        using Addr = Register::Address<0xffffec9c,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixPras4{    ///<Priority Register A for Slave 4
        using Addr = Register::Address<0xffffeca0,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs4{    ///<Priority Register B for Slave 4
        using Addr = Register::Address<0xffffeca4,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixPras5{    ///<Priority Register A for Slave 5
        using Addr = Register::Address<0xffffeca8,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs5{    ///<Priority Register B for Slave 5
        using Addr = Register::Address<0xffffecac,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixPras6{    ///<Priority Register A for Slave 6
        using Addr = Register::Address<0xffffecb0,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs6{    ///<Priority Register B for Slave 6
        using Addr = Register::Address<0xffffecb4,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixPras7{    ///<Priority Register A for Slave 7
        using Addr = Register::Address<0xffffecb8,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs7{    ///<Priority Register B for Slave 7
        using Addr = Register::Address<0xffffecbc,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixPras8{    ///<Priority Register A for Slave 8
        using Addr = Register::Address<0xffffecc0,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs8{    ///<Priority Register B for Slave 8
        using Addr = Register::Address<0xffffecc4,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixPras9{    ///<Priority Register A for Slave 9
        using Addr = Register::Address<0xffffecc8,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs9{    ///<Priority Register B for Slave 9
        using Addr = Register::Address<0xffffeccc,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixPras10{    ///<Priority Register A for Slave 10
        using Addr = Register::Address<0xffffecd0,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs10{    ///<Priority Register B for Slave 10
        using Addr = Register::Address<0xffffecd4,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixPras11{    ///<Priority Register A for Slave 11
        using Addr = Register::Address<0xffffecd8,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs11{    ///<Priority Register B for Slave 11
        using Addr = Register::Address<0xffffecdc,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixPras12{    ///<Priority Register A for Slave 12
        using Addr = Register::Address<0xffffece0,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs12{    ///<Priority Register B for Slave 12
        using Addr = Register::Address<0xffffece4,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixPras13{    ///<Priority Register A for Slave 13
        using Addr = Register::Address<0xffffece8,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs13{    ///<Priority Register B for Slave 13
        using Addr = Register::Address<0xffffecec,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixPras14{    ///<Priority Register A for Slave 14
        using Addr = Register::Address<0xffffecf0,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs14{    ///<Priority Register B for Slave 14
        using Addr = Register::Address<0xffffecf4,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixPras15{    ///<Priority Register A for Slave 15
        using Addr = Register::Address<0xffffecf8,0xcccccccc,0x00000000,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs15{    ///<Priority Register B for Slave 15
        using Addr = Register::Address<0xffffecfc,0xcccccccc,0x00000000,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        ///Master 11 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m11pr{}; 
        ///Master 12 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m12pr{}; 
        ///Master 13 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m13pr{}; 
        ///Master 14 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m14pr{}; 
        ///Master 15 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m15pr{}; 
    }
    namespace MatrixMrcr{    ///<Master Remap Control Register
        using Addr = Register::Address<0xffffed00,0xffff0000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcb0{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcb1{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rcb2{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rcb3{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rcb4{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rcb5{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rcb6{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rcb7{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rcb8{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rcb9{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rcb10{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rcb11{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rcb12{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rcb13{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcb14{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rcb15{}; 
    }
    namespace MatrixWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xffffede4,0x000000fe,0x00000000,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace MatrixWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xffffede8,0xff0000fe,0x00000000,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvsrc{}; 
    }
    namespace MatrixMcfg0{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec00,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg1{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec04,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg2{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec08,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg3{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec0c,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg4{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec10,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg5{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec14,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg6{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec18,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg7{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec1c,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg8{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec20,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg9{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec24,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg10{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec28,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg11{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec2c,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg12{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec30,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg13{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec34,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg14{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec38,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg15{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffec3c,0xfffffff8,0x00000000,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixScfg0{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec40,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg1{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec44,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg2{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec48,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg3{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec4c,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg4{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec50,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg5{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec54,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg6{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec58,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg7{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec5c,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg8{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec60,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg9{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec64,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg10{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec68,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg11{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec6c,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg12{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec70,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg13{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec74,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg14{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec78,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg15{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffec7c,0xffc0fe00,0x00000000,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixSfr0{    ///<Special Function Register
        using Addr = Register::Address<0xffffed10,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
    namespace MatrixSfr1{    ///<Special Function Register
        using Addr = Register::Address<0xffffed14,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
    namespace MatrixSfr2{    ///<Special Function Register
        using Addr = Register::Address<0xffffed18,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
    namespace MatrixSfr3{    ///<Special Function Register
        using Addr = Register::Address<0xffffed1c,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
    namespace MatrixSfr4{    ///<Special Function Register
        using Addr = Register::Address<0xffffed20,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
    namespace MatrixSfr5{    ///<Special Function Register
        using Addr = Register::Address<0xffffed24,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
    namespace MatrixSfr6{    ///<Special Function Register
        using Addr = Register::Address<0xffffed28,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
    namespace MatrixSfr7{    ///<Special Function Register
        using Addr = Register::Address<0xffffed2c,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
    namespace MatrixSfr8{    ///<Special Function Register
        using Addr = Register::Address<0xffffed30,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
    namespace MatrixSfr9{    ///<Special Function Register
        using Addr = Register::Address<0xffffed34,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
    namespace MatrixSfr10{    ///<Special Function Register
        using Addr = Register::Address<0xffffed38,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
    namespace MatrixSfr11{    ///<Special Function Register
        using Addr = Register::Address<0xffffed3c,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
    namespace MatrixSfr12{    ///<Special Function Register
        using Addr = Register::Address<0xffffed40,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
    namespace MatrixSfr13{    ///<Special Function Register
        using Addr = Register::Address<0xffffed44,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
    namespace MatrixSfr14{    ///<Special Function Register
        using Addr = Register::Address<0xffffed48,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
    namespace MatrixSfr15{    ///<Special Function Register
        using Addr = Register::Address<0xffffed4c,0x00000000,0x00000000,unsigned>;
        ///Special Function Register Fields
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sfr{}; 
    }
}
