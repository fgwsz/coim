#pragma once
#include<coim/TypeIdentity.hpp>
#include<coim/remove_reference_t.hpp>
namespace coim{
namespace detail{
template<typename Type_>
auto try_add_pointer(int)
    ->::coim::TypeIdentity<::coim::remove_reference_t<Type_>*>;
template<typename Type_>
auto try_add_pointer(...)->::coim::TypeIdentity<Type_>;
}
template<typename Type_>
struct AddPointer: decltype(::coim::detail::try_add_pointer<Type_>(0)){};
}
