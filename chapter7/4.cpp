#include <iostream>

long double probably(unsigned total, unsigned picks){
  long double result=1;
  long double n=0,p=0;
  for(n=total,p=picks;p>0;p--,n--)
    result*=n/p;
  return result;
}

int main(int argc, char const *argv[]) {
  using namespace std;
  unsigned total, meganumber, choices;
  cout<<"Enter total numbers number of picks allowed and total namber of meganumber: ";
  while((cin>>total>>choices>>meganumber) && (total>=choices) && (meganumber>=1)){
    cout<<"You have one chance in "<<probably(total,choices)*probably(meganumber,1)
        <<" of winning\n";
    cout<<"Next numbers (q for quit): ";

  }
  return 0;
}
