#include <iostream>
#include <new>
struct chaff
{
    char dross[20];
    int slag;
};
const int BUF_SIZE=500;
const int ARR_SIZE=2;
char buffer1[BUF_SIZE];

    
void printChaff(chaff &ch);
void setChaff(chaff &ch);

int main(int argc, char const *argv[])
{
    using namespace std;
    char *buffer2=new char[BUF_SIZE];
    chaff *arr=new(buffer1)chaff[ARR_SIZE];
    // chaff *arr=new(buffer2)chaff[ARR_SIZE];
    for(int i=0;i<ARR_SIZE;i++){
        setChaff(arr[i]);
    }
    cout<<"Print:\n";
    for(int i=0;i<ARR_SIZE;i++){
        printChaff(arr[i]);
    }
    
    return 0;
}
void printChaff(chaff &ch){
    using namespace std;
    cout<<"Dross: "<<ch.dross<<endl 
        <<"Slag: "<<ch.slag<<endl;
}
void setChaff(chaff &ch){
    using namespace std;
    cout<<"Enter dross:";
    cin.get(ch.dross,20);
    
    cout<<"Enter slag:";
    cin>>ch.slag;
    cin.get();
}