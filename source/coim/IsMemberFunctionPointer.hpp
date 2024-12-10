#pragma once
#include<coim/false_type.hpp>
#include<coim/IsFunction.hpp>
#include<coim/remove_cv_t.hpp>
namespace coim{
namespace detail{
template<typename Type_>
struct IsMemberFunctionPointerHelper: ::coim::false_type{};
template<typename ClassType_,typename VariableType_>
struct IsMemberFunctionPointerHelper<VariableType_ ClassType_::*>
    : ::coim::IsFunction<VariableType_>{};
}
template<typename Type_>
struct IsMemberFunctionPointer
    : ::coim::detail::IsMemberFunctionPointerHelper<
        ::coim::remove_cv_t<Type_>
    >{};
}
