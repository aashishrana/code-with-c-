#include <iostream>
using namespace std;

int maximumDiffrenc(int arr[], int size) {
    int result = arr[1] - arr[0];
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            result = max(result, arr[j]-arr[i]);
        }
    }
    return result;
}

int main() {
    int arr[7] = {2,3,10,6,4,8,1};
    cout << maximumDiffrenc(arr, 7);// Time comp order of n^2;
}