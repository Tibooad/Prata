#include <iostream>
#include <string>
#include <ctime>
#include "4Lib.h"

// card methods
std::string Card::StrSuits[CountSuits]={"Diamonds", "Clubs","Hearts","Spades"};
std::string Card::StrFaces[CountFaces]={"2","3","4","5","6","7","8","9","10","J","Q","K","A"};

Card::Card(int suit, int face)
{
    s=static_cast<Suit>(suit);
    f=static_cast<Face>(face);
}
std::string Card::Show(){
    return "Card: "+StrSuits[s]+"\t|\t"+StrFaces[f]+";";
}
Card::~Card()
{
}

//person methods
Person::Person(const std::string &n, const std::string &s):name(n), surname(s){
}

void Person::Show() const{
    std::cout<<"Class person:\n";
    Data();
}

void Person::Data() const{
    std::cout<<"Name: "<<name<<std::endl;
    std::cout<<"Surname: "<<surname<<std::endl;
}

void Person::Set(){
    SetFields();
}
void Person::SetFields(){
    getline(std::cin,name);
    std::cout<<"Enter surname: ";
    getline(std::cin,surname);

}

const std::string &Person::GetName() const{
    return name;
}
const std::string &Person::GetSurname() const{
    return surname;
}
void Person::SetName(std::string &str){
    name=str;
}
void Person::SetSurname(std::string &str){
    surname=str;
}

Person::~Person()
{
}



// gunslinger methods

Gunslinger::Gunslinger(double time, int count):Person(),readyTime(time),countNotches(count){
}
Gunslinger::Gunslinger(const Person &p, double time, int count):Person(p),readyTime(time),countNotches(count){
}
Gunslinger::Gunslinger(const std::string &n, const std::string &s,double time, int count):Person(n,s),readyTime(time),countNotches(count){
}

void Gunslinger::Show() const{
    std::cout<<"Class gunslinger:\n";
    Person::Data();
    Data();
}
void Gunslinger::Data() const{
    std::cout<<"Ready time: "<<readyTime<<std::endl;
    std::cout<<"Count notches: "<<countNotches<<std::endl;
}
void Gunslinger::Set(){
    std::cout<<"Enter gunslinger name: ";
    Person::SetFields();
    SetFields();
}
void Gunslinger::SetFields(){
    std::cout<<"Enter ready time: ";
    std::cin>>readyTime;
    std::cout<<"Enter gunslinger count nothces: ";
    std::cin>>countNotches;
}
void Gunslinger::SetReadyTime(double time){
    readyTime=time;
}
void Gunslinger::SetCountNotches(int count){
    countNotches=count;
}
double Gunslinger::Draw() const{
    return readyTime;
}
int Gunslinger::GetCountNotches() const{
    return countNotches;
}

Gunslinger::~Gunslinger()
{
}


//poker player methods
PokerPlayer::PokerPlayer(const std::string &n, const std::string &s):Person(n,s){
    srand(time(NULL));
}

PokerPlayer::PokerPlayer(const Person &p):Person(p){
    srand(time(NULL));
}

Card PokerPlayer::Draw() const{
    //generate random card
    int s,f;
    s=rand() % (int)Card::CountSuits;
    f=rand() % (int)Card::CountFaces;
    Card c(s,f);
    return c;
}
void PokerPlayer::Show() const{
    std::cout<<"Class poker player:\n";
    Person::Data();
    Data();
}
void PokerPlayer::Data() const{
    std::cout<<Draw().Show()<<std::endl;
}
void PokerPlayer::Set(){
    std::cout<<"Enter poker player name: ";
    Person::SetFields();
    SetFields();
}
void PokerPlayer::SetFields(){

}
PokerPlayer::~PokerPlayer()
{
}



//bad dude methods
BadDude::BadDude(const std::string &n, const std::string &s,double time, int count):Person(n,s),PokerPlayer(),Gunslinger(time,count){
}

BadDude::BadDude(const Person &p, double time, int count):Person(p),PokerPlayer(p),Gunslinger(time,count){
}
BadDude::BadDude(const Gunslinger &g):Person(), PokerPlayer(),Gunslinger(g){
}
BadDude::BadDude(const PokerPlayer &pp,const Gunslinger &g):Person(),PokerPlayer(pp),Gunslinger(g){
}
BadDude::BadDude(const PokerPlayer &pp,double time, int count): Person(pp),PokerPlayer(pp),Gunslinger(time, count){
}

double BadDude::Gdraw(){
    return Gunslinger::Draw();
}
Card BadDude::Cdraw(){
    return PokerPlayer::Draw();
}
void BadDude::Show() const{
    std::cout<<"Class BadDude:\n";
    Person::Data();
    Data();
}
void BadDude::Data() const{
    Gunslinger::Data();
    PokerPlayer::Data();
}
 void BadDude::Set(){
     std::cout<<"Enter bad dude name: ";
     Person::SetFields();
     Gunslinger::SetFields();
     PokerPlayer::SetFields();
     SetFields();
 }
void BadDude::SetFields(){
}
BadDude::~BadDude()
{
}