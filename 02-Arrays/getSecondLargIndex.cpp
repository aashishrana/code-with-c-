#include <iostream>
using namespace std;
int getLargestIndex(int arr[], int size) {
    int index = 0;

    for(int i = 1; i < size; i++) {
        if(arr[index] < arr[i]) {
            index = i;

        }
    }
    return index;
}
int getSecondLargest(int arr[], int size) {
    int largest = getLargestIndex(arr, size);
    int result = -1;
    for(int i = 0; i < size; i++) {
        if(arr[i] != arr[largest]) {
            if(result == -1) {
                result = i;

            }
            else if(arr[i] > arr[result]) {
                result = i;
            }
        }

    }
    return result;
}

// Efficent Approach in one traversal i dont understand 

int main() {
    int arr[5] = {2,4,6,8,10};
    cout << getLargestIndex(arr, 5);
    cout << endl;
    cout << getSecondLargest(arr , 5);
}