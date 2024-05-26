#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int id1, id2, id3;
        string name1, name2, name3;
        char section1, section2, section3;
        int marks1, marks2, marks3;

        cin >> id1 >> name1 >> section1 >> marks1;
        cin >> id2 >> name2 >> section2 >> marks2;
        cin >> id3 >> name3 >> section3 >> marks3;

        if (marks1 >= marks2 && marks1 >= marks3)
        {
            cout << id1 << " " << name1 << " " << section1 << " " << marks1 << endl;
        }
        else if (marks2 >= marks1 && marks2 >= marks3)
        {
            cout << id2 << " " << name2 << " " << section2 << " " << marks2 << endl;
        }
        else
        {
            cout << id3 << " " << name3 << " " << section3 << " " << marks3 << endl;
        }
    }

    return 0;
}
