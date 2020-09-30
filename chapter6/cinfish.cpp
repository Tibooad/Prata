#include <iostream>

const int Max=5;
int main(int argc,const char *argv[]){
  using namespace std;
  double fish[Max];
  cout<<"Please enter the weights of your fish.\n";
  cout<<"You may enter up to "<<Max
  <<" fish <q to terminate>.\n";
  cout<<" fish #1: ";
  int i=0;
  while (i<Max && cin>>fish[i]){
    if(++i<Max)
      cout<<"fish #"<<i+1<<": ";
  }
  for(int i=0;i<Max;i++){
    cout<<fish[i]<<"\t";
  }
  cout<<"\n";

}
