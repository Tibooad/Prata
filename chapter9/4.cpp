#include <iostream>
#include "4Lib.h"

int main(int argc, char const *argv[])
{
    using namespace std;
    using namespace SALES;
    Sales s1;
    Sales s2;
    setSales(s1);
    setSales(s2,s1.sales);
    showSales(s1);
    showSales(s2);
    return 0;
}
