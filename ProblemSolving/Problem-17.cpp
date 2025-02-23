#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int ages[N];

    for (int i = 0; i < N; i++)
    {
        cin >> ages[i];
    }

    sort(ages, ages + N);

    if (N % 2 == 1)
    {

        cout << ages[N / 2] << endl;
    }
    else
    {
        cout << ages[N / 2 - 1] << " " << ages[N / 2] << endl;
    }

    return 0;
}
