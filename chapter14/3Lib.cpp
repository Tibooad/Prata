#include "3Lib.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;




//Worker methods
Worker::Worker():fullName("no one"), id(0L){
}
Worker::Worker(const std::string &s, long n):fullName(s), id(n){
}

Worker::~Worker(){
}
//protected methods
void Worker::Data() const{
    cout<<"Name: "<<fullName<<endl;
    cout<<"Employee ID: "<<id<<endl;
}
void Worker::Get(){
    getline(cin,fullName);
    cout<<"Enter worker's ID: ";
    cin>>id;
    while (cin.get()!='\n')
    {
        continue;
    }
    
}

//Waiter methods
Waiter::Waiter():Worker(), panache(0){
}

Waiter::Waiter(const std::string &s, long n, int p): Worker(s,n), panache(p){
}

Waiter::Waiter(const Worker &wk, int p): Worker(wk), panache(p){
}

void Waiter::Set(){
    cout<<"Enter waiter's name: ";
    Worker::Get();
    Get();
}
void Waiter::Show() const {
    cout<<"Category: waiter\n";
    Worker::Data();
    Data();
}
//protected methods
void Waiter::Data() const{
    cout<<"Panache rating: "<<panache<<endl;
}
void Waiter::Get(){
    cout<<"Enter waiter's panache rating: ";
    cin>>panache;
    while(cin.get()!='\n')
        continue;
}

//Singer methods
Singer::Singer():Worker(), voice(other){}
Singer::Singer(const std::string &s, long n, int v):Worker(s,n), voice(v){}
Singer::Singer(const Worker &wk, int v):Worker(wk), voice(v){}

char* Singer::pv[Singer::Vtypes]={"Other", "alto","contralto","soprano","bass","baritone","tenor"};
void Singer::Set(){
    cout<<"Enter singer's name: ";
    Worker::Get();
    Get();
}
void Singer::Show()const{
    cout<<"Category: singer\n";
    Worker::Data();
    Data();
}
//protected methods
void Singer::Data() const{
    cout<<"Vocal range: "<<pv[voice]<<endl;
}
void Singer::Get(){
    cout<<"Enter number for singer's vocal range:\n";
    int i;
    for(i=0;i<Vtypes;i++){
        cout<<i<<": "<<pv[i]<<" ";
        if(i%4==3)
            cout<<endl;
    }
    if(i%4!=0)
        cout<<endl;
    cin>>voice;
    while(cin.get() !='\n')
        continue;
}


//SingingWaiter methods
SingingWaiter::SingingWaiter(){
}

SingingWaiter::SingingWaiter(const std::string &s, long n, int p, int v):Worker(s,n), Waiter(s,n,p), Singer(s,n,v){
}

SingingWaiter::SingingWaiter(const Worker &wk, int p, int v):Worker(wk), Waiter(wk,p),Singer(wk,v){
}

SingingWaiter::SingingWaiter(const Waiter &wt, int v):Worker(wt), Waiter(wt), Singer(wt,v){
}

SingingWaiter::SingingWaiter(const Singer &wt, int p): Worker(wt),Waiter(wt,p),Singer(wt){
}

void SingingWaiter::Data() const{
    Singer::Data();
    Waiter::Data();
}
void SingingWaiter::Get(){
    Waiter::Get();
    Singer::Get();
}
void SingingWaiter::Set(){
    cout<<"Enter singing waiter's name: ";
    Worker::Get();
    Get();
}
void SingingWaiter::Show()const{
    cout<<"Category: singing waiter\n";
    Worker::Data();
    Data();
}