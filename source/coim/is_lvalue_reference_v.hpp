#pragma once
#include<coim/IsLvalueReference.hpp>
namespace coim{
template<typename Type_>
static constexpr bool is_lvalue_reference_v=
    ::coim::IsLvalueReference<Type_>::value;
}
