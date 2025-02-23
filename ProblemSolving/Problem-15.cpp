#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int matrix[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < M; j++)
    {
        cout << matrix[N - 1][j] << " ";
    }
    cout << endl;

    for (int i = 0; i < N; i++)
    {
        cout << matrix[i][M - 1] << " ";
    }
    cout << endl;

    return 0;
}
