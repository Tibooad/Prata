#include <iostream>
#include "1Lib.h"
int main(int argc, char const *argv[]){
    BankAccount vasya("Vasya","1111111",25.5);
    BankAccount petya;
    petya.show();
    vasya.show();
    vasya.deposit(20.0);
    vasya.show();
    vasya.withdrawal(100);
    vasya.withdrawal(20);
    vasya.show();
    return 0;
}
