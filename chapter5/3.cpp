#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main(int argc,const char* argv[]){
  int n=0,sum=0;
  cout<<"Enter number: ";

  for(cin>>n;n!=0;cin>>n){
    sum+=n;
    cout<<"Sum = "<<sum<<endl
    <<"Enter next number: ";
  }

}
