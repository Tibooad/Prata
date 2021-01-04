#ifndef LIB5_H
#define LIB5_H
struct customer{
    char fullname[35];
    double payment;
};
//typedef unsigned long Item;
typedef customer Item;
class Stack{
private:
    enum{Max=10};
    Item items[Max];
    int top;
public:
    Stack();
    bool isempty()const;
    bool isfull()const;
    bool push(const Item &item);
    bool pop(Item &item);
};

#endif