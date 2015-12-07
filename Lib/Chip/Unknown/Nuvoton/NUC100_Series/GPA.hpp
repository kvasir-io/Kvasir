#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace Nonepmd{    ///<GPIO Port Pin I/O Mode Control
        using Addr = Register::Address<0x50004000,0x00000000,0,unsigned>;
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pmd0{}; 
        namespace Pmd0ValC{
        }
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pmd1{}; 
        namespace Pmd1ValC{
        }
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pmd2{}; 
        namespace Pmd2ValC{
        }
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pmd3{}; 
        namespace Pmd3ValC{
        }
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pmd4{}; 
        namespace Pmd4ValC{
        }
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pmd5{}; 
        namespace Pmd5ValC{
        }
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pmd6{}; 
        namespace Pmd6ValC{
        }
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pmd7{}; 
        namespace Pmd7ValC{
        }
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pmd8{}; 
        namespace Pmd8ValC{
        }
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pmd9{}; 
        namespace Pmd9ValC{
        }
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pmd10{}; 
        namespace Pmd10ValC{
        }
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pmd11{}; 
        namespace Pmd11ValC{
        }
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pmd12{}; 
        namespace Pmd12ValC{
        }
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pmd13{}; 
        namespace Pmd13ValC{
        }
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pmd14{}; 
        namespace Pmd14ValC{
        }
        ///GPIOX I/O Pin[n] Mode Control 
