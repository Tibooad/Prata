#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "1Lib.h"
int main(int argc, char const *argv[])
{
    using VECTOR::Vector;
    std::ofstream fout;
    fout.open("fileProg1.txt");

    srand(time(NULL));
    double direction;
    Vector step;
    Vector result(0.0,0.0);
    unsigned long steps=0;
    double target;
    double dstep;
    std::cout<<"Enter target distance (q ot quit): ";
    while(std::cin>>target){
        
        std::cout<<"Enter step length: ";
        if(!(std::cin>>dstep))
            break;

        fout<<"Target distance: "<<target<<"; Step size: "<<dstep<<"\n"
        ;
        while (result.magval()<target)
        {
            direction=rand() % 360;
            step.reset(dstep,direction, Vector::POL);
            result=result+step;

            fout<<steps<<": "<<result<<std::endl;
            steps++;
            
        }
        std::cout<<"After "<<steps<<" steps, the subject has the following location:\n";
        std::cout<<result<<std::endl;

        fout<<"After "<<steps<<" steps, the subject has the following location:\n";
        fout<<result<<std::endl;


        result.polar_mode();;
        std::cout<<" or\n"<<result<<std::endl;
        fout<<" or\n"<<result<<std::endl;

        std::cout<<"Average outward distance per step = "<<result.magval()/steps<<std::endl;
        fout<<"Average outward distance per step = "<<result.magval()/steps<<std::endl;
        steps=0;
        result.reset(0.0,0.0);
        std::cout<<"Enter target distance (q to quit): ";
        
    }
    fout.close();
    std::cout<<"Bye!\n";
    std::cin.clear();
    while (std::cin.get()!='\n')
        continue;
    
    
    return 0;
}
