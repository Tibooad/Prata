#ifndef LIB2_H_
#define LIB2_H_

#include <utility>
#include <valarray>
#include <string>
class Wine: private std::pair<std::valarray<int>,std::valarray<int>>, private std::string
{
private:
    
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