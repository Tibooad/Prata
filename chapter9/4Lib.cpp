#include <iostream>
#include <cstring>
#include "4Lib.h"
namespace SALES{
    void setSales(Sales &s, const double ar[],int n){
        if(n<=0) return;
        memcpy(s.sales,ar,sizeof(double)*n);
        //std::copy(std::begin(ar),std::end(ar),std::begin(s.sales));
        for(int i=n;i<QUARTERS;i++){
            s.sales[i]=0;
        }
        double average=s.sales[0],max=s.sales[0],min=s.sales[0];
        for(int i=1;i<n;i++){
            average+=s.sales[i];
            if(max<s.sales[i]) max=s.sales[i];
            if(min>s.sales[i]) min=s.sales[i];
        }
        average/=double(n);
        s.average=average;
        s.max=max;
        s.min=min;

    }
    void setSales(Sales &s){
        using namespace std;
        for(int i=0;i<QUARTERS;i++){
            cout<<"Enter sales in quarter #"<<(i+1)<<": ";
            cin>>s.sales[i];
        }
        setSales(s,s.sales);
    }
    void showSales(const Sales &s){
        using namespace std;
        cout<<"----------PRINT VALUES----------\n";
        cout<<"Quarters: "<<endl;
        for(int i=0;i<QUARTERS;i++){
            cout<<s.sales[i]<<";\t";
        }
        cout<<endl;
        cout<<"Average: "<<s.average<<endl
            <<"Max: "<<s.max<<endl
            <<"Min: "<<s.min<<endl;
    }
}