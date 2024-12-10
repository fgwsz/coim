#pragma once
namespace coim{
template<bool,typename=void>
struct EnableIf{};
template<typename Type_>
struct EnableIf<true,Type_>{using type=Type_;};
}
