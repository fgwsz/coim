#pragma once
#include<coim/IsMemberPointer.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_member_pointer_v=
    ::coim::IsMemberPointer<Type_>::value;
}
