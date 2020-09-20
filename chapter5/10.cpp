#include <iostream>

using std::cin;
using std::cout;

int main(int argc, const char* argv[]){
  int countRows=0;
  cout<<"Enter count rows: ";
  cin>>countRows;
  for(int i=0;i<countRows;i++){
      for(int j=0;j<countRows-i-1;j++)
        cout<<".";

      for(int k=0;k<i+1;k++)
        cout<<"*";
      cout<<"\n";
  }
  return 0;
}
