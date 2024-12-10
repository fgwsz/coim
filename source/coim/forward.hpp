#pragma once
#include<coim/remove_reference_t.hpp>
#include<coim/is_lvalue_reference_v.hpp>
namespace coim{
template<typename Type_>
constexpr Type_&& forward(
    ::coim::remove_reference_t<Type_>& lvalue_reference
)noexcept{
    return static_cast<Type_&&>(lvalue_reference);
}
template<typename Type_>
constexpr Type_&& forward(
    ::coim::remove_reference_t<Type_>&& rvalue_reference
)noexcept{
    static_assert(!::coim::is_lvalue_reference_v<Type_>);
    return static_cast<Type_&&>(rvalue_reference);
}
}
