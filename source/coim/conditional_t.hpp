#pragma once
#include<coim/Conditional.hpp>
namespace coim{
template<bool condition_,typename Then_,typename Else_>
using conditional_t=
    typename ::coim::Conditional<condition_,Then_,Else_>::type;
}
