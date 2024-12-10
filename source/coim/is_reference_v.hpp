#pragma once
#include<coim/IsReference.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_reference_v=::coim::IsReference<Type_>::value;
}
