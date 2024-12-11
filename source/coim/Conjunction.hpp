#pragma once
#include<coim/false_type.hpp>
#include<coim/conditional_t.hpp>
namespace coim{
template<typename...>
struct Conjunction: ::coim::false_type{};
template<typename Constant_>
struct Conjunction<Constant_>: Constant_{};
template<typename Constant_,typename...Constants_>
struct Conjunction<Constant_,Constants_...>
    : ::coim::conditional_t<
        static_cast<bool>(Constant_::value)
        ,::coim::Conjunction<Constants_...>
        ,Constant_
    >{};
}
