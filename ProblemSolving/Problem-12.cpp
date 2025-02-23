#include <iostream>

using namespace std;

int main()
{
    int N, X, count = 0;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    cin >> X;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == X)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
