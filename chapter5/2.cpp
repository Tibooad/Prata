#include <iostream>
#include <array>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::array;

const int ArrSize = 101;

int main(int argc,const char* argv[]){
  array<long double, ArrSize> arr;
  arr[0]=arr[1]=1L;

  for(int i=2;i<ArrSize;i++)
    arr[i]=static_cast<long double>(i)*arr[i-1];

  cout << std::fixed << std::setprecision(0);
  for(int i=0;i<ArrSize;i++)
    cout<<i<<" != "<<arr[i]<<endl;
  return 0;
}
