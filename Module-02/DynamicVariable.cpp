#include <bits/stdc++.h>
using namespace std;
int main()
{
    // CREATE A DYNAMIC VARIABLE
    int *a = new int;
    // a value address
    // *a dereference address and find the value

    *a = 100;
    // Print dynamic Variable

    // print address
    cout << a << endl;
    // print value
    cout << *a << endl;

    double *b = new double;
    *b = 15.24666556;
    cout << fixed << setprecision(10) << *b << endl;

    return 0;
}