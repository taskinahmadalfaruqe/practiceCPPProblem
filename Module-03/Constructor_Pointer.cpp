#include <bits/stdc++.h>
using namespace std;
class TaskinClass
{
public:
    char name[200];
    int roll;
    int className;
    double gpa;

    // can't use same variable name for remove confusing variable name.
    // TaskinClass(const char *na, int r, int cln, double gp)
    // {
    //     strcpy(name, na);
    //     roll = r;
    //     className = cln;
    //     gpa = gp;
    // }

    // if we use same variable name in the constructor then we must be use this pointer
    // this have no value, but taskinClass Have value.
    // thats why 1st dereference the taskinClass then access the taskinClass object value.
    TaskinClass(const char *name, int roll, int className, double gpa)
    {
        strcpy((*this).name, name);
        (*this).roll = roll;
        (*this).className = className;
        (*this).gpa = gpa;
    }
};
int main()
{
    TaskinClass a("Taskin Ahmad", 1, 5, 3.5);
    cout << a.name << " " << a.roll << " " << a.className << " " << a.gpa;
    return 0;
}