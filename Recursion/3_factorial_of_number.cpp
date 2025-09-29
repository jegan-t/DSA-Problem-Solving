#include<iostream>
using namespace std;

// fact(n) = 1.2.3.....(n-1).n
// fact(n) = fact(n-1)*n

int factorial(int n) {
    if (n == 1) {
        return 1;
    }

    return factorial(n-1) * n;
}

int main() {
    int n = 5;
    cout << factorial(n) << endl;
    return 0;
}