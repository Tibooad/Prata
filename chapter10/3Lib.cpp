#include "3Lib.h"
#include <cstring>
#include <iostream>

Golf::Golf(const char *name,int hc)
{
    strcpy(fullname,name);
    handicap=hc;
}

Golf::~Golf()
{
}
void Golf::showgolf() const
{
    std::cout<<"Name: "<<fullname<<std::endl
        <<"Handicap: "<<handicap<<std::endl;
}
int Golf::setgolf()
{
    using std::cin;
    using std::cout;
    cout<<"Enter name: ";
    cin.getline(this->fullname,LEN);
    if(strlen(this->fullname)==0) return 0;
    cout<<"Enter handicap: ";
    cin>>this->handicap;
    cin.get();
    return 1;
}