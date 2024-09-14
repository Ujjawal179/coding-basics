// /*TUTORIAL 37

// Derived Class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/etc...
// }


#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};


int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}
// */

// /*
// TUTORIAL 38 SINGLE INHERITANCE

#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base :: setdata(void){
    data1 = 10;
    data2 = 20;
}

int Base :: getdata1(void){
    return data1;
}
int Base :: getdata2(void){
    return data2;
}

class Derived : public Base  //class is being derived publicaly
{
    int data3;
    public:
        void process();
        void display();

};

void Derived::process(){
    data3  = data2 * getdata1();

}
void Derived::display(){
    cout<<"Value of data 1 is "<<getdata1()<<endl;
    cout<<"Value of data 2 is "<<data2<<endl;
    cout<<"Value of data 3 is "<<data3<<endl;
}

int main()
{
    Derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}

// */



// TUTORIAL 38   Protected Access Modifier

#include<iostream>
using namespace std;

class Base{
    protected:      //Can be inherited but act as private
    int a;
    private:         // cant be inherited
    int b = 0;
};

/*
                            Public Derivation          	Private Derivation    	    Protected Derivation
Private members             Not Inherited              	Not Inherited              	Not Inherited              
Protected members           Protected                   Private                     Protected                    
Public members           	Public                    	Private                     Protected                    
*/


class Derived: protected Base{

};

int main(){
    Derived d;
    // cout<<d.a<<endl;   // Will not work as a is protected
    return 0;
}
