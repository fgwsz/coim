#pragma once
#include<coim/TypeIdentity.hpp>
namespace coim{
template<typename Type_>
using type_identity_t=typename ::coim::TypeIdentity<Type_>::type;
}
