#include "1Lib.h"
#include <utility>
#include <valarray>
#include <string>
#include <iostream>

Wine::Wine(const char *l, int y):label(l), bottles(std::valarray<int>(y),std::valarray<int>(y)){    
}

Wine::Wine(const char *l, int y, const int yr[],const int bot[]):label(l),bottles(std::valarray<int>(yr,y),std::valarray<int>(bot,y)){ 
}

Wine::~Wine(){
}

std::string & Wine::Label(){
    return label;
}
void Wine::GetBottles(){
    std::cout<<"Enter "<<label<<" data for "<<bottles.first.size()<<" year(s):\n";
    for(int i=0;i<bottles.first.size();i++){
        std::cout<<"Enter year: ";
        std::cin>>bottles.first[i];
        std::cout<<"Enter bottles for that year: ";
        std::cin>>bottles.second[i];
    }
}
void Wine::Show(){
    std::cout<<"Wine: "<<label<<std::endl;
    std::cout<<"\tYear\tBottles"<<std::endl;
    for(int i=0;i<bottles.first.size();i++){
        std::cout<<"\t"<<bottles.first[i]<<"\t"<<bottles.second[i]<<std::endl;
    }
}
int Wine::Sum(){
    return bottles.second.sum();
}
