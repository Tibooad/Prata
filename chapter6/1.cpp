#include <iostream>
#include <cctype>

int main(int argc, char const *argv[]) {
  using namespace std;
  cout<<"Enter line:\n";
  char ch;
  while((ch=cin.get())!='@'){

    if(!isdigit(ch))
      if(isupper(ch))
        cout<<(char)tolower(ch);
      else
        cout<<(char)toupper(ch);
    else if(isspace(ch))
      cout<<ch;

  }
  return 0;
}
