#pragma once
#include<coim/RemoveConst.hpp>
namespace coim{
template<typename Type_>
using remove_const_t=typename ::coim::RemoveConst<Type_>::type;
}
