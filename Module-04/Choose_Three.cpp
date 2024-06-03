#include <bits/stdc++.h>
using namespace std;

const char *is_possible(int arr[], int n, int S)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if (arr[i] + arr[j] + arr[k] == S)
                {
                    return "YES";
                }
            }
        }
    }
    return "NO";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, S;
        cin >> N >> S;
        int A[N];
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        cout << is_possible(A, N, S) << endl;
    }
    return 0;
}
