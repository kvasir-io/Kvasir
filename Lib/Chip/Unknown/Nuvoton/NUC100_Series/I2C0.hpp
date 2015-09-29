#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace Nonei2con{    ///<I2C Control Register
        using Addr = Register::Address<0x40020000,0xffffff03,0,unsigned>;
        ///Assert Acknowledge Control Bit
When AA=1 prior to address or data received, an acknowledged (low level to SDA) will be returned during the acknowledge clock pulse on the SCL line when 1.) A slave is acknowledging the address sent from master, 2.) The receiver devices are acknowledging the data sent by transmitter. When AA=0 prior to address or data received, a Not acknowledged (high level to SDA) will be returned during the acknowledge clock pulse on the SCL line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aa{}; 
        ///I2C Interrupt Flag
When a new I2C state is present in the I2CSTATUS register, the SI flag is set by hardware, and if bit EI (I2CON [7]) is set, the I2C interrupt is requested. SI must be cleared by software. Clear SI is by writing 1 to this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> si{}; 
        ///I2C STOP Control Bit
In master mode, setting STO to transmit a STOP condition to bus then I2C hardware will check the bus condition if a STOP condition is detected this bit will be cleared by hardware automatically. In a slave mode, setting STO resets I2C hardware to the defined "not addressed" slave mode. This means it is NO LONGER in the slave receiver mode to receive data from the master transmit device.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sto{}; 
        ///I2C START Control Bit
Setting STA to logic 1 to enter master mode, the I2C hardware sends a START or repeat START condition to bus when the bus is free.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sta{}; 
        ///I2C Controller Enable Bit
1 = Enable
0 = Disable
Set to enable I2C serial function block. When ENSI=1 the I2C serial function enables. The multi-function pin function of SDA and SCL must set to I2C function first.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ensi{}; 
        ///Enable Interrupt
