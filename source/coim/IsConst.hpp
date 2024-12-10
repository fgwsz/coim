#pragma once
#include<coim/false_type.hpp>
#include<coim/true_type.hpp>
namespace coim{
template<typename Type_>
struct IsConst: ::coim::false_type{};
template<typename Type_>
struct IsConst<Type_ const>: ::coim::true_type{};
}
