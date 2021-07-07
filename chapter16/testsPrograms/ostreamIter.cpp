#include <iostream>
#include <iterator>
int main(int argc, char const *argv[])
{
    std::ostream_iterator<int, char> out_iter(std::cout,"");
    *out_iter++=15;  //работает подобно cout<<15<<" ";
    return 0;
}
