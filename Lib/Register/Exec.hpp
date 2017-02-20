/**************************************************************************
 * This file contains the Kvasir Register Abstraction DSL (Domain Specific Language)
 * which provide an extra layer between Hardware SFRs
 * (Special Function Registers) and code accessing them.
 * Copyright 2015 Odin Holmes
 * Aditional contribution from Stephan Bökelmann

 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
****************************************************************************/
#pragma once
#include "Mpl/Algorithm.hpp"
#include "Mpl/Types.hpp"
#include "Mpl/Utility.hpp"
#include "Types.hpp"
#include "Utility.hpp"

namespace Kvasir
{

namespace Register
{

    namespace Detail
    {

        template <typename TRegisterAction>
        struct RegisterExec;

        template <typename TLocation, unsigned ClearMask, unsigned SetMask>
        struct GenericReadMaskOrWrite
        {
            DEBUG_OPTIMIZE unsigned operator()(unsigned in = 0)
            {
	            using Address = GetAddress<TLocation>;
	            constexpr auto clearOrZeroIsNoChangeMask = ClearMask | Address::writeIgnoredIfZeroMask;
	            constexpr auto oneIsNoChangeMask = (Address::writeIgnoredIfOneMask & ~ClearMask); //remove the bits we are working on
	            constexpr auto bitsWithFixedValues = oneIsNoChangeMask | clearOrZeroIsNoChangeMask;
	            decltype(Address::read()) i = 0;
	            if (bitsWithFixedValues != 0xFFFFFFFF) //no sense reading if we are going to clear the whole thing any way
	            {
		            i = Address::read();
		            i &= ~(clearOrZeroIsNoChangeMask);
	            }
	            i |= SetMask | oneIsNoChangeMask | in;
                GetAddress<TLocation>::write(i);
                return i;
            }
        };

        template <typename TLocation, unsigned ClearMask, unsigned XorMask>
        struct GenericReadMaskXorWrite
        {
            DEBUG_OPTIMIZE unsigned operator()(unsigned in = 0)
            {
	            using Address = GetAddress<TLocation>;
	            constexpr auto clearOrZeroIsNoChangeMask = ClearMask | Address::writeIgnoredIfZeroMask;
	            constexpr auto oneIsNoChangeMask = (Address::writeIgnoredIfOneMask & ~ClearMask); //remove the bits we are working on
	            constexpr auto bitsWithFixedValues = oneIsNoChangeMask | clearOrZeroIsNoChangeMask;
	            decltype(Address::read()) i = 0;
	            if (bitsWithFixedValues != 0xFFFFFFFF) //no sense reading if we are going to clear the whole thing any way
	            {
		            i = Address::read();
		            i &= ~(clearOrZeroIsNoChangeMask);
	            }
	            i |= oneIsNoChangeMask;
	            i ^= XorMask | in;
	            GetAddress<TLocation>::write(i);
	            return i;
            }
        };

        // write literal with read modify write
        template <typename TAddress, unsigned Mask, typename Access, typename FieldType,
                  unsigned Data>
        struct RegisterExec<Register::Action<FieldLocation<TAddress, Mask, Access, FieldType>,
                                             WriteLiteralAction<Data>>>
            : GenericReadMaskOrWrite<FieldLocation<TAddress, Mask, Access, FieldType>, Mask, Data>
        {
            static_assert((Data & (~Mask)) == 0, "bad mask");
        };

        template <typename TAddress, unsigned Mask, typename Access, typename FieldType>
        struct RegisterExec<
            Register::Action<FieldLocation<TAddress, Mask, Access, FieldType>, WriteAction>>
            : GenericReadMaskOrWrite<FieldLocation<TAddress, Mask, Access, FieldType>, Mask, 0>
        {
        };

        template <typename TAddress, unsigned Mask, typename Access, typename FieldType>
        struct RegisterExec<
            Register::Action<FieldLocation<TAddress, Mask, Access, FieldType>, ReadAction>>
        {
            DEBUG_OPTIMIZE unsigned operator()(unsigned in = 0)
            {
                return GetAddress<TAddress>::read();
            }
        };
        template <typename TAddress, unsigned Mask, typename Access, typename FieldType,
                  unsigned Data>
        struct RegisterExec<Register::Action<FieldLocation<TAddress, Mask, Access, FieldType>,
                                             XorLiteralAction<Data>>>
            : GenericReadMaskXorWrite<FieldLocation<TAddress, Mask, Access, FieldType>, Mask, Data>
        {
            static_assert((Data & (~Mask)) == 0, "bad mask");
        };
    }

    template <typename T, typename U>
    struct ExecuteSeam : Detail::RegisterExec<T>
    {
    };
}
}
