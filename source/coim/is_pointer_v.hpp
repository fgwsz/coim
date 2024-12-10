#pragma once
#include<coim/IsPointer.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_pointer_v=::coim::IsPointer<Type_>::value;
}
