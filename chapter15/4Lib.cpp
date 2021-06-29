#include "4Lib.h"
Sales::Bad_index::Bad_index(int ix, const std::string &s):std::logic_error(s),bi(ix){}

Sales::Sales(int yy){
    year = yy;
    for (int i = 0; i < MOUNTHS; i++){
        gross[i]=0;
    } 
}

Sales::Sales(int yy, const double *gr, int n){
    year=yy;
    int lim=(n<MOUNTHS)? n : MOUNTHS;
    int i;
    for ( i = 0; i < lim; i++){
        gross[i]=gr[i];
    }
    for(; i< MOUNTHS;i++)
        gross[i]=0;
}
double Sales::operator[](int i)const{
    if(i<0 || i>= MOUNTHS)
        throw Bad_index(i);
    return gross[i];
}
double & Sales::operator[](int i){
    if(i<0 || i>= MOUNTHS)
        throw Bad_index(i);
    return gross[i];
}

LabeledSales::Nbad_index::Nbad_index(const std::string &lb, int ix, const std::string &s):Sales::Bad_index(ix,s){
    lbl=lb;
}
LabeledSales::LabeledSales(const std::string &lb, int yy):Sales(yy){
    label=lb;
}
LabeledSales::LabeledSales(const std::string &lb, int yy, const double *gr, int n):Sales(yy, gr, n){
    label=lb;
}
double LabeledSales::operator[](int i)const{
    if(i<0 || i>= MOUNTHS)
        throw Nbad_index(Label(), i);
    return Sales::operator[](i);
}
double & LabeledSales::operator[](int i){
    if(i<0 || i>= MOUNTHS)
        throw Nbad_index(Label(), i);
    return Sales::operator[](i);
}
