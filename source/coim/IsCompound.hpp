#pragma once
#include<coim/bool_constant.hpp>
#include<coim/is_fundamental_v.hpp>
namespace coim{
template<typename Type_>
struct IsCompound: ::coim::bool_constant<!::coim::is_fundamental_v<Type_>>{};
}
