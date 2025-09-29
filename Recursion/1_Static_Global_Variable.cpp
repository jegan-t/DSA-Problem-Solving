#include<iostream>

using namespace std;

int sum = 0;
int func(int n) {
    int x = 0;
    if (n > 0) {
        x++;
        sum =  func(n-1) + x;
        return sum;
    }

    return 0;
}

int main() {
    int a = 5;
    cout << func(a) << endl;
}