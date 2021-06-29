#ifndef VECTOR_H_
#define VECTOR_H_
#include<iostream>
#include <cmath>

namespace VECTOR{
    //count degr in one rad
    const double Rad_to_deg=45.0/atan(1.0);

    class Vector
    {
    public:
        enum Mode{RECT, POL};
    private:
        double x;//horizontal value
        double y;//vertical value
        double mag;//length of vector
        double ang;//direction vector on Gradus
        Mode mode;//RECT or POL(polar)

        //private methods
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector(/* args */);
        Vector(double n1,double n2, Mode form=RECT);
        void reset(double n1,double n2, Mode form=RECT);
        ~Vector();

        double xval() const{return x;}
        double yval() const{return y;}
        double magval() const{return mag;}
        double angval() const{return ang;}

        void polar_mode();
        void rect_mode();

        //operations
        Vector operator+(const Vector &b) const;
        Vector operator-(const Vector &b) const;
        Vector operator-() const;
        Vector operator*(double n) const;

        //friends
        friend Vector operator*(double n, const Vector &a);
        friend std::ostream & operator<<(std::ostream &os, const Vector &v);
    };
}
#endif