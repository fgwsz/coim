#pragma once
#include<coim/IsBoundedArray.hpp>
namespace coim{
template<typename Type_>
static constexpr bool is_bounded_array_v=::coim::IsBoundedArray<Type_>::value;
}
