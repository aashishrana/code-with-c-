#include <iostream>
using namespace std;

int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0';i++) {
        count++;
    }
    return count;
}

int main() {
    char name[20];
    cout << "Enter your name" << endl;
    cin >> name;
    // name[2] = '\0'; // null character after this nothing print and nothing count

    cout << "Your name is " << name << endl;
    // cout << name << endl;
    cout << getLength(name);
}