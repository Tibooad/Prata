#include <iostream>
#include <cstring>

using std::cin;
using std::cout;

int main(int argc,const char *argv[]){
  // on char[]
  char name2[10],lastName2[10];

  cout<<"Enter your first name: ";
  cin.getline(name2,10);
  cout<<"Enter your last name: ";
  cin.getline(lastName2,10);
  char str2[43+10+1+10+1]="Here's the information in a single string: ";
  strcat(str2,name2);
  strcat(str2," ");
  strcat(str2,lastName2);
  // string str="Here's the information in a single string: "+name+" "+lastName;
  cout<<str2;
  return 0;

}
