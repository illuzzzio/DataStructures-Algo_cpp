#include<iostream>
#include<set>
#include<array>
using namespace std;
void withoutduplicates(const array<int,9>&arr){
  set<int> s(arr.begin(),arr.end());
  for(int i:s){
    cout<<i<<" "; // i is not index in set we reurn i as values // 

  }
  cout<<endl;

}
int main(){
  array<int,9> arr = {1,2,2,3,3,4,5,6,6};
  withoutduplicates(arr);
  return 0;


}