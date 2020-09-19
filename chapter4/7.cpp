#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct bird{
  char nameCompany[30];
  float diameter;
  float weight;
};

int main(int argc, const char* argv[]){
  bird b;
  cout<<"Enter name of company: ";
  cin.getline(b.nameCompany,30);
  cout<<"Enter diameter: ";
  cin>>b.diameter;
  cout<<"Enter weight: ";
  cin>>b.weight;

  cout<<"Name: "<<b.nameCompany<<" diameter: "<<b.diameter<<" weight: "<<b.weight;
  return 0;
}
