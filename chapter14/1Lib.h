#ifndef LIB1_H_
#define LIB1_H_

#include <utility>
#include <valarray>
#include <string>
class Wine
{
private:
    std::string label;
    std::pair<std::valarray<int>,std::valarray<int>> bottles;
public:
    Wine(const char *l, int y);
    Wine(const char *l, int y, const int yr[],const int bot[]);
    std::string & Label();
    void GetBottles();
    void Show();
    int Sum();
    ~Wine();
};


#endif