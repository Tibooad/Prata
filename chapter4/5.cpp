#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct CandyBar{
  char name[20];
  float weight;
  int calories;
};

int main(int argc,const char* argv[]){
  CandyBar snack{"Mocha Much",2.3,350};
  cout<<"name: "<<snack.name<<" weight "<<snack.weight<<" calories: "
  <<snack.calories<<endl;
  return 0;
}
