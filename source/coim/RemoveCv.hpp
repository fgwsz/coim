#pragma once
namespace coim{
template<typename Type_>
struct RemoveCv{using type=Type_;};
template<typename Type_>
struct RemoveCv<Type_ const>{using type=Type_;};
template<typename Type_>
struct RemoveCv<Type_ volatile>{using type=Type_;};
template<typename Type_>
struct RemoveCv<Type_ const volatile>{using type=Type_;};
}
