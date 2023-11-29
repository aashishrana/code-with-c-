#include <iostream>
using namespace std;


int maxConsecutiveOnes(bool arr[] , int n) {  // Return type is integer but the array type is boolean
    int res = 0 , curr = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            curr = 0;
        }

        else {
            curr++;
            res= max(res, curr);
        }
    }
    return res;
}
int main() {
    bool arr[5] = {0,1,1,0,1};

    int ans = maxConsecutiveOnes(arr, 5);

    cout << ans;
    

}