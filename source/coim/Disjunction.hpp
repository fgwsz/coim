#pragma once
#include<coim/false_type.hpp>
#include<coim/conditional_t.hpp>
namespace coim{
template<typename...>
struct Disjunction: ::coim::false_type{};
template<typename Constant_>
struct Disjunction<Constant_>: Constant_{};
template<typename Constant_,typename...Constants_>
struct Disjunction<Constant_,Constants_...>
    : ::coim::conditional_t<
        static_cast<bool>(Constant_::value)
        ,Constant_
        ,::coim::Disjunction<Constants_...>
    >{};
}
