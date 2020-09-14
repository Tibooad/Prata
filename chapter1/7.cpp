#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char* argv[]){
  int hours,minutes;
  cout<<"Enter the number of hours: ";
  cin>>hours;
  cout<<"Enter the number of minutes: ";
  cin>>minutes;
  cout<<"Time: "<<hours<<":"<<minutes;
  return 0;
}
