#include <iostream>
#include "3Lib.h"

int main(int argc, char const *argv[])
{   
    const int length_arr=10;
    Golf arr[length_arr];
    int i=0;
    for(i=0;i<length_arr && arr[i].setgolf();i++);
    for(int j=0;j<i;j++)
        arr[j].showgolf();
    return 0;
}