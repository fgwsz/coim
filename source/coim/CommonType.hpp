#pragma once
#include<coim/declval.hpp>
#include<coim/void_t.hpp>
#include<coim/conditional_t.hpp>
#include<coim/is_same_v.hpp>
#include<coim/decay_t.hpp>
namespace coim{
template<typename...>
struct CommonType{};
template<typename Type_>
struct CommonType<Type_>: ::coim::CommonType<Type_,Type_>{};
namespace detail{
template<typename Type_1_,typename Type_2_>
using conditional_result_t=
    decltype(false?::coim::declval<Type_1_>(): ::coim::declval<Type_2_>());
template<typename,typename,typename=void>
struct DecayConditionalResult{};
template<typename Type_1_,typename Type_2_>
struct DecayConditionalResult<
    Type_1_
    ,Type_2_
    ,::coim::void_t<::coim::detail::conditional_result_t<Type_1_,Type_2_>>
>: ::coim::Decay<::coim::detail::conditional_result_t<Type_1_,Type_2_>>{};
template<typename Type_1_,typename Type_2_,typename=void>
struct CommonType2Impl
    : ::coim::detail::DecayConditionalResult<Type_1_ const&,Type_2_ const&>{};
template<typename Type_1_,typename Type_2_>
struct CommonType2Impl<
    Type_1_
    ,Type_2_
    ,::coim::void_t<::coim::detail::conditional_result_t<Type_1_,Type_2_>>
>: ::coim::detail::DecayConditionalResult<Type_1_,Type_2_>{};
}
template<typename Type_1_,typename Type_2_>
struct CommonType<Type_1_,Type_2_>
    : ::coim::conditional_t<
        ::coim::is_same_v<Type_1_,::coim::decay_t<Type_1_>>
        &&::coim::is_same_v<Type_2_,::coim::decay_t<Type_2_>>
        ,::coim::detail::CommonType2Impl<Type_1_,Type_2_>
        ,::coim::CommonType<::coim::decay_t<Type_1_>,::coim::decay_t<Type_2_>>
    >{};
namespace detail{
template<
    typename AlwaysVoid_
    ,typename Type_1_
    ,typename Type_2_
    ,typename...Types_
>struct CommonTypeMultiImpl{};
template<typename Type_1_,typename Type_2_,typename...Types_>
struct CommonTypeMultiImpl<
    ::coim::void_t<typename ::coim::CommonType<Type_1_,Type_2_>::type>
    ,Type_1_
    ,Type_2_
    ,Types_...
>
    : ::coim::CommonType<
        typename ::coim::CommonType<Type_1_,Type_2_>::type
        ,Types_...
    >{};
}
template<typename Type_1_,typename Type_2_,typename...Types_>
struct CommonType<Type_1_,Type_2_,Types_...>
    : ::coim::detail::CommonTypeMultiImpl<void,Type_1_,Type_2_,Types_...>{};
}
