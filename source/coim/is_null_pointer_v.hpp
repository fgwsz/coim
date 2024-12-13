#pragma once
#include<coim/IsNullPointer.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_null_pointer_v=::coim::IsNullPointer<Type_>::value;
}
