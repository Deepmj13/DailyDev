#include <iostream>
using namespace std;

class Student
{
public:
    int no;
    string name;

    Student(int n, string s)
    {
        name = s;
        no = n;

        cout << "Constructor is Called !";
    }

    void show()
    {
        cout << "No :" << no << "Name :" name;
    }

    ~Student()
    {
        cout << "Destructor is called !";
    }
};

int main()
{

    Student s(1, "Deep");

    s.show();

    return 1;
}