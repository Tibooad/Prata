#include "7Lib.h"
#include <iostream>
#include <cstring>
Plorg::Plorg(const char name[])
{
    strcpy(full_name,name);
    ci=50;
}

Plorg::~Plorg()
{
}
void Plorg::set_CI(int index){
    ci=index;
}
void Plorg::show() const{
    std::cout<<"Name: "<<full_name<<std::endl
            <<"Contentment index: "<<ci<<std::endl;
}