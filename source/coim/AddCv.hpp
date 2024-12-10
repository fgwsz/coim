#pragma once
namespace coim{
template<typename Type_>
struct AddCv{using type=Type_ const volatile;};
}
