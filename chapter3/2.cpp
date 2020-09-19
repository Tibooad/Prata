#include <iostream>

using std::cout;
using std::cin;
using std::endl;



int main(int argc, const char* argv[]){
  const double InchesInMeters=0.0254;
  const double PoundsInKilo = 2.2;

  cout<<"Enter height feets:___\b\b\b";
  int feets,inches,pounds;
  cin>>feets;
  cout<<"Enter height inches:___\b\b\b";
  cin>>inches;
  cout<<"Enter maxx in pounds:___\b\b\b";
  cin>>pounds;
  double bmi=0;
  cout<<"body mass index: "<<(pounds/PoundsInKilo)/(((feets*12+inches)*InchesInMeters)*((feets*12+inches)*InchesInMeters))<<endl;
  return 0;
}
