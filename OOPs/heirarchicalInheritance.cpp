#include <iostream>
using namespace std;

class LivingBeings{
    public:
    int age;
    int weight;

    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Human : public LivingBeings{
    public:
    string color;

    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Animal : public LivingBeings {

};

int main()
{   
    Human h1;
    h1.bark();

    Animal a1;
    a1.bark();
}