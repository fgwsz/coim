#pragma once
#include<coim/AddRvalueReference.hpp>
namespace coim{
template<typename Type_>
using add_rvalue_reference_t=typename ::coim::AddRvalueReference<Type_>::type;
}
