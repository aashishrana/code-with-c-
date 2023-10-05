#include <iostream>
using namespace std;

int main() {
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout <<endl <<  "printing p" << p << endl;
    cout << "address of p " << &p << endl;
    cout << "value of p2 " << *p2 << endl;
    cout << "value of p2 " << **p2 << endl;

    return 0;
}