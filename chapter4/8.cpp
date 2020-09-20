#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct bird{
  char nameCompany[20];
  float diameter;
  float weight;
};

int main(int argc, const char* argv[]){
  bird *pbird=new bird;
  cout<<"Enter diameter: ";
  (cin>>pbird->diameter).get();
  cout<<"Enter name of company: ";
  cin.getline(pbird->nameCompany,20);
  cout<<"Enter weight";
  cin>>pbird->weight;

  cout<<"Name: "<<pbird->nameCompany<<" diameter: "<<pbird->diameter
  <<" weight: "<<pbird->weight<<endl;
  delete pbird;
  return 0;
}
