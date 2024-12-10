#pragma once
#include<coim/false_type.hpp>
#include<coim/true_type.hpp>
namespace coim{
template<typename Type_>
struct IsPointer: ::coim::false_type{};
template<typename Type_>
struct IsPointer<Type_*>: ::coim::true_type{};
template<typename Type_>
struct IsPointer<Type_* const>: ::coim::true_type{};
template<typename Type_>
struct IsPointer<Type_* volatile>: ::coim::true_type{};
template<typename Type_>
struct IsPointer<Type_* const volatile>: ::coim::true_type{};
}
