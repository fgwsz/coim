#pragma once
#include<coim/false_type.hpp>
#include<coim/is_reference_v.hpp>
#include<coim/is_array_v.hpp>
#include<coim/is_function_v.hpp>
#include<coim/is_pointer_v.hpp>
#include<coim/is_member_pointer_v.hpp>
#include<coim/is_fundamental_v.hpp>
#include<coim/is_enum_v.hpp>
#include<coim/is_scalar_v.hpp>
namespace coim{
namespace detail{
template<typename Type_>
struct IsUnionOrClass: ::coim::false_type{};
template<typename Type_>
requires
    (!::coim::is_reference_v<Type_>)
    &&(!::coim::is_array_v<Type_>)
    &&(!::coim::is_function_v<Type_>)
    &&(!::coim::is_pointer_v<Type_>)
    &&(!::coim::is_member_pointer_v<Type_>)
    &&(!::coim::is_fundamental_v<Type_>)
    &&(!::coim::is_enum_v<Type_>)
struct IsUnionOrClass<Type_>: ::coim::true_type{};
template<typename Type_>
constexpr bool is_union_or_class_v=
    ::coim::detail::IsUnionOrClass<Type_>::value;
}
template<typename Type_>
struct IsObject
    : ::coim::bool_constant<
        ::coim::is_scalar_v<Type_>
        ||::coim::is_array_v<Type_>
        ||::coim::detail::is_union_or_class_v<Type_>
    >{};
}
