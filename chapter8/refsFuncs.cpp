#include <iostream>
#include <string>
using namespace std;
struct st{
    int first;
    double second;
};
const st & copy(st &s){
    st *ret = new st;
    *ret=s;
    return *ret;
}
const string & func1(const string& str1, const string& str2, string& outStr){
    outStr=str1+str2;
    return outStr;
}
string & func2(const string& str1, const string& str2, string& outStr){
    outStr=str1+str2;
    return outStr;
}

const string & func3(const string& str1, string str2, string& outStr){
    outStr=str1+str2;
    return outStr;
}
int main(int argc, char const *argv[])
{
    using namespace std;
    cout<<"HI\n";
    st s={1,2.0};
    st newst=copy(s);
    s.second=23;
    cout<<"new.first: "<<newst.first<<" new.second: "<<newst.second<<endl;
    cout<<"s.first: "<<s.first<<" s.second: "<<s.second<<endl;
    st *ret = new st;


    string str1="Lalala";
    string str2="***";
    string res;
    cout<<endl;
    cout<<"str1:"<<str1<<endl;
    cout<<"str2:"<<str2<<endl;
    res=func1(str1,str2,res);
    //func1(str1,str2,res)="ERROR";//error
    func2(str1,str2,res)="ERROR";
    cout<<"res:"<<res<<endl;
    
    cout<<endl;
    char str_char[20]="Hi!";
    func3(str1,str_char,res);
    cout<<"res:"<<res<<endl;
    return 0;
}
