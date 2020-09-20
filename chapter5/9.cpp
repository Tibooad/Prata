#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, const char* argv[]){
  string str="";
  int count=0;
  cout<<"Enter words (for exit enter \"done\")\n";
  for(count=0;str!="done";count++,cin>>str);
  cout<<"You enter "<<(count-1)<<" words\n";
  return 0;
}
