#pragma once
#include<coim/false_type.hpp>
#include<coim/true_type.hpp>
namespace coim{
template<typename Type_>
struct IsVolatile: ::coim::false_type{};
template<typename Type_>
struct IsVolatile<Type_ volatile>: ::coim::true_type{};
}
