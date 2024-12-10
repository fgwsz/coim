#pragma once
#include<coim/AddVolatile.hpp>
namespace coim{
template<typename Type_>
using add_volatile_t=typename ::coim::AddVolatile<Type_>::type;
}
