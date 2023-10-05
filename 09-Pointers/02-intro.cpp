#include <iostream>
using namespace std;

int main() {
    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;

    // copying pointer
    int *r = p;
    cout << p << "--" << r << endl;
    cout << r << endl;
    cout << r + 1 << endl; // value increase by 8 but in my compiler it increase by 4

    return 0;
}