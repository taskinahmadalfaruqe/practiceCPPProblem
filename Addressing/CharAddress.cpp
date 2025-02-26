#include <bits/stdc++.h>
using namespace std;

char *getChar()
{
    static char ch = 'A';
    return &ch;
}
int main()
{
    // char *ptr = getChar();
    
    char ch = 'A';
    char *ptr = &ch;
    cout << "Charector Addres: " << &ptr << endl;
    int number = 1;
    cout << "Number Addres: " << &number << endl;

    return 0;
}