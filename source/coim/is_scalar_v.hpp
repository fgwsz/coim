#pragma once
#include<coim/IsScalar.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_scalar_v=::coim::IsScalar<Type_>::value;
}
