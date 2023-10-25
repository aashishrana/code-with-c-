#include <iostream>
using namespace std;

int getLargest(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int secondLargest(int arr[], int size) {
    int firstLargest = getLargest(arr , 5);

    int result = -1;

    for(int i = 0; i < size; i++) {
        if(arr[i] != firstLargest) {
            if(result == -1) {
                result = i;
            }

            else if(arr[i] > ) {

            }

        }

    }
}
int main() {
    int arr[5] = {2,1,200, 3,0};
    cout << getLargest(arr, 5);

}