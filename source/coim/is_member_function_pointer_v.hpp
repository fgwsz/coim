#pragma once
#include<coim/IsMemberFunctionPointer.hpp>
namespace coim{
template<typename Type_>
static constexpr bool is_member_function_pointer_v=
    ::coim::IsMemberFunctionPointer<Type_>::value;
}
