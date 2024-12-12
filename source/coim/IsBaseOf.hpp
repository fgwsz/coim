#pragma once
#include<coim/bool_constant.hpp>
#include<coim/is_convertible_v.hpp>
#include<coim/is_void_v.hpp>
namespace coim{
template<typename Base_,typename Derived_>
struct IsBaseOf
    : ::coim::bool_constant<
        ::coim::is_convertible_v<
            Derived_ const volatile*
            ,Base_ const volatile*
        >
        &&(!::coim::is_void_v<Base_>)
        &&(
            !::coim::is_convertible_v<
                Base_ const volatile
                ,Derived_ const volatile
            >
        )
    >{};
}
