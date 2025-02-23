#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int matrix[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matrix[i][j];
        }
    }

    bool isUnitMatrix = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if ((i == j && matrix[i][j] != 1) ||
                (i != j && matrix[i][j] != 0))
            {
                isUnitMatrix = false;
                break;
            }
        }
        if (!isUnitMatrix)
            break;
    }
    cout << (isUnitMatrix ? "YES" : "NO") << endl;

    return 0;
}