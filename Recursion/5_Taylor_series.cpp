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

#include <iostream>
using namespace std;

double expLoop(int x, int n = 10) {
    double result = 1.0;   // start with first term = 1
    double numerator = 1.0; // x^k
    double denominator = 1.0; // k!

    for (int k = 1; k <= n; k++) {
        numerator *= x;        // multiply by x each time
        denominator *= k;      // multiply by k each time
        result += numerator / denominator; // add term
    }

    return result;
}

int main() {
    cout << expLoop(1, 10) << endl;  // approximation of e^1
    cout << expLoop(2, 15) << endl;  // approximation of e^2
    return 0;
}


// int main() {
//     cout << exp(1, 10) << endl;
//     return 0;
// }