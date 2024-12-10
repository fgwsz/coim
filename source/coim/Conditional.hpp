#pragma once
namespace coim{
template<bool condition_,typename Then_,typename Else_>
struct Conditional{using type=Then_;};
template<typename Then_,typename Else_>
struct Conditional<false,Then_,Else_>{using type=Else_;};
}
