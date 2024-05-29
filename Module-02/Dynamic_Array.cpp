#include <bits/stdc++.h>
using namespace std;
int main()
{
    // static array
    // int a[5];

    // dynamic array
    // int *a = new int[5];

    // dynamic array input and output
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //  output array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}