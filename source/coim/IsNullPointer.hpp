#pragma once
#include<coim/IsSame.hpp>
#include<coim/nullptr_t.hpp>
#include<coim/remove_cv_t.hpp>
namespace coim{
template<typename Type_>
struct IsNullPointer
    : ::coim::IsSame<::coim::nullptr_t,::coim::remove_cv_t<Type_>>{};
}
