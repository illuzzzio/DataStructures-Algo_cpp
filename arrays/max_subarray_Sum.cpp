#include <iostream>
#include<vector>
using namespace std;
int subraysum(const vector<int>&v){
  int max_sum =INT_MIN;
  for(int i=0;i<v.size();i++){
    int count = 0;
    for(int j =i;j<v.size();j++){
      count += v[j];
      max_sum = max(count,max_sum);


    }
  }
  return max_sum;
}
int main(){
  vector<int> v = {1,2,3,4,5,6};
  cout<<subraysum(v)<<" ";
  cout<<endl;
  

}