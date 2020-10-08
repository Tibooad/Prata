#include <iostream>
const int count_funcs=4;
double add(double x, double y){
  return x+y;
}
double difference(double x, double y){
  return x-y;
}
double multiplication(double x, double y){
  return x*y;
}
double division(double x, double y){
  return x/y;
}

double calculate(double a, double b, double (*pf)(double,double)){
  return pf(a,b);
}

int main(int argc, char const *argv[]) {
  using namespace std;
  double a=0.0,b=0.0;
  double (*farr[count_funcs])(double, double)={add,difference,multiplication,division};
  cout<<"Enter two numbers(q for quit): ";
  while(cin>>a>>b){
    for(int i=0;i<count_funcs;i++){
      cout<<i+1<<"st result: "<<calculate(a,b,farr[i])<<endl;
    }
    cout<<"Enter next numbers: ";
  }
  return 0;
}
