#include "2Lib.h"
#include <utility>
#include <valarray>
#include <string>
#include <iostream>

Wine::Wine(const char *l, int y):std::string(l), std::pair<std::valarray<int>,std::valarray<int>>(std::valarray<int>(y),std::valarray<int>(y)){    
}

Wine::Wine(const char *l, int y, const int yr[],const int bot[]):std::string(l),std::pair<std::valarray<int>,std::valarray<int>>(std::valarray<int>(yr,y),std::valarray<int>(bot,y)){ 
}

Wine::~Wine(){
}

std::string & Wine::Label(){
    return (std::string &)(*this);
}
void Wine::GetBottles(){
    std::cout<<"Enter "<<*this<<" data for "<<((std::pair<std::valarray<int>,std::valarray<int>>)(*this)).first.size()<<" year(s):\n";
    for(int i=0;i<std::pair<std::valarray<int>,std::valarray<int>>::first.size();i++){
        std::cout<<"Enter year: ";
        std::cin>>std::pair<std::valarray<int>,std::valarray<int>>::first[i];
        std::cout<<"Enter bottles for that year: ";
        std::cin>>std::pair<std::valarray<int>,std::valarray<int>>::second[i];
    }
}
void Wine::Show(){
    std::cout<<"Wine: "<<*this<<std::endl;
    std::cout<<"\tYear\tBottles"<<std::endl;
    for(int i=0;i<std::pair<std::valarray<int>,std::valarray<int>>::first.size();i++){
        std::cout<<"\t"<<std::pair<std::valarray<int>,std::valarray<int>>::first[i]<<"\t"<<std::pair<std::valarray<int>,std::valarray<int>>::second[i]<<std::endl;
    }
}
int Wine::Sum(){
    return std::pair<std::valarray<int>,std::valarray<int>>::second.sum();
}
