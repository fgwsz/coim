#pragma once
#include<coim/IsFloatingPoint.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_floating_point_v=::coim::IsFloatingPoint<Type_>::value;
}
