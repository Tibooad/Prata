#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,const char* argv[]){
  cout<<"Input distance in farlongs"<<endl;
  int distance{0};
  cin>>distance;
  cout<<distance<<" fralongs = "<<distance*201168<<" meters";
  return 0;
}
