#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1000; // Max possible size
int matrix[MAX_N][MAX_N];
int prefix[MAX_N + 1][MAX_N + 1];

// Function to compute prefix sum using a 2D array
void computePrefixSum(int N, int M)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            prefix[i][j] = matrix[i - 1][j - 1] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }
}

// Function to get the sum of a submatrix using prefix sum
int getSubmatrixSum(int x1, int y1, int x2, int y2)
{
    return prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];
}

// Function to find the maximum sum of a submatrix of at least KxK
int maxSubmatrixSum(int N, int M, int K)
{
    computePrefixSum(N, M);
    int maxSum = INT_MIN;

    // Iterate over all possible KxK submatrices
    for (int i = K; i <= N; i++)
    {
        for (int j = K; j <= M; j++)
        {
            int sum = getSubmatrixSum(i - K + 1, j - K + 1, i, j);
            maxSum = max(maxSum, sum);
        }
    }

    return maxSum;
}

// Main function
int main()
{
    int N, M, K;
    cin >> N >> M >> K;

    // Read matrix input
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> matrix[i][j];

    // Compute and print maximum sum
    cout << maxSubmatrixSum(N, M, K) << endl;

    return 0;
}
