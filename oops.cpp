#include <iostream>

using namespace std;

class Student
{
public:
    int no;
    string name;

    void display()
    {
        cout << "No" << no << "\n"
             << "Name :" << name;
    }
};

int main()
{
    Student s;
    s.name = "Deep";
    s.no = 1;

    s.display();

    return 0;
}