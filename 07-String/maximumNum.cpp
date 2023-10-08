#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "34783428";

    // form largest num using string

    sort(s.begin(), s.end(), greater <int>());
    cout << s;
}