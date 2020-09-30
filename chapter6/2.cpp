#include <iostream>
#include <array>
const int sizeArray=10;

int main(int argc, char const *argv[]) {
  using namespace std;
  array<double,sizeArray> arr;
  int count=0;

  for(int i=0; i<sizeArray && cin>>arr[i];i++,count++);
  double averrage=0.0;
  for(int i=0;i<count;i++){
    averrage+=arr[i];
  }
  averrage/= static_cast<double>(count);
  int countMoreAverrage=0;
  for(int i=0;i<count;i++){
    if(arr[i]>averrage)
      countMoreAverrage++;
  }
  cout<<"Averrage: "<<averrage<<" count more averrage: "
  <<countMoreAverrage<<"\n";
  return 0;
}
