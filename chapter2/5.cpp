#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char* argv[]){
  long long worldPopulation,usPopulation;
  cout<<"Enter the world's population: ";
  cin>>worldPopulation;
  cout<<"Enter the population of US: ";
  cin>>usPopulation;
  cout<<"The population of the US is "
  <<(static_cast<double>(usPopulation)/static_cast<double>(worldPopulation))*100.0
  <<"% of the world population\n";
  return 0;
}
