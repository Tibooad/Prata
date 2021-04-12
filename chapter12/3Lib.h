#ifndef LIB3_H_
#define LIB3_H_
class baseDMA
{
private:
    char *label;
    int raring;

public:
    baseDMA(const char*l="null",int r=0);
    baseDMA(const baseDMA &rs);
    virtual ~baseDMA();
    baseDMA & operator=(const baseDMA &rs);
    virtual void View() const;
};

baseDMA::baseDMA(const char*l="null",int r=0)
{
}

baseDMA::~baseDMA()
{
}

#endif