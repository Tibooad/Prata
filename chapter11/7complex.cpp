#include "7complex.h"
#include <string>
complex::complex(){
    real=0;
    imaginary=0;
}
complex::complex(double r,double i){
    real=r;
    imaginary=i;
}
complex::~complex(){}
std::string complex::toString()const{
    std::string res="(";
    res+=std::to_string(real);
    res+=",";
    res+=std::to_string(imaginary);
    res+="i)";
    return res;
}

complex complex::operator-() const{
    return complex(real,imaginary);
}
complex complex::operator~() const{
    return complex(real,-imaginary);
}

complex operator+(const complex &c1,const complex &c2){
    return complex(c1.real+c2.real,c1.imaginary+c2.imaginary);
}
complex operator-(const complex &c1,const complex &c2){
    return complex(c1.real-c2.real,c1.imaginary-c2.imaginary);
}

complex operator*(const complex &c1,const complex &c2){
    return complex(c1.real*c2.real-c1.imaginary * c2.imaginary, c1.real * c2.imaginary+c1.imaginary * c2.real);
}

std::ostream & operator<<(std::ostream &os,const complex &c2){
    os<<c2.toString();
    return os;
}
std::istream & operator>>(std::istream &is,complex &c2){
    
    double r=0,i=0;
    std::cout<<"real: ";
    is>>r;
    std::cout<<"imaginary: ";
    is>>i;
    c2=complex(r,i);
    return is;
}
