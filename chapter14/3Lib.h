#ifndef LIB3_H_
#define LIB3_H_
#include <string>
#include <iostream>
template<typename T>
class QueueTp
{
private:
    int size;//real size queue
    int length;//fact size(count of data)
    T *top;
    T *arr;
public:
    QueueTp(int n=10);
    QueueTp(int n,const T arr[]);
    void Push(const T &item);
    T Pop();
    int Length();
    bool IsEmpty();
    void Show();
    ~QueueTp();
};
template<typename T>
QueueTp<T>::QueueTp(int n)
{
    arr=new T[n];
    size=n;
    length=0;
}
template<typename T>
QueueTp<T>::QueueTp(int n,const T ar[]){
    arr=new T[n];
    for(int i=0;i<n;i++){
        arr[i]=ar[i];
    }
    top=arr;
    size=n;
    length=0;
}
template<typename T>
void QueueTp<T>::Push(const T &item){
    if(length+1<=size){
        arr[length]=item;
        top=&arr[length];
        length++;
    } 
}
template<typename T>
T QueueTp<T>::Pop(){
    top=arr[--length];
    return arr[length+1];
}
template<typename T>
int QueueTp<T>::Length(){
    return length;
}
template<typename T>
bool QueueTp<T>::IsEmpty(){
    return length;
}
template<typename T>
void QueueTp<T>::Show(){
    for(int i=0;i<length;i++){
        std::cout<<i<<" : "<<arr[i]<<std::endl;
    }
    std::cout<<std::endl;
}
template<typename T>
QueueTp<T>::~QueueTp()
{
    delete[] arr;
}



//specialization for T*
template<typename T>
class QueueTp<T*>
{
private:
    int size;//real size queue
    int length;//fact size(count of data)
    T *top;
    T **arr;
public:
    QueueTp(int n=10);
    QueueTp(int n, const T *ar[]);
    void Push(T *item);
    T *Pop();
    int Length();
    bool IsEmpty();
    void Show();
    ~QueueTp();
};

//specialization for T*
template<typename T>
QueueTp<T*>::QueueTp(int n){
    arr=new T*[n];
    top=arr[0];
    size=n;
    length=0;
}
template<typename T>
QueueTp<T*>::QueueTp(int n, const T *ar[]){
    arr=new T*[n];
    for(int i=0;i<n;i++){
        arr[i]=ar[i];
    }
    top=*arr;
    size=n;
    length=n;
}
template<typename T>
void QueueTp<T*>::Push(T *item){
    if(length+1<=size){
        arr[length]=item;
        top=arr[length];
        length++;
    }
}
template<typename T>
T* QueueTp<T*>::Pop(){
    T* result=top;
    top=top+1;
    length--;
    return result;
}
template<typename T>
int QueueTp<T*>::Length(){
    return length;
}
template<typename T>
bool QueueTp<T*>::IsEmpty(){
    return length;
}
template<typename T>
void QueueTp<T*>::Show(){
    for(int i=0;i<length;i++){
        std::cout<<i<<" : ";arr[i]->Show();
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}
template<typename T>
QueueTp<T*>::~QueueTp()
{
    delete[] arr;
}






class Worker
{
private:
    std::string fullName;
    long id;
protected:
    virtual void Data() const;
    virtual void Get();
public:
    Worker();
    Worker(const std::string &s, long n);
    virtual ~Worker()=0;
    virtual void Set() =0;
    virtual void Show() const = 0;
};



class Waiter: virtual public Worker
{
private:
    int panache;
protected:
    void Data() const override;
    void Get();
public:
    Waiter();
    Waiter(const std::string &s, long n, int p=0);
    Waiter(const Worker &wk, int p=0);
    void Set();
    void Show() const;
};




class Singer: virtual public Worker
{
protected:
    enum{other, alto, contralto, soprano, bass, baritone, tenor};
    enum{Vtypes = 7};

    void Data() const;
    void Get();
private:
    static char *pv[Vtypes];
    int voice;
public:
    Singer();
    Singer(const std::string &s, long n, int v=other);
    Singer(const Worker &wk, int v=other);
    void Set();
    void Show() const;
};



class SingingWaiter: public Singer, public Waiter
{
protected:
    void Data() const;
    void Get();
public:
    SingingWaiter();
    SingingWaiter(const std::string &s, long n, int p=0, int v=other);
    SingingWaiter(const Worker &wk, int p=0, int v=other);
    SingingWaiter(const Waiter &wt, int v=other);
    SingingWaiter(const Singer &wt, int p=0);
    
    void Set();
    void Show() const;
};




#endif