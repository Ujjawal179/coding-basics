/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.*/

// /* TUTORIAL 26
#include<iostream>
using namespace std;

// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i
class Complex{
    int a, b;
    friend Complex sumComplex(Complex o1, Complex o2);
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        // Below line means that non member - sumComplex funtion is allowed to do anything with my private members
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b+o2.b))
    ;
    return o3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}
// */




// /*TUTORIAL 27

#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumreal(Complex, Complex);
    int sumimag(Complex, Complex);
};

class Complex
{
    int a, b;
    // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    // Aliter: Declaring the entire calculator class as friend
    friend class Calculator;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Below line means that non member - sumComplex funtion is allowed to do anything with my private members
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator::sumreal(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumimag(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex n1, n2;
    n1.setNumber(2, 4);
    n2.setNumber(4, 6);
    Calculator calc;
    int res = calc.sumreal(n1, n2);
    cout<<"The sum of real parts of n1 and n2 is "<<res<<endl;
    int imagres = calc.sumimag(n1, n2);
    cout<<"The sum of imaginary parts of n1 and n2 is "<<imagres<<endl;
    return 0;
}


// Practice

#include<iostream>
using namespace std;


class c2; 

class c1
{
private:
    int val1;
public:
    void setval(int a){
        val1 = a;
    }
    void getval(){
        cout<<"Value of val 1 is "<<val1<<endl;
    }
    friend void exchange(c1 &,c2 &);
};

class c2
{
private:
    int val2;
public:
    void setval(int a){
        val2 = a;
    }
    void getval(){
        cout<<"Value of val 2 is "<<val2<<endl;
    }
    friend void exchange(c1 &,c2 &);
};

void exchange(c1 &(o1), c2 &(o2)){
        int temp = o1.val1;
        o1.val1 = o2.val2;
        o2.val2 = temp;
}



int main(){
    c1 o1;
    c2 o2;
    o1.setval(5);
    o2.setval(9);
    exchange(o1, o2);
    cout<<"Value of o1 after replacing is " ;
    o1.getval();
    cout<<"Value of o2 after replacing is " ;
    o2.getval();
    
    return 0;
}
