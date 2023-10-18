#include <iostream>
using namespace std;

void print(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int deletOperation(int arr[], int size, int ele, int cap) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == ele) {
            break;

        }
    }
}

int main() {
    int arr[5] = {1,3,5,7,9};
    print(arr, 5);
}