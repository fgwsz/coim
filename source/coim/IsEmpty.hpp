#pragma once
#include<coim/false_type.hpp>
#include<coim/true_type.hpp>
namespace coim{
template<typename Type_>
struct IsEmpty: ::coim::false_type{};
template<typename Type_>
requires requires(Type_){sizeof(Type_)<=1;}
struct IsEmpty<Type_>: ::coim::true_type{};
}
