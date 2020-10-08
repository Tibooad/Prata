#include <iostream>
const int count_scores = 10;
struct scorecard{
  int count;
  int scores[count_scores];
};

double avg(scorecard card){
  double res=0;
  for(int i=0;i<card.count;i++)
    res+=card.scores[i];
  return res/static_cast<double>(card.count);
}

void printArr(scorecard card){
  using namespace std;
  cout<<"Array:\n";
  for(int i=0;i<card.count;i++)
    cout<<card.scores[i]<<"\t";
  cout<<endl;
}

scorecard input(){
  using namespace std;
  scorecard result={0,{0}};
  cout<<"Enter results(max "<<count_scores<<")[q for exit[]\n";
  for(int i=0;i<count_scores;i++,result.count++){
    cout<<"Enter #"<<i+1<<": ";
    cin>>result.scores[i];
    if(!cin) break;
  }
  return result;
}

int main(int argc, char const *argv[]) {
  using namespace std;
  scorecard card=input();
  printArr(card);
  cout<<"Averrage: "<<avg(card);
  return 0;
}
