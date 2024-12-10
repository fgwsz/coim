#pragma once
#include<coim/IsRvalueReference.hpp>
namespace coim{
template<typename Type_>
static constexpr bool is_rvalue_reference_v=
    ::coim::IsRvalueReference<Type_>::value;
}
