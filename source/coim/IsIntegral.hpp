#pragma once
#include<coim/bool_constant.hpp>
namespace coim{
template<typename Type_>
struct IsIntegral: ::coim::bool_constant<
    requires(Type_ value_,Type_* pointer_,void(*function_)(Type_)){
        //Type_*=>Type_ isn't reference
        reinterpret_cast<Type_>(value_);//Type_ isn't class
        //原因是C++内存布局的union和class会在编译期间因为强制类型转换失败而不满足约束
        function_(0);//Type_ isn't enum
        pointer_+value_;//Types_ isn't floating point
    }
>{};
}
