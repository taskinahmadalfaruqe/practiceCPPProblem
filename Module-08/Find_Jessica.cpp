#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin, a);

    stringstream ss(a);
    string word;
    bool found = false;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
