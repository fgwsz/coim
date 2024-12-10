#pragma once
#include<coim/size_t.hpp>
#include<coim/IntegralConstant.hpp>
namespace coim{
template<typename Type_,::coim::size_t index_=0>
struct Extent: ::coim::IntegralConstant<::coim::size_t,0>{};
template<typename Type_>
struct Extent<Type_[],0>
    : ::coim::IntegralConstant<::coim::size_t,0>{};
template<typename Type_,::coim::size_t index_>
struct Extent<Type_[],index_>
    : ::coim::Extent<Type_,index_-1>{};
template<typename Type_,::coim::size_t size_>
struct Extent<Type_[size_],0>
    : ::coim::IntegralConstant<::coim::size_t,size_>{};
template<typename Type_,::coim::size_t size_,::coim::size_t index_>
struct Extent<Type_[size_],index_>
    : ::coim::Extent<Type_,index_-1>{};
}
