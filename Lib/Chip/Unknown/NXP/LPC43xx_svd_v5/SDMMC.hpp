#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx SD/MMC Modification date=n/a Major revision=n/a Minor revision=n/a 
    namespace Nonectrl{    ///<Control Register
        using Addr = Register::Address<0x40004000,0xfc00f008,0,unsigned>;
        ///Controller reset. To reset controller, firmware should set bit to 1. This bit is auto-cleared
after two AHB and two cclk_in clock cycles.
This resets:
* BIU/CIU interface
* CIU and state machines
* abort_read_data, send_irq_response, and read_wait bits of
Control register
* start_cmd bit of Command register
Does not affect any registers or DMA interface, or FIFO or host
interrupts
        enum class ControllerresetVal {
            nochange=0x00000000,     ///<No change
            reset=0x00000001,     ///<Reset DWC_mobile_storage controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ControllerresetVal> controllerReset{}; 
        namespace ControllerresetValC{
            constexpr Register::FieldValue<decltype(controllerReset)::Type,ControllerresetVal::nochange> nochange{};
            constexpr Register::FieldValue<decltype(controllerReset)::Type,ControllerresetVal::reset> reset{};
        }
        }
        ///fifo_reset. To reset FIFO, firmware should set bit to 1. This bit is auto-cleared after
completion of reset operation.
auto-cleared after two AHB clocks.
        enum class FiforesetVal {
            nochange=0x00000000,     ///<No change
            reset=0x00000001,     ///<Reset to data FIFO To reset FIFO pointers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FiforesetVal> fifoReset{}; 
        namespace FiforesetValC{
            constexpr Register::FieldValue<decltype(fifoReset)::Type,FiforesetVal::nochange> nochange{};
            constexpr Register::FieldValue<decltype(fifoReset)::Type,FiforesetVal::reset> reset{};
        }
        }
        ///dma_reset. To reset DMA interface, firmware should set bit to 1. This bit is
auto-cleared after two AHB clocks.
        enum class DmaresetVal {
            nochange=0x00000000,     ///<No change
            reset=0x00000001,     ///<Reset internal DMA interface control logic
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DmaresetVal> dmaReset{}; 
        namespace DmaresetValC{
            constexpr Register::FieldValue<decltype(dmaReset)::Type,DmaresetVal::nochange> nochange{};
            constexpr Register::FieldValue<decltype(dmaReset)::Type,DmaresetVal::reset> reset{};
        }
        }
        ///Global interrupt enable/disable bit. The int port is 1 only when this bit is 1 and one or more unmasked
interrupts are set.
        enum class IntenableVal {
            disable=0x00000000,     ///<Disable interrupts
            enable=0x00000001,     ///<Enable interrupts
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IntenableVal> intEnable{}; 
        namespace IntenableValC{
            constexpr Register::FieldValue<decltype(intEnable)::Type,IntenableVal::disable> disable{};
            constexpr Register::FieldValue<decltype(intEnable)::Type,IntenableVal::enable> enable{};
        }
        }
        ///dma_enable. Valid only if DWC_mobile_storage configured for External DMA
interface.
Even when DMA mode is enabled, host can still push/pop data into or
from FIFO; this should not happen during the normal operation. If there
is simultaneous FIFO access from host/DMA, the data coherency is
lost. Also, there is no arbitration inside DWC_mobile_storage to
prioritize simultaneous host/DMA access.
        enum class DmaenableVal {
            disable=0x00000000,     ///<Disable DMA transfer mode
            enable=0x00000001,     ///<Enable DMA transfer mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DmaenableVal> dmaEnable{}; 
        namespace DmaenableValC{
            constexpr Register::FieldValue<decltype(dmaEnable)::Type,DmaenableVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dmaEnable)::Type,DmaenableVal::enable> enable{};
        }
        }
        ///read_wait. For sending read-wait to SDIO cards.
        enum class ReadwaitVal {
            clear=0x00000000,     ///<Clear read wait
            assert=0x00000001,     ///<Assert read wait
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ReadwaitVal> readWait{}; 
        namespace ReadwaitValC{
            constexpr Register::FieldValue<decltype(readWait)::Type,ReadwaitVal::clear> clear{};
            constexpr Register::FieldValue<decltype(readWait)::Type,ReadwaitVal::assert> assert{};
        }
        }
        ///send_irq_response. Bit automatically clears once response is sent.
To wait for MMC card interrupts, host issues CMD40, and
DWC_mobile_storage waits for interrupt response from MMC card(s). In
meantime, if host wants DWC_mobile_storage to exit waiting for
interrupt state, it can set this bit, at which time DWC_mobile_storage
command state-machine sends CMD40 response on bus and returns to
idle state.
        enum class SendirqresponseVal {
            nochange=0x00000000,     ///<No change
            sendresponse=0x00000001,     ///<Send auto IRQ response
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SendirqresponseVal> sendIrqResponse{}; 
        namespace SendirqresponseValC{
            constexpr Register::FieldValue<decltype(sendIrqResponse)::Type,SendirqresponseVal::nochange> nochange{};
            constexpr Register::FieldValue<decltype(sendIrqResponse)::Type,SendirqresponseVal::sendresponse> sendresponse{};
        }
        }
        ///abort_read_data. Used in SDIO card suspend sequence.
        enum class AbortreaddataVal {
            nochange=0x00000000,     ///<No change
            poll=0x00000001,     ///<After suspend command is issued during read-transfer, software
polls card to find when suspend happened. Once suspend occurs,
software sets bit to reset data state-machine, which is waiting for
next block of data. Bit automatically clears once data statemachine
resets to idle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AbortreaddataVal> abortReadData{}; 
        namespace AbortreaddataValC{
            constexpr Register::FieldValue<decltype(abortReadData)::Type,AbortreaddataVal::nochange> nochange{};
            constexpr Register::FieldValue<decltype(abortReadData)::Type,AbortreaddataVal::poll> poll{};
        }
        }
        ///send_ccsd. When set, DWC_mobile_storage sends CCSD to CE-ATA device.
Software sets this bit only if current command is expecting CCS (that is,
RW_BLK) and interrupts are enabled in CE-ATA device.
Once the CCSD pattern is sent to device, DWC_mobile_storage
automatically clears send_ccsd bit. It also sets Command Done (CD) bit
in RINTSTS register and generates interrupt to host if Command Done
interrupt is not masked.
NOTE: Once send_ccsd bit is set, it takes two card clock cycles to drive
the CCSD on the CMD line. Due to this, during the boundary conditions
it may happen that CCSD is sent to the CE-ATA device, even if the
device signalled CCS.
        enum class SendccsdVal {
            clear=0x00000000,     ///<Clear bit if DWC_mobile_storage does not reset the bit.
            send=0x00000001,     ///<Send Command Completion Signal Disable (CCSD) to CE-ATA
device
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SendccsdVal> sendCcsd{}; 
        namespace SendccsdValC{
            constexpr Register::FieldValue<decltype(sendCcsd)::Type,SendccsdVal::clear> clear{};
            constexpr Register::FieldValue<decltype(sendCcsd)::Type,SendccsdVal::send> send{};
        }
        }
        ///send_auto_stop_ccsd. NOTE: Always set send_auto_stop_ccsd and send_ccsd bits together;
