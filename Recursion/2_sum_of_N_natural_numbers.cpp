#include<iostream>
using namespace std;

// S_n = 1 + 2 + 3 + .....+ (n-1) + n
// S_n = S_(n-1) + n

int sum(int n) {
    if (n == 1) {
        return 1;
    }
    return sum(n-1) + n;
}

int main(){
    int num = 10;
    cout << sum(num) << endl;
    return 0;
}