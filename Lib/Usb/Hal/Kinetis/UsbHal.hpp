#pragma once
#include "Bdt.hpp"
#include <Chip/CM0+/Freescale/MKL27Z4/USB0.hpp>
#include <Mpl/IntegralConstants.hpp>
#include <Register/Register.hpp>
#include <Usb/Endpoint.hpp>
#include <Usb/HalTraits.hpp>
#include <stdint.h>

namespace Kvasir
{
namespace Usb
{
    template <int I>
    struct EndpointCapabilityTraits<PeripheralC<I>>
    {
        using type = brigand::list<
            EndpointCapabilities<0, EndpointDirection::out, true, false, false, false>,
            EndpointCapabilities<1, EndpointDirection::in, true, false, false, false>,
            EndpointCapabilities<2, EndpointDirection::out, false, true, true, true>,
            EndpointCapabilities<3, EndpointDirection::in, false, true, true, true>,
            EndpointCapabilities<4, EndpointDirection::out, false, true, true, true>,
            EndpointCapabilities<5, EndpointDirection::in, false, true, true, true>,
            EndpointCapabilities<6, EndpointDirection::out, false, true, true, true>,
            EndpointCapabilities<7, EndpointDirection::in, false, true, true, true>,
            EndpointCapabilities<8, EndpointDirection::out, false, true, true, true>,
            EndpointCapabilities<9, EndpointDirection::in, false, true, true, true>,
            EndpointCapabilities<10, EndpointDirection::out, false, true, true, true>,
            EndpointCapabilities<11, EndpointDirection::in, false, true, true, true>,
            EndpointCapabilities<12, EndpointDirection::out, false, true, true, true>,
            EndpointCapabilities<13, EndpointDirection::in, false, true, true, true>,
            EndpointCapabilities<14, EndpointDirection::out, false, true, true, true>,
            EndpointCapabilities<15, EndpointDirection::in, false, true, true, true>>;
    };

    template <typename TDerived>
    class Hal
    {
        friend TDerived;
        static uint8_t data01_;
        static Bdt::Data * getBdt() { return ((Bdt::Data *)0x400FE000); }
        static typename TDerived::PacketType readEndpoint(Bdt::Data & bdt)
        {
            auto ret =
                TDerived::PacketType::unsafeFromBufPointer(const_cast<uint8_t *>(bdt.address));
            ret.unsafeSetSize(bdt.byteCount);
            bdt.address = 0;
            return ret;
        }
        static void giveBdtToSie(Bdt::Data & b, bool data1 = false)
        {
            if (data1)
            {
                b.info =
                    Bdt::InfoBits(Bdt::InfoBits::own | Bdt::InfoBits::dts | Bdt::InfoBits::data1);
            }
            else
            {
                b.info = Bdt::InfoBits(Bdt::InfoBits::own | Bdt::InfoBits::dts);
            }
        }
        static void handleReset()
        {
            namespace k = Kvasir;
            using namespace k::MPL::IntegralConstants;

            // dirty hack to disable all endpoints
            uint8_t * ept = (uint8_t *)0x400720C0;
            for (int i = 0; i < 16; i++)
            {
                ept[4 * i] = 0x00;
            }

            // enable control endpoint
            activateEndpoint<EndpointC<0>, EndpointDirection::out, EndpointType::control>();
            activateEndpoint<EndpointC<1>, EndpointDirection::in, EndpointType::control>();
            apply(set(k::Usb0Ctl::oddrst)); // no odd stuff used

            apply(reset(k::Usb0Istat::usbrst, k::Usb0Istat::resume, k::Usb0Istat::softok,
                        k::Usb0Istat::stall, k::Usb0Istat::tokdne, k::Usb0Istat::sleep,
                        k::Usb0Istat::error),
                  set(k::Usb0Errstat::piderr, k::Usb0Errstat::crc5, k::Usb0Errstat::crc16,
                      k::Usb0Errstat::dfn8, k::Usb0Errstat::btoerr, k::Usb0Errstat::dmaerr,
                      k::Usb0Errstat::btserr),
                  set(k::Usb0Erren::piderren, k::Usb0Erren::crc5eofen, k::Usb0Erren::crc16en,
                      k::Usb0Erren::dfn8en, k::Usb0Erren::btoerren, k::Usb0Erren::dmaerren,
                      k::Usb0Erren::dmaerren),
                  write(k::Usb0Addr::addr, _0));
        }
        // sinks a packet
        static void sendPacket(typename TDerived::PacketType p, int index)
        {
            using InfoBits = ::Kvasir::Usb::Bdt::InfoBits;
            auto & b = getBdt()[index];
            b.address = p.unsafeToBufPointer();
            b.byteCount = p.getSize();
            if (p.isData1())
            {
                b.info = InfoBits::own | InfoBits::dts | InfoBits::data1;
            }
            else
            {
                b.info = InfoBits::own | InfoBits::dts;
            }
        }

