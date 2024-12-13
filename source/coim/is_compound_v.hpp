#pragma once
#include<coim/IsCompound.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_compound_v=::coim::IsCompound<Type_>::value;
}
