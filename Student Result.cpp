#include <iostream>
using namespace std;

class Student
{
private:
    string studentname;
    int marks;

public:
    void set_student_data(string name, int m)
    {
        studentname = name;

        if (m >= 0 && m <= 100)
        {
            marks = m;
        }
        else
        {
            marks = 0;
        }
    }

    bool is_pass()
    {
        return marks >= 40;
    }

    void displayresult()
    {
        cout << "Student Name: " << studentname << endl;
        cout << "Marks: " << marks << endl;
        cout << "Result: " << (is_pass() ? "Pass" : "Fail") << endl;
    }
};

int main()
{
    Student student1;

    student1.set_student_data("Asha", 55);
    student1.displayresult();

    return 0;
}