#pragma once
#include<coim/IsUnboundedArray.hpp>
namespace coim{
template<typename Type_>
static constexpr bool is_unbounded_array_v=
    ::coim::IsUnboundedArray<Type_>::value;
}