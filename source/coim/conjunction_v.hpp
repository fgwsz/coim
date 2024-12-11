#pragma once
#include<coim/Conjunction.hpp>
namespace coim{
template<typename...Constants_>
constexpr bool conjunction_v=::coim::Conjunction<Constants_...>::value;
}
