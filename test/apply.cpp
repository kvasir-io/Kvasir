#include "Chip/MKL27Z4.hpp"
#include "Register/Seam.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>

namespace Kvasir
{
namespace Register
{
    template <typename T>
    struct ExecuteSeam<T, ::Kvasir::Tag::User> : RecordActions<T>
    {
    };
}
}

int applyTest()
{
    {
        constexpr auto s =
            set(Kvasir::Usb0Istat::usbrst, Kvasir::Usb0Istat::resume, Kvasir::Usb0Istat::softok,
                Kvasir::Usb0Istat::stall, Kvasir::Usb0Istat::tokdne, Kvasir::Usb0Istat::sleep,
                Kvasir::Usb0Istat::error);
        apply(s);
        auto it = Kvasir::Register::actions_.begin();
        if (it->address_ != 0x40072080 || it->value_ != 0xBF)
            return 1;
        Kvasir::Register::actions_.clear();
    }
    {
        constexpr auto w = write(Kvasir::Adc0Cfg2::AdlstsValC::v01);
        apply(w);
        auto it = Kvasir::Register::actions_.begin();
        if (it->address_ != 0x4003b00c || it->value_ != 1)
            return 1;
        Kvasir::Register::actions_.clear();
    }
    {
        apply(write(Kvasir::Adc0Cv1::cv, 100));
        auto it = Kvasir::Register::actions_.begin();
        if (it->address_ != 0x4003b018 || it->value_ != 100 || it->mask_ != 0x0000ffff)
            return 1;
        Kvasir::Register::actions_.clear();
    }
    {
        apply(write(Kvasir::Adc0Cfg2::AdlstsValC::v10, Kvasir::Adc0Cfg2::AdhscValC::v1),
              write(Kvasir::Adc0Cfg2::adacken, Kvasir::Adc0Cfg2::AdackenVal::v1));
        auto it = Kvasir::Register::actions_.begin();
        if (it->address_ != 0x4003b00c || it->value_ != 0x08 ||
            it->mask_ !=
                0x00000008) // this should merge with the next line once that is implemented
            return 1;
        ++it;
        if (it->address_ != 0x4003b00c || it->value_ != 0x06 || it->mask_ != 0x00000007)
            return 1;
        Kvasir::Register::actions_.clear();
    }
    {
        Kvasir::Register::reads_.push({0x4003b010, 0x55});
        auto i = apply(read(Kvasir::Adc0Ra::d));
        if (i != 0x55)
        {
            return 1;
        }
        Kvasir::Register::reads_.push({0x4003b010, 0x555555});
        i = apply(read(Kvasir::Adc0Ra::d));
        if (i != 0x5555)
        {
            return 1;
        }
    }
    {
        auto status = apply(read(Kvasir::Usb0Istat::usbrst, Kvasir::Usb0Istat::resume,
                                 Kvasir::Usb0Istat::softok, Kvasir::Usb0Istat::stall,
                                 Kvasir::Usb0Istat::tokdne, Kvasir::Usb0Istat::sleep,
                                 Kvasir::Usb0Istat::error));
        Kvasir::Register::actions_.clear();
        apply(reset(Kvasir::Usb0Istat::usbrst, Kvasir::Usb0Istat::resume, Kvasir::Usb0Istat::softok,
                    Kvasir::Usb0Istat::stall, Kvasir::Usb0Istat::tokdne, Kvasir::Usb0Istat::sleep,
                    Kvasir::Usb0Istat::error));
    }
    return 0;
}
