#pragma once
#include<coim/false_type.hpp>
#include<coim/true_type.hpp>
#include<coim/size_t.hpp>
namespace coim{
template<typename Type_>
struct IsArray: ::coim::false_type{};
template<typename Type_>
struct IsArray<Type_[]>: ::coim::true_type{};
template<typename Type_,::coim::size_t size_>
struct IsArray<Type_[size_]>: ::coim::true_type{};
}
