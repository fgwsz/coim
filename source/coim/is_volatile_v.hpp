#pragma once
#include<coim/IsVolatile.hpp>
namespace coim{
template<typename Type_>
static constexpr bool is_volatile_v=::coim::IsVolatile<Type_>::value;
}
