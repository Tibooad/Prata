#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char* argv[]){
  const int SecPerMinPerDeg = 60;

  double degrees,minutes,seconds;
  cout<<"Enter a latitude in degrees, minutes, and seconds:\n";
  cout<<"First, enter the degrees: ";
  cin>>degrees;
  cout<<"Second, enter the minutes of arc: ";
  cin>>minutes;
  cout<<"Finally, enter the seconds of arc: ";
  cin>>seconds;
  cout<<degrees<<" degrees, "<<minutes<<" minutes, "<<seconds<<" seconds = "
  <<degrees+minutes/double(SecPerMinPerDeg)+seconds/static_cast<double>(SecPerMinPerDeg*SecPerMinPerDeg)
  <<" degrees\n";
  return 0;
}
