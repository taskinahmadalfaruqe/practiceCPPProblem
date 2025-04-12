#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int vowel_count = 0;

    for (int i = 0; i < S.length(); i++)
    {

        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
        {
            vowel_count++;
        }
    }

       cout << vowel_count << endl;

    return 0;
}
