#pragma once
#include<coim/EnableIf.hpp>
namespace coim{
template<bool value_,typename Type_=void>
using enable_if_t=typename ::coim::EnableIf<value_,Type_>::type;
}
