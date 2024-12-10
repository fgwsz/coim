#pragma once
#include<coim/RemoveCvref.hpp>
namespace coim{
template<typename Type_>
using remove_cvref_t=typename ::coim::RemoveCvref<Type_>::type;
}
