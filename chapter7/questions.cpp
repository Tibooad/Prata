#include <iostream>
//#1 3 steps for create function:
//1 define
//2 prototype
//3 use
//-------------------------------------------
//#2
void igor();
float tofu(int);
double mpg(double,double);
long summation(long *,int);
double doctor(const char *);

struct boss{

};
void ofrourse(boss);

struct map{

};
char * plot(map *);
//-----------------------------------------
//#3
//write function that takes three arguments: int array name, size, int value
//The function should assign this int value to each element of the array
void fun3(int arr[],int size, int value){
  while(size--){
    arr[size]=value;
  }
}
int main3(int argc, char const *argv[]) {
  int arr[4]={1,2,3,4};
  fun3(arr,4,22);
  for(int i=0;i<4;i++){
    std::cout<<arr[i]<<"\t";
  }
  return 0;
}

//-----------------------------------------

//#4
//Write a function thet takes three arguments: pointer to the first element array
//pointer to end element array and int value
//the function should assign int value to each element of the array
void fun4(int* start,int* end,int value){
  //std::cout<<"&start: "<<&start<<std::endl;
  for(;start!=end;start++){
    *start=value;
  }
}
int main(int argc, char const *argv[]) {
  int arr[4]={1,2,3,4};
  //std::cout<<"arr: "<<arr<<std::endl;
  fun4(arr,arr+4,22);
  for(int i=0;i<4;i++){
    std::cout<<arr[i]<<"\t";
  }

  return 0;
}
//-----------------------------------------
//#5
double fun5(const double arr[],int size){
  double max=arr[size-1];
  while(size--)
    if(max<arr[size])
      max=arr[size];
  return max;
}

int main5(int argc, char const *argv[]) {
  double arr[4]={-3.0,2.25,-2,4.5};
  std::cout<<"array: \n";
  for(int i=0;i<4;i++){
    std::cout<<arr[i]<<"\t";
  }

  std::cout<<"\nmax value: "<<fun5(arr,4);

  return 0;
}
//-----------------------------------------
//#6
//Потому что базовые типы будут передаваться по значению всё равно
//и изменить само значение так нельзя
//-----------------------------------------

//#7
//Какие три формы строк в стиле с могут встретиться в программах с++
//массив чаров
//строковая константа
//указатель на первфй символ в строке
//-----------------------------------------

//#8
int replace(char* str,char c1,char c2){
  int count=0;
  for(;*str!='\0';str++){
    if(*str==c1){
      *str=c2;
      count++;
    }
  }
  return count;
}

int main8(int argc, char const *argv[]) {
  char str[]="abcdeabcdea";
  std::cout<<"str: "<<str<<std::endl;
  std::cout<<"count: "<<replace(str,'a','2')<<std::endl
  <<"str: "<<str<<std::endl;

  return 0;
}
//-----------------------------------------

//#9
// *"pizza" значит разыменовывание массива т.о. это первый елемент
// "taco"[2] значит 2 эл массива т.о. это 'c'
//-----------------------------------------

//#10
//по значению: просто передать в функцию и формальный аргумент это структура
//по значению поля структуры будут копироваться и мы получим полную копию(ориг не поменять)
//через указатель: передать в ф-ю указатель а формальный параметр должен быть
//указателем. Будет создана копия указателя и через него можно будет менять саму структуру
//-----------------------------------------

//#11
int fun11(const char ch){
  std::cout<<"fun11 recive char: "<<ch<<std::endl;
  return 1;
}
int judge(int (*pf)(const char)){
  std::cout<<pf('5')<<std::endl;

  return 2;
}
int main11(int argc, char const *argv[]) {
  std::cout<<judge(fun11);
  return 0;
}
//-----------------------------------------

//#12
struct applicant{
  char name[30];
  int credit_ratings[3];
};
int fun12a(const applicant app){
  // std::cout<<"sizeof(credit_ratings): "<<sizeof(app.credit_ratings)<<std::endl;
  // std::cout<<"adress of credit_ratings: "<<app.credit_ratings<<std::endl;
  std::cout<<"name: "<<app.name<<std::endl
  <<"credit_ratings: "<<app.credit_ratings[0]<<'\t'
  <<app.credit_ratings[1]<<'\t'
  <<app.credit_ratings[2]<<'\t'<<std::endl;
  return 1;
}
int fun12b(const applicant *app){
  // std::cout<<"sizeof(credit_ratings): "<<sizeof(app->credit_ratings)<<std::endl;
  // std::cout<<"adress of credit_ratings: "<<app->credit_ratings<<std::endl;
  std::cout<<"name: "<<app->name<<std::endl
  <<"credit_ratings: "<<app->credit_ratings[0]<<'\t'
  <<app->credit_ratings[1]<<'\t'
  <<app->credit_ratings[2]<<'\t'<<std::endl;
  return 1;
}
int main12(int argc, char const *argv[]) {
  applicant a={"vasya",{3,2,1}};
  // std::cout<<"adress of credit_ratings: "<<a.credit_ratings<<std::endl;
  fun12a(a);
  fun12b(&a);
  return 0;
}
//-----------------------------------------

//#13
// struct applicant{
//   char name[30];
//   int credit_ratings[3];
// };
void f1(applicant *app){

}
const char* f2(const applicant *a1, const applicant *a2){
  const char* z=new char('r');
  return z;
}
typedef void (*p_f1)(applicant *);
typedef const char* (*p_f2)(const applicant*,const applicant*);

int main13(int argc, char const *argv[]) {
  applicant a={"vasya",{3,2,1}};
  void (*p1a)(applicant *)=f1;
  p_f1 p1b=f1;

  const char* (*p2a)(const applicant*,const applicant*)=f2;
  p_f2 p2b=f2;

  void (*ap_a[5])(applicant*);
  p_f1 ap_b[5];

  const char* (*(*pa_a)[10])(const applicant*, const applicant*);
  p_f2 (*pa_b)[10];
  return 0;
}
//-----------------------------------------
//test----------------------------------------------------
int mainTEST(int argc, char const *argv[]) {
  int arr[]{1,2,3,4,5};
  std::cout<<"sizeof arr: "<<sizeof(arr)<<std::endl;
  int (*parr)[5]=&arr;
  std::cout<<"sizeof parr: "<<sizeof(parr)<<std::endl;
  std::cout<<"sizeof *parr: "<<sizeof(*parr)<<std::endl;
  return 0;
}
//test----------------------------------------------------
