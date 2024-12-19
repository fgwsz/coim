#pragma once
/*
meta function
meta type
meta value
template
type
value
 */
template<typename Type_>
concept MetaType=requires{
    typename Type_::type;
}
template<typename Type_>
concept MetaValue=MetaFunction<Type_>&&requires{
    {Type_::type::value};
}
template<template<typename...>class Template_>
struct TemplateToMetaFunction{
    template<typename...Types_>
    using apply=Template_<Types_...>;
};
template<typename TemplateInstance_>
struct TemplateInstanceToMetaFunction{};
template<template<typename...>class Template_,typename...Types_>
struct TemplateInstanceToMetaFunction<Template_<Types_...>>
    : TemplateToMetaFunction<Template_>{};
template<typename MetaFunction_,typename...Types...>
using meta_function_invoke=MetaFunction_::template apply<Types...>;
template<typename MetaFunction_,typename...Types...>
using meta_function_invoke_t=
    typename meta_function_invoke<MetaFunction_,Types_...>::type;
template<typename MetaFunction_,typename...Types...>
constexpr decltype(auto) meta_function_invoke_v=
    meta_function_invoke_t<MetaFunction_,Types_...>::value;
