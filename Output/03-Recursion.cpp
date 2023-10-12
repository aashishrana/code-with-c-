#include <iostream>
using namespace std;

void fun(int n) {
    if(n == 0) {
        return;
    }

    fun(n / 2);
    // print(n % 2);
    cout << n % 2 ;

}
int main() {
    int n = 10;
    fun(n);

    return 0;

}