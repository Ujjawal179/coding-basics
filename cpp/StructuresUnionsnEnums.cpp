#include<iostream>
using namespace std;

// struct employee
// {
//     int Eid;
//     char favc;
//     int salary;
// };

typedef struct employee
{
    int Eid;
    char favc;
    float salary;
}keyword;


union money
{
    int amt; //amout of money
    char name;  // name of currency
    float div;  // division of currency in other currency
};



int main(){
    // struct employee harry;
    keyword harry;
    harry.salary = 1200000;
    harry.Eid = 1;
    harry.favc = 'h';

    union money m1;
    m1.amt = 100;
    m1.name = 'e';
    
    // cout<< m1.name<<endl;
    // cout<< m1.amt;    // gives garbage value as union takes only one value

// Enums are user-defined types which consist of named constants. Enums are used to make the program more readable.
    enum meal{breakfast, lunch , dinner};
    meal meal1  =  lunch;
    cout<<meal1<<endl;
    cout<<(meal1==2);


    return 0;
}