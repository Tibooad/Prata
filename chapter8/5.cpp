#include <iostream>

template<typename T>
T max5(T arr[5]){
    T max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;
}

int main(int argc, char const *argv[])
{
    using namespace std;
    int arrint[5]={1,0,2,3,5};
    double arrd[5]={1.4,0.6,2.1,3.4,5.9};
    cout<<"Max: "<<max5(arrint)<<endl;
    cout<<"Max: "<<max5(arrd)<<endl;
    return 0;
}
