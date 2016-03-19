#pragma once
#include <stdint.h>
namespace Kvasir {
namespace Usb {
struct Endpoint {
  uint8_t value_;
};
template <int I> struct EndpointC {
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
}
}