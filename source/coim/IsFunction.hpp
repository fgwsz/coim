#pragma once
#include<coim/false_type.hpp>
#include<coim/true_type.hpp>
namespace coim{
template<typename>
struct IsFunction : ::coim::false_type{};
#define __COIM_EMPTY
#define __COIM_IS_FUNCTION_IMPL(__EXT__) \
template<typename ResultType_,typename...Arguments_> \
struct IsFunction<ResultType_(Arguments_...) __EXT__ > \
    : ::coim::true_type{}; \
template<typename ResultType_,typename...Arguments_> \
struct IsFunction<ResultType_(Arguments_...,...) __EXT__ > \
    : ::coim::true_type{}; \
template<typename ResultType_,typename...Arguments_> \
struct IsFunction<ResultType_(Arguments_...) __EXT__ noexcept> \
    : ::coim::true_type{}; \
template<typename ResultType_,typename...Arguments_> \
struct IsFunction<ResultType_(Arguments_...,...) __EXT__ noexcept> \
    : ::coim::true_type{}; \
//
__COIM_IS_FUNCTION_IMPL(__COIM_EMPTY)
__COIM_IS_FUNCTION_IMPL(const)
__COIM_IS_FUNCTION_IMPL(volatile)
__COIM_IS_FUNCTION_IMPL(const volatile)
__COIM_IS_FUNCTION_IMPL(&)
__COIM_IS_FUNCTION_IMPL(const&)
__COIM_IS_FUNCTION_IMPL(volatile&)
__COIM_IS_FUNCTION_IMPL(const volatile&)
__COIM_IS_FUNCTION_IMPL(&&)
__COIM_IS_FUNCTION_IMPL(const&&)
__COIM_IS_FUNCTION_IMPL(volatile&&)
__COIM_IS_FUNCTION_IMPL(const volatile&&)
#undef __COIM_IS_FUNCTION_IMPL
#undef __COIM_EMPTY
}
