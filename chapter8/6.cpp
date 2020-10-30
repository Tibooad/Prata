#include <iostream>
#include <cstring>

template<typename T>
T maxn(T arr[],int count){
    T max=arr[0];
    for(int i=1;i<count;i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;
}

template<>
char* maxn<char*>(char* arr[], int count){
    int max=0;
    for(int i=1;i<count;i++){
        if(strlen(arr[i])>max) max=i;
    }
    return arr[max];
}

int main(int argc, char const *argv[])
{
    using namespace std;
    int arrint[6]={1,0,2,3,5,77};
    double arrd[4]={1.4,0.6,2.1,3.4};
    char *arrstr[]={"Allo","Privet","PSHLNH","MostLongSTR"};
    cout<<"Max1: "<<maxn(arrint,6)<<endl;
    cout<<"Max2: "<<maxn(arrd,4)<<endl;
    cout<<"Max3: "<<maxn(arrstr,4)<<endl;
    return 0;
}
