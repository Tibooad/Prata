#include <iostream>

int main(int argc, char const *argv[]) {
  using namespace std;
  char ch;
  cout<<"Please enter one of the following choices: \n";
  cout<<"c) carnivore\t p) pianist\n"
    <<"t) tree\t g) game\n";

  metka:
  cin>>ch;
  switch(ch){
    case 'c':
      cout<<"canviore\n";
      break;
    case 't':
      cout<<"tree\n";
      break;
    case 'p':
      cout<<"pianist\n";
      break;
    case 'g':
      cout<<"game\n";
      break;
    default:
      while(cin.get()!='\n');
      cout<<"Please enter a c, p, t, or g: ";
      goto metka;
  }
  return 0;
}
