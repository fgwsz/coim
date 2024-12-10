#pragma once
#include<coim/IsFunction.hpp>
namespace coim{
template<typename Type_>
static constexpr bool is_function_v=::coim::IsFunction<Type_>::value;
}
