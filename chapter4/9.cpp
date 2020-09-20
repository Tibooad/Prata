#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

struct CandyBar{
  char name[20];
  float weight;
  int calories;
};

int main(int argc,const char* argv[]){
  CandyBar *cb=new CandyBar[3];
  strcpy(cb[0].name,"cb1");
  cb[0].weight=12.2;cb[0].calories=12;
  strcpy(cb[1].name,"cb2");
  cb[1].weight=22.2;cb[1].calories=22;
  strcpy(cb[2].name,"cb3");
  cb[2].weight=32.2;cb[2].calories=32;
  cout<<"name: "<<cb[0].name<<" weight: "<<cb[0].weight<<" calories: "
  <<cb[0].calories<<endl
  <<"name: "<<cb[1].name<<" weight: "<<cb[1].weight<<" calories: "
  <<cb[1].calories<<endl
  <<"name: "<<cb[2].name<<" weight: "<<cb[2].weight<<" calories: "
  <<cb[2].calories<<endl;
  delete [] cb;
  return 0;
}
