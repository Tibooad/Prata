#include <iostream>
using namespace std;
struct blot{int a;char b[10];};
template<class T>
void recycle(T b){
    cout<<"1\n";
}
template<class T>
void recycle(T *b){
    cout<<"2\n";
}
// void recycle(blot *b){
//     cout<<"1\n";
// }
// void recycle(const blot *b){
//     cout<<"2\n";
// }
// void recycle(blot & b){
//     cout<<"3\n";
// }
// void recycle(const blot &b){
//     cout<<"4\n";
// }

template <typename T>
void Swap(T &a,T &b){
    T tmp=a;
    a=b;
    b=tmp;
}
struct job{
    char name[20];
    double salary;
    int floor; 
};
// template <>
// void Swap<job>(job &a,job &b){
//     job tmp=a;
//     a=b;
//     b=tmp;
// }
template <>
void Swap(job &a,job &b){
    double tmpd=a.salary;
    int tmpi=a.floor;
    a.salary=b.salary;
    b.salary=tmpd;
    a.floor=b.floor;
    b.floor=tmpi;
}
int main(int argc, char const *argv[])
{
    using namespace std;
    double a=4.0,b=3.5;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    Swap(a,b);
    cout<<"a: "<<a<<" b: "<<b<<endl;

    job aj={"vasya",3,5},bj={"petya",8,10};
    cout<<"aj.name: "<<aj.name<<" aj.salary: "<<aj.salary<<" aj.floor: "<<aj.floor<<endl;
    cout<<"bj.name: "<<bj.name<<" bj.salary: "<<bj.salary<<" bj.floor: "<<bj.floor<<endl;
    Swap(aj,bj);
    cout<<"aj.name: "<<aj.name<<" aj.salary: "<<aj.salary<<" aj.floor: "<<aj.floor<<endl;
    cout<<"bj.name: "<<bj.name<<" bj.salary: "<<bj.salary<<" bj.floor: "<<bj.floor<<endl;
    cout<<endl;
    blot ink={25,"spot"};
    const blot cink={12,"lalala"};
    recycle(&ink);
    recycle(ink);
    recycle(&cink);
    cout<<"-----------------------------\n";
    cout<<(20<-30)<<endl;
    cout<<(-3<-2)<<endl;
    cout<<(-2<-4)<<endl;
    return 0;
}
