#pragma once
#include<coim/AddPointer.hpp>
namespace coim{
template<typename Type_>
using add_pointer_t=typename ::coim::AddPointer<Type_>::type;
}
