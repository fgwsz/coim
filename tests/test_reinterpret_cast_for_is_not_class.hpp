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
TEST_STATIC_CHECK(::tests::is_not_class_v<::tests::Enum>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Union>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Struct>);
TEST_STATIC_CHECK_NOT(::tests::is_not_class_v<::tests::Class>);
