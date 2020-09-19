#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,const char* argv[]){
  char firstName[15],lastName[15],deserve;
  int age;
  cout<<"What is your first name? ";
  cin.getline(firstName,15);
  cout<<"What is your last name? ";
  cin.getline(lastName,15);
  cout<<"What letter grade do you deserve? ";
  deserve=cin.get();
  cout<<"What is your age? ";
  cin>>age;
  cout<<"Name: "<<lastName<<", "<<firstName<<endl;
  cout<<"Grade: "<<char(deserve+1)<<endl;
  cout<<"Age: "<<age<<endl;
  return 0;
}
