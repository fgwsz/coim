#pragma once
#include<coim/Disjunction.hpp>
namespace coim{
template<typename...Constants_>
constexpr bool disjunction_v=::coim::Disjunction<Constants_...>::value;
}
