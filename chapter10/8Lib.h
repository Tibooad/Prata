#ifndef LIB7_H
#define LIB7_H
typedef unsigned long Item;
class List
{
private:
    /* data */
public:
    List(/* args */);
    ~List();
    bool isfull()const;
    bool push(const Item &item);
    bool pop(Item &item);
};

List::List(/* args */)
{
}

List::~List()
{
}

#endif