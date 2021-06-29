#include <iostream>
#include "1Lib.h"

bool Tv::volup(){
    if(volume<MaxVal){
        volume++;
        return true;
    }else
        return false;
}

bool Tv::voldown(){
    if(volume > MinVal){
        volume--;
        return true;
    }else
        return false;
}

void Tv::chanup(){
    if(channel < maxChannel)
        channel++;
    else
        channel=1;
}

void Tv::chandown(){
    if(channel > 1)
        channel++;
    else
        channel=maxChannel;
}

void Tv::settings() const{
    std::cout<<"Tv is "<<(state == Off ? "Off":"On")<<std::endl;
    if(state==On){
        std::cout<<"Volume setting = "<<volume<<std::endl;
        std::cout<<"Channel setting = "<<channel<<std::endl;
        std::cout<<"Mode = "<<(mode == Antenna ? "antenna": "cable")<<std::endl;
        std::cout<<"Input = "<<(input == TV ? "TV": "DVD")<<std::endl;
    }
}

void Tv::set_control_mode(Remote &r){
    if(state == On)
        r.set_control_mode();
}



bool Remote::volup(Tv &t){return t.volup();}
bool Remote::voldown(Tv &t){return t.voldown();}
void Remote::onoff(Tv &t){t.onoff();}
void Remote::chanup(Tv &t){t.chanup();};
void Remote::chandown(Tv &t){t.chandown();};
void Remote::set_chan(Tv &t, int c){t.channel=c;}
void Remote::set_mode(Tv &t) {t.set_mode();}
void Remote::set_input(Tv &t) {t.set_input();}