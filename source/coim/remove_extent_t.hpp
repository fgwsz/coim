#pragma once
#include<coim/RemoveExtent.hpp>
namespace coim{
template<typename Type_>
using remove_extent_t=typename ::coim::RemoveExtent<Type_>::type;
}
