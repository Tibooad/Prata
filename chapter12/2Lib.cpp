#include "2Lib.h"
#include <iostream>
#include <cstring>

Cd::Cd(char *s1, char *s2, int n, double x){
    int count=std::strlen(s1);
    ++count;
    this->performers=new char[count];
    std::strcpy(performers,s1);

    count=std::strlen(s2);
    ++count;
    this->label=new char[count];
    std::strcpy(label,s2);
    selections=n;
    playtime=x;
}

Cd::Cd(const Cd &d){
    int count=std::strlen(d.performers);
    ++count;
    this->performers=new char[count];
    std::strcpy(performers,d.performers);

    count=strlen(d.label);
    ++count;
    this->label=new char[count];
    std::strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;
}

Cd::Cd(){
    int count=std::strlen("none");
    ++count;
    this->performers=new char[count];
    std::strcpy(performers,"none");
    this->label=new char[count];
    std::strcpy(label,"none");
    selections=0;
    playtime=0;
}

Cd::~Cd(){

}

void Cd::Report() const {
    using std::cout;
    using std::endl;
    cout<<"Performers: "<<performers<<endl;
    cout<<"Label: "<< label<<endl;
    cout<<"Selections: "<<selections<<endl;
    cout<<"Playtime: "<<playtime<<endl;
}

Cd & Cd::operator=(const Cd &c){
    if(this==&c) return *this;
    delete[] performers;
    delete[] label;

    int count=std::strlen(c.performers);
    ++count;
    performers=new char[count];
    std::strcpy(performers,c.performers);

    count=std::strlen(c.label);
    ++count;
    label=new char[count];
    std::strcpy(label,c.label);

    selections=c.selections;
    playtime=c.playtime;
    return *this;
}
//###################################################################################

Classic::Classic(char *s1, char *s2, char *s3, int n, double x):Cd(s1,s2,n,x){
    int count=std::strlen(s3);
    ++count;
    mainSong=new char[count];
    std::strcpy(mainSong,s3);
}

Classic::Classic(const Classic &c):Cd(c){
    int count=std::strlen(c.mainSong);
    ++count;
    mainSong=new char[count];
    std::strcpy(mainSong,c.mainSong);
}

Classic::Classic():Cd(){
    int count=std::strlen("none");
    ++count;
    this->mainSong=new char[count];
    std::strcpy(mainSong,"none");
}

Classic::~Classic(){
    delete[] mainSong;
}

void Classic::Report() const {
    using std::cout;
    using std::endl;
    Cd::Report();
    cout<<"Main song: "<<mainSong<<endl;
}

Classic & Classic::operator=(const Classic &c){
    if(this==&c) return *this;
    Cd::operator=(c);

    delete[] mainSong;
    int count=std::strlen(c.mainSong);
    ++count;
    mainSong=new char[count];
    std::strcpy(mainSong,c.mainSong);
    return *this;
}