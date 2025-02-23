#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = N - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            cout << A[i] << " ";
        }
    }
    return 0;
}
