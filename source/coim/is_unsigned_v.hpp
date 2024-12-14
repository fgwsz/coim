#pragma once
#include<coim/IsUnsigned.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_unsigned_v=::coim::IsUnsigned<Type_>::value;
}
