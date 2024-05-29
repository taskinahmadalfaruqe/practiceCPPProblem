#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        cin >> ar[i];
    }

    int maxValue = ar[0];
    for (int i = 0; i < a; i++)
    {
        maxValue = max(maxValue, ar[i]);
    }

    cout << maxValue;
    return 0;
}