#include <iostream>
using namespace std;


//Nive approach
bool  isSorted(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]) {
                return false;
            }
        }
        
    }
    return true;
}

int main() {
    int arr[5] = {1,2,1,4,5};
    cout << isSorted(arr, 5);

}