#include <iostream>
using namespace std;

class Human{

    public:
        int height;
        int weight;
        int age;

        int getAge() {
            return this->age;
        }
        int setWeight(int w) {
            this->weight = w;
        }

    
};

class Male : public Human{

    public:
        string color;

        void sleep(){
            cout<< "Male sleeping"<<endl;
        }

};

int main()
{

    Male object1;
    cout << object1.age <<endl;
    cout << object1.height <<endl;
    cout << object1.color <<endl;
    object1.setWeight(55);
    cout << object1.weight <<endl;
    object1.sleep();




    cout<<"sab sahi chal raha hai"<<endl;
}