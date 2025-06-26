#include <iostream>
using namespace std;
void index_of_target(int arr[], int size, int target){
  for(int i =0;i<size;i++){
    if(arr[i]==target){
      cout<<i<<endl;
    }

  }

}
int main(){
  int arr[7]= {1,2,3,4,5,8,7};
  int target = 5;
    int size = sizeof(arr) / sizeof(arr[0]);
  index_of_target(arr,size,target);
  return 0;

  
}