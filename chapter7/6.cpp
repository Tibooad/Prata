#include <iostream>

int fill_array(double* arr,int size){
  using namespace std;
  cout<<"Enter numbers for array(type q to finish):\n";
  int i=0;
  for(i=0;i<size;i++){
    cout<<"Enter #"<<i+1<<": ";
    cin>>arr[i];
    if(!cin) break;
  }
  return i;
}

void show_array(const double arr[],int size){
  using namespace std;
  cout<<"Array:\n";
  for(int i=0;i<size;i++){
    cout<<arr[i]<<"\t";

  }
  cout<<endl;
}

void reverse_array(double arr[],int size){
  int tmp=0;
  for(int i=0;i<size/2;i++){
    tmp=arr[i];
    arr[i]=arr[size-1-i];
  }
}
const int size_array=10;
int main(int argc, char const *argv[]) {
  using namespace std;
  int size=size_array;
  double arr[size_array];
  size=fill_array(arr,size);
  show_array(arr,size);
  reverse_array(arr,size);
  show_array(arr,size);
  return 0;
}