send_auto_stop_ccsd should not be set independent of send_ccsd.
When set, DWC_Mobile_Storage automatically sends internallygenerated
STOP command (CMD12) to CE-ATA device. After sending
internally-generated STOP command, Auto Command Done (ACD) bit
in RINTSTS is set and generates interrupt to host if Auto Command
Done interrupt is not masked. After sending the CCSD,
DWC_mobile_storage automatically clears send_auto_stop_ccsd bit.
        enum class SendautostopccsdVal {
            clear=0x00000000,     ///<Clear bit if DWC_mobile_storage does not reset the bit.
            send=0x00000001,     ///<Send internally generated STOP after sending CCSD to CE-ATA
device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,SendautostopccsdVal> sendAutoStopCcsd{}; 
        namespace SendautostopccsdValC{
            constexpr Register::FieldValue<decltype(sendAutoStopCcsd)::Type,SendautostopccsdVal::clear> clear{};
            constexpr Register::FieldValue<decltype(sendAutoStopCcsd)::Type,SendautostopccsdVal::send> send{};
        }
        }
        ///ceata_device_interrupt
_status. Software should appropriately write to this bit after power-on reset or
any other reset to CE-ATA device. After reset, usually CE-ATA device
interrupt is disabled (nIEN = 1). If the host enables CE-ATA device
interrupt, then software should set this bit.
        enum class CeatadeviceinterruptstatusVal {
            disable=0x00000000,     ///<Interrupts not enabled in CE-ATA device (nIEN = 1 in ATA
control register)
            enable=0x00000001,     ///<Interrupts are enabled in CE-ATA device (nIEN = 0 in ATA
control register)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,CeatadeviceinterruptstatusVal> ceataDeviceInterruptStatus{}; 
        namespace CeatadeviceinterruptstatusValC{
            constexpr Register::FieldValue<decltype(ceataDeviceInterruptStatus)::Type,CeatadeviceinterruptstatusVal::disable> disable{};
            constexpr Register::FieldValue<decltype(ceataDeviceInterruptStatus)::Type,CeatadeviceinterruptstatusVal::enable> enable{};
        }
        }
        ///Card regulator-A voltage setting; output to card_volt_a port.
Optional feature; ports can be used as general-purpose outputs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cardVoltageA{}; 
        ///Card regulator-B voltage setting; output to card_volt_b port.
Optional feature; ports can be used as general-purpose outputs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cardVoltageB{}; 
        ///External open-drain pullup. Inverted value of this bit is output to ccmd_od_pullup_en_n port. When
