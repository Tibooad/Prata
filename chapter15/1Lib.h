#ifndef LIB1_H_
#define LIB1_H_
class Remote;
class Tv
{
private:
    int state;
    int volume;
    int maxChannel;
    int channel;
    int mode;
    int input;
public:
    friend class Remote;
    enum {Off, On};
    enum {MinVal, MaxVal=20};
    enum {Antenna, Cable};
    enum {TV, DVD};

    Tv(int s=Off, int mc=125):state(s), volume(5), maxChannel(mc), channel(2), mode(Cable), input(TV){};
    void onoff(){state=(state == On)?Off:On;}
    bool ison() const {return state==On;}
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() {mode = (mode == Antenna)? Cable :Antenna;}
    void set_input() {input = (input ==TV)?DVD:TV;}
    void set_control_mode(Remote &r) ;
    void settings() const;

};

class Remote
{
private:
    int mode;
    int control_mode;
    
public:
    enum {Normal, Interactive};
    friend class Tv;    
    Remote(int m= Tv::TV, int c = Normal):mode(m), control_mode(c){};
    bool volup(Tv &t);
    bool voldown(Tv &t);
    void onoff(Tv &t);
    void chanup(Tv &t);
    void chandown(Tv &t);
    void set_chan(Tv &t, int c);
    void set_mode(Tv &t);
    void set_input(Tv &t); 
    void settings(){
        std::cout<<"Remote control:\nMode = "<<((mode==Tv::TV) ? "TV" : "DVD")<<std::endl;
        std::cout<<"Control mode = "<<(control_mode == Normal ? "Normal" : "Interactive")<<std::endl;
    }
    void set_control_mode() {control_mode = (control_mode == Normal)? Interactive : Normal;}
};




#endif