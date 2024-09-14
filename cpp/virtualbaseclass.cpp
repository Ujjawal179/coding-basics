#include<iostream>
using namespace std;

/*
student-->test
student-->sports
sports-->result
test-->result
*/

class student{
    protected:
        int roll_no;
    public:
        void set_num(int a){
            roll_no = a;
        }
        void get_num(){
            cout<<"The roll number is "<<roll_no<<endl;
        }
};

class test : virtual public student{
    protected:
    int math, physics;
    public:
    void set_marks(int a,int b){
        math = a;
        physics = b;
    }
    void get_marks(){
        cout<<"Result is "<<endl
            <<"Maths: "<<math<<endl
            <<"Physics: "<<physics<<endl;
    }
};

class sports:public virtual student{
    protected:
    int score;
    public:
    void set_score(int s){
        score = s;
    }
    void get_score(){
        cout<<"Sports: "<<score<<endl;
    }
};

class result: public test, public sports{
    int total;
    public:
        void display(){
            total = math + physics + score;
            get_num();
            get_marks();
            get_score();
            cout<<"Your total score is "<<total<<endl;
        }
};

int main(){
    result res;
    res.set_num(1);
    res.set_marks(35, 36);
    res.set_score(19);
    res.display();
    return 0;
}