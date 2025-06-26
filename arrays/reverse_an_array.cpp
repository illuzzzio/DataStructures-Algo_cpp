#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int arr[], int size) {
    sort(arr, arr + size);  // Sort in ascending order

    int left = 0;
    int right = size - 1;

    while (left < right) {
        // Always swap to reverse
        int hold = arr[right];
        arr[right] = arr[left];
        arr[left] = hold;

        left++;
        right--;
    }

    // Print the reversed array
    for (int i = 0; i < size; i++) {
        cout << arr[i]<<" ";
    }
    cout<<endl;
    
}

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, size);
    return 0;
}
