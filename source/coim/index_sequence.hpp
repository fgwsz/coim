#pragma once
#include<coim/size_t.hpp>
#include<coim/IntegerSequence.hpp>
namespace coim{
template<::coim::size_t...values_>
using index_sequence=::coim::IntegerSequence<::coim::size_t,values_...>;
}
