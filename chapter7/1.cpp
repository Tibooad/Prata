#include <iostream>

double harmonic_mean(double x, double y){
  return 2.0 * x * y/(x+y);
}

int main(int argc, char const *argv[]) {
  using namespace std;
  double a=0,b=0;
  while(true){
    cout<<"Enter two numbers (0 for exit): ";
    cin>>a>>b;
    if(a==0||b==0) break;
    cout<<"Harmonic mean: "<<harmonic_mean(a,b)<<endl;

  }
  cout<<"Bye!\n";
  return 0;
}
