#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Animal{
    public:
    int smell = 9;
};

class Labrador : public Dog{

};
int main()
{   
    Dog d;
    d.speak();
    cout<<d.age<<endl;

    Labrador l;
    cout<<l.weight<<endl;
    cout<<l.smell<<endl;
    
}