1 = Enable I2C interrupt
0 = Disable I2C interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ei{}; 
    }
    namespace Nonei2caddr0{    ///<I2C Slave Address Register0
        using Addr = Register::Address<0x40020004,0xffffff00,0,unsigned>;
        ///General Call Function
0 = Disable General Call Function.
1 = Enable General Call Function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gc{}; 
        ///I2C Address register
The content of this register is irrelevant when I2C is in master mode. In the slave mode, the seven most significant bits must be loaded with the MCU's own address. The I2C hardware will react if either of the address is matched.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2caddr{}; 
    }
    namespace Nonei2cdat{    ///<I2C Data Register
        using Addr = Register::Address<0x40020008,0xffffff00,0,unsigned>;
        ///I2C Data Register
Bit[7:0] is located with the 8-bit transferred data of I2C serial port. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> i2cdat{}; 
    }
    namespace Nonei2cstatus{    ///<I2C Status Register
        using Addr = Register::Address<0x4002000c,0xffffff00,0,unsigned>;
        ///I2C Status Register 
The status register of I2C:
The three least significant bits are always 0. The five most significant bits contain the status code. There are 26 possible status codes. When I2STATUS contains F8H, no serial interrupt is requested. All other I2CSTATUS values correspond to defined I2C states. When each of these states is entered, a status interrupt is requested (SI = 1). A valid status code is present in I2CSTATUS one machine cycle after SI is set by hardware and is still present one machine cycle after SI has been reset by software. In addition, states 00H stands for a Bus Error. A Bus Error occurs when a START or STOP condition is present at an illegal position in the formation frame. Example of illegal position are during the serial transfer of an address byte, a data byte or an acknowledge bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> i2cstatus{}; 
    }
    namespace Nonei2clk{    ///<I2C Clock Divided Register
        using Addr = Register::Address<0x40020010,0xffffff00,0,unsigned>;
        ///I2C Clock Divided Register
The I2C clock rate bits: Data Baud Rate of I2C = system clock /(4x(I2CLK+1)).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> i2clk{}; 
    }
    namespace Nonei2ctoc{    ///<I2C Time-Out Control Register
        using Addr = Register::Address<0x40020014,0xfffffff8,0,unsigned>;
        ///Time-Out Flag
1 = Time-Out falg is set by H/W. It can interrupt CPU.
0 = S/W can clear the flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tif{}; 
        ///Time-Out counter input clock is divided by 4
1 = Enable
0 = Disable
When Enable, The time-Out period is extend 4 times.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> div4{}; 
        ///Time-out counter is enabled/disable
1 = Enable
0 = Disable
When Enable, the 14 bit time-out counter will start counting when SI is clear. Setting flag SI to high will reset counter and re-start up counting after SI is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enti{}; 
    }
    namespace Nonei2caddr1{    ///<I2C Slave address Register1
        using Addr = Register::Address<0x40020018,0xffffff00,0,unsigned>;
        ///General Call Function
0 = Disable General Call Function.
1 = Enable General Call Function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gc{}; 
        ///I2C Address register
The content of this register is irrelevant when I2C is in master mode. In the slave mode, the seven most significant bits must be loaded with the MCU's own address. The I2C hardware will react if either of the address is matched.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2caddr{}; 
    }
    namespace Nonei2caddr2{    ///<I2C Slave address Register2
        using Addr = Register::Address<0x4002001c,0xffffff00,0,unsigned>;
        ///General Call Function
0 = Disable General Call Function.
1 = Enable General Call Function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gc{}; 
        ///I2C Address register
The content of this register is irrelevant when I2C is in master mode. In the slave mode, the seven most significant bits must be loaded with the MCU's own address. The I2C hardware will react if either of the address is matched.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2caddr{}; 
    }
    namespace Nonei2caddr3{    ///<I2C Slave address Register3
        using Addr = Register::Address<0x40020020,0xffffff00,0,unsigned>;
        ///General Call Function
0 = Disable General Call Function.
1 = Enable General Call Function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gc{}; 
        ///I2C Address register
The content of this register is irrelevant when I2C is in master mode. In the slave mode, the seven most significant bits must be loaded with the MCU's own address. The I2C hardware will react if either of the address is matched.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2caddr{}; 
    }
    namespace Nonei2cadm0{    ///<I2C Slave Address Mask Register0
        using Addr = Register::Address<0x40020024,0xffffff01,0,unsigned>;
        ///I2C Address Mask register
1 = Mask enable (the received corresponding address bit is don't care.)
0 = Mask disable (the received corresponding register bit should be exact the same as address register.) 
I2C bus controllers support multiple address recognition with four address mask reg. When the bit in the address mask register is set to one, it means the received corresponding address bit is don't-care. If the bit is set to zero, that means the received corresponding register bit should be exact the same as address register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2cadm{}; 
    }
    namespace Nonei2cadm1{    ///<I2C Slave Address Mask Register1
        using Addr = Register::Address<0x40020028,0xffffff01,0,unsigned>;
        ///I2C Address Mask register
1 = Mask enable (the received corresponding address bit is don't care.)
0 = Mask disable (the received corresponding register bit should be exact the same as address register.) 
I2C bus controllers support multiple address recognition with four address mask reg. When the bit in the address mask register is set to one, it means the received corresponding address bit is don't-care. If the bit is set to zero, that means the received corresponding register bit should be exact the same as address register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2cadm{}; 
    }
    namespace Nonei2cadm2{    ///<I2C Slave Address Mask Register2
        using Addr = Register::Address<0x4002002c,0xffffff01,0,unsigned>;
        ///I2C Address Mask register
1 = Mask enable (the received corresponding address bit is don't care.)
0 = Mask disable (the received corresponding register bit should be exact the same as address register.) 
I2C bus controllers support multiple address recognition with four address mask reg. When the bit in the address mask register is set to one, it means the received corresponding address bit is don't-care. If the bit is set to zero, that means the received corresponding register bit should be exact the same as address register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2cadm{}; 
    }
    namespace Nonei2cadm3{    ///<I2C Slave Address Mask Register3
        using Addr = Register::Address<0x40020030,0xffffff01,0,unsigned>;
        ///I2C Address Mask register
1 = Mask enable (the received corresponding address bit is don't care.)
0 = Mask disable (the received corresponding register bit should be exact the same as address register.) 
I2C bus controllers support multiple address recognition with four address mask reg. When the bit in the address mask register is set to one, it means the received corresponding address bit is don't-care. If the bit is set to zero, that means the received corresponding register bit should be exact the same as address register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2cadm{}; 
    }
}
