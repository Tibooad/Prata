#include <iostream>

int main(int argc, char const *argv[]) {
  using namespace std;
  double tvarps=0;
  double nalog=0;
  double rest=0;
  cout<<"Enter count tvarps: ";
  while(cin>>tvarps && tvarps>0){
    rest=tvarps;
    nalog=0;

    if(rest>5'000){
      nalog+=5'000*0.0;
    }else {
      nalog+=rest*0.0;
      goto metka;
    }
    rest-=5'000;
    if(rest>10'000){
      nalog+=10'000*0.1;
    }else{
      nalog+=rest*0.1;
      goto metka;
    }
    rest-=10'000;
    if(rest>20'000){
      nalog+=20'000*0.15;
    }else{
      nalog+=rest*0.15;
      goto metka;
    }
    rest-=20'000;

    nalog+=rest*0.2;
    metka:
    cout<<"Nalog: "<<nalog<<" tvarps\n";
    cout<<"Enter count tvarps: ";
  }

  return 0;
}
