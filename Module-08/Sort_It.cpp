#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int math_mark;
    int english_mark;
    int totalMarks;
};
bool cmp(Student a, Student b)
{
    if (a.totalMarks > b.totalMarks)
        return true;
    else if (a.totalMarks < b.totalMarks)
        return false;
    else
    {
        if (a.id < b.id)
            return true;
        else
            return false;
    }
};
int main()
{
    int n;
    cin >> n;
    Student st[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> st[i].name >> st[i].cls >> st[i].sec >> st[i].id >> st[i].math_mark >> st[i].english_mark;
        st[i].totalMarks = st[i].math_mark + st[i].english_mark;
    }
    sort(st, st + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << st[i].name << " " << st[i].cls << " " << st[i].sec << " " << st[i].id << " " << st[i].math_mark << " " << st[i].english_mark << endl;
    }

    return 0;
};