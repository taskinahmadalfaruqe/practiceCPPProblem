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
            if (i == j)
            {

                if (matrix[i][j] != 1)
                {
                    isUnitMatrix = false;
                    break;
                }
            }
            else
            {

                if (matrix[i][j] != 0)
                {
                    isUnitMatrix = false;
                    break;
                }
            }
        }
        if (!isUnitMatrix)
        {
            break;
        }
    }

    if (isUnitMatrix)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}