#include <iostream>
#include "5Lib.h"

int main(int argc, char const *argv[])
{
    //Abstr_emp abm;
    Employee em{"Trip","Harris", "Thumper"};
    std::cout<<std::endl<<em<<std::endl<<std::endl;
    em.ShowAll();
    Manager ma{"Amorphia", "Spingdragon", "Nuancer",5};
    std::cout<<std::endl<<ma<<std::endl<<std::endl;
    ma.ShowAll();
    Fink fi{"Matt", "Oggs", "Oiler","Juno Barr"};
    std::cout<<std::endl<<fi<<std::endl<<std::endl;
    fi.ShowAll();
    Highfink hf(ma, "Curly Kew");
    hf.ShowAll();

    std::cout<<"\nPress a key next phase:\n";
    std::cin.get();
    std::cin.get();

    Highfink hf2;
    hf2.SetAll();
    std::cout<<"\nUsing an abstr_emp * pointer:\n\n";
    Abstr_emp *tri[4]={&em, &fi, &hf, &hf2};
    for(int i=0;i<4; i++){
        tri[i]->ShowAll();
        std::cout<<std::endl;
    }
    return 0;
}
