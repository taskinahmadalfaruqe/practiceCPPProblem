#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    cout << "Sum of prime numbers from 1 to 100 is: " << sum << endl;
    return 0;
}