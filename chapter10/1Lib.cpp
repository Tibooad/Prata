#include "1Lib.h"
#include <string>
#include <iostream>

BankAccount::BankAccount(const std::string &full_name, const std::string &acc_number,double balance)
{
    this->full_name=full_name;
    this->account_number=acc_number;
    this->balance=balance;
}

BankAccount::~BankAccount()
{
}

void BankAccount::show()const {
    std::cout<<"Full name: "<<full_name<<std::endl
            <<"Account number: "<<account_number<<std::endl
            <<"Balance: "<<balance<<std::endl;
}
void BankAccount::deposit(double cash){
    if(cash<0){
        std::cout<<"Unavailable amount for deposit\n";
        return;
    }
    balance+=cash;
}
void BankAccount::withdrawal(double cash){
    if(cash>balance){
        std::cout<<"Unavailable amount for withdrawal\n";
        return;
    }
    balance-=cash;
}