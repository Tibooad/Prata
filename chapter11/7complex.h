#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
//#include <string>
class complex{
    private:
        double real;
        double imaginary;
    public:
        complex();
        complex(double r,double i=0);
        ~complex();
        std::string toString()const;

        complex operator-() const;
        complex operator~() const;

        friend complex operator+(const complex &c1,const complex &c2);
        friend complex operator-(const complex &c1,const complex &c2);
        friend complex operator*(const complex &c1,const complex &c2);
        friend complex operator/(const complex &c1,const complex &c2);
        friend std::ostream & operator<<(std::ostream &os,const complex &c2);
        friend std::istream & operator>>(std::istream &is,complex &c2);
};
#endif