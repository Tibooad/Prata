#include <iostream>
#include <climits>

int main(int argc, char const *argv[])
{
    char a=CHAR_MAX;
    a+=1;
    std::cout<<static_cast<int>(a);
    return 0;
}
