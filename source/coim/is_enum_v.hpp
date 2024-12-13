#pragma once
#include<coim/IsEnum.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_enum_v=::coim::IsEnum<Type_>::value;
}
