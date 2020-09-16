#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,const char* argv[]){
  const double LitersInGallon = 3.875;
  const double MilesInKilometers = 62.14;

  double liters;
  cout<<"Enter count liters on 100 kilometers: ";
  cin>>liters;
  cout<<" = "<<MilesInKilometers/(liters/LitersInGallon)
  <<" miles per gallon\n";
  return 0;
}
