#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::strcmp;

int main(int argc, const char* argv[]){
  char arr[20]{'\0'};
  int count=0;
  cout<<"Enter words (for exit enter word \"done\")\n";
  for(count=0;strcmp(arr,"done");count++){
    cin>>arr;
  }
  cout<<"You enter "<<(count-1)<<" words\n";
  return 0;
}
