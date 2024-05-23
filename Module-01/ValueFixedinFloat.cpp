#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
    // WE CAN USE FLOAT OR DOUBLE FLOAT IS 4BITS AND DOUBLE 8BITS
    double A;

    // FIXED FLOAT VALUE IN C LANGUAGE

    // scanf("%f", &A);
    // PRINT FLOAT VALUE
    // printf("%f\n", A);
    // FIXED 2 DIGIT
    // printf("%0.2f\n", A);

    // FIXED FLOAT VALUE IN C++ LANGUAGE
    cin >> A;

    // PRINT FLOAT VALUE
    cout << A << endl;

    // FIXED 2 DIGIT
    cout << fixed << setprecision(2) << A << endl;
}