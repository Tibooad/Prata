#include <iostream>
#include <cstring>
#include "4Lib.h"



const int SIZE =5;
int main(int argc, char const *argv[])
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;
    //QueueTp<Worker *> queue(10);
    Person *lolas[SIZE];
    int ct;
    for(ct=0;ct<SIZE;ct++){
        char choice;
        cout<<"Enter the employee category:\n"
            <<"g: Gunslinger p: PokerPlayer "
            <<"b: BadDude q: quit\n";
        cin>>choice;
        while(strchr("gpbq",choice)==NULL){
            cout<<"Please enter a g, p, b, or q:";
            cin>>choice;
        }
        //while (cin.get()!='\n')
        //    continue;
        
        
        if(choice=='q') break;
        switch (choice)
        {
        case 'g':
            lolas[ct]=new Gunslinger;
            
            break;
        case 'p':
            lolas[ct]=new PokerPlayer;
            
            break;
        case 'b':
            lolas[ct]=new BadDude;
            
            break;
        default:
            break;
        }
        cin.get();
        lolas[ct]->Set();
        //queue.Push(lolas[ct]);
    }
    cout<<"\nHere is your staff:\n";
    //queue.Show();
    int i;
    for ( i = 0; i < ct; i++)
    {
        cout<<endl;
        lolas[i]->Show();
        //queue.Pop()->Show();
    }
    for(i=0;i<ct;i++){
        delete lolas[i];
    }
    cout<<"Bye!";
    return 0;
}
