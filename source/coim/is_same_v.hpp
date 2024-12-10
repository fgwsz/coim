#pragma once
#include<coim/IsSame.hpp>
namespace coim{
template<typename Type_1_,typename Type_2_>
static constexpr bool is_same_v=::coim::IsSame<Type_1_,Type_2_>::value;
}
