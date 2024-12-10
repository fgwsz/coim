#pragma once
namespace coim{
template<typename Type_>
struct RemoveReference{using type=Type_;};
template<typename Type_>
struct RemoveReference<Type_&>{using type=Type_;};
template<typename Type_>
struct RemoveReference<Type_&&>{using type=Type_;};
}
