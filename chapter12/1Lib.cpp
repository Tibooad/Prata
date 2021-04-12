#include "1Lib.h"
#include <iostream>
#include <string.h>

Cd::Cd(char *s1, char *s2, int n, double x){
    strcpy(performers,s1);
    strcpy(label,s2);
    selections=n;
    playtime=x;

}

Cd::Cd(const Cd &d){
    strcpy(performers,d.performers);
    strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;
}

Cd::Cd(){
    strcpy(performers,"none");
    strcpy(label,"none");
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
//###################################################################################

Classic::Classic(char *s1, char *s2, char *s3, int n, double x):Cd(s1,s2,n,x){
    strcpy(mainSong,s3);
}

Classic::Classic(const Classic &c):Cd(c){
    strcpy(mainSong,c.mainSong);
}

Classic::Classic():Cd(){
    strcpy(mainSong,"none");
}

Classic::~Classic()
{
}

void Classic::Report(){
    using std::cout;
    using std::endl;
    Cd::Report();
    cout<<"Main song: "<<mainSong<<endl;
}