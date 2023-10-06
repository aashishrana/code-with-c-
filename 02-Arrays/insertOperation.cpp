#include <iostream>
using namespace std;

void printArr(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

// algo
// 1) check size = cap if true then return
// 2) find index = pos -1;
// 3)Move all elemnet one position ahead by run loop

int insert(int arr[], int size, int pos, int ele, int cap) {
    if(size == cap) {
        return size;
    }
    int index = pos - 1;
    for(int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = ele;
    return size + 1;
}
int main() {
    int arr[5] = {1,2,3,};
    printArr(arr, 5);
    cout << endl;

     insert(arr, 3, 2, 7, 5);
    // cout << result << " ";
    printArr(arr , 5);

    return 0;

}