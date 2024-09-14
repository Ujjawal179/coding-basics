// TUTORIAL 56
/*
#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
        cout << "Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    // obj_derived.var_derived= 3;
    base_class_pointer->display();
    return 0;
}
*/



// TUTORIAL 57
/*
#include<iostream>
#include<cstring>
using namespace std;

class cwh{
    protected:
        string title;
        float rating;
    public:
        cwh(string s , float r){
            title = s;
            rating = r;

        }
        void virtual display(){}

};

class cwhvideo: public cwh{
    int videolength;
    public:
            cwhvideo(string s, float r, int vl):cwh(s, r)
            {
                videolength = vl;

            }
            void display(){
                cout<<"Title of this Video is "<<title<<endl;
                cout<<"Rating :"<<rating<<endl;
                cout<<"Video Duration :"<<videolength<<endl;
            }
};
class cwhtext : public cwh{
    int words;
    public:
        cwhtext(string s , float r, int w):cwh(s,r){
            words = w;
        }
        void display(){
            cout<<"Title of this text is "<<title<<endl;
            cout<<"Rating :"<<rating<<endl;
            cout<<"Word Count :"<<words<<endl;

        }
};

int main(){
    string title;
    float rating;
    int words, vlen;
    title = "C++ Tutorial";
    rating = 4.5;
    vlen = 14;
    words = 50;
    cwhvideo video(title, rating, vlen);
    // video.display();
    cwhtext text(title,rating, words);
    // text.display();

    cwh* tut[2];
    tut[0] = &video;
    tut[1] = &text;
    tut[0]->display();
    tut[1]->display();

    return 0;
}
*/



// TUTORIAL 58

#include<iostream>
#include<cstring>
using namespace std;

class cwh{
    protected:
        string title;
        float rating;
    public:
        cwh(string s , float r){
            title = s;
            rating = r;

        }
        // Pure virtual function
        void virtual display() = 0;   //do-nothing function ---> Pure Virtual Function

};

class cwhvideo: public cwh{
    int videolength;
    public:
            cwhvideo(string s, float r, int vl):cwh(s, r)
            {
                videolength = vl;

            }
            void display(){
                cout<<"Title of this Video is "<<title<<endl;
                cout<<"Rating :"<<rating<<endl;
                cout<<"Video Duration :"<<videolength<<endl;
            }
};
class cwhtext : public cwh{
    int words;
    public:
        cwhtext(string s , float r, int w):cwh(s,r){
            words = w;
        }
        void display(){
            cout<<"Title of this text is "<<title<<endl;
            cout<<"Rating :"<<rating<<endl;
            cout<<"Word Count :"<<words<<endl;

        }
};

int main(){
    string title;
    float rating;
    int words, vlen;
    title = "C++ Tutorial";
    rating = 4.5;
    vlen = 14;
    words = 50;
    cwhvideo video(title, rating, vlen);
    // video.display();
    cwhtext text(title,rating, words);
    // text.display();

    cwh* tut[2];
    tut[0] = &video;
    tut[1] = &text;
    tut[0]->display();
    tut[1]->display();

    return 0;
}


