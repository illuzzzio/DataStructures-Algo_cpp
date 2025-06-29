#include<iostream>
#include<vector>
using namespace std;
int max_water(const vector<int>&water){
  int maxw = 0;
  for(int i =0;i<water.size();i++){
    for(int j=i+1;j<water.size();j++){
      int width = j-i;
      int height = min(water[i], water[j]);
      int area = width*height;
       maxw = max(area, maxw);


    }
  }
  return maxw;
}
int main(){
  vector<int> water = {1,8,6,2,5,4,8,3,7};
  cout<<max_water(water)<<endl;
}