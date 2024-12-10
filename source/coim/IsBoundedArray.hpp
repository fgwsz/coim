#pragma once
#include<coim/false_type.hpp>
#include<coim/size_t.hpp>
#include<coim/true_type.hpp>
namespace coim{
template<typename Type_>
struct IsBoundedArray: ::coim::false_type{};
template<typename Type_,::coim::size_t size_>
struct IsBoundedArray<Type_[size_]>: ::coim::true_type{};
}
