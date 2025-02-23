#include <iostream>

using namespace std;

int main()
{
    int N, X, V;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    cin >> X >> V;

    A[X] = V;

    for (int i = N - 1; i >= 0; i--)
    {
        cout << A[i] << " ";
    }

    return 0;
}
