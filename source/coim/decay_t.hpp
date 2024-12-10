#pragma once
#include<coim/Decay.hpp>
namespace coim{
template<typename Type_>
using decay_t=typename ::coim::Decay<Type_>::type;
}
