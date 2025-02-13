#include <iostream>
using namespace std;

int main()
{
    long long N;

    cin >> N;

    if (N > 1000)
    {

        cout << "I will buy Punjabi" << endl;
        N -= 1000;

        if (N >= 500)
        {
            cout << "I will buy new shoes" << endl;
            cout << "Alisa will buy new shoes" << endl;
        }
    }
    else
    {
        cout << "Bad luck!" << endl;
    }

    return 0;
}
