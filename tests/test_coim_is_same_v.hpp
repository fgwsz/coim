#pragma once
#include<coim/COIM_STATIC_CHECK.hpp>
#include<coim/is_same_v.hpp>

COIM_STATIC_CHECK(::coim::is_same_v<void,void>);
COIM_STATIC_CHECK(!::coim::is_same_v<void const,void>);
COIM_STATIC_CHECK(!::coim::is_same_v<void volatile,void>);
COIM_STATIC_CHECK(!::coim::is_same_v<void const volatile,void>);
