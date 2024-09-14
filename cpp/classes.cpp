// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions

/*#include<iostream>
using namespace std;

class Employee{
    private:
        int sal;
        char adress;
    public:
        int age, id ;
        char name;
        void setdata(int sal1, char adress1,int age1,int id1,char name1);
        void getdata();
};

void Employee::setdata(int sal1, char adress1,int age1,int id1,char name1){
    sal = sal1;
    adress = adress1;
    name = name1;
    id = id1;
    age = age1;
}

void Employee::getdata(){
    cout<<"Id is "<<id<<endl;
    cout<<"Name is "<<name<<endl;
    cout<<"Age is "<<age<<endl;
    cout<<"Adress is "<<adress<<endl;
    cout<<"Salary is "<<sal<<endl;
}

int main(){
    Employee sona;
    sona.setdata(600000, 'adress', 16 , 01 ,'Sona');
    sona.getdata();
    return 0;
}  */

// tutorial 22

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;           // by default private
    void chk_bin(void); // by default private
public:
    void read(void);
    void display(void);
    void comple(void);
};

void binary::read()
{
    cout << "Enter a Binary no. :\n";
    cin >> s;
}

void binary::chk_bin()
{
    int i = 0;
    while (i < s.length())
    {
        if (s.at(i) == '1' || s.at(i) == '0')
        {
            i++;
            continue;
        }
        cout << "Incorrect binary format";
        exit(0);
    }
}

void binary::comple()
{
    chk_bin(); // Nesting of function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
    }
}

void binary::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();           //Nesting of function. This function is made private later so we cant use it here
    b.display();
    b.comple();
    b.display();
    return 0;
}