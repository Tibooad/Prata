#ifndef LIB4_H_
#define LIB4_H_
#include "4Lib.h"

Port::Port(const char *br="none",const char *st="none", int b=0){
    int count = strlen(br);
    count++;
    brand=new char[count];
    strcpy(brand,br);

    strcpy(style,st);
    bottles=b;
}

Port::Port(const Port &p){
    int count = strlen(p.brand);
    count++;
    brand=new char[count];
    strcpy(brand,p.brand);

    strcpy(style,p.style);
    bottles=p.bottles;
}

Port & Port::operator=(const Port &p){
    if(this==&p) return *this;
    delete[] brand;
    brand=new char[strlen(p.brand)+1];
    strcpy(brand,p.brand);
    strcpy(style,p.style);
    bottles=p.bottles;
    return *this;
}

Port & Port::operator+=(int b){
    bottles+=b;
    return *this;
}
Port & Port::operator-=(int b){
    if(bottles-b<0) return *this;
    else bottles-=b;
}
void Port::Show() const{
    cout<<"Brand: "<<brand<<endl
        <<"Kind: "<<style<<endl
        <<"Bottles: "<<bottles<<endl;
}

ostream & operator<<(ostream & os, const Port &p){
    os<<p.brand<<", "<<p.style<<", "<<p.bottles;
    return os;
}

//###############################################################
VintagePort::VintagePort(/* args */):Port("none","vintage"){
    nickname=new char[strlen("none"+1)];
    strcpy(nickname,"none");
    year=0;

}

void VintagePort::Show() const{
    Port::Show();
    cout<<"Name: "<<nickname<<endl
        <<"Year: "<<year<<endl;
}

VintagePort & VintagePort::operator=(const VintagePort &vp){
    if(this==&vp) return *this;
    Port::operator=(vp);
    delete[] nickname;

    nickname=new char[strlen(vp.nickname)+1];
    strcpy(nickname,vp.nickname);
    year=vp.year;
}

ostream & operator<<(ostream &os, const VintagePort &vp){
    os<<(const Port &) vp;
    os<<", "<<vp.nickname<<", "<<vp.year;
    return os;
}
#endif