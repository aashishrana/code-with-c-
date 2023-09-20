#include <iostream>
using namespace std;


int getIndex(int arr[] , int size) {
    int maxIndex = 0;
    for(int i = 1; i < size; i++) {
        if(arr[maxIndex] < arr[i]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}


int main() {
    int arr[4]= {5,8,20,10};

    cout << getIndex(arr , 4);

}