#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char* argv[]){
  double kilometers,liters;
  cout<<"Enter count kilometers: ";
  cin>>kilometers;
  cout<<"Enter count liters: ";
  cin>>liters;
  cout<<"Count liters per 100 kilometers "<< (liters/kilometers)*100.0<<endl;
  return 0;
}
