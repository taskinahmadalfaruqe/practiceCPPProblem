#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double CGPA;
};
int main()
{
    Student Taskin;
    Taskin.roll = 10;
    Taskin.CGPA = 3.74;

    // we cant reassign a char directly
    char temp[100] = "Taskin Ahmad Al Faruqe";

    strcpy(Taskin.name, temp);

    cout << Taskin.name;

    return 0;
}