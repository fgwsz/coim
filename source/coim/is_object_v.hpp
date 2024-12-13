#pragma once
#include<coim/IsObject.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_object_v=::coim::IsObject<Type_>::value;
}
