#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_num;

public:
    Student(){};
    Student(int);
    void get_rollnum();
};

Student::Student(int r)
{
    roll_num = r;
}

void Student::get_rollnum()
{
    cout << roll_num << endl;
}

class Exam : public Student
{
protected:
    int math;
    int physics;

public:
    void set_marks(int, int);
    void get_marks();
};

void Exam::set_marks(int m, int p)
{
    math = m;
    physics = p;
}

void Exam::get_marks()
{
    cout << "The marks in maths is " << math << endl;
    cout << "The marks in physics is " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    Result(int, int);
    void display()
    {
        cout << "Your percentage is " << percentage << endl;
    }
};

Result::Result(int m1, int p1)
{
    math = m1;
    physics = p1;
    percentage = (math + physics) / 2;
}

int main()
{
    /*
    Notes:
    If we are inheriting B from A and C from A
    1. A is Base for B and B is Base for C
    2.A-->B-->C is called Inheritance Path

    */

    Result R(20, 10);
    R.get_marks()
        R.display();
    return 0;
}