#pragma once
#include<coim/bool_constant.hpp>
namespace coim{
template<typename Constant_>
struct Negation
    : ::coim::bool_constant<!static_cast<bool>(Constant_::value)>{};
}
