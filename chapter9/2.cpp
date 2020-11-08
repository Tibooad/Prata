#include <iostream>
#include <string>


const int ArSize = 10;

void strcount(std::string &str);

int main(int argc, char const *argv[])
{
    using namespace std;
    string input;
    char next;
    cout<<"Enter a line: \n";
    getline(cin,input);
    while(input.length()!=0){
        //cin.get(next);
        strcount(input);
        cout<<"Enter next line(empty line to quit):\n";
        getline(cin,input);
    }
    cout<<"Bye!";
    return 0;
}
void strcount(std::string &str){
    using namespace std;
    static int total=0;
    int count =0;
    cout<<"\""<<str<<"\" contains: ";
    total+=str.length();
    cout<<str.length()<<" characters\n";
    cout<<total<<" characters total\n";
}