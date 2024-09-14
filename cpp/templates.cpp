/*
#include<iostream>
using namespace std;

template <class T>
class vector{
    T * arr;
    int size;
    public:
        vector(int m){
            size = m;
            arr = new T[size];
            for (int i = 0; i < size; i++)
            {
                cout<<"Enter value of vector:"<<endl;
                cin>>arr[i];
            }
            

        }
        T dotProduct(vector &v){
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * arr[i];

            }
            return d;
            
        }
};

int main(){
    vector <float>v1(3);
    vector <float>v2(3);
    cout<<v1.dotProduct(v2)<<endl;
    return 0;
}
*/

//TUTORIAL - 65 and 66 ---> Templates with Multiple Parameters  and default in template

/*
#include<iostream>
using namespace std;


// template <class t1, class t2,.......(COMMA SEPARATED)>
// class name{
// // body
// }


template <class t1 = int, class t2 = float , class t3= char>    // default 
class myclass{
    public:
    t1 data1;
    t2 data2;
    t3 data3;
    myclass(t1 a, t2 b, t3 c){
        data1 = a;
        data2 = b;
        data3 = c;

    }
    void display(){
        cout<<data1<<endl<<data2<<endl<<data3<<endl;
    }
};


int main(){
    myclass <>obj(1,1.4,'c');   //using default in template
    myclass <int , float, int> obj2(1,1.4,10);
    obj.display();
    obj2.display();
    return 0;
}
*/


// TUTORIAL 67 ---- Function Templates
/*
#include<iostream>
using namespace std;

template <class T1, class T2>  
T1 funcavg(T1 a, T2 b){    //Here output depends on T1
    return (a+b);
}

template <class t>
void swapp(t &a, t &b){
    t temp = a;
    a = b;
    b = temp;
}


int main(){
    cout<<funcavg(4.55L,3)<<endl;
    int x= 4, y= 5;
    swapp(x, y);
    cout<<x<<endl<<y;
    return 0;
}
*/


// TUTORIAL 68 ---- Member Function Templates & Overloading Template Functions

#include<iostream>
using namespace std;

template <class t>
class ujjawal{
    public:
        t data;
        ujjawal( t a){
            data = a;
        }
        void display();
};

template <class t>
void ujjawal<t>::display(){
    cout<<data<<endl;
}


void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main(){
    ujjawal <int> uj(5);
    uj.display();
    ujjawal <char> rohan('c');
    rohan.display();
    ujjawal <float> harry(5.89);
    harry.display();

    func(4);  //Exact match takes the highest priority

    return 0;
}