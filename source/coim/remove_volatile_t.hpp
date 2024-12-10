#pragma once
#include<coim/RemoveVolatile.hpp>
namespace coim{
template<typename Type_>
using remove_volatile_t=typename ::coim::RemoveVolatile<Type_>::type;
}
