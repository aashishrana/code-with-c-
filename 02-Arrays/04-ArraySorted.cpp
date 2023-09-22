#include <iostream>
using namespace std;

bool  isSorted(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] < arr[j]) {
                return true;
            }
        }
        
    }
    return false;
}

int main() {
    int arr[5] = {1,2,1,4,5};

    cout << isSorted(arr, 5);

}