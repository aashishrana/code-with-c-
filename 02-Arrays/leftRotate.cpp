#include <iostream>
using namespace std;

void leftRotate(int arr[], int size) {  // Time complexity order of n2 
    int temp = arr[0];

    for(int i = 1; i < size; i++) {
        arr[i-1] = arr[i];
        
    }
    arr[size - 1] = temp;

}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[5] = {1,2,3,4,5};
    printArray(arr, 5);
    leftRotate(arr, 5);
    cout << endl;
    printArray(arr , 5);

    return 0;

}