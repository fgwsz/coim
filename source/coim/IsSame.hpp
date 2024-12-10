#pragma once
#include<coim/false_type.hpp>
#include<coim/true_type.hpp>
namespace coim{
template<typename Type_1_,typename Type_2_>
struct IsSame: ::coim::false_type{};
template<typename Type_>
struct IsSame<Type_,Type_>: ::coim::true_type{};
}
