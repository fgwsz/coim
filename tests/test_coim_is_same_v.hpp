#pragma once
#include<test.hpp>
#include<coim/is_same_v.hpp>

TEST_STATIC_CHECK(::coim::is_same_v<void,void>);
TEST_STATIC_CHECK_NOT(::coim::is_same_v<void const,void>);
TEST_STATIC_CHECK_NOT(::coim::is_same_v<void volatile,void>);
TEST_STATIC_CHECK_NOT(::coim::is_same_v<void const volatile,void>);
