#pragma once
#include <algorithm>
namespace Kvasir
{
namespace Usb
{
    namespace Cdc
    {
        struct LineCoding
        {
            uint8_t data_[7];
            enum class StopBits : uint8_t
            {
                one,
                oneAndAHalf,
                two
            };
            enum class PairityType : uint8_t
            {
                None,
                Odd,
                Even,
                Mark,
                Space
            };
            enum class DataBits : uint8_t
            {
                five,
                six,
                seven,
                eight,
                sixteen
            };
            // input iterator must be advancable 7 times and interate over data of the exact same
            // layout/format. data_ is layed out in the same format as standardized get/set lin
            // coding
            // commands.
            template <typename T>
            void unsafeFromBuffer(T in)
            {
                std::copy_n(in, 7, data_);
            }
            // output iterator must be advancable 7 times and interate over data of the exact same
            // layout/format. data_ is layed out in the same format as standardized get/set lin
            // coding
            // commands.
            template <typename T>
            void unsafeToBuffer(T out)
            {
                std::copy_n(data_, 7, out);
            }
            uint32_t getBaud()
            {
                return data_[0] | (data_[1] << 8) | (data_[2] << 16) | (data_[3] << 24);
            }
            StopBits getStopBits() { return static_cast<StopBits>(data_[4]); }
            PairityType getPairityType() { return static_cast<PairityType>(data_[5]); }
            DataBits getDataBits() { return static_cast<DataBits>(data_[6]); }
        };
    }
}
}
