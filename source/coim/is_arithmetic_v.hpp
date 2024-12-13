#pragma once
#include<coim/IsArithmetic.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_arithmetic_v=::coim::IsArithmetic<Type_>::value;
}
