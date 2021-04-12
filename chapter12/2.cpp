#include <iostream>
#include "2Lib.h"

void Bravo(const Cd &disk);
int main(int argc, char const *argv[])
{
    using std::cout;
    using std::cin;
    using std::endl;

    

    Cd c1("Beatles", "Capitol", 14, 35.5);
    
    Classic c2=Classic("Piano Sonata in B flat, Fantasia in C",
                        "Alfred Brendel", "Phillips", 2, 57.17);
    
    Cd *pcd=&c1;
    

    cout<<"\nUsing object directly:\n";
    c1.Report();
    c2.Report();

    cout<<"\nUsing type cd * pointer to objects: \n";
    pcd->Report();
    pcd=&c2;
    pcd->Report();
    
    cout<<"\nCalling a function with a Cd reference argument:\n";
    Bravo(c1);
    Bravo(c2);

    cout<<"\nTesting assignment: \n";
    Classic copy;
    copy=c2;
    copy.Report();

    return 0;
}

void Bravo(const Cd &disk){
    disk.Report();
}