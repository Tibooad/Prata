#include <string>
#include "2Lib.h"
#include <iostream>

const char * Bad_hmean::what() const noexcept{
    return std::logic_error::what();
}

const char * Bad_gmean::what() const noexcept{
    return std::logic_error::what();
}