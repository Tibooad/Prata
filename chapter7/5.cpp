#include <iostream>

unsigned long factorial(unsigned long num){
  if(num==1||num==0) return 1;
  return num*factorial(num-1);
}

int main(int argc, char const *argv[]) {
  using namespace std;
  unsigned long num=0;
  cout<<"Enter number for calculate factorial(q for exit): ";
  while(cin>>num){
    cout<<num<<"! = "<<factorial(num)<<endl;
    cout<<"Next number: ";
  }

  return 0;
}
