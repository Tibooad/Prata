#ifndef LIB7_H
#define LIB7_H
class Plorg
{
private:
    char full_name[19];
    int ci;
public:
    Plorg(const char name[]="Plorg");
    ~Plorg();
    void set_CI(int index);
    void show()const;
};
#endif