Determine each I/O type of GPIOx pins
00 = GPIO port [n] pin is in INPUT mode.
01 = GPIO port [n] pin is in OUTPUT mode.
10 = GPIO port [n] pin is in Open-Drain mode.
11 = GPIO port [n] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pmd15{}; 
        namespace Pmd15ValC{
        }
    }
    namespace Noneoffd{    ///<GPIO Port Pin OFF Digital Enable
        using Addr = Register::Address<0x50004004,0x0000ffff,0,unsigned>;
        ///GPIOx Pin[n] OFF digital input path Enable
Each of these bits is used to control if the input path of corresponding GPIO pin is disabled. If input is analog signal, users can OFF digital input path to avoid creepage
1 = Disable IO digital input path (digital input tied to low)
0 = Enable IO digital input path
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> offd{}; 
        namespace OffdValC{
        }
    }
    namespace Nonedout{    ///<GPIO Port Data Output Value
        using Addr = Register::Address<0x50004008,0xffff0000,0,unsigned>;
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout0{}; 
        namespace Dout0ValC{
        }
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dout1{}; 
        namespace Dout1ValC{
        }
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dout2{}; 
        namespace Dout2ValC{
        }
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dout3{}; 
        namespace Dout3ValC{
        }
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dout4{}; 
        namespace Dout4ValC{
        }
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dout5{}; 
        namespace Dout5ValC{
        }
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dout6{}; 
        namespace Dout6ValC{
        }
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dout7{}; 
        namespace Dout7ValC{
        }
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dout8{}; 
        namespace Dout8ValC{
        }
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dout9{}; 
        namespace Dout9ValC{
        }
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dout10{}; 
        namespace Dout10ValC{
        }
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dout11{}; 
        namespace Dout11ValC{
        }
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dout12{}; 
        namespace Dout12ValC{
        }
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dout13{}; 
        namespace Dout13ValC{
        }
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dout14{}; 
        namespace Dout14ValC{
        }
        ///GPIOx Pin[n] Output Value
Each of these bits control the status of a GPIO pin when the GPIO pin is configures as output, open-drain and quasi-mode.
1 = GPIO port [A/B/C/D/E] Pin[n] will drive High if the GPIO pin is configures as output, open-drain and quasi-mode.
0 = GPIO port [A/B/C/D/E] Pin[n] will drive Low if the GPIO pin is configures as output, open-drain and quasi-mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dout15{}; 
        namespace Dout15ValC{
        }
    }
    namespace Nonedmask{    ///<GPIO Port Data Output Write Mask
        using Addr = Register::Address<0x5000400c,0xffff0000,0,unsigned>;
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmask0{}; 
        namespace Dmask0ValC{
        }
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmask1{}; 
        namespace Dmask1ValC{
        }
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmask2{}; 
        namespace Dmask2ValC{
        }
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmask3{}; 
        namespace Dmask3ValC{
        }
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dmask4{}; 
        namespace Dmask4ValC{
        }
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dmask5{}; 
        namespace Dmask5ValC{
        }
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dmask6{}; 
        namespace Dmask6ValC{
        }
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmask7{}; 
        namespace Dmask7ValC{
        }
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dmask8{}; 
        namespace Dmask8ValC{
        }
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dmask9{}; 
        namespace Dmask9ValC{
        }
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dmask10{}; 
        namespace Dmask10ValC{
        }
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmask11{}; 
        namespace Dmask11ValC{
        }
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dmask12{}; 
        namespace Dmask12ValC{
        }
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmask13{}; 
        namespace Dmask13ValC{
        }
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dmask14{}; 
        namespace Dmask14ValC{
        }
        ///Port [A/B/C/D/E] Data Output Write Mask
These bits are used to protect the corresponding register of GPIOx_DOUT bit[n]. When set the DMASK bit[n] to"1", the corresponding GPIOx_DOUTn bit is protected. The write signal is masked, write data to the protect bit is ignored
1 = The corresponding GPIOx_DOUT[n] bit is protected
0 = The corresponding GPIOx_DOUT[n] bit can be updated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dmask15{}; 
        namespace Dmask15ValC{
        }
    }
    namespace Nonepin{    ///<GPIO Port Pin Value
        using Addr = Register::Address<0x50004010,0xffff0000,0,unsigned>;
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pin0{}; 
        namespace Pin0ValC{
        }
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pin1{}; 
        namespace Pin1ValC{
        }
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pin2{}; 
        namespace Pin2ValC{
        }
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pin3{}; 
        namespace Pin3ValC{
        }
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pin4{}; 
        namespace Pin4ValC{
        }
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pin5{}; 
        namespace Pin5ValC{
        }
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pin6{}; 
        namespace Pin6ValC{
        }
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pin7{}; 
        namespace Pin7ValC{
        }
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pin8{}; 
        namespace Pin8ValC{
        }
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pin9{}; 
        namespace Pin9ValC{
        }
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pin10{}; 
        namespace Pin10ValC{
        }
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pin11{}; 
        namespace Pin11ValC{
        }
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pin12{}; 
        namespace Pin12ValC{
        }
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pin13{}; 
        namespace Pin13ValC{
        }
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pin14{}; 
        namespace Pin14ValC{
        }
        ///Port [A/B/C/D/E] Pin Values
Each bit of the register reflects the actual status of the respective GPIO pin If bit is 1, it indicates the corresponding pin status is high, else the pin status is low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pin15{}; 
        namespace Pin15ValC{
        }
    }
    namespace Nonedben{    ///<GPIO Port De-bounce Enable
        using Addr = Register::Address<0x50004014,0xffff0000,0,unsigned>;
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dben0{}; 
        namespace Dben0ValC{
        }
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dben1{}; 
        namespace Dben1ValC{
        }
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dben2{}; 
        namespace Dben2ValC{
        }
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dben3{}; 
        namespace Dben3ValC{
        }
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dben4{}; 
        namespace Dben4ValC{
        }
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dben5{}; 
        namespace Dben5ValC{
        }
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dben6{}; 
        namespace Dben6ValC{
        }
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dben7{}; 
        namespace Dben7ValC{
        }
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dben8{}; 
        namespace Dben8ValC{
        }
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dben9{}; 
        namespace Dben9ValC{
        }
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dben10{}; 
        namespace Dben10ValC{
        }
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dben11{}; 
        namespace Dben11ValC{
        }
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dben12{}; 
        namespace Dben12ValC{
        }
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dben13{}; 
        namespace Dben13ValC{
        }
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dben14{}; 
        namespace Dben14ValC{
        }
        ///Port [A/B/C/D/E] Input Signal De-bounce Enable
DBEN[n]used to enable the de-bounce function for each corresponding bit. If the input signal pulse width can't be sampled by continuous two de-bounce sample cycle The input signal transition is seen as the signal bounce and will not trigger the interrupt. The de-bounce clock source is controlled by DBNCECON[4], one de-bounce sample cycle is controlled by DBNCECON[3:0]
The DBEN[n] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
1 = The bit[n] de-bounce function is enabled
0 = The bit[n] de-bounce function is disabled
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dben15{}; 
        namespace Dben15ValC{
        }
    }
    namespace Noneimd{    ///<GPIO Port Interrupt Mode Control
        using Addr = Register::Address<0x50004018,0xffff0000,0,unsigned>;
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> imd0{}; 
        namespace Imd0ValC{
        }
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> imd1{}; 
        namespace Imd1ValC{
        }
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> imd2{}; 
        namespace Imd2ValC{
        }
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> imd3{}; 
        namespace Imd3ValC{
        }
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> imd4{}; 
        namespace Imd4ValC{
        }
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> imd5{}; 
        namespace Imd5ValC{
        }
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> imd6{}; 
        namespace Imd6ValC{
        }
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> imd7{}; 
        namespace Imd7ValC{
        }
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> imd8{}; 
        namespace Imd8ValC{
        }
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> imd9{}; 
        namespace Imd9ValC{
        }
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> imd10{}; 
        namespace Imd10ValC{
        }
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> imd11{}; 
        namespace Imd11ValC{
        }
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> imd12{}; 
        namespace Imd12ValC{
        }
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> imd13{}; 
        namespace Imd13ValC{
        }
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> imd14{}; 
        namespace Imd14ValC{
        }
        ///Port [A/B/C/D/E] Edge or Level Detection Interrupt Control
IMD[n] is used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce. If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrup.
1 = Level trigger interrupt
0 = Edge trigger interrupt
If set pin as the level trigger interrupt, then only one level can be set on the registers GPIOx_IEN. If set both the level to trigger interrupt, the setting is ignored and no interrupt will occur
The de-bounce function is valid for edge triggered interrupt. If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> imd15{}; 
        namespace Imd15ValC{
        }
    }
    namespace Noneien{    ///<GPIO Port Interrupt Enable
        using Addr = Register::Address<0x5000401c,0x00000000,0,unsigned>;
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ifEn0{}; 
        namespace Ifen0ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ifEn1{}; 
        namespace Ifen1ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ifEn2{}; 
        namespace Ifen2ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ifEn3{}; 
        namespace Ifen3ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ifEn4{}; 
        namespace Ifen4ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ifEn5{}; 
        namespace Ifen5ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ifEn6{}; 
        namespace Ifen6ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ifEn7{}; 
        namespace Ifen7ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ifEn8{}; 
        namespace Ifen8ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ifEn9{}; 
        namespace Ifen9ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ifEn10{}; 
        namespace Ifen10ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ifEn11{}; 
        namespace Ifen11ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ifEn12{}; 
        namespace Ifen12ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ifEn13{}; 
        namespace Ifen13ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ifEn14{}; 
        namespace Ifen14ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IF_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "low" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "high-to-low" will generate the interrupt.
1 = Enable the PIN[n] state low-level or high-to-low change interrupt 
0 = Disable the PIN[n] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ifEn15{}; 
        namespace Ifen15ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> irEn0{}; 
        namespace Iren0ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> irEn1{}; 
        namespace Iren1ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> irEn2{}; 
        namespace Iren2ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> irEn3{}; 
        namespace Iren3ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> irEn4{}; 
        namespace Iren4ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> irEn5{}; 
        namespace Iren5ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> irEn6{}; 
        namespace Iren6ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> irEn7{}; 
        namespace Iren7ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> irEn8{}; 
        namespace Iren8ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> irEn9{}; 
        namespace Iren9ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> irEn10{}; 
        namespace Iren10ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> irEn11{}; 
        namespace Iren11ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> irEn12{}; 
        namespace Iren12ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> irEn13{}; 
        namespace Iren13ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> irEn14{}; 
        namespace Iren14ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[n] used to enable the interrupt for each of the corresponding input GPIO_PIN[n]. Set bit to 1 also enable the pin wakeup function
When set the IR_EN[n] bit to 1:
If the interrupt is level trigger, the input PIN[n] state at level "high" will generate the interrupt.
If the interrupt is edge trigger, the input PIN[n] state change from "low-to-high" will generate the interrupt.
1 = Enable the PIN[n] level-high or low-to-high interrupt 
0 = Disable the PIN[n] level-high or low-to-high interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> irEn15{}; 
        namespace Iren15ValC{
        }
    }
    namespace Noneisrc{    ///<GPIO Port Interrupt Trigger Source Indicator
        using Addr = Register::Address<0x50004020,0xffff0000,0,unsigned>;
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> isrc0{}; 
        namespace Isrc0ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isrc1{}; 
        namespace Isrc1ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> isrc2{}; 
        namespace Isrc2ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> isrc3{}; 
        namespace Isrc3ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> isrc4{}; 
        namespace Isrc4ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> isrc5{}; 
        namespace Isrc5ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> isrc6{}; 
        namespace Isrc6ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> isrc7{}; 
        namespace Isrc7ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> isrc8{}; 
        namespace Isrc8ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> isrc9{}; 
        namespace Isrc9ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> isrc10{}; 
        namespace Isrc10ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> isrc11{}; 
        namespace Isrc11ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> isrc12{}; 
        namespace Isrc12ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> isrc13{}; 
        namespace Isrc13ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> isrc14{}; 
        namespace Isrc14ValC{
        }
        ///Port [A/B/C/D/E] Interrupt Trigger Source Indicator
Read :
1 = Indicates GPIOx[n] generate an interrupt
0 = No interrupt at GPIOx[n]
Write :
1= Clear the correspond pending interrupt
0= No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> isrc15{}; 
        namespace Isrc15ValC{
        }
    }
}
