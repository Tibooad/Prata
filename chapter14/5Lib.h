#ifndef LIB5_H_
#define LIB5_H_
#include <iostream>
#include <string>

class Abstr_emp
{
private:
    std::string fname;
    std::string lname;
    std::string job;

public:
    Abstr_emp();
    Abstr_emp(const std::string &fn, const std::string &ln, const std::string &j);
    virtual void ShowAll() const;
    virtual void SetAll();

    friend std::ostream & operator<<(std::ostream &os, const Abstr_emp &e);

    virtual ~Abstr_emp()=0;
};

Abstr_emp::Abstr_emp():fname("none"), lname("none"), job("none"){
}
Abstr_emp::Abstr_emp(const std::string &fn, const std::string &ln, const std::string &j):fname(fn), lname(ln), job(j){
}

void Abstr_emp::ShowAll() const{
    std::cout<<"First name: "<<fname<<std::endl
            <<"Last name:"<<lname<<std::endl
            <<"Job: "<<job<<std::endl;
}
void Abstr_emp::SetAll(){
    //std::cout<<"Enter first name: ";
    getline(std::cin,fname);
    std::cout<<"Enter last name: ";
    getline(std::cin, lname);
    std::cout<<"Enter job: ";
    getline(std::cin, job);
}
std::ostream & operator<<(std::ostream &os, const Abstr_emp &e){
    os<<e.fname<<" "<<e.lname<<" "<<e.job;
    return os;
}

Abstr_emp::~Abstr_emp(){
}


class Employee: public Abstr_emp
{
private:
    /* data */
public:
    Employee(/* args */);
    Employee(const std::string &fn, const std::string &ln, const std::string &j);
    virtual void ShowAll()const override;
    virtual void SetAll() override;
    //virtual ~Employee() override;
};

Employee::Employee():Abstr_emp(){
}
Employee::Employee(const std::string &fn, const std::string &ln, const std::string &j):Abstr_emp(fn,ln,j){
}
void Employee::ShowAll() const {
    std::cout<<"Employee class:\n";
    Abstr_emp::ShowAll();
}
void Employee::SetAll() {
    std::cout<<"Enter employee first name:";
    Abstr_emp::SetAll();
}
/*Employee::~Employee(){

}*/


class Manager: virtual public Abstr_emp
{
private:
    int inchargeof;
protected:
    int InChargeOf()const{
        return inchargeof;
    }
    int & InChargeOf(){
        return inchargeof;
    }
public:
    Manager(/* args */);
    Manager(const std::string &fn, const std::string &ln, const std::string &j, int ico);
    Manager(const Abstr_emp &e,int ico);
    Manager(const Manager &m);
    virtual void ShowAll() const override;
    virtual void SetAll() override;
    //virtual ~Manager()override;
};

Manager::Manager(/* args */)
{
}
Manager::Manager(const std::string &fn, const std::string &ln, const std::string &j, int ico):Abstr_emp(fn,ln,j),inchargeof(ico){
}

Manager::Manager(const Abstr_emp &e,int ico):Abstr_emp(e),inchargeof(ico){
}
Manager::Manager(const Manager &m):Abstr_emp(m),inchargeof(m.inchargeof){
}
void Manager::ShowAll() const{
    std::cout<<"Manager class\n";
    Abstr_emp::ShowAll();
    std::cout<<"Inchargeof: "<<inchargeof<<std::endl;
}
void Manager::SetAll(){
    std::cout<<"Enter manager name: ";
    Abstr_emp::SetAll();
    std::cout<<"Enter inchargeof: ";
    std::cin>>inchargeof;
    while(std::cin.get()!='\n') continue;
}
/*Manager::~Manager(){

}*/

class Fink: virtual public Abstr_emp
{
private:
    std::string reportsto;
protected:
    const std::string ReportsTo() const{return reportsto;}
    std::string & ReportsTo(){return reportsto;}
public:
    Fink();
    Fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo);
    Fink(const Abstr_emp &e, const std::string &rpo);
    Fink(const Fink &f);
    virtual void ShowAll() const override;
    virtual void SetAll() override;
    //virtual ~Fink() override;
};

Fink::Fink():Abstr_emp(){
}
Fink::Fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo):Abstr_emp(fn,ln,j), reportsto(rpo){
}
Fink::Fink(const Abstr_emp &e, const std::string &rpo):Abstr_emp(e), reportsto(rpo){
}
Fink::Fink(const Fink &f):Abstr_emp(f), reportsto(f.reportsto){
}
void Fink::ShowAll() const{
    std::cout<<"Fink class:\n";
    Abstr_emp::ShowAll();
    std::cout<<"Reportsto: "<<reportsto<<std::endl;

}
void Fink::SetAll(){
    std::cout<<"Enter fink first name: ";
    Abstr_emp::SetAll();
    std::cout<<"Enter reportsto: ";
    std::cin>>reportsto;
    while(std::cin.get()!='\n') continue;
}
/*Fink::~Fink(){

}*/


class Highfink: public Manager, public Fink
{
private:
    /* data */
public:
    Highfink();
    Highfink(const std::string &fn, const std::string &ln, 
            const std::string &j, const std::string &rpo, int ico);
    Highfink(const Abstr_emp &e, const std::string &rpo, int ico);
    Highfink(const Fink &f, int ico);
    Highfink(const Manager &m, const std::string &rpo);
    Highfink(const Highfink &h);

    virtual void ShowAll() const override;
    virtual void SetAll() override;
    //virtual ~Highfink() override;
};

Highfink::Highfink():Abstr_emp(),Manager(), Fink(){
}
Highfink::Highfink(const std::string &fn, const std::string &ln, 
        const std::string &j, const std::string &rpo, int ico):Abstr_emp(fn,ln,j),Fink(fn,ln,j,rpo),Manager(fn,ln,j,ico){
        }
Highfink::Highfink(const Abstr_emp &e, const std::string &rpo, int ico):Abstr_emp(e),Fink(e,rpo),Manager(e,ico){

}
Highfink::Highfink(const Fink &f, int ico):Abstr_emp(f),Fink(f),Manager(f,ico){

}
Highfink::Highfink(const Manager &m, const std::string &rpo):Abstr_emp(m),Fink(m,rpo),Manager(m){

}
Highfink::Highfink(const Highfink &h):Abstr_emp(h), Fink(h), Manager(h){

}

void Highfink::ShowAll() const {
    std::cout<<"Class highfink:\n";
    Abstr_emp::ShowAll();
    std::cout<<"Reportsto: "<<ReportsTo()<<std::endl;
    std::cout<<"Inchargeof: "<<InChargeOf()<<std::endl;
}
void Highfink::SetAll(){
    std::cout<<"Enter highfink first name: ";
    Abstr_emp::SetAll();
    std::cout<<"Enter reportsto: ";
    std::cin>>ReportsTo();
    //while(std::cin.get()!='\n') continue;
    std::cout<<"Enter inchargeof: ";
    std::cin>>InChargeOf();
    while(std::cin.get()!='\n') continue;
}
/*Highfink::~Highfink(){

}*/


#endif