#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int className;
    int roll;
    double gpa;
    Student(int className, int roll, double gpa)
    {
        this->className = className;
        this->roll = roll;
        this->gpa = gpa;

    }
};
Student fun()
{
    Student karim = Student(9, 10, 3.5);
    return karim;
};
int main()
{
    Student ans = fun();
    cout << ans.className << " " << ans.gpa;
    return 0;
}