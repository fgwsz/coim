#pragma once
#include<coim/size_t.hpp>
#include<coim/IntegerSequence.hpp>
namespace coim{
template<typename SizeType_,SizeType_ size_>
using make_integer_sequence=
    ::coim::IntegerSequence<SizeType_,0/*,1,...,size_-1*/>;/*TODO*/
}
