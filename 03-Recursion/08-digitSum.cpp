#include <iostream>
using namespace std;

int digitSum(int n) {
    if(n == 0) {
        return 0;
    }

    else {
        return digitSum(n / 10) + n % 10;
    }
}


int main() {
    int n = 239;
    int result = digitSum(n);
    cout << result;
}