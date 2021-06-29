#include <iostream>
void print(int i,int width){

}
/*void print(long i,int width){
    
}*/
/*void print(double i,int width){
    
}*/
// char* left(const char* str, int n=1);
char* left(const char* str, int n=1){
    if(n<0)
        n=0;
    char* p = new char[n+1];
    int i=0;
    for(i=0;i<n && str[i];i++){
        p[i]=str[i];//copy chars
    }
    while(i<=n)
        p[i++]='\0';
    return p;
}
int main(int argc, char const *argv[])
{
    using namespace std;
    cout<<left("the dog",3)<<endl;
    cout<<left("the dog")<<endl;

    print(12u,3);
    return 0;
}

