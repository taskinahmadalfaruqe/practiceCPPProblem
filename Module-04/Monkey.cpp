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
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string line;
    while (getline(cin, line))
    {
        string result;
        for (char c : line)
        {
            if (c != ' ')
            {
                result += c;
            }
        }
        sort(result.begin(), result.end());
        cout << result << endl;
    }

    return 0;
}
