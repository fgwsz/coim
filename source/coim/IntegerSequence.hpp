#pragma once
#include<coim/size_t.hpp>
namespace coim{
template<typename Type_,Type_...values_>
struct IntegerSequence{
    using value_type=Type_;
    static constexpr ::coim::size_t size()noexcept{return sizeof...(values_);}
};
}
