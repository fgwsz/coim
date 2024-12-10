#pragma once
#include<coim/size_t.hpp>
#include<coim/Rank.hpp>
namespace coim{
template<typename Type_>
constexpr ::coim::size_t rank_v=
    ::coim::Rank<Type_>::value;
}
