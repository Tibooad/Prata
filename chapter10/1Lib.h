#ifndef LIB1_H
#define LIB1_H
#include <string>
class BankAccount
{
private:
    std::string full_name;
    std::string account_number;
    double balance;
public:
    BankAccount(const std::string &full_name=std::string("None"), const std::string &acc_number=std::string("None"),double balance=0.0);
    ~BankAccount();
    void show() const;
    void deposit(double cash);
    void withdrawal(double cash);

};



#endif