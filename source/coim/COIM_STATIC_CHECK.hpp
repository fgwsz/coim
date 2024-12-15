#pragma once
#include<coim/COIM_CONCAT.hpp>
#include<coim/true_type.hpp>
#include<coim/false_type.hpp>
#include<coim/bool_constant.hpp>
#define COIM_STATIC_CHECK(...) \
static constexpr bool COIM_CONCAT(__coim_static_check_express_,__COUNTER__)= \
[](){ \
    struct StaticCheck{ \
        static constexpr bool apply(::coim::true_type){return true;}; \
        [[deprecated("COIM_STATIC_CHECK("#__VA_ARGS__") Failed!")]] \
        static constexpr bool apply(::coim::false_type){return false;}; \
    }; \
    using result_type=::coim::bool_constant<static_cast<bool>(__VA_ARGS__)>; \
    return StaticCheck::apply(result_type{}); \
}() \
//
