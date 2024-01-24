#include <iostream>
using namespace std;
//compile time polymorphism------------------------------------------

//function overloading---------------------------------------
class A{
    public:
    void sayHello(){
        cout << "ello eren" <<endl;
    }

    // int sayHello(){
    //     cout << "ello eren" <<endl;
    // }

    void sayHello(string name){
        cout << "ello " <<name<<endl;
    }
};


//operator overloading--------------------------------------------

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator + (B &obj){//basically ye func hai ki + likhke minus kese kre
        int value1 = this->a;
        int value2 = obj.a;

        cout<< "output " <<value2-value1<<endl;
    } 

    void operator()(){
        cout<<"main bracket hu "<<this->a<<endl;
    }
};

//runtime polymorphism--------------------------------------------------

//method overriding------------------------------------------------

class Animal{
    public:
    void speak(){
        cout <<"animal speaking"<< endl ;
    }
};

class Cat : public Animal{
    public:
    void speak(){
        cout <<"cat meowing"<< endl ;
    }
};

int main()
{

    A obj;
    obj.sayHello();
    cout<<"---------------------------------------"<<endl;
    B obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1+obj2;//plus use kra to vo operator func call pe gya syntax ki vjh se
    obj1();
    cout<<"---------------------------------------"<<endl;
    Cat ct;
    ct.speak();0

}