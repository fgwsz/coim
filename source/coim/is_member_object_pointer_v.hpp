#pragma once
#include<coim/IsMemberObjectPointer.hpp>
namespace coim{
template<typename Type_>
static constexpr bool is_member_object_pointer_v=
    ::coim::IsMemberObjectPointer<Type_>::value;
}
