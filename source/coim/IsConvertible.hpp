#pragma once
#include<coim/remove_reference_t.hpp>
#include<coim/declval.hpp>
#include<coim/true_type.hpp>
#include<coim/false_type.hpp>
#include<coim/bool_constant.hpp>
#include<coim/is_void_v.hpp>
namespace coim{
namespace detail{
template<typename Type_>
auto test_returnable(int)
    ->::coim::remove_reference_t<
        decltype(
            void(static_cast<Type_(*)()>(nullptr))
            ,::coim::declval<::coim::true_type>()
        )
    >;
template<typename>
auto test_returnable(...)->::coim::false_type;
template<typename Type_>
constexpr bool test_returnable_v=
    decltype(::coim::detail::test_returnable<Type_>(0))::value;
template<typename From_,typename To_>
auto test_implicitly_convertible(int)
    ->::coim::remove_reference_t<
        decltype(
            void(::coim::declval<void(&)(To_)>()(::coim::declval<From_>()))
            ,::coim::declval<::coim::true_type>()
        )
    >;
template<typename,typename>
auto test_implicitly_convertible(...)->::coim::false_type;
template<typename From_,typename To_>
constexpr bool test_implicitly_convertible_v=
    decltype(
        ::coim::detail::test_implicitly_convertible<From_,To_>(0)
    )::value;
}
template<typename From_,typename To_>
struct IsConvertible
    : ::coim::bool_constant<
        (::coim::detail::test_returnable_v<To_>
        &&::coim::detail::test_implicitly_convertible_v<From_,To_>)
        ||(::coim::is_void_v<From_>&&::coim::is_void_v<To_>)
    >{};
}
