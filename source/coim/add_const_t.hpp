#pragma once
#include<coim/AddConst.hpp>
namespace coim{
template<typename Type_>
using add_const_t=typename ::coim::AddConst<Type_>::type;
}
