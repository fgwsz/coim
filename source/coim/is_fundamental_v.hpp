#pragma once
#include<coim/IsFundamental.hpp>
namespace coim{
template<typename Type_>
constexpr bool is_fundamental_v=::coim::IsFundamental<Type_>::value;
}
