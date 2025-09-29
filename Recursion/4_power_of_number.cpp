#include<iostream>
using namespace std;

// a**3 = (a**2)*a
// pow(a,3) = pow(a,2)*a -----> Method 1.

int pow1(int a,int b) {
    if (b == 0) {
        return 1;
    }
    return a*pow1(a,b-1);

}

// method 2
// a**8 = (a**(4/2))**2 => if n is even
// a**9 = a((a**(9/2))**2) => if n is odd

int pow2(int a, int b) {
    if (b == 0) {
        return 1;
    }
    if (b % 2 == 0) {
        int half = pow2(a,b/2);
        return half*half;
    }
    int half = pow2(a,b/2);
    return half*half*a;

}


int main() {
    int a=2, b =3;
    cout << pow1(a,b) << endl;
    cout << pow2(a,b) << endl;
    return 0;
}