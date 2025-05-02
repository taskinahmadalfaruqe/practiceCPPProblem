#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a;
    cin>>a;
    float productCost=a*17.5;
    float interest=(productCost*18)/100;
    float sell=productCost+interest;
    cout << sell;
    return 0;
}