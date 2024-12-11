#pragma once
#include<coim/size_t.hpp>
#include<coim/make_integer_sequence.hpp>
namespace coim{
template<::coim::size_t size_>
using make_index_sequence=::coim::make_integer_sequence<::coim::size_t,size_>;
}
