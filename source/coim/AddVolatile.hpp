#pragma once
namespace coim{
template<typename Type_>
struct AddVolatile{using type=Type_ volatile;};
}
