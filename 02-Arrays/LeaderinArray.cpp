// in the right side  no one is greater than this element than it should be called leader

#include <iostream>
using namespace std;

void leaderOfArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        bool flag = false;
        for(int j = i + 1; j < size; j++) {
            if(arr[i] <= arr[j]) {
                flag = true;
                break;
            }
            
        }
        if(flag == false) {
                cout << arr[i];
            }
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    // int arr[7] = {7,10,4,10,6,5,2};
    int arr[7] = {10,10,10,10,10,10,10};
    printArray(arr, 7);
    cout << endl;
    leaderOfArray(arr, 7); // time complexity order of n^2

}