#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:
    string Name;
    int cls;
    char section;
    int id;
    Student(string name, int cls, char section, int id)
    {
        this->Name = name;
        this->cls = cls;
        this->section = section;
        this->id = id;
    }

    // Function to reverse the section
    void reverseSection()
    {
        if (section >= 'A' && section <= 'Z')
            section = 'Z' - (section - 'A');
        else if (section >= 'a' && section <= 'z')
            section = 'z' - (section - 'a');
    }

    // Function to print student's data
    void print()
    {
        cout << Name << " " << cls << " " << section << " " << id << endl;
    }
};

int main()
{
    int num_students;
    cin >> num_students;

    vector<Student> students;
    for (int i = 0; i < num_students; ++i)
    {
        string name;
        int cls, id;
        char section;
        cin >> name >> cls >> section >> id;
        students.push_back(Student(name, cls, section, id));
    }

    // Reverse the sections of the students
    for (int i = 0; i < num_students / 2; ++i)
    {
        swap(students[i].section, students[num_students - 1 - i].section);
        students[i].reverseSection();
        students[num_students - 1 - i].reverseSection();
    }

    // Print all students' data
    for (const auto &student : students)
    {
        // student.print();
    }

    return 0;
}
