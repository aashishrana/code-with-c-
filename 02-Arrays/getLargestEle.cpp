#include <iostream>
#include <math.h>
using namespace std;

int getLargest(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }

        
    }
    return max;
}



int main() {
    int arr[4]= {5,8,20,10};
    int ans = getLargest(arr, 4);
    
    cout << ans << endl;
    
}