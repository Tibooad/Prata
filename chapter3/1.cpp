#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int InchInFeet = 12;

int main(int argc, const char* argv[]){
  cout<<"Enter height in inches:____"<<"\b\b\b\b";
  int inches=0;
  cin>>inches;
  cout<<"You height: "<<inches/InchInFeet<<" feets "<<inches%InchInFeet<<" inches\n";
  return 0;
}
