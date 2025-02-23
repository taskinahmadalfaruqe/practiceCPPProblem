#include <iostream>

using namespace std;

int main()
{
    string S;
    cin >> S;

    int freq[26] = {0};
    for (char ch : S)
    {
        freq[ch - 'a']++;
    }
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        cout << ch << " - " << freq[ch - 'a'] << endl;
    }
    return 0;
}

