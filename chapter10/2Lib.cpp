#include "2Lib.h"
#include <iostream>
#include <cstring>

Person::Person(const std::string &ln, const char *fn){
    lname=ln;
    strcpy(fname,fn);
}

void Person::show()const{
    std::cout<<"Full name: "<<fname<<" "<<lname<<std::endl;
}
void Person::formalShow()const{
    std::cout<<"Full name: "<<lname<<", "<<fname<<std::endl;
}