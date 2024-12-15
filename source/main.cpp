#include<iostream>
#include<coim.hpp>

int main(int argc,char* argv[]){
    ::std::cout<<"Passed!\n";
    return 0;
}
COIM_STATIC_CHECK(::coim::is_same_v<int,bool>);
