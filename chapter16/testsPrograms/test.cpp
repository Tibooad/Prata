#include <iostream>
#include <vector>
#include <algorithm>


int main(int argc, char const *argv[])
{
    std::vector<double> scores;
    double tmp;
    while (std::cin>>tmp && tmp>=0)
    {
        scores.push_back(tmp);
    }
    std::cout<<"Your enter:\n";
    std::vector<double>::iterator pr;
    for ( pr = scores.begin(); pr != scores.end(); pr++)
        std::cout<<*pr<<"\t";
    std::cout<<std::endl;
    //или при автоматическом выведении типа
    for (auto p = scores.begin(); p != scores.end(); p++)
        std::cout<<*pr<<"\t";
    
    return 0;
}
