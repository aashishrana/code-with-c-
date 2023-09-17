#include <iostream>
using namespace std;


int LinaerSearch(int arr[] , int ele) {
    for (int i = 0; i < sizeof(arr); i++) {
        if(arr[i] == ele) {
            return i;
        }
        return -1;
    }
}
int main() {
	cout<<"GfG!";
	int arr[5] = {2, 4, 6 ,5 , 10};
	int ele = 10;
	
	cout << LinaerSearch(arr , ele);
	return 0;
}