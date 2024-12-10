#pragma once
#include<coim/remove_reference_t.hpp>
namespace coim{
template<typename Type_>
constexpr ::coim::remove_reference_t<Type_>&& move(Type_&& reference)noexcept{
    return static_cast<::coim::remove_reference_t<Type_>&&>(reference);
}
}
