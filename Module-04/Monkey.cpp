// #include <iostream>
// #include <sstream>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     string line;
//     while (getline(cin, line))
//     {
//         line.erase(remove(line.begin(), line.end(), ' '), line.end());
//         sort(line.begin(), line.end());
//         cout << line << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char line[100001];

    while (cin.getline(line, 100001))
    {
        char NewLine[100001];
        int j = 0;
        int length = strlen(line);

        for (int i = 0; i < length; ++i)
        {
            if (line[i] != ' ')
            {
                NewLine[j++] = line[i];
            }
        }
        NewLine[j] = '\0';
        int lineLength = strlen(NewLine);
        sort(NewLine, NewLine + lineLength);
        cout << NewLine << endl;
    }
    return 0;
}
