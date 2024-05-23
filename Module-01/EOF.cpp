#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int A, B;

    // EOF IN C LANGUAGE
    
    // while (scanf("%d%d", &A, &B) != EOF)
    // {
    //     printf("%d %d\n", A, B);
    // }


    // EOF IS NOT REQUIRED IN C++
    while (cin >> A >> B)
    {
        cout << A << ' ' << B << endl;
    }
}