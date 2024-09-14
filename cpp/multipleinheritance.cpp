#include<iostream>
using namespace std;

class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }
};


class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int = a;
    }
};

/*
Base1int will be protected
Base2int will be protected

all functions will be public
*/
class Derived : public Base1, public Base2{

    public:
        void show(){
            cout<<"Value of Base1 is "<<base1int<<endl;
            cout<<"Value of Base2 is "<<base2int<<endl;
            cout<<"Value of sum of Base1 and Base2 is "<<base1int+base2int<<endl;
        }
};

int main(){
    Derived der;
    der.set_base1int(10);
    der.set_base2int(20);
    der.show();
    
    return 0;
}