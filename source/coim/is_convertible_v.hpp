#pragma once
#include<coim/IsConvertible.hpp>
namespace coim{
template<typename From_,typename To_>
constexpr bool is_convertible_v=::coim::IsConvertible<From_,To_>::value;
}
