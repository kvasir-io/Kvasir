#pragma once
#include <Mpl/brigand.hpp>
#include <stdint.h>
namespace Kvasir
{
namespace Usb
{
    struct Peripheral
    {
        uint8_t value_;
    };
    template <int I>
    struct PeripheralC
    {
        static constexpr int value{I};
    };
    constexpr PeripheralC<0> usb0Peripheral{};
    constexpr PeripheralC<1> usb1Peripheral{};
    struct Endpoint
    {
        uint8_t value_;
    };
    template <int I>
    struct EndpointC
    {
        static constexpr int value{I};
        using Type = EndpointC<I>;
        operator Endpoint() { return {static_cast<uint8_t>(I)}; }
    };
    constexpr EndpointC<0> controlEpOut{};
    constexpr EndpointC<1> controlEpIn{};
    constexpr EndpointC<2> ep1Out{};
    constexpr EndpointC<3> ep1In{};
    constexpr EndpointC<4> ep2Out{};
    constexpr EndpointC<5> ep2In{};

    struct InterruptTag
    {
    };
    struct BulkTag
    {
    };
    struct IsocronousTag
    {
    };
    template <int Number, bool Interrupt, bool Bulk, bool Isocronous>
    struct EndpointCapabilities
    {
    };

    template <typename TPeripheral>
    struct EndpointCapabilityTraits; // must be specialized by the Hal in order for the Device to
                                     // map endpoints properly

    namespace Detail
    {
        template <typename T>
        struct IsCapablePred;
        template <>
        struct IsCapablePred<InterruptTag>
        {
            template <typename U>
            struct apply : std::false_type
            {
            };
            template <int N, bool B1, bool B2>
            struct apply<EndpointCapabilities<N, true, B1, B2>> : std::true_type
            {
            };
        };
        template <>
        struct IsCapablePred<BulkTag>
        {
            template <typename U>
            struct apply : std::false_type
            {
            };
            template <int N, bool B1, bool B2>
            struct apply<EndpointCapabilities<N, B1, true, B2>> : std::true_type
            {
            };
        };
        template <>
        struct IsCapablePred<IsocronousTag>
        {
            template <typename U>
            struct apply : std::false_type
            {
            };
            template <int N, bool B1, bool B2>
            struct apply<EndpointCapabilities<N, B1, B2, true>> : std::true_type
            {
            };
        };
        template <typename TNeeded, typename TAvailible, typename TOut>
        struct MapCapabilitiesToEndpointNumbers
        {
            using type = TOut;
        };

        template <typename T, typename... Ts, typename A, typename... Os>
        struct MapCapabilitiesToEndpointNumbers<brigand::list<T, Ts...>, A, brigand::list<Os...>>
            : MapCapabilitiesToEndpointNumbers<
                  brigand::list<Ts...>,
                  brigand::remove<A, brigand::front<brigand::find<A, IsCapablePred<T>>>>,
                  brigand::list<Os..., brigand::front<brigand::find<A, IsCapablePred<T>>>>>
        {
        };
    }
    template <typename TPeripheral, typename TCapabilities>
    using MapCapabilitiesToEndpointNumbers = typename Detail::MapCapabilitiesToEndpointNumbers<
        TCapabilities, typename EndpointCapabilityTraits<TPeripheral>::type, brigand::list<>>::type;
}
}