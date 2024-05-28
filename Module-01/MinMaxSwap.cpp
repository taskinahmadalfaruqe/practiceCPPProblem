#include <iostream>
#include <algorithm>
using namespace std;
void my_Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b, c;
    // input variable;
    cin >> a >> b >> c;

    // min value
    int d = (a < b) ? a : b;

    // print min with build function
    int e = min(a, b);

    // print min  with more then three variable build function
    int f = min({a, b, c});

    // max value
    int g = (a > b) ? a : b;

    // print max value with build function
    int h = max(a, b);

    // print max value  with more then three variable build function
    int i = max({a, b, c});



    // value swap with function
    my_Swap(&a, &b);

    // my swap with build in function
    swap(b, c);
    

    cout << b << " " << c;
}