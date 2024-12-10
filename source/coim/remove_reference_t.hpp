#pragma once
#include<coim/RemoveReference.hpp>
namespace coim{
template<typename Type_>
using remove_reference_t=typename ::coim::RemoveReference<Type_>::type;
}
