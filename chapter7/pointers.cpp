#include <iostream>

const double * f1(double ar[],int);
const double * f2(double ar[],int);
const double * f3(double ar[],int);

int main(int argc, char const *argv[]) {
  int arr[4];
  const double * (*pa[3])(double ar[],int)={f1,f2,f3};
  const double *p=&pa;
  const double * ((*ppa)[3])(double ar[],int)=&pa;
  int (*ar)[4]=&arr;
  //std::cout<<&(&ar);
  std::cout<<&ar;
  std::cout<<sizeof(&ar);
  return 0;
}