bit is set, command output always driven in open-drive mode; that is,
DWC_mobile_storage drives either 0 or high impedance, and does not
drive hard 1.
        enum class EnableodpullupVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,EnableodpullupVal> enableOdPullup{}; 
        namespace EnableodpullupValC{
            constexpr Register::FieldValue<decltype(enableOdPullup)::Type,EnableodpullupVal::disable> disable{};
            constexpr Register::FieldValue<decltype(enableOdPullup)::Type,EnableodpullupVal::enable> enable{};
        }
        }
        ///Present only for the Internal DMAC configuration; else, it is reserved.
        enum class UseinternaldmacVal {
            host=0x00000000,     ///<The host performs data transfers through the slave interface
            dmac=0x00000001,     ///<Internal DMAC used for data transfer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,UseinternaldmacVal> useInternalDmac{}; 
        namespace UseinternaldmacValC{
            constexpr Register::FieldValue<decltype(useInternalDmac)::Type,UseinternaldmacVal::host> host{};
            constexpr Register::FieldValue<decltype(useInternalDmac)::Type,UseinternaldmacVal::dmac> dmac{};
        }
        }
    }
    namespace Nonepwren{    ///<Power Enable Register
        using Addr = Register::Address<0x40004004,0xc0000000,0,unsigned>;
        ///Power on/off switch for up to 16 cards; for example, bit[0] controls card 0.
Once power is turned on, firmware should wait for regulator/switch ramp-up
time before trying to initialize card.
0 - power off
1 - power on
Only NUM_CARDS number of bits are implemented.
Bit values output to card_power_en port.
Optional feature; ports can be used as general-purpose outputs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> powerEnable{}; 
    }
    namespace Noneclkdiv{    ///<Clock Divider Register
        using Addr = Register::Address<0x40004008,0x00000000,0,unsigned>;
        ///Clock divider-0 value. Clock division is 2*n. For example, value of 0 means
divide by 2*0 = 0 (no division, bypass), value of 1 means divide by 2*1 = 2,
value of  ff  means divide by 2*255 = 510, and so on.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkDivider0{}; 
        ///Clock divider-1 value. Clock division is 2*n. For example, value of 0 means
divide by 2*0 = 0 (no division, bypass), value of 1 means divide by 2*1 = 2,
value of  ff  means divide by 2*255 = 510, and so on.
In MMC-Ver3.3-only mode, bits not implemented because only one clock
divider is supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clkDivider1{}; 
        ///Clock divider-2 value. Clock division is 2*n. For example, value of 0 means
divide by 2*0 = 0 (no division, bypass), value of 1 means divide by 2*1 = 2,
value of  ff  means divide by 2*255 = 510, and so on.
In MMC-Ver3.3-only mode, bits not implemented because only one clock
divider is supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clkDivider2{}; 
        ///Clock divider-3 value. Clock division is 2*n. For example, value of 0 means
divide by 2*0 = 0 (no division, bypass), a value of 1 means divide by 2*1 = 2, a
value of  ff  means divide by 2*255 = 510, and so on.
In MMC-Ver3.3-only mode, bits not implemented because only one clock
divider is supported.
divide by 2*0 = 0 (no division, bypass), value of 1 means divide by 2*1 = 2,
value of  ff  means divide by 2*255 = 510, and so on.
In MMC-Ver3.3-only mode, bits not implemented because only one clock
divider is supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clkDivider3{}; 
    }
    namespace Noneclksrc{    ///<SD Clock Source Register
        using Addr = Register::Address<0x4000400c,0x00000000,0,unsigned>;
        ///Clock divider source for up to 16 SD cards supported. Each card has two bits
assigned to it. For example, bits[1:0] assigned for card-0, which maps and internally
routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending on bit value.
00 - Clock divider 0
01 - Clock divider 1
10 - Clock divider 2
11 - Clock divider 3
In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
always from clock divider 0, and this register is not implemented.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clkSource{}; 
    }
    namespace Noneclkena{    ///<Clock Enable Register
        using Addr = Register::Address<0x40004010,0x00000000,0,unsigned>;
        ///Low-power control for up to 16 SD card clocks and one MMC card clock
supported.
0 - Non-low-power mode
1 - Low-power mode; stop clock when card in IDLE (should be
normally set to only MMC and SD memory cards; for SDIO cards,
if interrupts must be detected, clock should not be stopped).
In MMC-Ver3.3-only mode, since there is only one cclk_out, only
cclk_low_power[0] is used.
supported.
0 - Clock disabled
1 - Clock enabled
In MMC-Ver3.3-only mode, since there is only one cclk_out, only
cclk_enable[0] is used.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cclkEnable{}; 
        ///Clock-enable control for up to 16 SD card clocks and one MMC card clock
supported.
0 - Clock disabled
1 - Clock enabled
In MMC-Ver3.3-only mode, since there is only one cclk_out, only
cclk_enable[0] is used.
supported.
0 - Non-low-power mode
1 - Low-power mode; stop clock when card in IDLE (should be
normally set to only MMC and SD memory cards; for SDIO cards,
if interrupts must be detected, clock should not be stopped).
In MMC-Ver3.3-only mode, since there is only one cclk_out, only
cclk_low_power[0] is used.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cclkLowPower{}; 
    }
    namespace Nonetmout{    ///<Timeout Register
        using Addr = Register::Address<0x40004014,0x00000000,0,unsigned>;
        ///Response timeout value.
Value is in number of card output clocks - cclk_out.
Value is in number of card output clocks - cclk_out.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> responseTimeout{}; 
        ///Value for card Data Read Timeout; same value also used for Data
Starvation by Host timeout.
Value is in number of card output clocks - cclk_out of selected card.
Starvation by Host timeout.
Value is in number of card output clocks - cclk_out of selected card.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> dataTimeout{}; 
    }
    namespace Nonectype{    ///<Card Type Register
        using Addr = Register::Address<0x40004018,0x00000000,0,unsigned>;
        ///One bit per card indicates if card is 1-bit or 4-bit:
0 - 1-bit mode
1 - 4-bit mode
Bit[15] corresponds to card[15], bit[0] corresponds to card[0].
Only NUM_CARDS*2 number of bits are implemented.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cardWidth0{}; 
        ///One bit per card indicates if card is 8-bit:
0 - Non 8-bit mode
1 - 8-bit mode
Bit[31] corresponds to card[15]; bit[16] corresponds to card[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cardWidth1{}; 
    }
    namespace Noneblksiz{    ///<Block Size Register
        using Addr = Register::Address<0x4000401c,0xffff0000,0,unsigned>;
        ///Block size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blockSize{}; 
    }
    namespace Nonebytcnt{    ///<Byte Count Register
        using Addr = Register::Address<0x40004020,0x00000000,0,unsigned>;
        ///Number of bytes to be transferred; should be integer multiple of Block Size for
block transfers.
For undefined number of byte transfers, byte count should be set to 0. When byte
count is set to 0, it is responsibility of host to explicitly send stop/abort command
to terminate data transfer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> byteCount{}; 
    }
    namespace Noneintmask{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x40004024,0x00000000,0,unsigned>;
        ///Card detect. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cdet{}; 
        ///Response error. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> re{}; 
        ///Command done. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cdone{}; 
        ///Data transfer over. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dto{}; 
        ///Transmit FIFO data request. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txdr{}; 
        ///Receive FIFO data request. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxdr{}; 
        ///Response CRC error. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rcrc{}; 
        ///Data CRC error. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcrc{}; 
        ///Response timeout. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rto{}; 
        ///Data read timeout. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> drto{}; 
        ///Data starvation-by-host timeout (HTO) /Volt_switch_int. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hto{}; 
        ///FIFO underrun/overrun error. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> frun{}; 
        ///Hardware locked write error. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> hle{}; 
        ///Start-bit error. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sbe{}; 
        ///Auto command done. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> acd{}; 
        ///End-bit error (read)/Write no CRC. Bits used to mask unwanted interrupts. Value of 0 masks interrupt; value of 1
enables interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ebe{}; 
        ///Mask SDIO interrupts
One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds to
card[0]. When masked, SDIO interrupt detection for that card is disabled.
A 0 masks an interrupt, and 1 enables an interrupt.
In MMC-Ver3.3-only mode, these bits are always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sdioIntMask{}; 
    }
    namespace Nonecmdarg{    ///<Command Argument Register
        using Addr = Register::Address<0x40004028,0x00000000,0,unsigned>;
        ///Value indicates command argument to be passed to card.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdArg{}; 
    }
    namespace Nonecmd{    ///<Command Register
        using Addr = Register::Address<0x4000402c,0x60000000,0,unsigned>;
        ///Command index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmdIndex{}; 
        ///response expect
        enum class ResponseexpectVal {
            noresponse=0x00000000,     ///<No response expected from card
            response=0x00000001,     ///<Response expected from card
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ResponseexpectVal> responseExpect{}; 
        namespace ResponseexpectValC{
            constexpr Register::FieldValue<decltype(responseExpect)::Type,ResponseexpectVal::noresponse> noresponse{};
            constexpr Register::FieldValue<decltype(responseExpect)::Type,ResponseexpectVal::response> response{};
        }
        }
        ///response length
        enum class ResponselengthVal {
            shortresponse=0x00000000,     ///<Short response expected from card
            longresponse=0x00000001,     ///<Long response expected from card
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ResponselengthVal> responseLength{}; 
        namespace ResponselengthValC{
            constexpr Register::FieldValue<decltype(responseLength)::Type,ResponselengthVal::shortresponse> shortresponse{};
            constexpr Register::FieldValue<decltype(responseLength)::Type,ResponselengthVal::longresponse> longresponse{};
        }
        }
        ///check  response crc Some of command responses do not return valid CRC bits.
Software should disable CRC checks for those commands in order
to disable CRC checking by controller.
        enum class CheckresponsecrcVal {
            donotcheckcrc=0x00000000,     ///<Do not check response CRC
            checkcrc=0x00000001,     ///<Check response CRC
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CheckresponsecrcVal> checkResponseCrc{}; 
        namespace CheckresponsecrcValC{
            constexpr Register::FieldValue<decltype(checkResponseCrc)::Type,CheckresponsecrcVal::donotcheckcrc> donotcheckcrc{};
            constexpr Register::FieldValue<decltype(checkResponseCrc)::Type,CheckresponsecrcVal::checkcrc> checkcrc{};
        }
        }
        ///data expected
        enum class DataexpectedVal {
            nodatatxf=0x00000000,     ///<No data transfer expected (read/write)
            datatxf=0x00000001,     ///<Data transfer expected (read/write)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,DataexpectedVal> dataExpected{}; 
        namespace DataexpectedValC{
            constexpr Register::FieldValue<decltype(dataExpected)::Type,DataexpectedVal::nodatatxf> nodatatxf{};
            constexpr Register::FieldValue<decltype(dataExpected)::Type,DataexpectedVal::datatxf> datatxf{};
        }
        }
        ///read/write. Don't care if no data expected from card.
        enum class ReadwriteVal {
            readcard=0x00000000,     ///<Read from card
            datatxf=0x00000001,     ///<Data transfer expected (read/write)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ReadwriteVal> readWrite{}; 
        namespace ReadwriteValC{
            constexpr Register::FieldValue<decltype(readWrite)::Type,ReadwriteVal::readcard> readcard{};
            constexpr Register::FieldValue<decltype(readWrite)::Type,ReadwriteVal::datatxf> datatxf{};
        }
        }
        ///transfer mode. Don' t care if no data expected.
        enum class TransfermodeVal {
            blocktxf=0x00000000,     ///<Block data transfer command
            streamtxf=0x00000001,     ///<Stream data transfer command
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TransfermodeVal> transferMode{}; 
        namespace TransfermodeValC{
            constexpr Register::FieldValue<decltype(transferMode)::Type,TransfermodeVal::blocktxf> blocktxf{};
            constexpr Register::FieldValue<decltype(transferMode)::Type,TransfermodeVal::streamtxf> streamtxf{};
        }
        }
        ///send auto stop.  When set, DWC_mobile_storage sends stop command to
SD_MMC_CEATA cards at end of data transfer. Refer to Table 3-8
on page 93 to determine:
* when send_auto_stop bit should be set, since some data
transfers do not need explicit stop commands
* open-ended transfers that software should explicitly send to
stop command
Additionally, when  resume  is sent to resume - suspended memory
access of SD-Combo card - bit should be set correctly if suspended
data transfer needs send_auto_stop.
Don't care if no data expected from card.
        enum class SendautostopVal {
            nostop=0x00000000,     ///<No stop command sent at end of data transfer
            stop=0x00000001,     ///<Send stop command at end of data transfer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,SendautostopVal> sendAutoStop{}; 
        namespace SendautostopValC{
            constexpr Register::FieldValue<decltype(sendAutoStop)::Type,SendautostopVal::nostop> nostop{};
            constexpr Register::FieldValue<decltype(sendAutoStop)::Type,SendautostopVal::stop> stop{};
        }
        }
        ///wait prvdata complete. The wait_prvdata_complete = 0 option typically used to query
status of card during data transfer or to stop current data transfer;
card_number should be same as in previous command.
        enum class WaitprvdatacompleteVal {
            send=0x00000000,     ///<Send command at once, even if previous data transfer has not
completed.
            wait=0x00000001,     ///<Wait for previous data transfer completion before sending
command.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,WaitprvdatacompleteVal> waitPrvdataComplete{}; 
        namespace WaitprvdatacompleteValC{
            constexpr Register::FieldValue<decltype(waitPrvdataComplete)::Type,WaitprvdatacompleteVal::send> send{};
            constexpr Register::FieldValue<decltype(waitPrvdataComplete)::Type,WaitprvdatacompleteVal::wait> wait{};
        }
        }
        ///stop abort cmd. When open-ended or predefined data transfer is in progress, and
host issues stop or abort command to stop data transfer, bit should
be set so that command/data state-machines of CIU can return
correctly to idle state. This is also applicable for Boot mode
transfers. To Abort boot mode, this bit should be set along with
CMD[26] = disable_boot.
        enum class StopabortcmdVal {
            nostopabort=0x00000000,     ///<Neither stop nor abort command to stop current data transfer
in progress. If abort is sent to function-number currently
selected or not in data-transfer mode, then bit should be set
to 0.

            stopabort=0x00000001,     ///<Stop or abort command intended to stop current data transfer
in progress..
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StopabortcmdVal> stopAbortCmd{}; 
        namespace StopabortcmdValC{
            constexpr Register::FieldValue<decltype(stopAbortCmd)::Type,StopabortcmdVal::nostopabort> nostopabort{};
            constexpr Register::FieldValue<decltype(stopAbortCmd)::Type,StopabortcmdVal::stopabort> stopabort{};
        }
        }
        ///send initialization.  After power on, 80 clocks must be sent to card for initialization
before sending any commands to card. Bit should be set while
sending first command to card so that controller will initialize clocks
before sending command to card. This bit should not be set for
either of the boot modes (alternate or mandatory).
        enum class SendinitializationVal {
            noinit=0x00000000,     ///<Do not send initialization sequence (80 clocks of 1) before
sending this command.
            init=0x00000001,     ///<Send initialization sequence before sending this command.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,SendinitializationVal> sendInitialization{}; 
        namespace SendinitializationValC{
            constexpr Register::FieldValue<decltype(sendInitialization)::Type,SendinitializationVal::noinit> noinit{};
            constexpr Register::FieldValue<decltype(sendInitialization)::Type,SendinitializationVal::init> init{};
        }
        }
        ///card number. Card number in use. Represents physical slot number of card being
accessed. In MMC-Ver3.3-only mode, up to 30 cards are supported;
in SD-only mode, up to 16 cards are supported. Registered version
of this is reflected on dw_dma_card_num and ge_dma_card_num
ports, which can be used to create separate DMA requests, if
needed.
In addition, in SD mode this is used to mux or demux signals from
selected card because each card is interfaced to
DWC_mobile_storage by separate bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> cardNumber{}; 
        ///update clock registers only. Following register values transferred into card clock domain:
CLKDIV, CLRSRC, CLKENA.
Changes card clocks (change frequency, truncate off or on, and set
low-frequency mode); provided in order to change clock frequency
or stop clock without having to send command to cards.
During normal command sequence, when
update_clock_registers_only = 0, following control registers are
transferred from BIU to CIU: CMD, CMDARG, TMOUT, CTYPE,
BLKSIZ, BYTCNT. CIU uses new register values for new command
sequence to card(s).
When bit is set, there are no Command Done interrupts because no
command is sent to SD_MMC_CEATA cards.
registers_only. 
        enum class UpdateclockregistersonlyVal {
            normal=0x00000000,     ///<Normal command sequence
            nocommand=0x00000001,     ///<Do not send commands, just update clock register value into
card clock domain
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,UpdateclockregistersonlyVal> updateClockRegistersOnly{}; 
        namespace UpdateclockregistersonlyValC{
            constexpr Register::FieldValue<decltype(updateClockRegistersOnly)::Type,UpdateclockregistersonlyVal::normal> normal{};
            constexpr Register::FieldValue<decltype(updateClockRegistersOnly)::Type,UpdateclockregistersonlyVal::nocommand> nocommand{};
        }
        }
        ///read ceata device. Software should set this bit to indicate that CE-ATA device is being
accessed for read transfer. This bit is used to disable read data
timeout indication while performing CE-ATA read transfers.
Maximum value of I/O transmission delay can be no less than
10 seconds. DWC_mobile_storage should not indicate read data
timeout while waiting for data from CE-ATA device.
        enum class ReadceatadeviceVal {
            noread=0x00000000,     ///<Host is not performing read access (RW_REG or RW_BLK)
towards CE-ATA device.
            read=0x00000001,     ///<Host is performing read access (RW_REG or RW_BLK)
towards CE-ATA device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ReadceatadeviceVal> readCeataDevice{}; 
        namespace ReadceatadeviceValC{
            constexpr Register::FieldValue<decltype(readCeataDevice)::Type,ReadceatadeviceVal::noread> noread{};
            constexpr Register::FieldValue<decltype(readCeataDevice)::Type,ReadceatadeviceVal::read> read{};
        }
        }
        ///ccs expected. If the command expects Command Completion Signal (CCS) from
the CE-ATA device, the software should set this control bit.
DWC_mobile_storage sets Data Transfer Over (DTO) bit in
RINTSTS register and generates interrupt to host if Data Transfer
Over interrupt is not masked.
        enum class CcsexpectedVal {
            disable=0x00000000,     ///<Interrupts are not enabled in CE-ATA device (nIEN = 1 in
ATA control register), or command does not expect CCS
from device.
            enable=0x00000001,     ///<Interrupts are enabled in CE-ATA device (nIEN = 0), and
RW_BLK command expects command completion signal
from CE-ATA device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,CcsexpectedVal> ccsExpected{}; 
        namespace CcsexpectedValC{
            constexpr Register::FieldValue<decltype(ccsExpected)::Type,CcsexpectedVal::disable> disable{};
            constexpr Register::FieldValue<decltype(ccsExpected)::Type,CcsexpectedVal::enable> enable{};
        }
        }
        ///Enable Boot - this bit should be set only for mandatory boot mode.
When Software sets this bit along with start_cmd, CIU starts the
boot sequence for the corresponding card by asserting the CMD
line low. Do NOT set disable_boot and enable_boot together.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> enableBoot{}; 
        ///Expect Boot Acknowledge. When Software sets this bit along with
enable_boot, CIU expects a boot acknowledge start pattern of 0-1-0
from the selected card.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> expectBootAck{}; 
        ///Disable Boot. When software sets this bit along with start_cmd, CIU
terminates the boot operation. Do NOT set disable_boot and
enable_boot together.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> disableBoot{}; 
        ///Boot Mode
        enum class BootmodeVal {
            mandatoryboot=0x00000000,     ///<Mandatory Boot operation
            altboot=0x00000001,     ///<Alternate Boot operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,BootmodeVal> bootMode{}; 
        namespace BootmodeValC{
            constexpr Register::FieldValue<decltype(bootMode)::Type,BootmodeVal::mandatoryboot> mandatoryboot{};
            constexpr Register::FieldValue<decltype(bootMode)::Type,BootmodeVal::altboot> altboot{};
        }
        }
        ///Voltage switch bit
        enum class VoltswitchVal {
            disable=0x00000000,     ///<No voltage switching
            enable=0x00000001,     ///<Voltage switching enabled; must be set for CMD11 only
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,VoltswitchVal> voltSwitch{}; 
        namespace VoltswitchValC{
            constexpr Register::FieldValue<decltype(voltSwitch)::Type,VoltswitchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(voltSwitch)::Type,VoltswitchVal::enable> enable{};
        }
        }
        ///Start command. Once command is taken by CIU, bit is cleared.
When bit is set, host should not attempt to write to any command
registers. If write is attempted, hardware lock error is set in raw
interrupt register.
Once command is sent and response is received from
SD_MMC_CEATA cards, Command Done bit is set in raw interrupt
register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> startCmd{}; 
    }
    namespace Noneresp0{    ///<Response Register 0
        using Addr = Register::Address<0x40004030,0x00000000,0,unsigned>;
        ///Bit[31:0] of response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> response0{}; 
    }
    namespace Noneresp1{    ///<Response Register 1
        using Addr = Register::Address<0x40004034,0x00000000,0,unsigned>;
        ///Register represents bit[63:32] of long response.
When CIU sends auto-stop command, then response is saved in register.
Response for previous command sent by host is still preserved in Response 0
register. Additional auto-stop issued only for data transfer commands, and
response type is always  short  for them. For information on when CIU sends
auto-stop commands, refer to  Auto-Stop  on page 93.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> response1{}; 
    }
    namespace Noneresp2{    ///<Response Register 2
        using Addr = Register::Address<0x40004038,0x00000000,0,unsigned>;
        ///Bit[95:64] of long response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> response2{}; 
    }
    namespace Noneresp3{    ///<Response Register 3
        using Addr = Register::Address<0x4000403c,0x00000000,0,unsigned>;
        ///Bit[127:96] of long response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> response3{}; 
    }
    namespace Nonemintsts{    ///<Masked Interrupt Status Register
        using Addr = Register::Address<0x40004040,0x00000000,0,unsigned>;
        ///Card detect. Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cdet{}; 
        ///Response error. Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> re{}; 
        ///Command done. Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cdone{}; 
        ///Data transfer over. Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dto{}; 
        ///Transmit FIFO data request. Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txdr{}; 
        ///Receive FIFO data request. Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxdr{}; 
        ///Response CRC error. Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rcrc{}; 
        ///Data CRC error. Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcrc{}; 
        ///Response timeout. Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rto{}; 
        ///Data read timeout . Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> drto{}; 
        ///Data starvation-by-host timeout (HTO) . Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hto{}; 
        ///FIFO underrun/overrun error. Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> frun{}; 
        ///Hardware locked write error. Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> hle{}; 
        ///Start-bit error. Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sbe{}; 
        ///Auto command done. Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> acd{}; 
        ///End-bit error (read)/write no CRC. Interrupt enabled only if corresponding bit in interrupt mask register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ebe{}; 
        ///Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
enables interrupt; 0 masks interrupt).
0 - No SDIO interrupt from card
1 - SDIO interrupt from card
In MMC-Ver3.3-only mode, bits always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sdioInterrupt{}; 
    }
    namespace Nonerintsts{    ///<Raw Interrupt Status Register
        using Addr = Register::Address<0x40004044,0x00000000,0,unsigned>;
        ///Card detect. Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cdet{}; 
        ///Response error. Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> re{}; 
        ///Command done. Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cdone{}; 
        ///Data transfer over. Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dto{}; 
        ///Transmit FIFO data request. Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txdr{}; 
        ///Receive FIFO data request. Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxdr{}; 
        ///Response CRC error. Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rcrc{}; 
        ///Data CRC error. Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcrc{}; 
        ///Response timeout (RTO)/Boot Ack Received (BAR). Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rtoBar{}; 
        ///Data read timeout (DRTO)/Boot Data Start (BDS). Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> drtoBds{}; 
        ///Data starvation-by-host timeout (HTO) . Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status./Volt_switch_int
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hto{}; 
        ///FIFO underrun/overrun error. Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> frun{}; 
        ///Hardware locked write error. Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> hle{}; 
        ///Start-bit error. Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sbe{}; 
        ///Auto command done. Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> acd{}; 
        ///End-bit error (read)/write no CRC. Writes to bits clear status bit. Value of 1 clears status bit, and value of 0
leaves bit intact. Bits are logged regardless of interrupt mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ebe{}; 
        ///Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value
of 1 clears bit and 0 leaves bit intact.
0 - No SDIO interrupt from card
1 - SDIO interrupt from card
In MMC-Ver3.3-only mode, bits always 0.
Bits are logged regardless of interrupt-mask status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sdioInterrupt{}; 
    }
    namespace Nonestatus{    ///<Status Register
        using Addr = Register::Address<0x40004048,0x00000000,0,unsigned>;
        ///FIFO reached Receive watermark level; not qualified with data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fifoRxWatermark{}; 
        ///FIFO reached Transmit watermark level; not qualified with data
transfer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fifoTxWatermark{}; 
        ///FIFO is empty status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fifoEmpty{}; 
        ///FIFO is full status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fifoFull{}; 
        ///Command FSM states:
0 - Idle
1 - Send init sequence
2 - Tx cmd start bit
3 - Tx cmd tx bit
4 - Tx cmd index + arg
5 - Tx cmd crc7
6 - Tx cmd end bit
7 - Rx resp start bit
8 - Rx resp IRQ response
9 - Rx resp tx bit
10 - Rx resp cmd idx
11 - Rx resp data
12 - Rx resp crc7
13 - Rx resp end bit
14 - Cmd path wait NCC
15 - Wait; CMD-to-response turnaround
NOTE: The command FSM state is represented using 19 bits.
The STATUS Register(7:4) has 4 bits to represent the command
FSM states. Using these 4 bits, only 16 states can be
represented. Thus three states cannot be represented in the
STATUS(7:4) register. The three states that are not represented in
the STATUS Register(7:4) are:
* Bit 16 - Wait for CCS
* Bit 17 - Send CCSD
* Bit 18 - Boot Mode
Due to this, while command FSM is in  Wait for CCS state  or
 Send CCSD  or  Boot Mode , the Status register indicates status
as 0 for the bit field 7:4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cmdfsmstates{}; 
        ///Raw selected card_data[3]; checks whether card is present
0 - card not present
1 - card present
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> data3Status{}; 
        ///Inverted version of raw selected card_data[0]
0 - card data not busy
1 - card data busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dataBusy{}; 
        ///Data transmit or receive state-machine is busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dataStateMcBusy{}; 
        ///Index of previous response, including any auto-stop sent by core.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,11),Register::ReadWriteAccess,unsigned> responseIndex{}; 
        ///FIFO count - Number of filled locations in FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,17),Register::ReadWriteAccess,unsigned> fifoCount{}; 
        ///DMA acknowledge signal state; either dw_dma_ack or
ge_dma_ack, depending on DW-DMA or Generic-DMA selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dmaAck{}; 
        ///DMA request signal state; either dw_dma_req or ge_dma_req,
depending on DW-DMA or Generic-DMA selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dmaReq{}; 
    }
    namespace Nonefifoth{    ///<FIFO Threshold Watermark Register
        using Addr = Register::Address<0x4000404c,0x8000f000,0,unsigned>;
        ///FIFO threshold watermark level when transmitting data to card.
When FIFO data count is less than or equal to this number,
DMA/FIFO request is raised. If Interrupt is enabled, then interrupt
occurs. During end of packet, request or interrupt is generated,
regardless of threshold programming.
In non-DMA mode, when transmit FIFO threshold (TXDR)
interrupt is enabled, then interrupt is generated instead of DMA
request. During end of packet, on last interrupt, host is
responsible for filling FIFO with only required remaining bytes (not
before FIFO is full or after CIU completes data transfers, because
FIFO may not be empty).
In DMA mode, at end of packet, if last transfer is less than burst
size, DMA controller does single cycles until required bytes are
transferred.
12 bits - 1 bit less than FIFO-count of status register, which is
13 bits.
Limitation: TX_WMark >= 1;
Recommended: FIFO_DEPTH/2; (means less than or equal to
FIFO_DEPTH/2).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> txWmark{}; 
        ///FIFO threshold watermark level when receiving data to card.
When FIFO data count reaches greater than this number,
DMA/FIFO request is raised. During end of packet, request is
generated regardless of threshold programming in order to
complete any remaining data.
In non-DMA mode, when receiver FIFO threshold (RXDR)
interrupt is enabled, then interrupt is generated instead of DMA
request.
During end of packet, interrupt is not generated if threshold
programming is larger than any remaining data. It is responsibility
of host to read remaining bytes on seeing Data Transfer Done
interrupt.
In DMA mode, at end of packet, even if remaining bytes are less
than threshold, DMA request does single transfers to flush out any
remaining bytes before Data Transfer Done interrupt is set.
12 bits - 1 bit less than FIFO-count of status register, which is
13 bits.
Limitation: RX_WMark smaller than FIFO_DEPTH-2
Recommended: (FIFO_DEPTH/2) - 1; (means greater than
(FIFO_DEPTH/2) - 1)
NOTE: In DMA mode during CCS time-out, the DMA does not
generate the request at the end of packet, even if remaining bytes
are less than threshold. In this case, there will be some data left in
the FIFO. It is the responsibility of the application to reset the
FIFO after the CCS timeout.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> rxWmark{}; 
        ///Burst size of multiple transaction; should be programmed same as
DW-DMA controller multiple-transaction-size SRC/DEST_MSIZE.The units for transfers is the H_DATA_WIDTH parameter. A single
transfer (dw_dma_single assertion in case of Non DW DMA
interface) would be signalled based on this value.
Value should be sub-multiple of (RX_WMark + 1)*
(F_DATA_WIDTH/H_DATA_WIDTH) and
(FIFO_DEPTH - TX_WMark)* (F_DATA_WIDTH/
H_DATA_WIDTH)
For example, if FIFO_DEPTH = 16,
FDATA_WIDTH == H_DATA_WIDTH
Allowed combinations for MSize and TX_WMark are:
MSize = 1, TX_WMARK = 1-15
MSize = 4, TX_WMark = 8
MSize = 4, TX_WMark = 4
MSize = 4, TX_WMark = 12
MSize = 8, TX_WMark = 8
MSize = 8, TX_WMark = 4. Allowed combinations for MSize and RX_WMark are:
MSize = 1, RX_WMARK = 0-14
MSize = 4, RX_WMark = 3
MSize = 4, RX_WMark = 7
MSize = 4, RX_WMark = 11
MSize = 8, RX_WMark = 7
MSize = 8, RX_WMark = 11
Recommended:
MSize = 8, TX_WMark = 8, RX_WMark = 7
        enum class DwdmamutipletransactionsizeVal {
            v1txf=0x00000000,     ///<1 transfer
            v4txf=0x00000001,     ///<4 transfers
            v8txf=0x00000002,     ///<8 transfers
            v16txf=0x00000003,     ///<16 transfers
            v32txf=0x00000004,     ///<32 transfers
            v64txf=0x00000005,     ///<64 transfers
            v128txf=0x00000006,     ///<128 transfers
            v256txf=0x00000007,     ///<256 transfers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,DwdmamutipletransactionsizeVal> dwDmaMutipleTransactionSize{}; 
        namespace DwdmamutipletransactionsizeValC{
            constexpr Register::FieldValue<decltype(dwDmaMutipleTransactionSize)::Type,DwdmamutipletransactionsizeVal::v1txf> v1txf{};
            constexpr Register::FieldValue<decltype(dwDmaMutipleTransactionSize)::Type,DwdmamutipletransactionsizeVal::v4txf> v4txf{};
            constexpr Register::FieldValue<decltype(dwDmaMutipleTransactionSize)::Type,DwdmamutipletransactionsizeVal::v8txf> v8txf{};
            constexpr Register::FieldValue<decltype(dwDmaMutipleTransactionSize)::Type,DwdmamutipletransactionsizeVal::v16txf> v16txf{};
            constexpr Register::FieldValue<decltype(dwDmaMutipleTransactionSize)::Type,DwdmamutipletransactionsizeVal::v32txf> v32txf{};
            constexpr Register::FieldValue<decltype(dwDmaMutipleTransactionSize)::Type,DwdmamutipletransactionsizeVal::v64txf> v64txf{};
            constexpr Register::FieldValue<decltype(dwDmaMutipleTransactionSize)::Type,DwdmamutipletransactionsizeVal::v128txf> v128txf{};
            constexpr Register::FieldValue<decltype(dwDmaMutipleTransactionSize)::Type,DwdmamutipletransactionsizeVal::v256txf> v256txf{};
        }
        }
    }
    namespace Nonecdetect{    ///<Card Detect Register
        using Addr = Register::Address<0x40004050,0xc0000000,0,unsigned>;
        ///Value on card_detect_n input ports (1 bit per card); read-only bits.
0 represents presence of card. Only NUM_CARDS number of bits
are implemented.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> cardDetectN{}; 
    }
    namespace Nonewrtprt{    ///<Write Protect Register
        using Addr = Register::Address<0x40004054,0xc0000000,0,unsigned>;
        ///Value on card_write_prt input ports (1 bit per card).
1 represents write protection. Only NUM_CARDS number of bits are
implemented.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> writeProtect{}; 
    }
    namespace Nonegpio{    ///<General Purpose Input/Output Register
        using Addr = Register::Address<0x40004058,0xff000000,0,unsigned>;
        ///Value on gpi input ports; this portion of register is read-only. Valid only when
AREA_OPTIMIZED parameter is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpi{}; 
        ///Value needed to be driven to gpo pins; this portion of register is read/write. Valid
only when AREA_OPTIMIZED parameter is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> gpo{}; 
    }
    namespace Nonetcbcnt{    ///<Transferred CIU Card Byte Count Register
        using Addr = Register::Address<0x4000405c,0x00000000,0,unsigned>;
        ///Number of bytes transferred by CIU unit to card.
In 32-bit or 64-bit AMBA data-bus-width modes, register should
be accessed in full to avoid read-coherency problems. In 16-bit
AMBA data-bus-width mode, internal 16-bit coherency register
is implemented. User should first read lower 16 bits and then
higher 16 bits. When reading lower 16 bits, higher 16 bits of
counter are stored in temporary register. When higher 16 bits
are read, data from temporary register is supplied.
Both TCBCNT and TBBCNT share same coherency register.
When AREA_OPTIMIZED parameter is 1, register should be
read only after data transfer completes; during data transfer,
register returns 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> transCardByteCount{}; 
    }
    namespace Nonetbbcnt{    ///<Transferred Host to BIU-FIFO Byte Count Register
        using Addr = Register::Address<0x40004060,0x00000000,0,unsigned>;
        ///Number of bytes transferred between Host/DMA memory and BIU
FIFO.
In 32-bit or 64-bit AMBA data-bus-width modes, register should be
accessed in full to avoid read-coherency problems. In 16-bit AMBA
data-bus-width mode, internal 16-bit coherency register is
implemented. User should first read lower 16 bits and then higher
16 bits. When reading lower 16 bits, higher 16 bits of counter are
stored in temporary register. When higher 16 bits are read, data
from temporary register is supplied.
Both TCBCNT and TBBCNT share same coherency register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> transFifoByteCount{}; 
    }
    namespace Nonedebnce{    ///<Debounce Count Register
        using Addr = Register::Address<0x40004064,0xff000000,0,unsigned>;
        ///Number of host clocks (clk) used by debounce filter logic; typical
debounce time is 5-25 ms.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> debounceCount{}; 
    }
    namespace Noneusrid{    ///<User ID Register
        using Addr = Register::Address<0x40004068,0x00000000,0,unsigned>;
        ///User identification register; value set by user. Default reset value can be picked
by user while configuring core before synthesis.
Can also be used as scratch pad register by user.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> usrid{}; 
    }
    namespace Noneverid{    ///<Version ID Register
        using Addr = Register::Address<0x4000406c,0x00000000,0,unsigned>;
        ///Synopsys version identification register; register value is hard-wired. Can be
read by firmware to support different versions of core.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> verid{}; 
    }
    namespace NoneuhsReg{    ///<UHS-1 Register
        using Addr = Register::Address<0x40004074,0x00000000,0,unsigned>;
        ///High Voltage mode. Determines the voltage fed to the buffers by an
external voltage regulator.
0 - Buffers supplied with 3.3V Vdd
1 - Buffers supplied with 1.8V Vdd
These bits function as the output of the host controller and are fed to an
external voltage regulator. The voltage regulator must switch the voltage
of the buffers of a particular card to either 3.3V or 1.8V, depending on the
value programmed in the register.
VOLT_REG[0] should be set to 1 for card number 0 in order to make it
operate for 1.8V.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> voltReg{}; 
        ///DDR mode. Determines the voltage fed to the buffers by an external
voltage regulator.
0 - Non-DDR mode
1 - DDR mode
UHS_REG [16] should be set for card number 0, UHS_REG [17] for card
number 1 and so on.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ddrReg{}; 
    }
    namespace NonerstN{    ///<Hardware Reset
        using Addr = Register::Address<0x40004078,0xffff0000,0,unsigned>;
        ///Hardware reset.
1 - Active mode
0 - Reset
These bits cause the cards to enter pre-idle state, which requires them to
be re-initialized. CARD_RESET[0] should be set to 1 to reset card
number 0, and CARD_RESET[15] should be set to reset card number 15.
The number of bits implemented is restricted to NUM_CARDS.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cardReset{}; 
    }
    namespace Nonebmod{    ///<Bus Mode Register
        using Addr = Register::Address<0x40004080,0xfffff800,0,unsigned>;
        ///Software Reset. When set, the DMA Controller resets all its internal registers.
SWR is read/write. It is automatically cleared after 1 clock cycle.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swr{}; 
        ///Fixed Burst. Controls whether the AHB Master interface performs fixed burst
transfers or not. When set, the AHB will use only SINGLE, INCR4, INCR8 or
INCR16 during start of normal burst transfers. When reset, the AHB will use
SINGLE and INCR burst transfer operations.
FB is read/write.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fb{}; 
        ///Descriptor Skip Length. Specifies the number of HWord/Word/Dword (depending
on 16/32/64-bit bus) to skip between two unchained descriptors. This is applicable
only for dual buffer structure.
DSL is read/write.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,unsigned> dsl{}; 
        ///IDMAC Enable. When set, the IDMAC is enabled.
