#pragma once
#include<coim/IntegralConstant.hpp>
#include<coim/size_t.hpp>
#include<coim/IntegerSequence.hpp>
namespace coim{
namespace detail{
template<typename Sequence_,typename Constant_>
struct SequencePushBack;
template<
    template<typename T_,T_...>class Template_,typename Type_,Type_...values_
    ,typename Constant_
>
struct SequencePushBack<Template_<Type_,values_...>,Constant_>{
    using type=
        Template_<Type_,values_...,static_cast<Type_>(Constant_::value)>;
};
template<typename SizeType_,::coim::size_t size_>
struct MakeIntegerSequence{
    using type=typename ::coim::detail::SequencePushBack<
        typename ::coim::detail::MakeIntegerSequence<
            SizeType_
            ,size_-1
        >::type
        ,::coim::IntegralConstant<SizeType_,static_cast<SizeType_>(size_-1)>
    >::type;
};
template<typename SizeType_>
struct MakeIntegerSequence<SizeType_,0>{
    using type=::coim::IntegerSequence<SizeType_>;
};
}
template<typename SizeType_,SizeType_ size_>
using make_integer_sequence=
    typename ::coim::detail::MakeIntegerSequence<
        SizeType_
        ,static_cast<::coim::size_t>(size_)
    >::type;
}
