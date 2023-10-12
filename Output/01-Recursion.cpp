#include <iostream>
using namespace std;

void fun(int N) {
    if(N == 0) {
        return;
    }
    fun(N - 1);
    cout << N << endl;
    fun(N - 1);
}

int main() {
    fun(3);
    return 0;
}