DE is read/write.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> de{}; 
        ///Programmable Burst Length. These bits indicate the maximum number of beats to
be performed in one IDMAC transaction. The IDMAC will always attempt to burst
as specified in PBL each time it starts a Burst transfer on the host bus. The
permissible values are 1, 4, 8, 16, 32, 64, 128 and 256. This value is the mirror of
MSIZE of FIFOTH register. In order to change this value, write the required value
to FIFOTH register. This is an encode value as follows.Transfer unit is either 16, 32, or 64 bits, based on HDATA_WIDTH.
PBL is a read-only value.
        enum class PblVal {
            v1txf=0x00000000,     ///<1 transfer
            v4txf=0x00000001,     ///<4 transfers
            v8txf=0x00000002,     ///<8 transfers
            v16txf=0x00000003,     ///<16 transfers
            v32txf=0x00000004,     ///<32 transfers
            v64txf=0x00000005,     ///<64 transfers
            v128txf=0x00000006,     ///<128 transfers
            v256txf=0x00000007,     ///<256 transfers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,PblVal> pbl{}; 
        namespace PblValC{
            constexpr Register::FieldValue<decltype(pbl)::Type,PblVal::v1txf> v1txf{};
            constexpr Register::FieldValue<decltype(pbl)::Type,PblVal::v4txf> v4txf{};
            constexpr Register::FieldValue<decltype(pbl)::Type,PblVal::v8txf> v8txf{};
            constexpr Register::FieldValue<decltype(pbl)::Type,PblVal::v16txf> v16txf{};
            constexpr Register::FieldValue<decltype(pbl)::Type,PblVal::v32txf> v32txf{};
            constexpr Register::FieldValue<decltype(pbl)::Type,PblVal::v64txf> v64txf{};
            constexpr Register::FieldValue<decltype(pbl)::Type,PblVal::v128txf> v128txf{};
            constexpr Register::FieldValue<decltype(pbl)::Type,PblVal::v256txf> v256txf{};
        }
        }
    }
    namespace Nonepldmnd{    ///<Poll Demand Register
        using Addr = Register::Address<0x40004084,0x00000000,0,unsigned>;
        ///Poll Demand. If the OWN bit of a descriptor is not set, the FSM goes to the
Suspend state. The host needs to write any value into this register for the
IDMAC FSM to resume normal descriptor fetch operation. This is a write
only register.
PD bit is write-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pd{}; 
    }
    namespace Nonedbaddr{    ///<Descriptor List Base Address Register
        using Addr = Register::Address<0x40004088,0x00000000,0,unsigned>;
        ///Start of Descriptor List. Contains the base address of the First Descriptor.
The LSB bits [0/1/2:0] for 16/32/64-bit bus-width) are ignored and taken as
all-zero by the IDMAC internally. Hence these LSB bits are read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sdl{}; 
    }
    namespace Noneidsts{    ///<Internal DMAC Status Register
        using Addr = Register::Address<0x4000408c,0xfffe00c8,0,unsigned>;
        ///Transmit Interrupt. Indicates that data transmission is finished for a descriptor. Writing
a 1  clears this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ti{}; 
        ///Receive Interrupt. Indicates the completion of data reception for a descriptor. Writing a
1 clears this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ri{}; 
        ///Fatal Bus Error Interrupt. Indicates that a Bus Error occurred (IDSTS[12:10]). When
this bit is set, the DMA disables all its bus accesses. Writing a 1 clears this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fbe{}; 
        ///Descriptor Unavailable Interrupt. This bit is set when the descriptor is unavailable due
to OWN bit = 0 (DES0[31] =0). Writing a 1 clears this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> du{}; 
        ///Card Error Summary. Indicates the status of the transaction to/from the card; also
present in RINTSTS. Indicates the logical OR of the following bits:
EBE - End Bit Error
RTO - Response Timeout/Boot Ack Timeout
RCRC - Response CRC
SBE - Start Bit Error
DRTO - Data Read Timeout/BDS timeout
DCRC - Data CRC for Receive
RE - Response Error
Writing a 1 clears this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ces{}; 
        ///Normal Interrupt Summary. Logical OR of the following:
IDSTS[0] - Transmit Interrupt
IDSTS[1] - Receive Interrupt
Only unmasked bits affect this bit.
This is a sticky bit and must be cleared each time a corresponding bit that causes NIS
to be set is cleared. Writing a 1 clears this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nis{}; 
        ///Abnormal Interrupt Summary. Logical OR of the following:
IDSTS[2] - Fatal Bus Interrupt
IDSTS[4] - DU bit Interrupt
IDSTS[5] - Card Error Summary Interrupt
Only unmasked bits affect this bit.
This is a sticky bit and must be cleared each time a corresponding bit that causes AIS
to be set is cleared. Writing a 1 clears this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ais{}; 
        ///Error Bits. Indicates the type of error that caused a Bus Error. Valid only with Fatal Bus
Error bit (IDSTS[2]) set. This field does not generate an interrupt.
001 - Host Abort received during transmission
010 - Host Abort received during reception
Others: Reserved
EB is read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> eb{}; 
        ///DMAC FSM present state.
0 - DMA_IDLE
1 - DMA_SUSPEND
2 - DESC_RD
3 - DESC_CHK
4 - DMA_RD_REQ_WAIT
5 - DMA_WR_REQ_WAIT
6 - DMA_RD
7 - DMA_WR
8 - DESC_CLOSE
This bit is read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> fsm{}; 
    }
    namespace Noneidinten{    ///<Internal DMAC Interrupt Enable Register
        using Addr = Register::Address<0x40004090,0xfffffcc8,0,unsigned>;
        ///Transmit Interrupt Enable. When set with Normal Interrupt Summary Enable,
Transmit Interrupt is enabled. When reset, Transmit Interrupt is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ti{}; 
        ///Receive Interrupt Enable. When set with Normal Interrupt Summary Enable,
Receive Interrupt is enabled. When reset, Receive Interrupt is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ri{}; 
        ///Fatal Bus Error Enable. When set with Abnormal Interrupt Summary Enable, the
Fatal Bus Error Interrupt is enabled. When reset, Fatal Bus Error Enable Interrupt is
disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fbe{}; 
        ///Descriptor Unavailable Interrupt. When set along with Abnormal Interrupt Summary
Enable, the DU interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> du{}; 
        ///Card Error summary Interrupt Enable. When set, it enables the Card Interrupt
summary.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ces{}; 
        ///Normal Interrupt Summary Enable. When set, a normal interrupt is enabled. When
reset, a normal interrupt is disabled. This bit enables the following bits:
IDINTEN[0] - Transmit Interrupt
IDINTEN[1] - Receive Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nis{}; 
        ///Abnormal Interrupt Summary Enable. When set, an abnormal interrupt is enabled.
This bit enables the following bits:
IDINTEN[2] - Fatal Bus Error Interrupt
IDINTEN[4] - DU Interrupt
IDINTEN[5] - Card Error Summary Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ais{}; 
    }
    namespace Nonedscaddr{    ///<Current Host Descriptor Address Register
        using Addr = Register::Address<0x40004094,0x00000000,0,unsigned>;
        ///Host Descriptor Address Pointer. Cleared on reset. Pointer updated by
IDMAC during operation. This register points to the start address of the
current descriptor read by the IDMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hda{}; 
    }
    namespace Nonebufaddr{    ///<Current Buffer Descriptor Address Register
        using Addr = Register::Address<0x40004098,0x00000000,0,unsigned>;
        ///Host Buffer Address Pointer. Cleared on Reset. Pointer updated by IDMAC
during operation. This register points to the current Data Buffer Address
being accessed by the IDMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hba{}; 
    }
}
