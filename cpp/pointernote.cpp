/*#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types
    int a=3;
    int* b;
    b = &a;

    // & ---> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 

    return 0;
}
*/



// TUTORIAL 50 - new and delete Keywords
/*
#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int* ptr = &a;
    int** ptr2 = &ptr;
    // cout<<*ptr<<endl;
    // cout<<*ptr2<<endl;

    int * p = new int(4);
    // cout<<*p<<endl;

    int *arr = new int[3];   // new keyword
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    // delete[] arr;   //delete keyword
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}
*/

// TUTORIAL 51 - Pointers to Objects and Arrow Operator
/*
#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex *ptr = new Complex;
    // (*ptr).setData(1, 54); is exactly same as
    ptr->setData(1, 54);
    // (*ptr).getData(); is as good as 
    ptr->getData(); 


    // Array of Objects
    Complex *ptr1 = new Complex[4]; 
    ptr1->setData(1, 4); 
    ptr1->getData();
    
    return 0;
}
*/


// TUTORIAL - 52   Array of Objects Using Pointers
/*
#include<iostream>
using namespace std;

class shop{
    int id, price;
    public:
        void set_data(int a, int b){
            id = a;
            price = b;
        }
        void get_data(){
            cout<<"Price of Id "<<id<<" item is "<<price<<endl;
        }
};

int main(){
    int size= 3;
    // int * ptr = new int [34];
    shop *ptr = new shop[size];
    shop *ptrtemp = ptr;
    for (int i = 0; i < size; i++)
    {
        int p, q;
        cout<<"Enter ID:"<<endl;
        cin>>p;
        cout<<"Enter Price:"<<endl;
        cin>>q;
        ptr->set_data(p,q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        ptrtemp->get_data();
        ptrtemp++;
    }
    return 0;
}
*/

// TUTORIAL - 52   this Pointer
/*
#include<iostream>
using namespace std;
class A{
    int a;
    public:
        // void setData(int a){
        //     this->a = a;
        // }

        A& set_data(int a){
            this->a = a;
            return *this;
        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    A a;
    // a.setData(4);
    // a.getData();
    a.set_data(4).getData();
    return 0;
}
*/


// TUTORIAL 55 - Pointers to Derived Classes
/*
#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived;
            void display(){
                cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};
int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived= 134; // Will throw an error
    base_class_pointer->display();

    base_class_pointer->var_derived = 3400; 
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}
*/