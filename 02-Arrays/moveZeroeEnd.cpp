#include <iostream>
using namespace std;

void moveZeroes(int arr[], int size) {
    int start = 0;
    int end = size -1;
   
    
    while (start < end) {
        if (arr[start] == 0 && arr[end] != 0) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else if (arr[start] != 0) {
            start++;
        }
        else {
            end--;
        }
    }
}



void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] ;
    }
}

int main() {
    int arr[5] = {0,10,20,30,4};
    moveZeroes(arr, 5);
    printArray(arr, 5);

    return 0;
} 