#pragma once
#include<coim/IsConst.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_const_v=::coim::IsConst<Type_>::value;
}
