#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int ele) {
    int low = 0;
    int high = n - 1;
    int mid = (low + high/2);
    
    
        if(arr[mid] == ele) {
            return mid;
        } 
        
        else if(arr[mid] <= ele){
            for(int i = mid; i < n; i++) {
                if(arr[mid] == ele) {
                    return ele;
                }
            }
        
        else {
            for(int i = 0; i < mid; i++) {
                
            }
        }
    
}
int main() {
	cout<<"GfG!";
	return 0;
}