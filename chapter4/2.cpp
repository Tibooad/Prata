#include <iostream>

int main(int argc,const char* argv[]){
  using namespace std;
  string name,dessert;
  cout<<"Enter your name:\n";
  getline(cin,name);
  cout<<"Enter your favorite dessert:\n";
  getline(cin,dessert);
  cout<<"I have some delicious "<<dessert;
  cout<<" for you, "<<name<<".\n";
  return 0;
}
