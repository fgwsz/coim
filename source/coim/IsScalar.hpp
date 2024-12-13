#pragma once
#include<coim/bool_constant.hpp>
#include<coim/is_arithmetic_v.hpp>
#include<coim/is_enum_v.hpp>
#include<coim/is_pointer_v.hpp>
#include<coim/is_member_pointer_v.hpp>
#include<coim/is_null_pointer_v.hpp>
namespace coim{
template<typename Type_>
struct IsScalar
    : ::coim::bool_constant<
        ::coim::is_arithmetic_v<Type_>
        ||::coim::is_enum_v<Type_>
        ||::coim::is_pointer_v<Type_>
        ||::coim::is_member_pointer_v<Type_>
        ||::coim::is_null_pointer_v<Type_>
    >{};
}
