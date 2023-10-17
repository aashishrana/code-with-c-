#include <iostream>
#include <stack>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    stack <int> s;
    for(int i = 0; i < 5; i++) {
        s.push(arr[i]);
        
    }

    for(int i = 0; i < s.size(); i++) {
        cout << s;
    }

    return 0;

}