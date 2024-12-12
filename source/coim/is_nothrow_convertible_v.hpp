#pragma once
#include<coim/IsNothrowConvertible.hpp>
namespace coim{
template<typename From_,typename To_>
constexpr bool is_nothrow_convertible=
    ::coim::IsNothrowConvertible<From_,To_>::value;
}
