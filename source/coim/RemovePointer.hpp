#pragma once
namespace coim{
template<typename Type_>
struct RemovePointer{using type=Type_;};
template<typename Type_>
struct RemovePointer<Type_*>{using type=Type_;};
template<typename Type_>
struct RemovePointer<Type_*const>{using type=Type_;};
template<typename Type_>
struct RemovePointer<Type_*volatile>{using type=Type_;};
template<typename Type_>
struct RemovePointer<Type_*const volatile>{using type=Type_;};
}
