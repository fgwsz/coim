#pragma once
#include<coim/IsArray.hpp>
namespace coim{
template<typename Type_>
static constexpr bool is_array_v=::coim::IsArray<Type_>::value;
}
