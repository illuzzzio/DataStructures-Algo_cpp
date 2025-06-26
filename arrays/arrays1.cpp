#include <iostream>
using namespace std;
int main(){
  int  arr[5] = {1,2,3,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n+1;i++){ // 0,1,2,3,4,5 // here index is out of range , but still can be accested with n+1 in the loop , for all real indexes we ony luse n //
    cout<<i<<endl;
  }
}