#pragma once
#include<coim/false_type.hpp>
#include<coim/is_reference_v.hpp>
#include<coim/is_array_v.hpp>
#include<coim/is_function_v.hpp>
#include<coim/is_pointer_v.hpp>
#include<coim/is_member_pointer_v.hpp>
#include<coim/is_fundamental_v.hpp>
namespace coim{
template<typename Type_>
struct IsEnum: ::coim::false_type{};
template<typename Type_>
requires
    (!::coim::is_reference_v<Type_>)
    &&(!::coim::is_array_v<Type_>)
    &&(!::coim::is_function_v<Type_>)
    &&(!::coim::is_pointer_v<Type_>)
    &&(!::coim::is_member_pointer_v<Type_>)
    &&(!::coim::is_fundamental_v<Type_>)
    //isn't union or struct or class
    &&(requires(Type_ value_){reinterpret_cast<Type_>(value_);})
struct IsEnum<Type_>: ::coim::true_type{};
}
