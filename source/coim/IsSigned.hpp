#pragma once
#include<coim/is_arithmetic_v.hpp>
#include<coim/bool_constant.hpp>
#include<coim/false_type.hpp>
namespace coim{
namespace detail{
template<typename Type_,bool=::coim::is_arithmetic_v<Type_>>
struct IsSignedHelper: ::coim::bool_constant<Type_(-1)<Type_(0)>{};
template<typename Type_>
struct IsSignedHelper<Type_,false>: ::coim::false_type{};
}
template<typename Type_>
struct IsSigned: ::coim::detail::IsSignedHelper<Type_>{};
}
