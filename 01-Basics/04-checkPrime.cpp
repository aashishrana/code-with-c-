#include <iostream>
using namespace std;

bool checkPrime(int num) {
    // bool isPrime = false;
    for(int i = 2; i < num -1;i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num = 101;

    cout << checkPrime(num) << endl;
}