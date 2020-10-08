#include <iostream>
struct box{
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void show(box b){
  using namespace std;
  cout<<"maker: "<<b.maker<<endl
      <<"height: "<<b.height<<endl
      <<"width: "<<b.width<<endl
      <<"length: "<<b.length<<endl
      <<"volume: "<<b.volume<<endl;
}

void change(box* box){
  box->volume=box->height*box->width*box->length;
}

int main(int argc, const char* argv[]){
  box box{"Vasya",20,30,40,25};
  show(box);
  change(&box);
  show(box);
  return 0;
}
