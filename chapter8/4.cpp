#include <iostream>
using namespace std;
#include <cstring>

struct stringy{
    char *str;
    int ct;
};
void set(stringy &s,const char *str){
    int count=strlen(str);
    count++;
    s.str=new char[count];
    memcpy(s.str,str,count);
    s.ct=count-1;
}
void show(const char *str,int count=1){
    if(count<0) return;
    for (int i = 0; i < count; i++)
    {
        cout<<str<<endl;
    }
    
}
void show(const stringy &s,int count=1){
    if(count<0) return;
    for (int i = 0; i < count; i++)
    {
        cout<<s.str<<endl;
    }
    
}
int main(int argc, char const *argv[])
{
    stringy beany;
    char testing[]="Reality isn't what it used to be.";
    set(beany,testing);



    show(beany);
    show(beany,2);
    testing[0]='D';
    testing[1]='u';
    show(testing);
    show(testing,3);
    show("Done!");

    return 0;
}
