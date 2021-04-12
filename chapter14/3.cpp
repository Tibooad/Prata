#include <iostream>
#include <cstring>
#include "3Lib.h"



const int SIZE =5;
int main(int argc, char const *argv[])
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;
    QueueTp<Worker *> queue(10);
    Worker *lolas[SIZE];
    int ct;
    for(ct=0;ct<SIZE;ct++){
        char choice;
        cout<<"Enter the employee category:\n"
            <<"w: waiter s: singer "
            <<"t: singing waiter q: quit\n";
        cin>>choice;
        while(strchr("wstq",choice)==NULL){
            cout<<"Please enter a w, s, t, or q:";
            cin>>choice;
        }
        if(choice=='q') break;
        switch (choice)
        {
        case 'w':
            lolas[ct]=new Waiter;
            
            break;
        case 's':
            lolas[ct]=new Singer;
            
            break;
        case 't':
            lolas[ct]=new SingingWaiter;
            
            break;
        default:
            break;
        }
        cin.get();
        lolas[ct]->Set();
        queue.Push(lolas[ct]);
    }
    cout<<"\nHere is your staff:\n";
    queue.Show();
    int i;
    for ( i = 0; i < ct; i++)
    {
        cout<<endl;
        //lolas[i]->Show();
        queue.Pop()->Show();
    }
    for(i=0;i<ct;i++){
        delete lolas[i];
    }
    cout<<"Bye!";
    return 0;
}
