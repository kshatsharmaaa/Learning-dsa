#include <iostream>
#include "string.h"
// #include "hero.cpp"
using namespace std;

class Hero
{

    // properties
private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;
    // default constructor
    Hero()
    {
        cout << "manual default Constructor called" << endl;
        name = new char[100];//dynamically
    }

    //parameterised constructor
    Hero(int health, char level){
        health = health;//khudme value dalna
        cout <<"this -> "<<this<<endl;
        this -> health = health;//sasuske health value ko input health value me dalna
        this -> level = level;
    }

    //copy constructor

    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout<<endl<<"Copy Constructor Called"<<endl;

        this->health = temp.health;
        this->level = temp.level;
    }

    // getter/setter

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(int ch)
    {
        level = ch;
    }

    void print(){
        cout <<endl;
        cout << "[ health : "<<this->health<<",";
        cout << " level : "<<this->level<<",";
        cout << " name : "<<this->name<<" ]";
        cout<<endl;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    //destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }

    //static func
    static int random(){
        return timeToComplete;
    }
};

int Hero::timeToComplete=5;

int main()
{

    //---------------------------------------------------------------------------------
    // Hero ramesh; //creation of hero class's object

    // cout <<"size : "<< sizeof(ramesh) <<endl;
    // cout <<"level : "<<ramesh.level <<endl;
    // // cout <<"health : "<<ramesh.health <<endl; //normal way of accessing private variable --->error
    // cout << "Ramesh health is " <<ramesh.getHealth() <<endl; //accessing private var using getter / setter
    // ramesh.setHealth(70);//setter
    // cout << "Ramesh health is " <<ramesh.getHealth() <<endl;

    //-----------------------------------------------------------------------------------

    /*
    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('A');
    cout << "level : "<<a.level<<endl;
    cout << "health : "<<a.getHealth()<<endl;
    //dynamically
    Hero *b = new Hero;
    cout << "level : "<<(*b).level<<endl;
    cout << "health : "<<(*b).getHealth()<<endl;

    b->setHealth(60);
    b->setLevel('B');
    cout << "level : "<<b->level<<endl;
    cout << "health : "<<b->getHealth()<<endl;
    */

    //-----------------------------------------------------------------------------------------

    //for default and parameterised constructor
    // object created statically
    //cout << "HI" << endl;
    // Hero sasuke(10);
    // cout<<"Address of sasuke : "<<&sasuke <<endl;

    // sasuke.getHealth();
    

    // //dynamically
    // Hero *h = new Hero;

    //---------------------------------------------------------------------------------------------


    //copy constructor
    // Hero suresh(70,'C');
    // // suresh.setHealth(70);//direct bracket m bhi dalskte h
    // // suresh.setLevel('C');
    // suresh.print();
    
    // Hero ritesh(suresh);//this type of statement calls copy constructor
    // //this means
    // // ritesh.health = suresh.health;
    // // ritesh.level= suresh.level;
    // ritesh.print();

    //--------------------------------------------------------------------------------------------------

    //shallow and deep copy

    /*
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('d');
    char name[7] = "Babbar";
    hero1.setName(name);
    // hero1.print();

    //use  default copy constructor
    Hero hero2(hero1);
    // hero2.print();

    hero1.name[0] = 'G';

    hero1.print();
    hero2.print();

    //assignment operator
    hero1 = hero2;

    hero1.print();
    hero2.print();
    */


   //-----------------------------------------------------------------------------------------

//     //destructor
//    //static
//    Hero a;

//    //dynamic
//    Hero *b = new Hero();
//     delete b;//manually destructor call


//--------------------------------------------------------------------------------------------


    //static keyword
    cout<<Hero::timeToComplete<<endl;//no obj created;

    cout<<Hero::random()<<endl;














}