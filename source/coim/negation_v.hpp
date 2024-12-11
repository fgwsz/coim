#pragma once
#include<coim/Negation.hpp>
namespace coim{
template<typename Constant_>
constexpr bool negation_v=::coim::Negation<Constant_>::value;
}
