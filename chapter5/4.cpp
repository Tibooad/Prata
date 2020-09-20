#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,const char* argv[]){
  double startBalKleo,startBalDafna;
  double percentKleo,percentDafna;
  cout<<"Enter start balance Dafna: ";
  cin>>startBalDafna;
  cout<<"Enter percents Dafna: ";
  cin>>percentDafna;

  cout<<"Enter start balance Kleo: ";
  cin>>startBalKleo;
  cout<<"Enter percents Kleo: ";
  cin>>percentKleo;

  percentKleo/=100.0;
  percentDafna/=100.0;
  double profitKleo=startBalKleo,profitDafna=startBalDafna;
  int years=0;
  for(years=1;profitKleo<=profitDafna;years++){
    profitDafna+=percentDafna*startBalDafna;
    cout<<"Year "<<years<<" profit DAFNA: "<<profitDafna<<endl;

    profitKleo+=percentKleo*profitKleo;
    cout<<"Year "<<years<<" profit KLEO: "<<profitKleo<<endl;
  }
  return 0;
}
