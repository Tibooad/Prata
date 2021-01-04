#include <iostream>
#include "6Lib.h"
int main(int argc, char const *argv[])
{
    using namespace std;
    Move m1(6,8);
    Move m2(3,3);
    Move res=m1.add(m2);
    res.showmove();
    
    return 0;
}
