#pragma once
#include<coim/size_t.hpp>
namespace coim{
template<typename Type_>
struct RemoveAllExtents{using type=Type_;};
template<typename Type_>
struct RemoveAllExtents<Type_[]>
    : ::coim::RemoveAllExtents<Type_>{};
template<typename Type_,::coim::size_t size_>
struct RemoveAllExtents<Type_[size_]>
    : ::coim::RemoveAllExtents<Type_>{};
}
