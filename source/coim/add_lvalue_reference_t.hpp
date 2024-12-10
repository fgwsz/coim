#pragma once
#include<coim/AddLvalueReference.hpp>
namespace coim{
template<typename Type_>
using add_lvalue_reference_t=typename ::coim::AddLvalueReference<Type_>::type;
}
