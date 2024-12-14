#pragma once
#include<coim/CommonType.hpp>
namespace coim{
template<typename...Types_>
using common_type_t=typename ::coim::CommonType<Types_...>::type;
}
