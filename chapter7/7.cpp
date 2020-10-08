#include <iostream>
const int max_count=5;
double* fill_array(double *start,double *end);
void show_array(const double *start, const double *end);
void revalue(double r, double* start,double* end);

int main(int argc, char const *argv[]) {
  using namespace std;
  double properties[max_count];
  double* end=fill_array(properties,properties+max_count);
  show_array(properties,end);
  if((end-properties)>0){
    cout<<"Enter revaluation factor: ";
    double factor;
    while(!(cin>>factor)){
      cin.clear();
      while(cin.get()!='\n');
      cout<<"Bad input; Please enter a number: ";
    }
    revalue(factor, properties, end);
    show_array(properties, end);
  }
  cout<<"Done";
  return 0;
}

double* fill_array(double* start, double* end){
  using namespace std;
  double temp=0;
  int i=0;
  for(i=0;start!=end;start++,i++){
    cout<<"Enter value #"<<i+1<<": ";
    cin>>temp;
    if(!cin){
      cin.clear();
      while(cin.get()!='\n');
      cout<<"Bad input; input process terminated.\n";
      break;
    }else if(temp<0) break;
    *start=temp;

  }
  return start;
}
void show_array(const double* start, const double* end){
  using namespace std;
  for(int i=1;start!=end;start++,i++){
    cout<<"Property #"<<i<<": "<<*start<<endl;
  }
}
void revalue(double r, double* start, double *end){
  for(;start!=end;start++)
    *start*=r;
}
