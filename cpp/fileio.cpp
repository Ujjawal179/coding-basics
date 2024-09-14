/*
#include<iostream>
#include<fstream>

using namespace std;

int main(){

    string st = "Harry bhai";
    // Opening files using constructor and writing it
    ofstream out("sample.txt"); // Write operation
    out<<st;
    out.close();

    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample.txt"); // Read operation
    // in>>st2;
    getline(in, st2);  
    cout<<st2;

    return 0;
}
*/


#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string str;
    ifstream txt("sample.txt");
    while (txt.eof() == 0)
    {
        getline(txt, str);
        cout<<str<<endl;
    }
    
    return 0;
}