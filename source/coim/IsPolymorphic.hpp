#pragma once
#include<coim/true_type.hpp>
#include<coim/false_type.hpp>
namespace coim{
namespace detail{
    template<typename Type_>
    ::coim::true_type detect_is_polymorphic(
        decltype(
            dynamic_cast<void const volatile*>(static_cast<Type_*>(nullptr))
        )
    );
    template<typename Type_>
    ::coim::false_type detect_is_polymorphic(...);
}
template<typename Type_>
struct IsPolymorphic
    :decltype(::coim::detail::detect_is_polymorphic<Type_>(nullptr)){};
}
