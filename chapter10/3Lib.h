#ifndef LIB3_H
#define LIB3_H

class Golf
{
private:
    static const int LEN=40;
    char fullname[LEN];
    int handicap;
public:
    Golf(){fullname[0]='\0';handicap=0;}
    Golf(const char *name,int hc);
    ~Golf();
    void showgolf()const;
    int setgolf();
    void set_handicap(int hc){handicap=hc;}
};

#endif