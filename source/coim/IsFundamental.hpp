#pragma once
#include<coim/bool_constant.hpp>
#include<coim/is_arithmetic_v.hpp>
#include<coim/is_void_v.hpp>
#include<coim/is_null_pointer_v.hpp>
namespace coim{
template<typename Type_>
struct IsFundamental
    : ::coim::bool_constant<
        ::coim::is_arithmetic_v<Type_>
        ||::coim::is_void_v<Type_>
        ||::coim::is_null_pointer_v<Type_>
    >{};
}
