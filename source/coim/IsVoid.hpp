#pragma once
#include<coim/IsSame.hpp>
#include<coim/remove_cv_t.hpp>
namespace coim{
template<typename Type_>
struct IsVoid: ::coim::IsSame<void,::coim::remove_cv_t<Type_>>{};
}
