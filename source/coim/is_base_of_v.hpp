#pragma once
#include<coim/IsBaseOf.hpp>
namespace coim{
template<typename Base_,typename Derived_>
constexpr bool is_base_of_v=::coim::IsBaseOf<Base_,Derived_>::value;
}
