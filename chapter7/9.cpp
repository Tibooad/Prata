#include <iostream>
#include <cstring>
using namespace std;

const int SLEN = 30;
struct student{
  char fullname[SLEN];
  char hobby[SLEN];
  int ooplevel;
};
int getinfo(student pa[], int n){
  using namespace std;
  int count=0;
  for(count=0;count<n;count++){
    cout<<"Enter full name: ";
    cin>>pa[count].fullname;
    if(strlen(pa[count].fullname)==0)
      break;
    cout<<"Enter hobby: ";
    cin>>pa[count].hobby;
    cout<<"Enter ooplevel: ";
    cin>>pa[count].ooplevel;
  }
  return count;
}

void display1(student st){
  cout<<"Student:\n";
  cout<<"full name: "<<st.fullname<<endl
      <<"hobby: "<<st.hobby<<endl
      <<"ooplevel: "<<st.ooplevel<<endl;
}

void display2(const student* ps){
  cout<<"Student:\n";
  cout<<"full name: "<<ps->fullname<<endl
      <<"hobby: "<<ps->hobby<<endl
      <<"ooplevel: "<<ps->ooplevel<<endl;
}

void display3(const student pa[], int n){
  for(int i=0;i<n;i++){
    cout<<"Student #"<<i+1<<endl;
    cout<<"full name: "<<pa[i].fullname<<endl
        <<"hobby: "<<pa[i].hobby<<endl
        <<"ooplevel: "<<pa[i].ooplevel<<endl;
  }
}

int main(int argc, char const *argv[]) {
  cout<<"Enter class size: ";
  int class_size;
  cin>>class_size;
  while(cin.get()!='\n');
  student* ptr_stu = new student[class_size];
  int entered=getinfo(ptr_stu, class_size);
  for(int i=0; i<entered;i++){
    display1(ptr_stu[i]);
    display2(&ptr_stu[i]);
  }
  display3(ptr_stu, entered);
  delete [] ptr_stu;
  cout<<"done\n";

  return 0;
}
