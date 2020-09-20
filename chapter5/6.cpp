#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,const char* argv[]){
  const char *arrm[]={"January","February","March","April","May","June","July","August","Septermber","October","November","December"};
  int arr[3][12];
  for(int i=0;i<3;i++){
    cout<<"Year: "<<(i+1)<<endl;
    for(int j=0;j<12;j++){
      cout<<"Enter count books for "<<arrm[j]<<": ";
      cin>>arr[i][j];
    }
  }
  int sum=0,sumYear=0;
  for(int i=0;i<3;i++){
    sumYear=0;
    for(int j=0;j<12;j++){
      sumYear+=arr[i][j];
    }
    cout<<"Year "<<(i+1)<<" count books "<<sumYear<<endl;
    sum+=sumYear;
  }
  cout<<"For all three years "<<sum<<endl;
  return 0;
}
