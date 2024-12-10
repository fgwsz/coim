#pragma once
namespace coim{
template<typename Type_>
struct RemoveVolatile{using type=Type_;};
template<typename Type_>
struct RemoveVolatile<Type_ volatile>{using type=Type_;};
}
