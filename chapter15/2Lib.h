#ifndef LIB2_H_
#define LIB2_H_

#include <stdexcept>
#include <string>
class Bad_hmean:std::logic_error{
private:
    double v1;
    double v2;
public:
    Bad_hmean(double a=0,double b=0, std::string msg="Exception in hmean"):
    std::logic_error(msg+"\nhmean("+ std::to_string(a)+", " + std::to_string(b)
            +") invalid arguments: a=-b"),v1(a),v2(b){}
    virtual const char * what() const noexcept;
};

class Bad_gmean:std::logic_error{
public:
    double v1;
    double v2;

    Bad_gmean(double a=0,double b=0, std::string msg="Exception in gmean"):
    std::logic_error(msg+"\ngmean() arguments should be >=0"),v1(a),v2(b) {}
    virtual const char * what() const noexcept;
};

#endif