#include <iostream>
#include <cstring>
#include "5Lib.h"

int main(int argc, char const *argv[])
{
    using namespace std;
    int amount=0;
    Stack stack;
    customer cust;
    int menu=0;
    while(true){
        cout<<"1. Add consumer\n";
        cout<<"2. Delete consumer\n";
        cout<<"3. View report\n";
        cout<<"0. Quiet\n";
        cin>>menu;
        cin.get();
        switch (menu)
        {
        case 1:
            cout<<"Enter a full name: ";
            cin.getline(cust.fullname,35);
            cout<<"Enter a payment: ";
            cin>>cust.payment;
            cin.get();
            stack.push(cust);
            break;
        case 2:

            stack.pop(cust);
            amount+=cust.payment;
            break;
        case 3:
            cout<<"Amount: "<<amount<<endl;
            break;
        case 0:
            cout<<"Bye\n";
            return 0;
            break;
        default:
            cout<<"Not find menu point, repit\n";
            break;
        }
        
        
    }
    
    return 0;
}
