#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[])
{
    const int SIZE = 10;
    double Receipts[SIZE];
    for (int i = SIZE-1; i >=0; i--)
    {
        Receipts[SIZE-1-i]=i;
    }
    std::cout<<"Array: "<<std::endl;
    for(double &x: Receipts)
        std::cout<<x<<'\t';
    std::cout<<std::endl;
    std::sort(Receipts,&Receipts[SIZE]);
    std::cout<<"Array after sort: "<<std::endl;
    for(double &x: Receipts)
        std::cout<<x<<'\t';
    std::cout<<std::endl;
    return 0;
}
