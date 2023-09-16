#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    
    return n * factorial(n -1);
}

int main() {
	cout<<"GfG!"<<endl;
	
	int result = factorial(5);
	cout << result;
	return 0;
}