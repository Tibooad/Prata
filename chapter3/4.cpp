#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,const char* argv[]){
  const int HoursPerDay = 24;
  const int MinPerHour = 60;
  const int SecPerMin = 60;

  long long seconds=0;
  cout<<"Enter the number of seconds: ";
  cin>>seconds;
  cout<<seconds<<" seconds = "<<seconds/(SecPerMin*MinPerHour*HoursPerDay)
  <<" days "<<(seconds/(SecPerMin*MinPerHour))%HoursPerDay
  <<" hours "<<(seconds/SecPerMin)%MinPerHour
  <<" minutes "<<seconds%SecPerMin<<" seconds"<<endl;

  return 0;
}
