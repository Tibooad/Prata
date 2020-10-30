#include <iostream>
int count = 0;
void print(const char *str, int t2=0){
    using namespace std;
    
    if(t2!=0)
        for(int i=0;i<count;i++){
            cout<<str<<endl;
        }
    else cout<<str<<endl;
    count++;
}
int main(int argc, char const *argv[])
{
    using namespace std;
    print("Hi");
    print("Hi");
    print("Hi");
    print("Hi");
    print("Fuck",1);
    return 0;
}
