#pragma once
#include<test.hpp>
namespace tests{
template<typename Type_>
constexpr bool is_not_class_v=requires(Type_ value_){
    reinterpret_cast<Type_>(value_);
};
enum Enum{};
union Union{};
struct Struct{};
class Class{public:};
}
TEST_STATIC_CHECK(::tests::is_not_class_v<int>);
TEST_STATIC_CHECK(::tests::is_not_class_v<int*>);
TEST_STATIC_CHECK(::tests::is_not_class_v<int&>);
TEST_STATIC_CHECK(::tests::is_not_class_v<int&&>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<int[]>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<int[2]>);
TEST_STATIC_CHECK(::tests::is_not_class_v<int(*)[]>);
TEST_STATIC_CHECK(::tests::is_not_class_v<int(&)[]>);
TEST_STATIC_CHECK(::tests::is_not_class_v<int(*)[2]>);
TEST_STATIC_CHECK(::tests::is_not_class_v<int(&)[2]>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<void*(...)>);
TEST_STATIC_CHECK(::tests::is_not_class_v<void*(*)(...)>);
TEST_STATIC_CHECK(::tests::is_not_class_v<void*(&)(...)>);
TEST_STATIC_CHECK(::tests::is_not_class_v<void* ::tests::Class::*>);
TEST_STATIC_CHECK(::tests::is_not_class_v<void*(::tests::Class::*)(...)>);

TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Class>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class*>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class&>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class&&>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Class[]>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Class[2]>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class(*)[]>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class(&)[]>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class(*)[2]>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class(&)[2]>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Class*(...)>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class*(*)(...)>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class*(&)(...)>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class* ::tests::Class::*>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class*(::tests::Class::*)(...)>);

TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Enum>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Enum const>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Enum volatile>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Enum const volatile>);

TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Union>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Union const>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Union volatile>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Union const volatile>);

TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Struct>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Struct const>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Struct volatile>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Struct const volatile>);

TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Class>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Class const>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Class volatile>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Class const volatile>);

TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class&>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class const&>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class volatile&>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class const volatile&>);

TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class&&>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class const&&>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class volatile&&>);
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Class const volatile&&>);
