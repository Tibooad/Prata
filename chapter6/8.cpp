#include <iostream>
#include <fstream>

int main(int argc, const char *argv[]){
  using namespace std;
  ifstream inFile;
  inFile.open("file.txt");
  char ch;
  int count=0;
  while(inFile>>ch)
    count++;
  cout<<"Count chars: "<<count;
  inFile.close();
  return 0;
}
