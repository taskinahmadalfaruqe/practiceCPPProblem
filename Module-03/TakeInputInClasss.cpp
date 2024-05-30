#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[100];
    char Gread[100];
    double CGPA;
};
int main()
{
  // without space
    Student a;
    cin >> a.id >> a.name >> a.Gread >> a.CGPA;
    cout << a.name;

    return 0;
}