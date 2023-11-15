#include <iostream>
using namespace std;

void printArr(int arr[], int size) {
    for(int i =0 ; i < size; i++) {
        cout << arr[i] << " ";
    }
}


// Naive approach is to make a temporrary arr and the copy element

int removeDuplicates(int arr[], int size) {
    int temp[size];
    temp[0] = arr[0];
    int res = 1;

    for(int i = 1; i < size; i++) {
        if(temp[res - 1] != arr[i]) {
            temp[res] = arr[i];
            res++;
        }
    }

    for(int i = 0; i < res; i++) {
        arr[i]= temp[i];
    }
    return res;

}


// Efficent approach

int remDup(int arr[], int siz) {
    int rsiz = 1;
    for(int i = 1; i < siz; i++) {
        if(arr[1] != arr[rsiz - 1]) {
            arr[rsiz] = arr[i];
            rsiz++;
        }

    }

    return rsiz;

}

int main() {
    int arr[] = {10,20,20,30,30,30,30};
    // printArr(arr,7 );
    // cout << endl;

    // int ans = removeDuplicates(arr, 7);
    // cout << ans << endl;

    // printArr(arr, 3);

    int res = remDup(arr, 7);
    cout << res;

    return 0;

}