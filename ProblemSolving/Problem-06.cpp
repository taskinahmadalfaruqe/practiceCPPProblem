#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int counN = 0;
    int counM = 0;
    int counD = 0;
    while (a--)
    {
        int N, M;
        cin >> N >> M;
        if (N > M)
        {
            counN++;
        }
        else if (N == M)
        {
            counD++;
        }

        else
        {
            counM++;
        }
    }
    if (counN > counM)
    {
        cout << "Tiger" << endl;
    }
    else if (counM > counN)
    {
        cout << "Pathan" << endl;
    }
    else
    {
        cout << "Draw";
    }

    return 0;
}
