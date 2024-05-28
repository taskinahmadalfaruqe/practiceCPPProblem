#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main()
{
    // // array input and print
    // int a;
    // cin >> a;

    // // Declare A Array In Cpp
    // int ar[a];

    // // Input A Array in CPP
    // for (int i = 0; i < a; i++)
    // {
    //     cin >> ar[i];
    // }

    // // Print A Array in CPP
    // for (int i = 0; i < a; i++)
    // {
    //     cout << ar[i] << endl;
    // }

    // Input A String In Cpp
    int String_Size;
    cin >> String_Size;

    char StringA[String_Size];
    // cin >> StringA;
    // cout << StringA;

    // Input A String With Space In C Program;
    // fgets(StringA, 100, stdin);

    // Remove Space OR Enter In CPP.
    // Its take enter input just balance the input.
    getchar();

    // Input A String With Space In CPP Program;
    cin.getline(StringA, 100);

    cout << String_Size << endl << StringA;
}