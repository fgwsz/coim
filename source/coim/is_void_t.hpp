#pragma once
#include<coim/IsVoid.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_void_v=::coim::IsVoid<Type_>::value;
}
