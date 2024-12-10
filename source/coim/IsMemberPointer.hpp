#pragma once
#include<coim/false_type.hpp>
#include<coim/true_type.hpp>
#include<coim/remove_cv_t.hpp>
namespace coim{
namespace detail{
template<typename Type_>struct IsMemberPointerHelper: ::coim::false_type{};
template<typename ClassType_,typename VariableType_>
struct IsMemberPointerHelper<VariableType_ ClassType_::*>
    : ::coim::true_type{};
}
template<typename Type_>
struct IsMemberPointer
    : ::coim::detail::IsMemberPointerHelper<::coim::remove_cv_t<Type_>>{};
}
