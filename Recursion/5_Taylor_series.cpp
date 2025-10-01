#include<iostream>
using namespace std;


double exp(int x, int n = 10) {
    static  double a = 1, b = 1;
    static  double p;
    if (n == 0) return 1;
    p = exp(x , n-1);
    a = a*x;
    b = b*n;
    double f = a/b;
    return p + f;

}

/*
with out static variable
===============================================================
#include <iostream>
using namespace std;

double expRec(int x, int n, double a = 1, double b = 1) {
    if (n == 0) return 1;
    double term = (a * x) / (b * n); // next term
    return expRec(x, n - 1, a * x, b * n) + term;
}

int main() {
    cout << expRec(1, 10) << endl;
    return 0;
}

===========================================================


 */

int main() {
    cout << exp(1, 10) << endl;
    return 0;
}