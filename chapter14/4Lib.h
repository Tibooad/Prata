#ifndef LIB4_H_
#define LIB4_H_
#include <string>


class Card
{
public:
    enum {CountSuits=4};
    enum {CountFaces=13};
    Card(int suit=0, int face=0);
    std::string Show();
    ~Card();

private:
    
    enum Suit{DIAMONDS, CLUBS, HEARTS, SPADES};
    enum Face{TWO,THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};
    static std::string StrSuits[CountSuits];
    static std::string StrFaces[CountFaces];
    Suit s;
    Face f;
};




class Person
{
private:
    std::string name;
    std::string surname;
protected:
    virtual void SetFields();
    virtual void Data() const;
public:
    Person(const std::string &n="none", const std::string &s="none");
    virtual void Show() const;
    
    virtual void Set();
    
    const std::string &GetName() const;
    const std::string &GetSurname() const;
    void SetName(std::string &str);
    void SetSurname(std::string &str);
    
    virtual ~Person();
};





class Gunslinger: virtual public Person
{
private:
    double readyTime;
    int countNotches;
protected:
    virtual void SetFields() override;
    virtual void Data() const override;
public:
    Gunslinger(double time=3.5, int count=5);
    Gunslinger(const Person &p, double time=3.5, int count=5);
    Gunslinger(const std::string &n, const std::string &s,double time=3.5, int count=5);
    virtual void Show() const override;
    virtual void Set() override;
    
    void SetReadyTime(double time);
    void SetCountNotches(int count);
    double Draw() const;
    int GetCountNotches() const;
    ~Gunslinger();
};




class PokerPlayer: virtual public Person
{
private:
protected:
    virtual void SetFields() override;
    virtual void Data() const override;
public:
    PokerPlayer(const std::string &n="none", const std::string &s="none");
    PokerPlayer(const Person &p);
    Card Draw() const;
    virtual void Show() const override;
    virtual void Set() override;
    
    ~PokerPlayer();
};




class BadDude: public Gunslinger, public PokerPlayer
{
private:
    /* data */
protected:
    virtual void SetFields() override;
    virtual void Data() const override;
public:
    BadDude(const std::string &n="none", const std::string &s="none",double time=3.5, int count=5);

    BadDude(const Person &p, double time=3.5, int count=5);
    BadDude(const Gunslinger &g);
    BadDude(const PokerPlayer &pp,const Gunslinger &g);
    BadDude(const PokerPlayer &pp,double time=3.5, int count=5);
    
    double Gdraw();
    Card Cdraw();
    virtual void Show() const override;
    virtual void Set() override;
    
    ~BadDude();
};



#endif