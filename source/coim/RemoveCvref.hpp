#pragma once
#include<coim/remove_cv_t.hpp>
#include<coim/remove_reference_t.hpp>
namespace coim{
template<typename Type_>
struct RemoveCvref{
    using type=::coim::remove_cv_t<::coim::remove_reference_t<Type_>>;
};
}
