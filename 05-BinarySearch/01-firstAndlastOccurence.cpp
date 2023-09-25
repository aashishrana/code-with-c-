// int arr = {3,4,13,13,13,20 , 40}

#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <=  end) {
        if(arr[mid] == key) {
             ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }

        else if(arr[mid] > key) {
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}


int lastOccurence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <=  end) {
        if(arr[mid] == key) {
             ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }

        else if(arr[mid] > key) {
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}




int main() {
    int arr[8] ={0 , 0 , 1 , 1 , 2 , 2 , 2 , 2};
    cout << "first occurence " << firstOccurence(arr, 8, 2) << endl;
    cout << "last occurence " << lastOccurence(arr, 8, 2);


}