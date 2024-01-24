#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Human{
    public:
    string color;

    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Narpashu : public Animal, public Human{

};

int main()
{   
    Narpashu  n;
    n.speak();
    n.bark();
    cout<<n.age<<endl;
}