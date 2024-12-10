#pragma once
#include<coim/IntegralConstant.hpp>
namespace coim{
template<bool value_>
using bool_constant=::coim::IntegralConstant<bool,value_>;
}
