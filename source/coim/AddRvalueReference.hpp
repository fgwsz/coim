#pragma once
#include<coim/TypeIdentity.hpp>
namespace coim{
namespace detail{
template<typename Type_>
auto try_add_rvalue_reference(int)->::coim::TypeIdentity<Type_&&>;
template<typename Type_>
auto try_add_rvalue_reference(...)->::coim::TypeIdentity<Type_>;
}
template<typename Type_>
struct AddRvalueReference
    : decltype(::coim::detail::try_add_rvalue_reference<Type_>(0)){};
}
