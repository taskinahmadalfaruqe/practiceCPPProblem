#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col, sum = 0;

    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;

    int matrix[row][col];

    cout << "Enter elements of matrix: " << endl;

    // input metrix element
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // sum value of matrices
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += matrix[i][j];
        }
    }

    int totalElement = row * col;
    double Average = double(sum) / totalElement;
    cout << "Average of the Mettrix is: " << fixed << setprecision(2) << Average << endl;
    return 0;
}
