#include <iostream>
#include "1Lib.h"

int main(int argc, char const *argv[])
{   
    const int length_arr=10;
    golf arr[length_arr];
    int i=0;
    for(i=0;i<length_arr && setgolf(arr[i]);i++);
    for(int j=0;j<i;j++)
        showgolf(arr[j]);
    return 0;
}
