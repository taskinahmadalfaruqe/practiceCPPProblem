#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    while (a--)
    {
        int S, A, B, C;
        cin >> S >> A >> B >> C;
        int missingNumber = S - (A + B + C);
        cout << missingNumber << endl;
    }

    return 0;
}
