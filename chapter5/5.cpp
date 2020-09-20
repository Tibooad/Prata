#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,const char* argv[]){
  const char *arrm[]={"January","February","March","April","May","June","July","August","Septermber","October","November","December"};
  int arr[12];
  int sum=0;
  for(int i=0;i<12;i++){
    cout<<"Enter count books for "<<arrm[i]<<" ";
    cin>>arr[i];
  }
  for(int i=0;i<12;i++){
    sum+=arr[i];
  }
  cout<<"Sum: "<<sum;
  return 0;
}
