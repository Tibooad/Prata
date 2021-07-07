#include <iostream>

double refcube(const double &n){
    return n*n*n;
}

int main(int argc, char const *argv[])
{
    double yo[] = {2.2, 3.3, 4.4};
    double r=5;
    // double z=refcube(yo[2]);
    double z=refcube(yo[2]+1);
    std::cout<<z;
    return 0;
}
