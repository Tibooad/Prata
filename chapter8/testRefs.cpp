#include <iostream>
#define _USE_MATH_DEFINES // для C++
#include <cmath>
double refcube(const double & n){
    return n*n*n;
}
int main(int argc, const char *argv[],char *argp[]){
    using namespace std;
    cout<<argv[0]<<endl;
    cout<<argv[0][0]<<endl;
    cout<<argv[1][0]<<endl;
    cout<<argv[1][1]<<endl;

    int rats=101;
    int *pt=&rats;
    int & rodents=*pt;
    cout<<"rats: "<<rats<<endl;
    cout<<"pt: "<<*pt<<endl;
    cout<<"rodents: "<<rodents<<endl;
    cout<<"&rats: "<<&rats<<endl;
    cout<<"&pt: "<<pt<<endl;
    cout<<"&rodents: "<<&rodents<<endl;
    cout<<endl;
    int bunnies=50;
    pt=&bunnies;
    cout<<"rats: "<<rats<<endl;
    cout<<"pt: "<<*pt<<endl;
    cout<<"rodents: "<<rodents<<endl;
    cout<<"&rats: "<<&rats<<endl;
    cout<<"&pt: "<<pt<<endl;
    cout<<"&rodents: "<<&rodents<<endl;

    int x;
    int arrx[]={0,1,2,3};
    cout<<"refcube(x+2)"<<refcube(x+2)<<endl;
    cout<<"refcube(arrx[2])"<<refcube(arrx[2])<<endl;


    return 0;
}