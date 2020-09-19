#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double getAstrUnits(double lightYears);

int main(int argc, const char* argv[]){
  cout<<"Enter the number of light years: ";
  double lightYears;
  cin>>lightYears;
  cout<<lightYears<<" lighrt years = "<<getAstrUnits(lightYears)<<" astronomical units.";
  return 0;
}
double getAstrUnits(double lightYears){
  return lightYears*63240.0;
}
