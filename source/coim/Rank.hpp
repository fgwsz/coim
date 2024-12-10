#pragma once
#include<coim/IntegralConstant.hpp>
#include<coim/size_t.hpp>
namespace coim{
template<typename Type_>
struct Rank: ::coim::IntegralConstant<::coim::size_t,0>{};
template<typename Type_>
struct Rank<Type_[]>
    : ::coim::IntegralConstant<
        ::coim::size_t
        ,::coim::Rank<Type_>::value+1
    >{};
template<typename Type_,::coim::size_t size_>
struct Rank<Type_[size_]>
    : ::coim::IntegralConstant<
        ::coim::size_t
        ,::coim::Rank<Type_>::value+1
    >{};
}
