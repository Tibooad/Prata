#include <iostream>
#include <cstring>
#include "4Lib.h"
namespace SALES{
Sales::Sales(){
    for(int i=0; i<QUARTERS;i++){
        sales[i]=0;
    }
    average=0;
    max=0;
    min=0;
}
Sales::Sales(const double arr[], int n){
    if(n<=0) return;
    memcpy(sales,arr,sizeof(double)*n);
    //std::copy(std::begin(ar),std::end(ar),std::begin(s.sales));
    for(int i=n;i<QUARTERS;i++){
        sales[i]=0;
    }
    average=sales[0],max=sales[0],min=sales[0];
    for(int i=1;i<n;i++){
        average+=sales[i];
        if(max<sales[i]) max=sales[i];
        if(min>sales[i]) min=sales[i];
    }
    average/=double(n);
    average=average;
    max=max;
    min=min;
}

Sales::~Sales()
{
}

void Sales::showSales()const{
    using namespace std;
    cout<<"----------PRINT VALUES----------\n";
    cout<<"Quarters: "<<endl;
    for(int i=0;i<QUARTERS;i++){
        cout<<this->sales[i]<<";\t";
    }
    cout<<endl;
    cout<<"Average: "<<this->average<<endl
        <<"Max: "<<this->max<<endl
        <<"Min: "<<this->min<<endl;
}

void Sales::setSales(){
    using namespace std;
    double arr[QUARTERS];
    for(int i=0;i<QUARTERS;i++){
        cout<<"Enter sales in quarter #"<<(i+1)<<": ";
        cin>>arr[i];
    }
    *this=Sales(arr,QUARTERS);
}

}
