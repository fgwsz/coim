#pragma once
#include<coim/IsSigned.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_signed_v=::coim::IsSigned<Type_>::value;
}
