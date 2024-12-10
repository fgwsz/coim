#pragma once
#include<coim/remove_reference_t.hpp>
#include<coim/conditional_t.hpp>
#include<coim/is_array_v.hpp>
#include<coim/remove_extent_t.hpp>
#include<coim/is_function_v.hpp>
#include<coim/add_pointer_t.hpp>
#include<coim/remove_cv_t.hpp>
namespace coim{
template<typename Type_>
struct Decay{
private:
    using row_type=::coim::remove_reference_t<Type_>;
public:
    using type=::coim::conditional_t<
        ::coim::is_array_v<row_type>
        ,::coim::add_pointer_t<::coim::remove_extent_t<row_type>>
        ,::coim::conditional_t<
            ::coim::is_function_v<row_type>
            ,::coim::add_pointer_t<row_type>
            ,::coim::remove_cv_t<row_type>
        >
    >;
};
}
