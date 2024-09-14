#include<iostream>
#include<cmath>
using namespace std;

class siplecalculator{
    protected:
        int a, b;
    public:
        void set_num(){
            cout<<"Give value of a number: "<<endl;
            cin>>a;
            cout<<"Give value of another number: "<<endl;
            cin>>b;
        }
        void get_output(){
            cout<<"Sum of these number is "<<a+b<<endl;
            cout<<"Substraction of these number is "<<a-b<<endl;
            cout<<"Multiplication of these number is "<<a*b<<endl;
            cout<<"Division of these number is "<<a/b<<endl;
        }


};

class scientificcalculator{
    protected:
        int a, b;
    public:
        void set_num(){
            cout<<"Give value of a number: "<<endl;
            cin>>a;
            cout<<"Give value of another number: "<<endl;
            cin>>b;
        }
        void get_output(){
            cout<<"Cos of number is "<<sin(a)<<endl;
            cout<<"Sin of number is "<<cos(a)<<endl;
            cout<<"Tan of number is "<<tan(a)<<endl;
            cout<<"Exponential of number is "<<exp(a)<<endl;
        }
};

class hybridcalculator: public siplecalculator, public scientificcalculator{
    public:
        void set_num(){
            scientificcalculator::set_num();
        }
        void get_output(){
            siplecalculator::get_output();
            scientificcalculator::get_output();
        }

};

int main(){
    hybridcalculator cal;
    cal.set_num();
    cal.get_output();
    return 0;
}