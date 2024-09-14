// #include<iostream>
// using namespace std;

// int main(){
//     int a = 7;
//     cout<<"Hello World"<<a<<"hello";
//     return 0;
// }



// There are two types of header files:
// 1. System header files: It comes with the compiler
// 2. User defined header files: It is written by the programmer
// #include "this.h" //--> This will produce an error if this.h is no present in the current directory



// #include<iostream>
// using namespace std;

// int main()
// {
//     int num1 , num2;
//     cout<<"Enter num1:\n"/*<< is insertion operatoe*/;
//     cin>>num1/*>> is extraction operator*/;

//     cout<<"Enter num2:"/*<< is insertion operatoe*/;
//     cin>>num2/*>> is extraction operator*/;

//     cout<<"Sum is "<<num1+num2;
//     return 0;
// }


// #include<iostream> 
// using namespace std;
// int c = 45;

// int main(){
    
    // *************Build in Data types****************
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c;

    // ************* Float, double and long double Literals****************
    // float d=34.4F;
    // long double e = 34.4L; 
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;  

    // *************Reference Variables**************** 
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // *************Typecasting**************** 
//     int a = 45;   
//     float b = 45.46;
//     cout<<"The value of a is "<<(float)a<<endl;
//     cout<<"The value of a is "<<float(a)<<endl;

//     cout<<"The value of b is "<<(int)b<<endl;
//     cout<<"The value of b is "<<int(b)<<endl;
//     int c = int(b);

//     cout<<"The expression is "<<a + b<<endl;
//     cout<<"The expression is "<<a + int(b)<<endl;
//     cout<<"The expression is "<<a + (int)b<<endl;


//     return 0;
// }


// #include<iostream>
// #include<iomanip>

// using namespace std;

// int main(){
    // int a = 34; 
    // cout<<"The value of a was: "<<a;
    // a = 45; 
    // cout<<"The value of a is: "<<a;
    // Constants in C++
    // const int a = 3;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45; // You will get an error because a is a constant
    // cout<<"The value of a is: "<<a<<endl;

    // Manipulators in C++
    // int a =3, b=78, c=1233;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(9)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;


    // Operator Precedence
    // int a =3, b=4;
    // int c = (a*5)+b;
    // int c = ((((a*5)+b)-45)+87);
    // cout<<c;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     // What is a pointer? ----> Data type which holds the address of other data types
//     int a = 3;
//     int* b = &a;
//     cout<<"Adress of a is "<<&a<<endl;
//     cout<<"Adress of a is "<<&b<<endl;

//     cout<<"Value at b is "<<*b<<endl;

//     int** c = &b;
//     cout<<"Adress of b is "<<c<<endl;
//     cout<<"Value at c is "<<*c;

//     return 0;
// }


// ARRAY

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
    // int math[3] = {21,4,34};
    // int english[3];
    // english[0] = 1;
    // english[1] = 2;
    // english[2] = 3;
    // cout<<"Array math is:\n"<<endl;
    // cout<<math[0]<<endl;
    // cout<<math[1]<<endl;
    // cout<<math[2]<<endl;
    // cout<<"Array english is:\n"<<endl;
    // cout<<english[0]<<endl;
    // cout<<english[1]<<endl;
    // cout<<english[2]<<endl;


    // int expo[5];
    // int i = 0;
    // cout<<"Exponents of 2 are:\n";
    // for (int i = 0; i < 5; i++)
    // {
    //     expo[i] = pow(2,i);
    //     cout<<expo[i]<<endl;
    // }
    // do
    // {
        // expo[i] = pow(2,i);
        // cout<<expo[i]<<endl;
        // i++;
    // } while (i<5);
    // while (i<5)
    // {
    //     expo[i] = pow(2,i);
    //     cout<<expo[i]<<endl;
    //     i++;
    // }
    
//     cout<<*(expo+4);
    
//     return 0;
// }


// Recursions & Recursive Functions - Fibbonachi series
// #include<iostream>
// using namespace std;

// int fibs(int n){
//     int ser[n];
//     ser[0] = 1 , ser[1] = 1;
//     int i = 2;
//     while (i<=n)
//     {
//         ser[i] = ser[i-1] + ser[i-2];
//         i++;
//     }

//     return ser[n];
    
// } 


// int fibs2(int n){
//     if (n<2)
//     {
//         return 1;
//     }
//     return (fibs2(n-1)+fibs2(n-2));
// }


// int main(){
//     // int n;
//     // cout<<"Enter the number:\n";
//     // cin>>n;
//     cout<<"number at this position is : "<<fibs2(6);
//     return 0;
// }



// function overloading
#include<iostream>
using namespace std;

int sum(int a , int b, int c){

    return a+b+c;
}


int main(){
    cout<<"sum of 3, 4 , 5 is "<<sum(3,4,5)<<endl;
    cout<<"sum of 3, 5 is "<<sum(3,5)<<endl;
    return 0;
}
int sum(int a , int b){
    return a+b;
}
