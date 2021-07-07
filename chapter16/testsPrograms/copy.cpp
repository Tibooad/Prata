#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    int casts[10] = {6,7,2,9,4,11,8,7,10,5};
    std::vector<int> dice(10);
    std::copy(casts, &casts[10], dice.begin());

    for(auto &x: dice){
        std::cout<<x<<'\t';
    }
    return 0;
}
