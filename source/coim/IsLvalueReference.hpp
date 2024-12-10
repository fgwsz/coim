#pragma once
#include<coim/false_type.hpp>
#include<coim/true_type.hpp>
namespace coim{
template<typename Type_>
struct IsLvalueReference: ::coim::false_type{};
template<typename Type_>
struct IsLvalueReference<Type_&>: ::coim::true_type{};
}
