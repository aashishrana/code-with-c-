#include <iostream>
using namespace std;
//printing number using recursion
int printNum(int num ) {
    if(num == 0) {
        return 0;
    }
    cout << num;
    
    printNum(num - 1);
}

int main() {
	cout<<"GfG!";
	
	int result = printNum(5);
	cout << result << endl;
	return 0;
}