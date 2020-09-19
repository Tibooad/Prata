#include <iostream>
#include <climits>

using std::cout;
using std::endl;

int main(int argc, const char* argv[]){
  int n_int = INT_MAX;
  short n_short = SHRT_MAX+1;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;
  cout<<"int is "<<sizeof(int)<<endl;
  cout<<"1 short is "<<sizeof(short)<<endl;
  cout<<"2 short is "<<sizeof(n_short)<<endl;
  cout<<"long is "<<sizeof(long)<<endl;
  cout<<"long long is "<<sizeof(long long)<<endl;
  cout<<endl;

  cout<<"Max values: "<<endl;
  cout<<"int: "<<n_int<<endl;
  cout<<"short: "<<n_short<<endl;
  cout<<"long: "<<n_long<<endl;
  cout<<"long long: "<<n_llong<<endl;

  cout<<"Minimum int value = "<<INT_MIN<<endl;
  cout<<"Bits per byte = "<< CHAR_BIT<<endl;
  return 0;
}
