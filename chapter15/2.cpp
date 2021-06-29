#include <iostream>
#include <cmath>
#include "2Lib.h"

double hmean(double a, double b);
double gmean(double a, double b);

int main(int argc, char const *argv[])
{
    double x, y, z;
    std::cout<<"Enter two numbers: ";
    while(std::cin>>x>>y){
        try{
            z=hmean(x,y);
            std::cout<<"Harmonic mean of "<<x<<" and "<<y<<" is "<< z<<std::endl;
            z=gmean(x,y);
            std::cout<<"Geometric mean of "<<x<<" and "<<y<<" is "<< z <<std::endl;
            std::cout<<"Enter next set of numbers <q to quit>: ";
        }catch(Bad_hmean &hg){
            std::cout<<hg.what();
            std::cout<<"\nTry again. \n";
            continue;
        }catch(Bad_gmean &bg){
            std::cout<<bg.what();
            std::cout<<"\nValues used: "<<bg.v1<<", "<<bg.v2<<std::endl;
            std::cout<<"Sorry, you don't get to play any more.\n";
            break;
        }
    }
    std::cout<<"Bye!\n";

    return 0;
}
double hmean(double a, double b){
    if(a==-b)
        throw Bad_hmean(a,b);
    
    return 2.0 * a * b / (a+b);
}

double gmean(double a, double b){
    if(a<0||b<0)
        throw Bad_gmean(a,b);
    
    return std::sqrt(a*b);
}