#include <iostream>
#include <fstream>
#include <string>

const int limitGrandPatrons = 10'000;
struct patron{
  std::string name;
  double donation;
};

int main(int argc, char const *argv[]) {
  using namespace std;

  int countPatrons;
  bool flag=false;
  string file;
  ifstream iFile;
  cout<<"Enter name file with patrons: ";
  cin>>file;
  iFile.open(file);
  while(!iFile.is_open()){
    cout<<"Something wrong. Enter name file again";
    cin>>file;
    iFile.open(file);
  }
  (iFile>>countPatrons).get();

  patron *p_arrPatrons=new patron[countPatrons];
  for(int i=0;i<countPatrons;i++){
    getline(iFile,p_arrPatrons[i].name);
    (iFile>>p_arrPatrons[i].donation).get();
  }
  cout<<"\nGrand Patrons\n";
  for(int i=0;i<countPatrons;i++){
    if(p_arrPatrons[i].donation>limitGrandPatrons){
      flag=true;
      cout<<"Name: "<<p_arrPatrons[i].name<<endl;
      cout<<"Donation: "<<p_arrPatrons[i].donation<<endl;
    }
  }
  if(!flag) cout<<"none\n";

  cout<<"\n\nPatrons:\n";
  flag=false;
  for(int i=0;i<countPatrons;i++){
    if(p_arrPatrons[i].donation<limitGrandPatrons){
      flag=true;
      cout<<"Name: "<<p_arrPatrons[i].name<<endl;
      cout<<"Donation: "<<p_arrPatrons[i].donation<<endl;
    }
  }
  if(!flag) cout<<"none\n";
  delete [] p_arrPatrons;
  iFile.close();
  return 0;
}
