#pragma once
#include<coim/IsIntegral.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_integral_v=::coim::IsIntegral<Type_>::value;
}
