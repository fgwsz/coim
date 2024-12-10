#pragma once
#include<coim/RemoveAllExtents.hpp>
namespace coim{
template<typename Type_>
using remove_all_extents_t=typename ::coim::RemoveAllExtents<Type_>::type;
}
