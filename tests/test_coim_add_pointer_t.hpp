#pragma once
#include<coim/COIM_STATIC_CHECK.hpp>
#include<coim/is_same_v.hpp>
#include<coim/add_pointer_t.hpp>

COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<void>,void*>);
COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<void const>,void const*>);
COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<void volatile>,void volatile*>);
COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<void const volatile>,void const volatile*>);

COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int>,int*>);
COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int const>,int const*>);
COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int volatile>,int volatile*>);
COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int const volatile>,int const volatile*>);

COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int&>,int*>);
COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int const&>,int const*>);
COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int volatile&>,int volatile*>);
COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int const volatile&>,int const volatile*>);

COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int&&>,int*>);
COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int const&&>,int const*>);
COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int volatile&&>,int volatile*>);
COIM_STATIC_CHECK(::coim::is_same_v<::coim::add_pointer_t<int const volatile&&>,int const volatile*>);
