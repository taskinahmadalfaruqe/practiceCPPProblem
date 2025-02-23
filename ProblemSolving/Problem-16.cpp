#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    int capitalCount = 0, smallCount = 0, spaceCount = 0;

    for (char c : S)
    {
        if ('A' <= c && c <= 'Z')
        {
            capitalCount++;
        }
        else if ('a' <= c && c <= 'z')
        {
            smallCount++;
        }
        else if (c == ' ')
        {
            spaceCount++;
        }
    }

    cout << "Capital - " << capitalCount << endl;
    cout << "Small - " << smallCount << endl;
    cout << "Spaces - " << spaceCount << endl;

    return 0;
}
