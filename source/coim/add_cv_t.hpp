#pragma once
#include<coim/AddCv.hpp>
namespace coim{
template<typename Type_>
using add_cv_t=typename ::coim::AddCv<Type_>::type;
}
