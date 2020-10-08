#include <iostream>
using namespace std;
void sum(const int arr[][4]){
  cout<<"size: "<<sizeof(*arr)<<endl;
arr[0][2]=4;
}

int main(int argc, char const *argv[]) {
  int data[2][4]={{1,2,3,4},{5,6,7,8}/*{9,10,11,12}*/};
  sum(data);
  return 0;
}
