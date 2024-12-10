#pragma once
#include<test.hpp>
#include<coim/is_same_v.hpp>
#include<coim/add_pointer_t.hpp>

TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<void>,void*>);
TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<void const>,void const*>);
TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<void volatile>,void volatile*>);
TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<void const volatile>,void const volatile*>);

TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int>,int*>);
TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int const>,int const*>);
TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int volatile>,int volatile*>);
TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int const volatile>,int const volatile*>);

TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int&>,int*>);
TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int const&>,int const*>);
TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int volatile&>,int volatile*>);
TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int const volatile&>,int const volatile*>);

TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int&&>,int*>);
TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int const&&>,int const*>);
TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int volatile&&>,int volatile*>);
TEST_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int const volatile&&>,int const volatile*>);
