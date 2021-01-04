#ifndef LIB4_H
#define LIB4_H
namespace SALES{
    class Sales
    {
    private:
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales();
        Sales(const double arr[], int n=4);
        ~Sales();
        void showSales()const;
        void setSales();
    };
    
    
}
#endif