#pragma once
#include<coim/bool_constant.hpp>
#include<coim/is_integral_v.hpp>
#include<coim/is_floating_point_v.hpp>
namespace coim{
template<typename Type_>
struct IsArithmetic
    : ::coim::bool_constant<
        ::coim::is_integral_v<Type_>||::coim::is_floating_point_v<Type_>
    >{};
}