        // sinks a packet
        static void sendPacket(typename TDerived::PacketType && p)
        {
            auto i = p.getEndpoint().value_ << 1;
            sendPacket(std::move(p), i);
        }
        static void handleTokdne()
        {
            using namespace Kvasir;
            auto stat = apply(read(Usb0Stat::endp, Usb0Stat::tx, Usb0Stat::odd));
            uint8_t physical = (uint8_t)stat[Usb0Stat::endp] * 2 + (unsigned)stat[Usb0Stat::tx];
            uint8_t idx = physical * 2 + (unsigned)stat[Usb0Stat::odd];
            auto & b = getBdt()[idx];
            auto tokpid = getTokPid(b);
            auto packet = readEndpoint(b);
            packet.setEndpoint(Kvasir::Usb::Endpoint{physical});

            switch (tokpid)
            {
            case Kvasir::Usb::Bdt::TokPid::setup:
            {
                b.address = TDerived::getPacket().unsafeToBufPointer();
                b.byteCount = 64;
                apply(clear(Usb0Ctl::txsuspendtokenbusy));
                TDerived::onSetupPacket(std::move(packet)); // pass the packet upstream
                break;
            }
            case Kvasir::Usb::Bdt::TokPid::out:
				b.address = TDerived::getPacket().unsafeToBufPointer();
				b.byteCount = 64;
                TDerived::onOutReceived(std::move(packet));
                break;
            case Kvasir::Usb::Bdt::TokPid::in:
                TDerived::onInSent(std::move(packet));
                break;
            }
        }

