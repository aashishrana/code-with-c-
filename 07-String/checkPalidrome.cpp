#include <iostream>
using namespace std;

bool checkPalindrome(char arr[] , int n) {
     int s = 0;
     int e = n - 1;

     while(s <= e) {
        if(arr[s] != arr[e]) {
            return 0;

        }
        else {
            s++;
            e--;
        }

     }
     return 1;

}

int main() {
    char arr[4] = {'n','o','o','n'};
    cout << arr << endl;
    cout << checkPalindrome(arr, 4);
}