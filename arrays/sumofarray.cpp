#include<iostream>
using namespace std;

void sum(int arr[], int size){
  int count=0;
  for(int i =0;i<size;i++){
    count+=arr[i];

  }
  cout<<count<<endl;
}
int main(){
  int arr[5]= {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  sum(arr,size);

}