#include <vector>
#include <iostream>
#include <algorithm>

void print_arr(const double &item);
void plus_one(int &item);
int main(int argc, char const *argv[])
{
    std::vector<int> scores;
    double temp;
    while (std::cin >> temp && temp>=0){
        scores.push_back(temp);
    }
    // scores.erase(scores.begin(), scores.begin()+2);
    std::cout<<"You entered "<<scores.size()<<" scores.\n";

    // std::vector<int> old_v;
    // std::vector<int> new_v;
    
    // old_v.insert(old_v.begin(), new_v.begin()+1, new_v.end());   //вставка со 2го эл-та
    // old_v.insert(old_v.end(), new_v.begin()+1, new_v.end());     //вставка в конец

    //for_each(scores.begin(), scores.end(), print_arr);
    //на
    for(auto & x: scores)
        plus_one(x);

    for(auto x: scores)
        print_arr(x);
    return 0;
}
void plus_one(int &item){
    item++;
}
void print_arr(const double &item){
    std::cout<<item<<'\t';
}
