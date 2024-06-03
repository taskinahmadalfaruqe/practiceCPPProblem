#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char section;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student st[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].section >> st[i].id;
    }

    for (int i = 0; i < n / 2; ++i)
    {
        swap(st[i].section, st[n - i - 1].section);
    }
    for (int i = 0; i < n; ++i)
    {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].section << " " << st[i].id << endl;
    }
    return 0;
}
