#pragma once
#include<coim/bool_constant.hpp>
#include<coim/is_member_pointer_v.hpp>
#include<coim/is_member_function_pointer_v.hpp>
namespace coim{
template<typename Type_>
struct IsMemberObjectPointer
    : ::coim::bool_constant<
        ::coim::is_member_pointer_v<Type_>
        &&!::coim::is_member_function_pointer_v<Type_>
    >{};
}
