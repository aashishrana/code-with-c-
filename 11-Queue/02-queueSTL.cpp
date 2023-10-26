#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front()<< " " << q.back() << endl;
    q.pop();
    cout << q.front() << " " << q.back() << endl;
    cout <<q.empty() << " " << q.size();
    // cout << q.swap(0 , 1);

    while(q.empty() == false) {
        cout << q.front() << " "  << q.back() << endl;
        q.pop();
    }

    return 0;

}
