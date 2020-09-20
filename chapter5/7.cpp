#include <iostream>
#include <string>
#include <cstring>


using std::string;
using std::cin;
using std::cout;
using std::endl;

struct car{
  string name;
  int year;
};

int main(int argc, const char* argv[]){
  car *arrCars=NULL;
  int countCars=0;
  cout<<"Input count cars in catalog: ";
  (cin>>countCars).get();
  arrCars=new car[countCars];

  for(int i=0;i<countCars;i++){
    cout<<"Car #"<<(i+1)<<endl;
    cout<<"Input manufacturer: ";
    getline(cin,arrCars[i].name);
    cout<<"Input year:";
    (cin>>arrCars[i].year).get();
  }

  cout<<"Yours collection:\n";
  for(int i=0;i<countCars;i++){
    cout<<arrCars[i].year<<" | "<<arrCars[i].name<<endl;
  }
  delete [] arrCars;
  return 0;
}
