#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char *argv[]){
  int n1,n2,sum=0;
  cout<<"Enter nums: ";
  cin>>n1>>n2;

  for(int i=n1;i<=n2;i++)
    sum+=i;
  cout<<"Sum numbers from "<<n1<<" to "<<n2<<" = "<<sum;
  return 0;
}