    public:
        static void enableEP0Out(bool data1)
        { // called when control transfer has finished
            giveBdtToSie(getBdt()[0], data1);
        }
        static void setAddress(uint8_t address) { apply(write(Usb0Addr::addr, address)); }
        template <typename T, EndpointDirection Direction, EndpointType Type>
        static void activateEndpoint()
        {
            namespace k = Kvasir;
            constexpr int physical = T::value;
            constexpr int B{1};
            constexpr int bufIndex{physical << 1};
            constexpr int logicalEndpoint{physical >> 1};

            auto & ept = ((uint8_t *)0x400720C0)[4 * logicalEndpoint];

            auto & odd = getBdt()[bufIndex];
            auto & even = getBdt()[bufIndex + 1];
            even.address = 0;
            even.info = Bdt::InfoBits::allClear;
            constexpr unsigned endpointTxEnableMask{0x4u};
            constexpr unsigned endpointRxEnableMask{0x8u};
            // IN endpt -> device to host (TX)
            if (Direction == EndpointDirection::in)
            {
                ept |= B |                   // ep handshaking (not if iso endpoint)
                       endpointTxEnableMask; // en TX (IN) tran
                odd.byteCount = 0;
                odd.address = 0;                    // TDerived::getPacket().unsafeToBufPointer();
                odd.info = Bdt::InfoBits::allClear; // Bdt::InfoBits::own | Bdt::InfoBits::dts;
            }
            // OUT endpt -> host to device (RX)
            else
            {
                ept |= B |                   // ep handshaking (not if iso endpoint)
                       endpointRxEnableMask; // en RX (OUT) tran.
                odd.byteCount = TDerived::PacketType::capacity;
                odd.address = TDerived::getPacket().unsafeToBufPointer();
                odd.info = Bdt::InfoBits::own | Bdt::InfoBits::dts;
            }
        }
        static void initialize()
        {
            TDerived::initialize();
            namespace k = Kvasir;
            {
                using namespace k::Usb0Ctl;
                apply(clear(usbensofen, /*oddrst,*/ txsuspendtokenbusy, se0, jstate));
            }
            apply(clear(k::Usb0Usbtrc0::usbreset));
            for (volatile int i = 0; i < 10; i++)
            {
            };                                             // wait for reset
            memset(getBdt(), 0, sizeof(getBdt()[0]) * 16); // clear all bdts
            // Set BDT Base Register
            apply(write(k::Usb0Bdtpage1::bdtba, (0xE0 >> 1)), // only bits 7-1
                  write(k::Usb0Bdtpage2::bdtba, 0x0F), write(k::Usb0Bdtpage3::bdtba, 0x40));

            // Clear interrupt flag
            apply(set(k::Usb0Istat::usbrst, k::Usb0Istat::resume, k::Usb0Istat::softok,
                      k::Usb0Istat::stall, k::Usb0Istat::tokdne, k::Usb0Istat::sleep,
                      k::Usb0Istat::error));
            apply(reset(k::Usb0Istat::usbrst, k::Usb0Istat::resume, k::Usb0Istat::softok,
                        k::Usb0Istat::stall, k::Usb0Istat::tokdne, k::Usb0Istat::sleep,
                        k::Usb0Istat::error));
            apply(set(k::Usb0Inten::stallen, k::Usb0Inten::resumeen, k::Usb0Inten::sleepen,
                      k::Usb0Inten::tokdneen, k::Usb0Inten::softoken, k::Usb0Inten::erroren,
                      k::Usb0Inten::usbrsten),
                  set(k::Usb0Erren::piderren, k::Usb0Erren::crc5eofen, k::Usb0Erren::crc16en,
                      k::Usb0Erren::dfn8en, k::Usb0Erren::btoerren, k::Usb0Erren::dmaerren,
                      k::Usb0Erren::btserren));
            *((volatile uint32_t *)0x4007210C) |=
                0x40; // USBTRC0, fucked up, see page 729 of the ref manual
                      // Disable weak pull downs
            apply(clear(Kvasir::Usb0Usbctrl::susp, Kvasir::Usb0Usbctrl::pde));
        }
        static void connect()
        {
            using namespace Kvasir;
            apply(set(Usb0Ctl::usbensofen));
            apply(set(Usb0Control::dppullupnonotg));
        }
        static void isr()
        {
            using namespace Kvasir;
            auto status = apply(read(Usb0Istat::usbrst, Usb0Istat::resume, Usb0Istat::softok,
                                     Usb0Istat::stall, Usb0Istat::tokdne, Usb0Istat::sleep,
                                     Usb0Istat::error));
            if (status[Usb0Istat::usbrst])
            {
                handleReset();
            }
            else
            {
                if (status[Usb0Istat::resume])
                {
                    apply(reset(Usb0Istat::resume));
                }

                if (status[Usb0Istat::softok])
                {
                    apply(reset(Usb0Istat::softok));
                }

                // stall interrupt
                if (status[Usb0Istat::stall])
                {
                    if (apply(
                            read(Usb0Endpt0::
                                     epstall)) /*USB0->ENDPOINT[0].ENDPT & USB_ENDPT_EPSTALL_MASK*/)
                        apply(clear(Usb0Endpt0::epstall)); //	USB0->ENDPOINT[0].ENDPT &=
                                                           //~USB_ENDPT_EPSTALL_MASK;
                    apply(reset(Usb0Istat::stall));        // USB0->ISTAT |= USB_ISTAT_STALL_MASK;
                }
                // token interrupt
                if (status[Usb0Istat::tokdne])
                {
                    handleTokdne();
                    apply(reset(Usb0Istat::tokdne));
                }
                // sleep interrupt
                if (status[Usb0Istat::sleep])
                {
                    apply(reset(Usb0Istat::sleep));
                }
                // error interrupt
                if (status[Usb0Istat::error])
                {
                    using namespace Kvasir::Usb0Erren;
                    apply(set(piderren, crc5eofen, crc16en, dfn8en, btoerren, dmaerren, btserren));
                    apply(reset(Usb0Istat::error));
                }
            }
        }
    };
    template <typename TDerived>
    uint8_t Hal<TDerived>::data01_{0};

    template <typename T, typename U>
    struct GetHal<T, U>
    {
        using type = Hal<T>;
    };
}
}
