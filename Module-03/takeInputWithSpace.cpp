#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a, b;
    // cin can not take any space. thats why we use cin.getline();
    cin.getline(a.name, 100);
    cin >> a.roll >> a.cgpa;

    // when we take another input hare was a inter thats why we find garbage value. for solve this problem we can use getchar() thats take a single input. but nothing return.
    getchar();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;
    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;
    return 0;
}