#pragma once
#include<coim/RemovePointer.hpp>
namespace coim{
template<typename Type_>
using remove_pointer_t=typename ::coim::RemovePointer<Type_>::type;
}
