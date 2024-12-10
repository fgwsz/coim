#pragma once
#include<coim/size_t.hpp>
namespace coim{
template<typename Type_>
struct RemoveExtent{using type=Type_;};
template<typename Type_>
struct RemoveExtent<Type_[]>{using type=Type_;};
template<typename Type_,::coim::size_t size_>
struct RemoveExtent<Type_[size_]>{using type=Type_;};
}
