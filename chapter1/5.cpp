#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double getFahrenheit(double celsius);

int main(int argc, const char* argv[]){
  cout<<"Please enter a Celsius value: ";
  double tempCelsius;
  cin>>tempCelsius;
  cout<<tempCelsius<<" degrees Celsius is "<<getFahrenheit(tempCelsius)<<" degrees Fahrenheit";
  return 0;
}
double getFahrenheit(double celsius){
  return celsius*1.8+32;
}
