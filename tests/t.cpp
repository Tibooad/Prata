#include <iostream>

int main(int argc, char const *argv[])
{
    int a=5, b=6;
    int c=a+(++b);
    std::cout<<c;
    return 0;
}
