#include <iostream>
#include "2Lib.h"
int main(int argc, char const *argv[])
{
    using namespace std;
    Person one;
    Person two("Smythercraft");
    Person three("Dimwiddy", "Sam");

    one.show();
    cout<<endl;
    one.formalShow();

    two.show();
    cout<<endl;
    two.formalShow();

    three.show();
    cout<<endl;
    three.formalShow();
    return 0;
}
