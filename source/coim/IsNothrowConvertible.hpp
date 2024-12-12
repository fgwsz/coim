#pragma once
#include<coim/Conjunction.hpp>
#include<coim/IsVoid.hpp>
#include<coim/declval.hpp>
namespace coim{
template<typename From_,typename To_>
struct IsNothrowConvertible
    : ::coim::Conjunction<::coim::IsVoid<From_>,::coim::IsVoid<To_>>{};
template<typename From_,typename To_>
requires requires{
    static_cast<To_(*)()>(nullptr);
    {
        ::coim::declval<void(&)(To_)noexcept>()(::coim::declval<From_>())
    }noexcept;
}
struct IsNothrowConvertible<From_,To_>: ::coim::true_type{};
}
