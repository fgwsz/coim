#pragma once
namespace coim{
template<typename Type_,Type_ value_>
struct IntegralConstant{
    static constexpr Type_ value={value_};
    using type=IntegralConstant;
    using value_type=Type_;
    constexpr operator value_type()const noexcept{return this->value_;}
    constexpr value_type operator()()const noexcept{return this->value_;}
};
}
