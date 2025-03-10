#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    const int RMB = 18;
    double priceOneUnit = a * RMB;
    double countPecentence = (priceOneUnit * b) / 100;
    double productPriceWithInterest = priceOneUnit + countPecentence;
    cout << "Singel Product Price: " << fixed << setprecision(2) << priceOneUnit << endl;
    cout << "Interest Product Price: " << fixed << setprecision(2) << productPriceWithInterest;
    return 0;
}