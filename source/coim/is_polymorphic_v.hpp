#pragma once
#include<coim/IsPolymorphic.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_polymorphic_v=::coim::IsPolymorphic<Type_>::value;
}
