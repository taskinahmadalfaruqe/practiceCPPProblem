#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Summation of an array
    int a, sum = 0;
    int arr[a];
    cout << "Give The Size of An Array: " << endl;
    cin >> a;
    cout << "Give The Value Of An Array Value: " << endl;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    cout << "Sum Of This Array: " << sum;

    return 0;
}