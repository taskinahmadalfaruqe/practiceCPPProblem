#include <iostream>
using namespace std;
int main()
{
    // SWITCH CASE IS A DIFFERENT VERSION OF IF, ELSE IF, AND ELSE CONDITION
    int A;
    cin >> A;

    // FIND CONDITION WITH OUT SWITCH CASE;
    // if (A == 1)
    // {
    //     cout << "ONE" << endl;
    // }
    // else if (A == 2)
    // {
    //     cout << "TWO" << endl;
    // }
    // else if (A == 3)
    // {
    //     cout << "THREE" << endl;
    // }
    // else
    // {
    //     cout << "N?A" << endl;
    // }


    // SOLVE THIS PROBLEM WITH SWITCH CASE

    // FIND A NUMBER

    switch (A)
    {
    case 1:
        cout << "ONE" << endl;
        break;
    case 2:
        cout << "TWO" << endl;
        break;
    case 3:
        cout << "THREE" << endl;
        break;
    case 4:
        cout << "FOUR" << endl;
        break;
    case 5:
        cout << "FIVE" << endl;
        break;
    default:
        cout << "N/A" << endl;
    }

    // FIND EVEN OR ODD NUMBER
    switch (A % 2)
    {
    case 0:
        cout << "EVEN" << endl;
        break;
    case 1:
        cout << "ODD" << endl;
        break;
    default:
        cout << "N?A" << endl;
    }

}