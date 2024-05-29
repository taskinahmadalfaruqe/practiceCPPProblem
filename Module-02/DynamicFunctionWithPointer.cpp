#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a = new int;
    *a = 500;
    // Return Dynamic Int Address
    return a;
    // when i return address of static array &a i get null in output. because address of a automatic remove the static memory address. when i use it must insure fun function have 2 pointer(**);
    // return &a;
}
int main()
{
    int *a = fun();
    cout << *a << endl;
    return 0;
}