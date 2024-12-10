#pragma once
#include<coim/size_t.hpp>
#include<coim/Extent.hpp>
namespace coim{
template<typename Type_>
constexpr ::coim::size_t extent_v=
    ::coim::Extent<Type_>::value;
}
