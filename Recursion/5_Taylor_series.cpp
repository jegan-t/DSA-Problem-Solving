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

int main() {
    cout << exp(1, 10) << endl;
    return 0;
}