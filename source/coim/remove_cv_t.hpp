#pragma once
#include<coim/RemoveCv.hpp>
namespace coim{
template<typename Type_>
using remove_cv_t=typename ::coim::RemoveCv<Type_>::type;
}
