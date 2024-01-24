#include <iostream>
using namespace std;
class A{
    public:
    void abc(){
        cout<<"class A"<<endl;
    }
};

class B{
    public:
    void abc(){
        cout<<"class B"<<endl;
    }
};
class C : public A, public B {
    public:
    void abc(){
        cout<<"class C"<<endl;
    }
};
int main()
{

    C obj;
    obj.abc();
    obj.A::abc();
    obj.B::abc();
}