#pragma once
#include<coim/bool_constant.hpp>
#include<coim/is_same_v.hpp>
#include<coim/remove_cv_t.hpp>
namespace coim{
template<typename Type_>
struct IsFloatingPoint
    : ::coim::bool_constant<
        ::coim::is_same_v<float,::coim::remove_cv_t<Type_>>
        ||::coim::is_same_v<double,::coim::remove_cv_t<Type_>>
        ||::coim::is_same_v<long double,::coim::remove_cv_t<Type_>>
    >{};
}
