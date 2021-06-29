#include <iostream>
#include <exception>
int main(int argc, char const *argv[])
{
    int a,b=2,c=0;
    try{
        if (c==0) throw std::exception("Деление на 0");
        a = b/c;
    } catch(std::exception &e)
    {
        std::cout <<e.what();
    }
    return 0;
}
