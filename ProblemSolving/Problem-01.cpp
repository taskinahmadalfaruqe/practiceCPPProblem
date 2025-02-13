#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, i;
    cin >> a;
    for (i = 21; i <= a; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            cout << i <<endl;
        }
    }
    return 0;
}
