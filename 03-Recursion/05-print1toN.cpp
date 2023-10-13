#include <iostream>
using namespace std;

void print1toN(int N) {
    if(N == 0) {
        return;
    }

    cout << N << " " ;
    

    print1toN(N - 1);   
    cout << N << " "; // Head Recursion  


}
int main() {
    int N = 5;

    print1toN(N);

    return 0;

}