#include <iostream>
#include <bitset>


int main(int argc, char const *argv[])
{
    int a=10;
    std::cout<<" a "<<std::bitset<sizeof(int) * 8>(a)<<std::endl;

    std::cout<<"~a "<<std::bitset<sizeof(int) * 8>(~a)<<std::endl;
    return 0;
}
