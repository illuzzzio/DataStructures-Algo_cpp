#include<iostream>
using namespace std;
int smallest(int arr[], int size){
  int small = arr[0];
  for(int i=0;i<size;i++){
    // if(arr[i]<small){
    //   small=arr[i];
    // }
    small = min(small,arr[i]); // less code more eficient//
  }
  return small;
}
int main(){
  int arr[6]= {2,5,32-8,21,21};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<smallest(arr,size)<<endl;

}