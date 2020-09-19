#include <iostream>

using std::cout;
using std::endl;

int main(int argc, const char* argv[]){
  cout<<"sizeof unsigned int 12 = "<<sizeof(12u)<<endl;
  cout<<"sizeof long 12 = "<<sizeof(12L)<<endl;
  cout<<"sizeof unsigned long 12 = "<<sizeof(12ul)<<endl;
  cout<<"sizeof long long 12 = "<<sizeof(12LL)<<endl;
  cout<<"sizeof unsigned long long 12 = "<<sizeof(12ULL)<<endl;
  cout<<"sizeof float 12 = "<<sizeof(12.0f)<<endl;
  cout<<"sizeof long double 12 = "<<sizeof(12.0L)<<endl;
  cout<<"sizeof double 12 = "<<sizeof(12.0)<<endl;
  //cout<<"sizeof wchar_t 12 = "<<sizeof(wchar_t)<<endl;
  return 0;

}
