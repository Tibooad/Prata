#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct CandyBar{
  char name[20];
  float weight;
  int calories;
};

int main(int argc,const char* argv[]){
  CandyBar cb[3]{{"cb1",25.5,25},{"cb2",30.5,30},{"cb3",50.3,50}};
  cout<<"name: "<<cb[0].name<<" weight: "<<cb[0].weight<<" calories: "
  <<cb[0].calories<<endl
  <<"name: "<<cb[1].name<<" weight: "<<cb[1].weight<<" calories: "
  <<cb[1].calories<<endl
  <<"name: "<<cb[2].name<<" weight: "<<cb[2].weight<<" calories: "
  <<cb[2].calories<<endl;
  return 0;
}
