#include "Lib1.h"
#include <iostream>
#include <cstring>


void setgolf(golf &g,const char *name,int hc){
    strcpy(g.fullname,name);
    g.handicap=hc;
}
int setgolf(golf &g){
    using std::cin;
    using std::cout;
    cout<<"Enter name: ";
    cin.getline(g.fullname,Len);
    if(strlen(g.fullname)==0) return 0;
    cout<<"Enter handicap: ";
    cin>>g.handicap;
    cin.get();
    return 1;
}
void handicap(golf &g, int hc){
    g.handicap=hc;
}
void showgolf(const golf &g){
    using std::cout;
    using std::endl;
    cout<<"Name: "<<g.fullname<<endl
        <<"Handicap: "<<g.handicap<<endl;
}