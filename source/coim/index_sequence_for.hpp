#pragma once
#include<coim/make_index_sequence.hpp>
namespace coim{
template<typename...Types_>
using index_sequence_for=::coim::make_index_sequence<sizeof...(Types_)>;
}
