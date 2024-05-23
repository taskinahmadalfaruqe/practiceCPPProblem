#include <iostream>
using namespace std;
int main()
{
    // INPUT A INT NUMBER
    int a;
    cin >> a;

    // INPUT A CHAR
    char b;
    cin >> b;

    // CONVERT CHAR TO NUMBER
    int d = b;

    // ANOTHER METHOD
    int c = int(b);

    // OUTPUT METHOD
    // cout << c << endl;

    // MULTIPLIES OUTPUT
    cout << a << ' ' << b << ' ' << c << endl;
}