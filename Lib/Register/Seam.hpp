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
#include "Exec.hpp"
#include <vector>
#include <algorithm>

namespace Kvasir {

	namespace Register{

		struct ReadValue {
			unsigned address_;
			unsigned value_;
		};

		struct RecordedAction {
			enum class Type{unknown, read, write, writeLiteral};
			Type type_;
			unsigned address_;
			unsigned mask_;
			unsigned value_;
		};

		class Reads {
			std::vector<ReadValue> data_;
		public:
			using iterator = typename std::vector<ReadValue>::iterator;
			ReadValue& operator[](size_t i) { return data_[i]; }

			iterator begin() { return data_.begin(); }
			iterator end() { return data_.end(); }

			void push(const ReadValue& val) {
				data_.insert(
					std::lower_bound(data_.begin(), data_.end(), val, 
						[](const ReadValue& lhs, const ReadValue& rhs) { return lhs.address_ < rhs.address_; }),
					val);
			}
			ReadValue pop(unsigned address) {
				ReadValue ret{ 0,0 };
				auto it = std::lower_bound(data_.begin(), data_.end(), address,
					[](const ReadValue& lhs, const unsigned rhs) { return lhs.address_ < rhs; });
				if (it != data_.end() && it->address_ == address) {
					ret = *it;
					data_.erase(it);
				}
				return ret;
			}
		};
		
		std::vector<RecordedAction> actions_;
		Reads reads_;

		template<typename T>
		struct RecordActions {
			int operator()(int in) {
				actions_.emplace_back(
					RecordedAction{ RecordedAction::Type::unknown });
				return 0;
			}
		};

		template<typename Address, unsigned Mask, typename Access, typename FieldType>
		struct RecordActions<Action<FieldLocation<Address, Mask, Access, FieldType>, ReadAction>> {
			int operator()(int in) {
				actions_.emplace_back(
					RecordedAction{ RecordedAction::Type::read, Address::value, Mask });
				auto it = std::find_if(reads_.begin(), reads_.end(), [](ReadValue &v) {
					return v.address_ == Address::value; });
				if (it != reads_.end()) {
					return reads_.pop(Address::value).value_;
				}
				return 0;
			}
		};

		template<typename Address, unsigned Mask, typename Access, typename FieldType>
		struct RecordActions<Action<FieldLocation<Address, Mask, Access, FieldType>, WriteAction>> {
			int operator()(unsigned in) {
				actions_.emplace_back(
					RecordedAction{ RecordedAction::Type::write, Address::value, Mask, in });
				return 0;
			}
		};

		template<typename Address, unsigned Mask, typename Access, typename FieldType, unsigned I>
		struct RecordActions<Action<FieldLocation<Address, Mask, Access, FieldType>, WriteLiteralAction<I>>> {
			int operator()(int in) {
				actions_.emplace_back(
					RecordedAction{ RecordedAction::Type::writeLiteral, Address::value, Mask, I });
				return 0;
			}
		};
	}
}
