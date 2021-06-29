#ifndef LIB4_H_
#define LIB4_H_
#include <stdexcept>
#include <string>
class Sales{
    public:
        enum {MOUNTHS = 12};
        class Bad_index:public std::logic_error{
        private:
            int bi;
        public:
            explicit Bad_index(int xi, const std::string &s="Index error in Sales object\n");
            int bi_val()const {return bi;}
            virtual ~Bad_index() throw(){};
        };
        
        explicit Sales(int yy=0);
        Sales(int yy, const double *gr, int n);
        virtual ~Sales(){};
        int Year() const{return year;}
        virtual double operator[](int i)const;
        virtual double &operator[](int i);

    private:
        double gross[MOUNTHS];
        int year;
};
class LabeledSales: public Sales{
    public:
        class Nbad_index:public Sales::Bad_index{
            private:
                std::string lbl;
            public:
                Nbad_index(const std::string &lb, int ix, const std::string &s="Index error in LabeledSales object\n");
                const std::string &label_val()const{return lbl;}
                virtual ~Nbad_index()throw(){}
        };

        explicit LabeledSales(const std::string &lb = "none", int yy=0);
        LabeledSales(const std::string &lb, int yy, const double *gr, int n);
        virtual ~LabeledSales(){}
        const std::string &Label()const {return label;}
        virtual double operator[](int i)const;
        virtual double &operator[](int i);
    
    private:
        std::string label;

};

#endif