#include <iostream>

const int strsize=20;
const int sizeArray=3;
struct bop{
  char fullname[strsize];
  char title[strsize];
  char bopname[strsize];
  int preference; //0-full name; 1-title; 2-name bop
};

int main(int argc, char const *argv[]) {
  using namespace std;
  bop arr[sizeArray]{{"ya","director","bopDir",0},{"tu","secretar","bopSecretar",1},{"on","ded","bopDed",2}};
  char ch;
  cout<<"Please enter one of the following choices: \n";
  cout<<"a) display by name\t b) display by title\n"
    <<"c) display by bopname\t d) display by reference\n"
    <<"q) quit\n";
  while(true){
    cout<<"Enter your choise: ";
    metka:
    cin>>ch;
    switch(ch){
      case 'a':
        for(int i=0;i<sizeArray;i++){
          cout<<arr[i].fullname<<endl;
        }
        break;
      case 'b':
        for(int i=0;i<sizeArray;i++){
          cout<<arr[i].title<<endl;
        }
        break;
      case 'c':
        for(int i=0;i<sizeArray;i++){
          cout<<arr[i].bopname<<endl;
        }
        break;
      case 'd':
        for(int i=0;i<sizeArray;i++){
          switch (arr[i].preference) {
            case 0:cout<<arr[i].fullname<<endl; break;
            case 1:cout<<arr[i].title<<endl; break;
            case 2:cout<<arr[i].bopname<<endl; break;
          }
        }
        break;
      case 'q':
        cout<<"bye!\n";
        return 0;
        break;
      default:
        while(cin.get()!='\n');
        cout<<"Try one more: ";
        goto metka;
    }
  }
  return 0;
}
