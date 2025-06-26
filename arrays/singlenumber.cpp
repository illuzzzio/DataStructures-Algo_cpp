#include <iostream>
#include<vector>
using namespace std;
int  unique(const vector<int>&v){
  int count =0;
  for(int val:v){
    count = count ^ val;

  }
  return count;
}
int main(){
vector<int> v = {1,3,3,4,4,7,7};
cout<<"The uniue element is the array is : "<<unique(v)<<endl;
}