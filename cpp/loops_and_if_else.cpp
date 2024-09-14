// TUTORIAL 9 - IF ELSE , SWITCH

// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout<<"Enter your age:\n";
//     cin>>age;

    // if else ladder
    // if (age>0)
    // {
    //     if (age<13)
    //     {
    //         cout<<"You are a kid";
    //     }
    //     else if (age<18)
    //     {
    //         cout<<"You are a teenager";
    //     }
    //     else{
    //         cout<<"You are an adult";
    //     }
        
        
    // }
    // else{
    //     cout<<"Enter a valid age.";
    // }
    
    // return 0;

    // Switch 
//     switch (age)
//     {
//     case 6:
//         cout<<"You are a kid";
//         break;
//     case 14:
//         cout<<"You are a teenager";
//         break;
//     case 20:
//         cout<<"You are an adult";
//         break;
    
//     default:
//         cout<<"Not a case";
//         break;
//     }
// }




// For, While and do-while loops in C++

#include<iostream>
using namespace std;

int main()
{
    // for (int i = 1; i <= 40; ++i)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }



    /*While loop
    Syntax:
    while(condition)
    {
        C++ statements;
    }*/

    
    int i = 1;
    // while (true)
    // {
    //     cout<<i;
    // }

    /* do While loop in C++*/
        // Syntax:
        // do
        // {
        //     C++ statements;
        // }while(condition);
    
    do
    {
        cout<<41-i<<endl;
        i++;
    } while (i<41);
    
    
    return 0;
}