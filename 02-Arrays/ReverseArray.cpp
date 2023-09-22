#include <iostream>
using namespace std;

void reverseArray(int arr[] , int size) {
    int low = 0;
    int high = size - 1;

    while(low < high) {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high]= temp;

        low++;
        high--;
    }
    
    
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i];
    }
}
int main() {
    int arr[5] = {1,2,3,4,5};
    printArray(arr , 5);
    cout << endl;
    reverseArray(arr, 5);
    cout << "reversed array is" << endl;
    printArray(arr , 5);

    return 0;
    
}