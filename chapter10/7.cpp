#include <iostream>
#include "7Lib.h"
int main(int argc, char const *argv[])
{
    Plorg p;
    p.show();
    std::cout<<std::endl;
    p.set_CI(34);
    p.show();
    return 0;
}
