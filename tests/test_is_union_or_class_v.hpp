#pragma once
#include<coim/COIM_STATIC_CHECK.hpp>
#include<coim/IsObject.hpp>
namespace tests{
template<typename Type_>
constexpr bool is_union_or_class_v=
    ::coim::detail::is_union_or_class_v<Type_>;
enum Enum{};
union Union{};
struct Struct{};
class Class{public:};
}
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<int>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<int*>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<int&>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<int&&>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<int[]>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<int[2]>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<int(*)[]>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<int(&)[]>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<int(*)[2]>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<int(&)[2]>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<void*(...)>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<void*(*)(...)>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<void*(&)(...)>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<void* ::tests::Class::*>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<void*(::tests::Class::*)(...)>);

COIM_STATIC_CHECK(::tests::is_union_or_class_v<::tests::Class>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class*>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class&>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class&&>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class[]>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class[2]>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class(*)[]>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class(&)[]>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class(*)[2]>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class(&)[2]>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class*(...)>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class*(*)(...)>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class*(&)(...)>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class* ::tests::Class::*>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class*(::tests::Class::*)(...)>);

COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Enum>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Enum const>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Enum volatile>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Enum const volatile>);

COIM_STATIC_CHECK(::tests::is_union_or_class_v<::tests::Union>);
COIM_STATIC_CHECK(::tests::is_union_or_class_v<::tests::Union const>);
COIM_STATIC_CHECK(::tests::is_union_or_class_v<::tests::Union volatile>);
COIM_STATIC_CHECK(::tests::is_union_or_class_v<::tests::Union const volatile>);

COIM_STATIC_CHECK(::tests::is_union_or_class_v<::tests::Struct>);
COIM_STATIC_CHECK(::tests::is_union_or_class_v<::tests::Struct const>);
COIM_STATIC_CHECK(::tests::is_union_or_class_v<::tests::Struct volatile>);
COIM_STATIC_CHECK(::tests::is_union_or_class_v<::tests::Struct const volatile>);

COIM_STATIC_CHECK(::tests::is_union_or_class_v<::tests::Class>);
COIM_STATIC_CHECK(::tests::is_union_or_class_v<::tests::Class const>);
COIM_STATIC_CHECK(::tests::is_union_or_class_v<::tests::Class volatile>);
COIM_STATIC_CHECK(::tests::is_union_or_class_v<::tests::Class const volatile>);

COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class&>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class const&>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class volatile&>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class const volatile&>);

COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class&&>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class const&&>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class volatile&&>);
COIM_STATIC_CHECK(!::tests::is_union_or_class_v<::tests::Class const volatile&&>);
