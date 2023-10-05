#include <iostream>
using namespace std;

int main() {
    int num = 5;
    cout << num << endl;

    // address of Operator

    cout << "Address of num " << &num << endl;

    //Pointer are used to store address

    int *p = &num; // *p defrencing operator
    cout << p << endl;

    cout << *p << endl;

    double d = 10.5;
    double *p2 = &d;
    cout <<"Adress is " << p2 << endl;
    cout << "value is " << *p2 << endl;

    // size
    // cout << "size of ponter variable is " << sizeof(p) << endl;
    // cout << "size of pointer variable is " << sizeof(p2) << endl;

    int num2 = 10;
    int *p3 = &num2;
    cout <<"value of num2 " << num2 << endl;
    cout << "Adress of pointer is variable is" << p3 << endl;
    cout << "size of pointer variable is " << sizeof(p3) << endl; // o/p 8 bytes


    return 0;
}