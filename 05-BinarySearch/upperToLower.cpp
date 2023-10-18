#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "sdfksjk";

    // cout << 'a'-'A';

    // COnvert into upper case

    for(int i = 0; i < str.size(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;

        }
    }
    cout << str;

    // Convert into Lower case



    // Inbuilt

    string s1 = "gjffkksd";

    transform(S.begin(), s.end(), s.begin(), ::_toupper);
}