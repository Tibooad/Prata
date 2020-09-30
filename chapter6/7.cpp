#include <iostream>
#include <cctype>

int main(int argc, char const *argv[]) {
  using namespace std;
  string str;
  int countVowes=0,countConsonants=0,other=0;
  cout<<"Enter words (q to quit):\n";
  while(cin>>str && str!="q"){
    if(isalpha(str[0])){
      switch (str[0]) {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        case 'Y':
        case 'y':
          countVowes++;
          break;
        default:
          countConsonants++;
      }
    } else other++;
  }
  cout<<countVowes<<" words beginning with vowes\n"
  <<countConsonants<<" words beginning with consonants\n"
  <<other<<" others\n";
  return 0;
}
