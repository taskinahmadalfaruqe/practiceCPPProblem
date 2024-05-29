#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar;
    cin >> ar;
    int array[ar];
    for (int i = 0; i < ar; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < ar-1; i++)
    {
        for (int j = 0; j < ar-i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                swap(array[j], array[j+1]);
            }
        }
    }
    for (int i = 0; i < ar; i++)
    {
        cout << array[i]<<" ";
    }

    return 0;
}