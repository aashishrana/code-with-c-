#include <iostream>
using namespace std;  // some confusion

int hcf(int num1 , int num2) {
    if(num2 == 0) {
        return num1;
    }

    return hcf(num1 % num2, num2);
}

int main() {
    int num1 = 18, num2 = 48;
    int result = hcf(num1 , num2);
    cout << result;
}