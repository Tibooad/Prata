#ifndef LIB2_H_
#define LIB2_H_

class Cd
{
private:
    char *performers;
    char *label;
    int selections;
    double playtime;
public:
    Cd(char *s1, char *s2, int n, double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd &c);
};



class Classic: public Cd
{
private:
    char *mainSong;
public:
    Classic(char *s1, char *s2, char *s3, int n, double x);
    Classic(const Classic &c);
    Classic();
    virtual ~Classic();
    virtual void Report() const override;

    Classic & operator=(const Classic &c);
};

#endif