#include <bits/stdc++.h>
using namespace std;
int main()
{
    // step-01
    // create 2 dynamic array a and b

    // step-2
    // input value a and b array

    // step-3
    // delete dynamic array a

    // step-4
    // increase array a size


    // step-5
    // copy array b value on newly increased array a

    // step-6
    // delete dynamic array b

    // step-7
    // print array a

    // step-8
    // add new updated value in array

    // step-9
    // print the new array a with update value.

    // step-1
    int *a = new int[3];
    int *b = new int[3];

    // step-2
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    // step-3
    delete[] a;

    // step-4
    a = new int[5];

    // step-5
    for (int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }
    // step-6
    delete[] b;

    // step-7
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // step-8
    a[3] = 6;
    a[4] = 7;

    // step-9
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
        // cout << b[i] << " " << endl;
    }

    return 0;
}