#include <iostream>

using std::cout;
// manioulators
using std::endl;
using std::hex;
using std::dec;
using std::oct;

int main(int arc, const char* argv[]){
  int chset = 42;
  int waist = 42;
  int inseam = 42;

  int hex = 0x54;
  int oct = 012;

  cout<<"Monsieur cuts a striking figure!"<<endl;
  cout<<"chest = "<<chset<<" decimal for 42"<<endl;
  cout<<hex;
  cout<<"waist = "<<waist<<" hexadecimal for 42"<<endl;
  cout<<oct;
  cout<<"inseam = "<<inseam<<" octal for 42"<<endl;
  cout<<dec;
  cout<<"dec = "<<chset<<endl;

  cout<<"hex in dec "<<hex<<endl;
  cout<<"oct in dec "<<oct<<endl;
  return 0;
}
