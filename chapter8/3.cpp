#include <iostream>
#include <cstring>
#include <string>

void func(std::string & str){
    for(int i=0;i<str.length();i++)
        str[i]=toupper(str[i]);
}

int main(int argc, char const *argv[])
{
    using namespace std;
    string str;
    while(true){
        cout<<"Enter a string (q to quit): ";
        getline(cin,str);
        if(str=='q'||str=='Q') break;
        func(str);
        cout<<str<<endl;
        //cin.getline(string);
    }
    cout<<"Bye!"<<endl;

    return 0;
}
