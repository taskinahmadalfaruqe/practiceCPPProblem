#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    for (int i = 1; i <= M; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
