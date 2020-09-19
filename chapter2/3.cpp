#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void func1();
void func2();

int main(int argc, const char* argv[]){
  func1();
  func1();
  func2();
  func2();
  return 0;
}

void func1(void){
  cout<<"Three blind mice"<<endl;
}

void func2(void){
  cout<<"See how they run"<<endl;
}
