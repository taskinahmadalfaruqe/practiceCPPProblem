#include <iostream>

using namespace std;

int main()
{
    string S;
    cin >> S;

    int capitalCount = 0, smallCount = 0;

    for (char ch : S)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            capitalCount++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            smallCount++;
        }
    }

    cout << capitalCount << " " << smallCount << endl;

    return 0;
}
