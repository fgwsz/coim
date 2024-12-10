#pragma once
#include<coim/false_type.hpp>
#include<coim/true_type.hpp>
namespace coim{
template<typename Type_>
struct IsReference: ::coim::false_type{};
template<typename Type_>
struct IsReference<Type_&>: ::coim::true_type{};
template<typename Type_>
struct IsReference<Type_&&>: ::coim::true_type{};
}
