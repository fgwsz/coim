#pragma once
namespace coim{
template<typename Type_>
struct RemoveConst{using type=Type_;};
template<typename Type_>
struct RemoveConst<Type_ const>{using type=Type_;};
}
