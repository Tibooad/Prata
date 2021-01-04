#include "6Lib.h"
#include <iostream>
Move::Move(double a, double b){
    x=a;
    y=b;
}

Move::~Move(){
    std::cout<<"Destr\n";
}
void Move::showmove()const{
    std::cout<<"x: "<<x<<"\t"<<"y: "<<y<<std::endl;
}
Move Move::add(const Move &m) const{
    return Move(this->x+m.x,this->y+m.y);
}
void Move::reset(double a,double b){
    x=a;
    y=b;
}