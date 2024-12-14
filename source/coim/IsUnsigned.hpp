#pragma once
#include<coim/is_arithmetic_v.hpp>
#include<coim/bool_constant.hpp>
#include<coim/false_type.hpp>
namespace coim{
namespace detail{
template<typename Type_,bool=::coim::is_arithmetic_v<Type_>>
struct IsUnsignedHelper: ::coim::bool_constant<Type_(0)<Type_(-1)>{};
template<typename Type_>
struct IsUnsignedHelper<Type_,false>: ::coim::false_type{};
}
template<typename Type_>
struct IsUnsigned: ::coim::detail::IsUnsignedHelper<Type_>{};
}
