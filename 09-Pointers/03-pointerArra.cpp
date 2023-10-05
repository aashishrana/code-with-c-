#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0};
    // arr = arr + 1 Error generate
    cout << "Address of first memory block is " << arr << endl;
    cout << "Address of first memory block is " << &arr[0] << endl;  // both are pointing to the same address
    cout << "4th " << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << "5th " << *(arr) + 1 << endl;

    int i = 3;
    cout << i[arr] << endl;

    return 0;

}