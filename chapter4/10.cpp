#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::array;

int main(int argc, const char* argv[]){
  array<int,3> arr;
  cout<<"Enter result: ";
  cin>>arr[0];
  cout<<"Enter result: ";
  cin>>arr[1];
  cout<<"Enter result: ";
  cin>>arr[2];
  cout<<"Average: "<<static_cast<double>(arr[0]+arr[1]+arr[2])/3.0<<endl
  <<"1: "<<arr[0]<<" 2: "<<arr[1]<<" 3: "<<arr[2]<<endl;

  return 0;
}
