#include <iostream>
#include <cstring>

struct CandyBar{
    char name[20];
    double weight;
    int callories;
};
void func(CandyBar &candyBar,const char name[]="MillenniumBuch", double weight=2.85, int callories=350){
    strcpy(candyBar.name,name);
    candyBar.weight=weight;
    candyBar.callories=callories;
}
void print(const CandyBar &candyBar){
    using namespace std;
    cout<<"name: "<<candyBar.name<<endl;
    cout<<"weight: "<<candyBar.weight<<endl;
    cout<<"callories: "<<candyBar.callories<<endl;
}
int main(int argc, char const *argv[])
{
    using namespace std;
    CandyBar cb={"Lalal",12.4,234};
    print(cb);
    func(cb);
    print(cb);
    return 0;
}
