#include<iostream>
using namespace std;
void swapy(int arr[], int size){
  int min = 0;
  int max = 0;
  for(int i =0;i<size;i++){
    if(arr[i]<arr[min]){
      min= i; // basically we are replacing the index not the value // 
    }
    if(arr[i]>arr[max]){
      max= i;
    }
  }
  swap(arr[max], arr[min]);
}
int main(){
  int arr[]= {2,1,3,4,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  swapy(arr,size);
  for(int i =0;i<size;i++){
    cout<<arr[i]<<" ";

  }
  cout<<endl;
}
