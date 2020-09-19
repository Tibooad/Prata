#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(int argc, const char *argv[]){
  // on strings
  string name,lastName;

  cout<<"Enter your first name: ";
  getline(cin,name);
  cout<<"Enter your last name: ";
  getline(cin,lastName);
  string str="Here's the information in a single string: "+name+" "+lastName;
  cout<<str<<endl;
  return 0;
}
